int __fastcall sub_13E90(const struct sockaddr *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  socklen_t v8; // r2
  bool v9; // zf
  int v10; // r0
  int v11; // r8
  int v12; // r0
  int v13; // r4
  int v14; // r4
  int v15; // r7
  int sa_family; // r12
  _BOOL4 v17; // r10
  int v18; // r3
  int v19; // r9
  int v20; // r2
  int *v21; // r0
  struct sockaddr *p_s2; // r1
  unsigned int v23; // r8
  unsigned int v24; // r5
  char v25; // r9
  const char *v26; // r4
  const char *v27; // r0
  const char *v29; // r0
  const char *v30; // r4
  const char *v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r2
  unsigned int v34; // r3
  _DWORD *v35; // r2
  int *v36; // r3
  unsigned int v37; // r0
  unsigned int v38; // t1
  unsigned int v39; // t1
  bool v40; // cc
  const char *v41; // r0
  int v42; // [sp+8h] [bp-6Ch]
  unsigned int v43; // [sp+Ch] [bp-68h]
  socklen_t len; // [sp+14h] [bp-60h] BYREF
  int v45; // [sp+18h] [bp-5Ch] BYREF
  struct sockaddr s2; // [sp+1Ch] [bp-58h] BYREF
  int v47; // [sp+38h] [bp-3Ch] BYREF
  unsigned int v48; // [sp+3Ch] [bp-38h]
  int v49; // [sp+40h] [bp-34h] BYREF
  int v50; // [sp+44h] [bp-30h]
  int v51; // [sp+48h] [bp-2Ch]
  int v52; // [sp+4Ch] [bp-28h] BYREF
  int v53; // [sp+50h] [bp-24h]
  int v54; // [sp+54h] [bp-20h]
  unsigned int v55; // [sp+58h] [bp-1Ch]
  _DWORD v56[5]; // [sp+5Ch] [bp-18h] BYREF

  if ( dword_7CF4C > 3 )
  {
    v29 = (const char *)sub_50CD0(a1);
    printf("Finding interface for addr %s in list of addresses\n", v29);
  }
  v6 = socket(a1->sa_family, 2, 0);
  v7 = v6;
  if ( v6 == -1 )
    return 0;
  if ( a3 )
  {
    v45 = 1;
    setsockopt(v6, 1, 6, &v45, 4u);
  }
  if ( a1->sa_family == 2 )
    v8 = 16;
  else
    v8 = 28;
  v9 = connect(v7, a1, v8) == -1;
  v10 = v7;
  if ( v9 )
  {
    v13 = 0;
    close(v10);
    return v13;
  }
  len = 28;
  v11 = getsockname(v7, &s2, &len);
  close(v7);
  if ( v11 == -1 )
    return 0;
  if ( dword_7CF4C > 3 )
  {
    v30 = (const char *)sub_50CD0(a1);
    v31 = (const char *)sub_50CD0(&s2);
    printf("findlocalinterface: kernel maps %s to %s\n", v30, v31);
  }
  v12 = sub_11458((char *)&s2);
  v13 = v12;
  if ( !v12 || (a2 & *(_DWORD *)(v12 + 140)) != 0 || *(_DWORD *)(v12 + 176) )
  {
    v14 = dword_CA654;
    if ( !dword_CA654 )
      goto LABEL_58;
    v15 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v14 + 176) )
        goto LABEL_19;
      sa_family = s2.sa_family;
      if ( *(unsigned __int16 *)(v14 + 136) != s2.sa_family || (*(_DWORD *)(v14 + 140) & 0x84) != 0 )
        goto LABEL_19;
      if ( *(unsigned __int16 *)(v14 + 20) != s2.sa_family )
        off_7C9FC("ntp_io.c", 3838, 0, "((a1)->sa.sa_family) == ((a2)->sa.sa_family)");
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v47 = s2.sa_family;
      if ( s2.sa_family != 2 )
      {
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = v14 + 20;
        v21 = &v47;
        p_s2 = &s2;
        while ( !v19 )
        {
          v23 = *(unsigned __int8 *)(v14 + v18 + 28);
          v24 = (unsigned __int8)p_s2->sa_data[6];
          if ( v24 != v23 )
          {
            v17 = v24 > v23;
            v25 = v24 - v23;
            if ( v24 <= v23 )
              goto LABEL_34;
LABEL_30:
            v17 = 1;
            *((_BYTE *)v21 + 8) = v25;
            v19 = 1;
            goto LABEL_31;
          }
          *((_BYTE *)v21 + 8) = 0;
LABEL_31:
          ++v18;
          v21 = (int *)((char *)v21 + 1);
          ++v20;
          p_s2 = (struct sockaddr *)((char *)p_s2 + 1);
          if ( v18 == 16 )
            goto LABEL_46;
        }
        LOBYTE(v23) = *(_BYTE *)(v20 + 8);
        LOBYTE(v24) = p_s2->sa_data[6];
        v25 = v24 - v23;
        if ( !v17 )
        {
LABEL_34:
          v19 = 1;
          *((_BYTE *)v21 + 8) = v23 - v24;
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v32 = bswap32(*(unsigned int *)&s2.sa_data[2]);
      v33 = bswap32(*(_DWORD *)(v14 + 24));
      if ( v32 <= v33 )
        v34 = v33 - v32;
      else
        v34 = v32 - v33;
      v48 = bswap32(v34);
LABEL_46:
      if ( !v15 )
        goto LABEL_61;
      if ( sa_family != v42 )
        off_7C9FC("ntp_io.c", 3889, 0, "((d1)->sa.sa_family) == ((d2)->sa.sa_family)");
      if ( sa_family != 2 )
        break;
      if ( bswap32(v48) >= bswap32(v43) )
        goto LABEL_19;
      v42 = 2;
      v43 = v48;
LABEL_62:
      v15 = v14;
      v54 = v47;
      v55 = v48;
      v56[0] = v49;
      v56[1] = v50;
      v56[2] = v51;
      v56[3] = v52;
      v56[4] = v53;
LABEL_19:
      v14 = *(_DWORD *)v14;
      if ( !v14 )
      {
        if ( v15 )
        {
          if ( dword_7CF4C > 3 )
          {
            v26 = (const char *)sub_50CD0(&s2);
            v27 = (const char *)sub_50CD0(v15 + 20);
            printf("findclosestinterface(%s) -> %s\n", v26, v27);
          }
          if ( *(_DWORD *)(v15 + 176) )
            return 0;
          else
            return v15;
        }
LABEL_58:
        if ( dword_7CF4C > 3 )
        {
          v41 = (const char *)sub_50CD0(&s2);
          printf("findclosestinterface(%s) failed\n", v41);
        }
        return 0;
      }
    }
    if ( LOBYTE(v56[0]) <= (unsigned int)(unsigned __int8)v49 )
    {
      if ( LOBYTE(v56[0]) < (unsigned int)(unsigned __int8)v49 )
        goto LABEL_19;
      v35 = v56;
      v36 = &v49;
      while ( 1 )
      {
        v38 = *((unsigned __int8 *)v36 + 1);
        v36 = (int *)((char *)v36 + 1);
        v37 = v38;
        v39 = *((unsigned __int8 *)v35 + 1);
        v35 = (_DWORD *)((char *)v35 + 1);
        v40 = v37 > v39;
        if ( v37 < v39 )
          break;
        if ( v40 || v36 == (int *)((char *)&v52 + 3) )
          goto LABEL_19;
      }
      v42 = sa_family;
      v43 = v48;
      goto LABEL_62;
    }
LABEL_61:
    v42 = sa_family;
    v43 = v48;
    goto LABEL_62;
  }
  return v13;
}
