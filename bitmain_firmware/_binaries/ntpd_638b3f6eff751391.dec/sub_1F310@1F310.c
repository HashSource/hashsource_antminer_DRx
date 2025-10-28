void __noreturn sub_1F310()
{
  __suseconds_t *p_tv_usec; // r12
  const char **v1; // r5
  char *v2; // r2
  int v3; // r3
  bool v4; // zf
  char *v5; // r2
  int v6; // t1
  bool v7; // zf
  bool v8; // zf
  int v9; // r3
  bool v10; // zf
  char *v11; // r1
  int v12; // t1
  bool v13; // zf
  bool v14; // zf
  char v15; // r3
  int i; // r4
  const char *v17; // r6
  const char *v18; // t1
  const char *v19; // r11
  int v20; // r5
  char v21; // r9
  char v22; // r8
  int v23; // r4
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int *v27; // r2
  char *v28; // r0
  int v29; // r4
  int v30; // r0
  __time_t v31; // r8
  char *v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r0
  char *v36; // r0
  int v37; // [sp+34h] [bp-290h]
  int v38; // [sp+38h] [bp-28Ch]
  char v39; // [sp+3Ch] [bp-288h]
  char v40; // [sp+40h] [bp-284h]
  char v41; // [sp+44h] [bp-280h]
  int v42; // [sp+48h] [bp-27Ch]
  char *src; // [sp+4Ch] [bp-278h]
  const char *v44; // [sp+50h] [bp-274h]
  FILE *stream; // [sp+54h] [bp-270h]
  int buf; // [sp+5Ch] [bp-268h] BYREF
  struct timeval timeout; // [sp+60h] [bp-264h] BYREF
  const char *v48; // [sp+68h] [bp-25Ch] BYREF
  const char *v49[2]; // [sp+90h] [bp-234h] BYREF
  int v50; // [sp+98h] [bp-22Ch]
  int v51; // [sp+9Ch] [bp-228h]
  int v52; // [sp+A0h] [bp-224h]
  int v53; // [sp+A4h] [bp-220h]
  int v54; // [sp+A8h] [bp-21Ch]
  int v55; // [sp+ACh] [bp-218h]
  int v56; // [sp+B0h] [bp-214h]
  int v57; // [sp+B4h] [bp-210h]
  int v58; // [sp+B8h] [bp-20Ch]
  char v59; // [sp+BCh] [bp-208h] BYREF
  _DWORD s[129]; // [sp+C0h] [bp-204h] BYREF

  if ( dword_7CF4C > 1 )
    sub_4FE78(6, "NTP_INTRES running");
  if ( dword_CB46C && !sub_4E030(dword_CAB88) )
  {
    sub_4FE78(3, "invalid request keyid %08x", dword_CAB88);
    exit(1);
  }
  stream = fopen((const char *)dword_CAB7C, "r");
  if ( !stream )
  {
    sub_4FE78(3, "can't open configuration file %s: %m", (const char *)dword_CAB7C);
    exit(1);
  }
  v44 = (const char *)dword_CAB7C;
LABEL_7:
  if ( !fgets((char *)s, 512, stream) )
  {
    fclose(stream);
    if ( !dword_7CF4C && unlink((const char *)dword_CAB7C) )
      sub_4FE78(4, "unable to remove intres request file %s, %m", (const char *)dword_CAB7C);
    v29 = 0;
    dword_7D3C4 = 0;
    dword_7D3C8 = 2;
    dword_7D3CC = 2;
    while ( 1 )
    {
      sub_1E584();
      if ( v29 )
      {
        if ( !dword_7D3CC )
        {
          sub_1ED5C(0);
          dword_7D3CC = 2;
          if ( dword_7CF4C > 2 )
            sub_4FE78(6, "config_timer: 0->%d", 2);
        }
      }
      else
      {
        sleep(2u);
        sub_1ED5C(1);
        dword_7D3C4 = dword_7D3C8;
        if ( dword_7CF4C > 2 )
          sub_4FE78(6, "resolve_timer: 0->%d", dword_7D3C8);
        dword_7D3CC = 2;
        if ( dword_7D3C8 <= 31 )
          dword_7D3C8 *= 2;
      }
      v30 = dword_7D3BC;
      if ( !dword_7D3BC )
        break;
      v31 = 30;
      while ( 1 )
      {
        v32 = &v59;
        timeout.tv_sec = v31;
        timeout.tv_usec = 0;
        do
        {
          *((_DWORD *)v32 + 1) = 0;
          v32 += 4;
        }
        while ( v32 != (char *)&s[31] );
        v33 = dword_C9C98 + 1;
        s[dword_C9C98 / 32] |= 1 << (dword_C9C98 % 32);
        v34 = select(v33, (fd_set *)s, 0, 0, &timeout);
        buf = v34;
        if ( !v34 )
          goto LABEL_76;
        if ( v34 > 0 )
          break;
        v35 = *_errno_location();
        if ( v35 != 4 )
        {
          v36 = strerror(v35);
          sub_4FE78(3, "ntp_intres: Error from select: %s", v36);
          v30 = 1;
          goto LABEL_82;
        }
        if ( !--v31 )
          goto LABEL_76;
      }
      read(dword_C9C98, &buf, 4u);
      dword_7D3C4 = 0;
LABEL_76:
      v29 = dword_7D3C4;
      if ( dword_7D3CC > 0 )
        --dword_7D3CC;
      if ( dword_7D3C4 > 0 )
        v29 = --dword_7D3C4;
    }
LABEL_82:
    exit(v30);
  }
  p_tv_usec = &timeout.tv_usec;
  v1 = &v48;
  v2 = (char *)s;
  while ( 1 )
  {
    v3 = (unsigned __int8)*v2;
    v4 = v3 == 9;
    if ( v3 != 9 )
      v4 = v3 == 32;
    if ( v4 )
    {
      v5 = v2 + 1;
      do
      {
        v28 = v5;
        v6 = (unsigned __int8)*v5++;
        v3 = v6;
        v7 = v6 == 32;
        if ( v6 != 32 )
          v7 = v3 == 9;
      }
      while ( v7 );
    }
    else
    {
      v28 = v2;
    }
    v8 = v3 == 10;
    if ( v3 != 10 )
      v8 = v3 == 0;
    if ( v8 )
    {
      sub_4FE78(3, "tokenizing error in file `%s', quitting", v44);
      exit(1);
    }
    v9 = (unsigned __int8)v28[1];
    v2 = v28 + 1;
    v10 = v9 == 32;
    if ( v9 != 32 )
      v10 = v9 == 9;
    if ( !v10 )
    {
      if ( v9 == 10 || !v28[1] )
        goto LABEL_61;
      v11 = v28 + 2;
      while ( 1 )
      {
        v2 = v11;
        v12 = (unsigned __int8)*v11++;
        v9 = v12;
        v13 = v12 == 9;
        if ( v12 != 9 )
          v13 = v9 == 32;
        if ( v13 )
          break;
        if ( v9 == 10 || !v9 )
          goto LABEL_61;
      }
    }
    v14 = v9 == 10;
    if ( v9 != 10 )
      v14 = v9 == 0;
    v15 = v14;
    if ( v14 )
    {
LABEL_61:
      *v2 = 0;
      goto LABEL_40;
    }
    *v2++ = v15;
LABEL_40:
    p_tv_usec[1] = (__suseconds_t)v28;
    if ( ++p_tv_usec == (__suseconds_t *)v49 )
    {
      for ( i = 1; i != 10; ++i )
      {
        v18 = v1[1];
        ++v1;
        v17 = v18;
        if ( !sub_4D1C0(v18, &v49[i + 1], v2) )
        {
          sub_4FE78(3, "format error for integer token `%s', file `%s', quitting", v17, v44);
          exit(1);
        }
      }
      v19 = v48;
      v37 = v50;
      if ( (v56 & 0x20) != 0 )
        v20 = 2;
      else
        v20 = 0;
      if ( (v56 & 0x200) != 0 )
        v20 |= 0x10u;
      v38 = v51;
      if ( (v56 & 0x40) != 0 )
        v20 |= 4u;
      if ( (v56 & 0x100) != 0 )
        v20 |= 8u;
      v21 = v52;
      v39 = v54;
      v22 = v53;
      v40 = v55;
      v41 = v57;
      v42 = v58;
      src = (char *)v49[0];
      if ( dword_7CF4C > 1 )
        sub_4FE78(
          6,
          "intres: <%s> %d %d %d %d %d %d %x %d %x %s",
          v48,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v20,
          v57,
          v58,
          v49[0]);
      v23 = sub_4F524(212);
      *(_DWORD *)(v23 + 4) = sub_4F4E8(v19);
      *(_DWORD *)(v23 + 8) = 0;
      v24 = unk_7CDD4;
      v25 = unk_7CDD8;
      v26 = unk_7CDDC;
      *(_DWORD *)(v23 + 160) = in6addr_any;
      *(_DWORD *)(v23 + 164) = v24;
      *(_DWORD *)(v23 + 168) = v25;
      *(_DWORD *)(v23 + 172) = v26;
      memset((void *)(v23 + 184), 0, 0x1Cu);
      *(_BYTE *)(v23 + 12) = v21;
      *(_BYTE *)(v23 + 14) = v39;
      *(_BYTE *)(v23 + 15) = v40;
      *(_BYTE *)(v23 + 13) = v22;
      *(_DWORD *)(v23 + 176) = v37;
      *(_DWORD *)(v23 + 180) = v38;
      *(_BYTE *)(v23 + 17) = v41;
      *(_BYTE *)(v23 + 16) = v20;
      *(_DWORD *)(v23 + 20) = v42;
      strncpy((char *)(v23 + 24), src, 0x7Fu);
      *(_BYTE *)(v23 + 151) = 0;
      *(_DWORD *)v23 = 0;
      v27 = (int *)dword_7D3BC;
      if ( dword_7D3BC )
      {
        while ( *v27 )
          v27 = (int *)*v27;
        *v27 = v23;
      }
      else
      {
        dword_7D3BC = v23;
      }
      goto LABEL_7;
    }
  }
}
