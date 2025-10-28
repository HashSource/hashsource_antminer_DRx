int __fastcall sub_12CBC(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r10
  socklen_t v13; // r2
  int v14; // r8
  int v15; // r0
  int *v17; // r0
  const char *v18; // r6
  int *v19; // r5
  unsigned __int16 *v20; // r0
  int v21; // r4
  const char *v22; // r0
  bool v23; // zf
  const char *v24; // r6
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r8
  const char *v28; // r0
  int v29; // r1
  const char *v30; // r0
  const char *v31; // r0
  int v32; // r10
  const char *v33; // r0
  int v34; // r2
  int v35; // r3
  const char *v36; // r10
  const char *v37; // r0
  int v38; // r12
  _BOOL4 v39; // r4
  const char *v40; // r1
  int v41; // r0
  int optval; // [sp+18h] [bp-1Ch] BYREF
  int v43; // [sp+1Ch] [bp-18h] BYREF
  char s[16]; // [sp+20h] [bp-14h] BYREF

  v5 = *a1;
  optval = 1;
  v43 = 0;
  if ( v5 == 10 && !dword_CB864 )
    return -1;
  v9 = socket(v5, 2, 0);
  if ( v9 == -1 )
  {
    v17 = _errno_location();
    if ( *a1 == 10 )
      v18 = "6";
    else
      v18 = (const char *)&unk_665CC;
    v19 = v17;
    v20 = a1;
    v21 = *v19;
    v22 = (const char *)sub_50CD0(v20);
    sub_4FE78(3, "socket(AF_INET%s, SOCK_DGRAM, 0) failed on address %s: %m", v18, v22);
    v23 = v21 == 93;
    if ( v21 != 93 )
      v23 = v21 == 97;
    if ( !v23 && v21 != 96 )
    {
      *v19 = v21;
      sub_4FE78(
        3,
        "unexpected socket() error %m code %d (not EPROTONOSUPPORT nor EAFNOSUPPORT nor EPFNOSUPPORT) - exiting",
        v21);
      exit(1);
    }
    return -1;
  }
  v10 = sub_115D4(v9);
  v11 = v10;
  if ( !a3 )
  {
    if ( !setsockopt(v10, 1, 2, &optval, 4u) )
      goto LABEL_5;
    v24 = "on";
LABEL_32:
    v25 = (const char *)sub_50CD0(a1);
    sub_4FE78(3, "setsockopt SO_REUSEADDR %s fails for address %s: %m", v24, v25);
    close(v11);
    return -1;
  }
  if ( setsockopt(v10, 1, 2, &v43, 4u) )
  {
    v24 = "off";
    goto LABEL_32;
  }
LABEL_5:
  v12 = *a1;
  if ( v12 == 2 )
  {
    if ( setsockopt(v11, 0, 1, &dword_794FC, 4u) )
    {
      v32 = dword_794FC;
      v33 = (const char *)sub_50CD0(a1);
      sub_4FE78(3, "setsockopt IP_TOS (%02x) fails on address %s: %m", v32, v33);
    }
    if ( a2 )
      sub_112C0(a4, v11, a1);
    v12 = *a1;
  }
  if ( v12 == 10 )
  {
    if ( !sub_55F6C() && setsockopt(v11, 41, 26, &optval, 4u) )
    {
      v31 = (const char *)sub_50CD0(a1);
      sub_4FE78(3, "setsockopt IPV6_V6ONLY on fails on address %s: %m", v31);
    }
    v12 = *a1;
  }
  if ( !sub_11174(a1) )
  {
    sub_11384(v12, 1);
    v12 = *a1;
  }
  if ( v12 == 2 )
    v13 = 16;
  else
    v13 = 28;
  v14 = bind(v11, (const struct sockaddr *)a1, v13);
  if ( !sub_11174(a1) )
    sub_11384(*a1, 0);
  if ( v14 >= 0 )
  {
    if ( setsockopt(v11, 1, 29, &optval, 4u) )
    {
      v26 = (const char *)sub_50CD0(a1);
      sub_4FE78(7, "setsockopt SO_TIMESTAMP on fails on address %s: %m", v26);
    }
    else
    {
      if ( dword_7CF4C <= 3 )
      {
LABEL_17:
        sub_12C84(v11);
        sub_12224(v11, 0);
        if ( dword_7CF4C > 3 )
        {
          v15 = fcntl(v11, 3, 0);
          printf("flags for fd %d: 0x%x\n", v11, v15);
        }
        return v11;
      }
      v30 = (const char *)sub_50CD0(a1);
      printf("setsockopt SO_TIMESTAMP enabled on fd %d address %s\n", v11, v30);
    }
    if ( dword_7CF4C > 3 )
    {
      if ( *a1 == 10 )
        v27 = "6";
      else
        v27 = (const char *)&unk_665CC;
      v28 = (const char *)sub_50CD0(a1);
      if ( *a1 == 2 )
        v29 = 0;
      else
        v29 = *((_DWORD *)a1 + 6);
      printf(
        "bind(%d) AF_INET%s, addr %s%%%d#%d, flags 0x%x\n",
        v11,
        v27,
        v28,
        v29,
        (unsigned __int16)(a1[1] << 8) | HIBYTE(a1[1]),
        *(_DWORD *)(a4 + 140));
    }
    goto LABEL_17;
  }
  if ( !a3 || dword_7CF4C > 1 )
  {
    v34 = *a1;
    if ( v34 == 2 || (v35 = *((_DWORD *)a1 + 6)) == 0 )
    {
      s[0] = 0;
    }
    else
    {
      snprintf(s, 0x10u, "%%%d", v35);
      v34 = *a1;
    }
    v36 = (const char *)&unk_665CC;
    if ( v34 == 10 )
      v36 = "6";
    v37 = (const char *)sub_50CD0(a1);
    v38 = (unsigned __int16)((a1[1] << 8) | HIBYTE(a1[1]));
    if ( *a1 == 2 )
      v39 = (bswap32(*((_DWORD *)a1 + 1)) & 0xF0000000) == -536870912;
    else
      v39 = *((unsigned __int8 *)a1 + 8) == 255;
    v40 = (const char *)&unk_665CC;
    if ( v39 )
      v40 = " (multicast)";
    sub_4FE78(
      3,
      "bind(%d) AF_INET%s %s%s#%d%s flags 0x%x failed: %m",
      v11,
      v36,
      v37,
      s,
      v38,
      v40,
      *(_DWORD *)(a4 + 140));
  }
  v41 = v11;
  v11 = -1;
  close(v41);
  return v11;
}
