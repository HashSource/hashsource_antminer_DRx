int __fastcall sub_2E1C4(int a1, _DWORD *a2)
{
  int v4; // r6
  char *v5; // r10
  _BOOL4 v6; // r6
  char *v7; // r9
  unsigned int v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r8
  unsigned int v12; // r5
  _BOOL4 v13; // r5
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  int v17; // r3
  int *v18; // r0
  double v19; // d16
  size_t v20; // r3
  int v21; // r5
  int v22; // r5
  unsigned int v23; // r7
  int v24; // r9
  unsigned __int8 *v25; // r5
  int v26; // r10
  const char *v27; // r8
  size_t v28; // r5
  const char *v29; // r7
  const char *v30; // r2
  size_t v31; // r0
  _BYTE *v32; // r0
  void *v33; // r7
  _BYTE *v34; // r0
  void *v35; // r8
  void *v36; // r0
  int v37; // r0
  const char *v38; // r3
  char *v39; // r5
  char *v40; // r6
  _BOOL4 v41; // r7
  bool v42; // zf
  size_t v43; // r0
  size_t v44; // r0
  int *v45; // r0
  int *v46; // r0
  void *v47; // r0
  int v48; // r0
  char v49[268]; // [sp+18h] [bp-98Ch] BYREF
  char *v50; // [sp+124h] [bp-880h]
  char *v51; // [sp+128h] [bp-87Ch]
  _BOOL4 v52; // [sp+12Ch] [bp-878h]
  pthread_rwlock_t *v53; // [sp+130h] [bp-874h]
  pthread_mutex_t *v54; // [sp+134h] [bp-870h]
  size_t n; // [sp+138h] [bp-86Ch]
  _BOOL4 v56; // [sp+13Ch] [bp-868h]
  size_t nmemb; // [sp+140h] [bp-864h]
  int v58; // [sp+144h] [bp-860h]
  void *v59; // [sp+148h] [bp-85Ch]
  void *v60; // [sp+14Ch] [bp-858h]
  size_t v61; // [sp+150h] [bp-854h]
  void *ptr; // [sp+154h] [bp-850h]
  char *v63; // [sp+158h] [bp-84Ch]
  char *s; // [sp+15Ch] [bp-848h]
  unsigned int v65[8]; // [sp+160h] [bp-844h] BYREF
  char v66[2052]; // [sp+180h] [bp-824h] BYREF

  v4 = sub_5755C(a2);
  *(_BYTE *)(a1 + 108) = sub_5755C(a2) == 4;
  v5 = sub_2C940(a2, 0);
  if ( !*(_BYTE *)(a1 + 108) )
  {
    v6 = v4 == 10;
    v7 = sub_2C940(a2, 1u);
    if ( v6 )
    {
      ptr = sub_2C940(a2, 2u);
      v8 = 3;
    }
    else
    {
      v8 = 2;
    }
    s = sub_2C940(a2, v8);
    v63 = sub_2C940(a2, v8 + 1);
    v9 = (_DWORD *)sub_57588(a2, v8 + 2);
    v10 = v9;
    if ( !v9 )
      return 0;
    if ( *v9 != 1 )
      return 0;
    v58 = sub_5755C(v9);
    v61 = (size_t)sub_2C940(a2, v8 + 3);
    v60 = sub_2C940(a2, v8 + 4);
    v59 = sub_2C940(a2, v8 + 5);
    v12 = v8 + 6;
    if ( sub_57588(a2, v12) )
      v13 = *(_DWORD *)sub_57588(a2, v12) == 5;
    else
      v13 = 0;
    v14 = v5 == 0;
    if ( v5 )
      v14 = v7 == 0;
    if ( v14 )
      goto LABEL_26;
    v15 = s == 0;
    if ( s )
      v15 = v63 == 0;
    if ( v15 )
      goto LABEL_26;
    v16 = v61 == 0;
    if ( v61 )
      v16 = v60 == 0;
    if ( v16 || !v59 || (!ptr ? (v17 = v6) : (v17 = 0), v17) )
    {
LABEL_26:
      if ( v5 )
        free(v5);
      if ( v7 )
        free(v7);
      if ( ptr )
        free(ptr);
      if ( s )
        free(s);
      if ( v63 )
        free(v63);
      if ( v61 )
        free((void *)v61);
      if ( v60 )
        free(v60);
      if ( v59 )
        free(v59);
      return 0;
    }
    v54 = (pthread_mutex_t *)(a1 + 220);
    sub_2BFDC((pthread_mutex_t *)(a1 + 220), "util.c", "parse_notify_sia", 2390);
    v53 = (pthread_rwlock_t *)(a1 + 244);
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
    {
      v18 = _errno_location();
      snprintf(
        v66,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v18,
        "util.c",
        "parse_notify_sia",
        2390);
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    v56 = v13;
    free(*(void **)(a1 + 664));
    free(*(void **)(a1 + 668));
    free(*(void **)(a1 + 676));
    free(*(void **)(a1 + 680));
    free(*(void **)(a1 + 684));
    *(_DWORD *)(a1 + 664) = v5;
    *(_DWORD *)(a1 + 668) = v7;
    nmemb = strlen(s) >> 1;
    n = strlen(v63) >> 1;
    *(_DWORD *)(a1 + 676) = v61;
    *(_DWORD *)(a1 + 680) = v60;
    *(_DWORD *)(a1 + 684) = v59;
    *(_BYTE *)(a1 + 688) = v56;
    v19 = *(double *)(a1 + 1872);
    if ( v19 > 0.0 )
      *(double *)(a1 + 704) = v19;
    v20 = nmemb + *(_DWORD *)(a1 + 1580);
    v61 = n + *(_DWORD *)(a1 + 632) + v20;
    *(_DWORD *)(a1 + 692) = v61;
    *(_DWORD *)(a1 + 1592) = v20;
    if ( *(int *)(a1 + 700) > 0 )
    {
      v21 = 0;
      do
        free(*(void **)(*(_DWORD *)(a1 + 672) + 4 * v21++));
      while ( *(_DWORD *)(a1 + 700) > v21 );
    }
    v22 = v58;
    if ( v58 )
    {
      *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * v58 + 1);
      if ( v58 > 0 )
      {
        v23 = 0;
        v52 = v6;
        v51 = v5;
        v50 = v7;
        v24 = v22;
        do
        {
          v25 = (unsigned __int8 *)sub_2C940(v10, v23);
          v26 = *(_DWORD *)(a1 + 672);
          *(_DWORD *)(v26 + 4 * v23) = malloc(0x20u);
          if ( !*(_DWORD *)(*(_DWORD *)(a1 + 672) + 4 * v23) )
          {
            strcpy(v66, "Failed to malloc pool swork merkle_bin");
            sub_3F1C0(3, v66, 1);
            sub_132C4(1);
          }
          sub_2CE9C(*(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v23), v25, 32);
          free(v25);
          ++v23;
        }
        while ( v24 != v23 );
        v6 = v52;
        v5 = v51;
        v7 = v50;
      }
    }
    *(_DWORD *)(a1 + 700) = v58;
    if ( v56 )
      *(_QWORD *)(a1 + 624) = 0;
    v27 = *(const char **)(a1 + 676);
    v28 = strlen(v27);
    v29 = *(const char **)(a1 + 668);
    *(_DWORD *)(a1 + 1880) = (int)(strlen(v29) + v28) / 2;
    v30 = (const char *)ptr;
    if ( !v6 )
      v30 = &byte_67C50;
    snprintf(
      v49,
      0x101u,
      "%s%s%s%s%s%s%s",
      v27,
      v29,
      "0000000000000000000000000000000000000000000000000000000000000000",
      v30,
      *(const char **)(a1 + 684),
      *(const char **)(a1 + 680),
      "00000000");
    v31 = strlen(v49);
    memset(&v49[v31], 48, 256 - v31);
    v49[256] = 0;
    if ( !sub_2CE9C((_BYTE *)(a1 + 1596), (unsigned __int8 *)v49, 128) )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        snprintf(v66, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v49);
        sub_3F1C0(4, v66, 0);
      }
      sub_19E20(a1);
      return 0;
    }
    v32 = calloc(nmemb, 1u);
    v33 = v32;
    if ( !v32 )
    {
      snprintf(v66, 0x800u, "Failed to calloc cb1 in parse_notify in %s %s():%d", "util.c", "parse_notify_sia", 2463);
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    sub_2CE9C(v32, (unsigned __int8 *)s, nmemb);
    v34 = calloc(n, 1u);
    v35 = v34;
    if ( !v34 )
    {
      snprintf(v66, 0x800u, "Failed to calloc cb2 in parse_notify in %s %s():%d", "util.c", "parse_notify_sia", 2468);
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    sub_2CE9C(v34, (unsigned __int8 *)v63, n);
    free(*(void **)(a1 + 1584));
    if ( (v61 & 3) != 0 )
      v61 = (v61 & 0xFFFFFFFC) + 4;
    v36 = calloc(v61, 1u);
    *(_DWORD *)(a1 + 1584) = v36;
    if ( !v36 )
    {
      strcpy(v66, "Failed to calloc pool coinbase in parse_notify");
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    memcpy(*(void **)(a1 + 1584), v33, nmemb);
    memcpy((void *)(*(_DWORD *)(a1 + 1584) + nmemb), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
    memcpy((void *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + nmemb), v35, n);
    sub_2C960(v53, "util.c", "parse_notify_sia", 2480);
    v37 = sub_2C048(v54, "util.c", "parse_notify_sia", 2480);
    off_72D00(v37);
    if ( byte_793D0 )
    {
      if ( (((byte_78D98 || byte_75C08 || dword_734EC > 4)
          && ((snprintf(v66, 0x800u, "job_id: %s", v5), sub_3F1C0(5, v66, 0), byte_78D98) || byte_75C08)
          || dword_734EC > 4)
         && ((snprintf(v66, 0x800u, "prev_hash: %s", v7), sub_3F1C0(5, v66, 0), byte_78D98) || byte_75C08)
         || dword_734EC > 4)
        && ((snprintf(v66, 0x800u, "coinbase1: %s", s), sub_3F1C0(5, v66, 0), byte_78D98) || byte_75C08)
        || dword_734EC > 4 )
      {
        snprintf(v66, 0x800u, "coinbase2: %s", v63);
        sub_3F1C0(5, v66, 0);
        if ( byte_78D98 || byte_75C08 )
          goto LABEL_92;
      }
      if ( dword_734EC > 4 )
      {
LABEL_92:
        snprintf(v66, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
        sub_3F1C0(5, v66, 0);
        if ( byte_78D98 || byte_75C08 )
          goto LABEL_95;
      }
      if ( dword_734EC > 4 )
      {
LABEL_95:
        snprintf(v66, 0x800u, "nbit: %s", (const char *)v60);
        sub_3F1C0(5, v66, 0);
        if ( byte_78D98 || byte_75C08 )
          goto LABEL_98;
      }
      if ( dword_734EC > 4 )
      {
LABEL_98:
        snprintf(v66, 0x800u, "ntime: %s", (const char *)v59);
        sub_3F1C0(5, v66, 0);
        if ( byte_78D98 || byte_75C08 )
          goto LABEL_100;
      }
      if ( dword_734EC > 4 )
      {
LABEL_100:
        v38 = "yes";
        if ( !v56 )
          v38 = (const char *)&dword_634DC;
        snprintf(v66, 0x800u, "clean: %s", v38);
        sub_3F1C0(5, v66, 0);
      }
    }
    free(s);
    free(v63);
    free(v33);
    free(v35);
    goto LABEL_148;
  }
  v39 = sub_2C940(a2, 1u);
  v40 = sub_2C940(a2, 2u);
  if ( sub_57588(a2, 3) )
    v41 = *(_DWORD *)sub_57588(a2, 3) == 5;
  else
    v41 = 0;
  v42 = v5 == 0;
  if ( v5 )
    v42 = v39 == 0;
  if ( !v42 && v40 )
  {
    if ( strstr(v39, "0x") )
    {
      v43 = strlen(v39);
      snprintf(v39, v43 - 1, "%s", v39 + 2);
    }
    if ( strstr(v40, "0x") )
    {
      v44 = strlen(v40);
      snprintf(v40, v44 - 1, "%s", v40 + 2);
    }
    s = (char *)(a1 + 220);
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
    {
      v45 = _errno_location();
      snprintf(v66, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v45, "util.c", "parse_notify_sia", 2523);
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
    {
      v46 = _errno_location();
      snprintf(
        v66,
        0x800u,
        "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v46,
        "util.c",
        "parse_notify_sia",
        2523);
      sub_3F1C0(3, v66, 1);
      sub_132C4(1);
    }
    v47 = *(void **)(a1 + 664);
    if ( v47 )
      free(v47);
    *(_DWORD *)(a1 + 664) = v5;
    sub_2CE9C(v65, (unsigned __int8 *)v40, 32);
    *(_DWORD *)(a1 + 1728) = bswap32(v65[7]);
    *(_DWORD *)(a1 + 1732) = bswap32(v65[6]);
    *(_DWORD *)(a1 + 1736) = bswap32(v65[5]);
    *(_DWORD *)(a1 + 1740) = bswap32(v65[4]);
    *(_DWORD *)(a1 + 1744) = bswap32(v65[3]);
    *(_DWORD *)(a1 + 1748) = bswap32(v65[2]);
    *(_DWORD *)(a1 + 1752) = bswap32(v65[1]);
    *(_DWORD *)(a1 + 1756) = bswap32(v65[0]);
    *(_BYTE *)(a1 + 688) = v41;
    if ( v41 )
      *(_QWORD *)(a1 + 624) = 0;
    sub_2C960((pthread_rwlock_t *)(a1 + 244), "util.c", "parse_notify_sia", 2534);
    v48 = sub_2C048((pthread_mutex_t *)s, "util.c", "parse_notify_sia", 2534);
    off_72D00(v48);
    if ( sub_2CE9C((_BYTE *)(a1 + 1596), (unsigned __int8 *)v39, 80) )
    {
      if ( byte_793D0 )
      {
        if ( ((byte_78D98 || byte_75C08 || dword_734EC > 4)
           && ((snprintf(v66, 0x800u, "job_id: %s", v5), sub_3F1C0(5, v66, 0), byte_78D98) || byte_75C08)
           || dword_734EC > 4)
          && ((snprintf(v66, 0x800u, "header: %s", v39), sub_3F1C0(5, v66, 0), byte_78D98) || byte_75C08)
          || dword_734EC > 4 )
        {
          snprintf(v66, 0x800u, "target: %s", v40);
          sub_3F1C0(5, v66, 0);
        }
      }
      free(v39);
      free(v40);
LABEL_148:
      ++*(_DWORD *)(a1 + 120);
      ++*(_QWORD *)&dbl_79710;
      if ( a1 == sub_14838() )
        byte_79974 = 1;
      return 1;
    }
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(v66, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v39);
      sub_3F1C0(4, v66, 0);
    }
    sub_19E20(a1);
    free(v39);
    free(v40);
    return 0;
  }
  else
  {
    if ( v5 )
      free(v5);
    if ( v39 )
      free(v39);
    if ( v40 )
      free(v40);
    return 0;
  }
}
