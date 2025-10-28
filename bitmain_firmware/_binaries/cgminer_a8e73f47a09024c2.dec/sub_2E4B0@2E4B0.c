int __fastcall sub_2E4B0(int a1, _DWORD *a2)
{
  int v4; // r6
  char *v5; // r10
  _BOOL4 v6; // r6
  char *v7; // r9
  unsigned int v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r8
  unsigned int v12; // r5
  _BOOL4 v13; // r3
  bool v14; // zf
  bool v15; // zf
  bool v16; // zf
  int v17; // r2
  double v18; // d16
  size_t v19; // r3
  int v20; // r5
  int v21; // r5
  unsigned int v22; // r7
  int v23; // r9
  unsigned __int8 *v24; // r5
  int v25; // r10
  const char *v26; // r8
  size_t v27; // r5
  const char *v28; // r7
  const char *v29; // r2
  size_t v30; // r0
  _BYTE *v31; // r0
  void *v32; // r5
  _BYTE *v33; // r0
  void *v34; // r6
  void *v35; // r0
  const char *v36; // r3
  char *v37; // r5
  char *v38; // r6
  _BOOL4 v39; // r7
  bool v40; // zf
  size_t v41; // r0
  size_t v42; // r0
  int *v43; // r0
  void *v44; // r0
  int v45; // r0
  char v46[264]; // [sp+18h] [bp-984h] BYREF
  char *v47; // [sp+120h] [bp-87Ch]
  char *v48; // [sp+124h] [bp-878h]
  _BOOL4 v49; // [sp+128h] [bp-874h]
  int v50; // [sp+12Ch] [bp-870h]
  size_t n; // [sp+130h] [bp-86Ch]
  _BOOL4 v52; // [sp+134h] [bp-868h]
  size_t nmemb; // [sp+138h] [bp-864h]
  int v54; // [sp+13Ch] [bp-860h]
  void *v55; // [sp+140h] [bp-85Ch]
  void *v56; // [sp+144h] [bp-858h]
  size_t v57; // [sp+148h] [bp-854h]
  void *ptr; // [sp+14Ch] [bp-850h]
  char *v59; // [sp+150h] [bp-84Ch]
  char *s; // [sp+154h] [bp-848h]
  unsigned int v61[8]; // [sp+158h] [bp-844h] BYREF
  char v62[2052]; // [sp+178h] [bp-824h] BYREF

  v4 = sub_5BE8C(a2);
  *(_BYTE *)(a1 + 108) = sub_5BE8C(a2) == 4;
  v5 = sub_2CB58(a2, 0);
  if ( !*(_BYTE *)(a1 + 108) )
  {
    v6 = v4 == 10;
    v7 = sub_2CB58(a2, 1u);
    if ( v6 )
    {
      ptr = sub_2CB58(a2, 2u);
      v8 = 3;
    }
    else
    {
      v8 = 2;
    }
    s = sub_2CB58(a2, v8);
    v59 = sub_2CB58(a2, v8 + 1);
    v9 = (_DWORD *)sub_5BEB8(a2, v8 + 2);
    v10 = v9;
    if ( !v9 )
      return 0;
    if ( *v9 != 1 )
      return 0;
    v54 = sub_5BE8C(v9);
    v57 = (size_t)sub_2CB58(a2, v8 + 3);
    v56 = sub_2CB58(a2, v8 + 4);
    v55 = sub_2CB58(a2, v8 + 5);
    v12 = v8 + 6;
    if ( sub_5BEB8(a2, v12) )
      v13 = *(_DWORD *)sub_5BEB8(a2, v12) == 5;
    else
      v13 = 0;
    v14 = v5 == 0;
    if ( v5 )
      v14 = v7 == 0;
    if ( v14 )
      goto LABEL_26;
    v15 = s == 0;
    if ( s )
      v15 = v59 == 0;
    if ( v15 )
      goto LABEL_26;
    v16 = v57 == 0;
    if ( v57 )
      v16 = v56 == 0;
    if ( v16 || !v55 || (!ptr ? (v17 = v6) : (v17 = 0), v17) )
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
      if ( v59 )
        free(v59);
      if ( v57 )
        free((void *)v57);
      if ( v56 )
        free(v56);
      if ( v55 )
        free(v55);
      return 0;
    }
    v52 = v13;
    v50 = a1 + 220;
    sub_2C1F4((pthread_mutex_t *)(a1 + 220), "util.c", "parse_notify_sia", 2424);
    sub_2CB78((pthread_rwlock_t *)(a1 + 244), "util.c", "parse_notify_sia", 2424);
    free(*(void **)(a1 + 664));
    free(*(void **)(a1 + 668));
    free(*(void **)(a1 + 676));
    free(*(void **)(a1 + 680));
    free(*(void **)(a1 + 684));
    *(_DWORD *)(a1 + 664) = v5;
    *(_DWORD *)(a1 + 668) = v7;
    nmemb = strlen(s) >> 1;
    n = strlen(v59) >> 1;
    *(_DWORD *)(a1 + 676) = v57;
    *(_DWORD *)(a1 + 680) = v56;
    *(_DWORD *)(a1 + 684) = v55;
    *(_BYTE *)(a1 + 688) = v52;
    v18 = *(double *)(a1 + 1872);
    if ( v18 > 0.0 )
      *(double *)(a1 + 704) = v18;
    v19 = nmemb + *(_DWORD *)(a1 + 1580);
    v57 = n + *(_DWORD *)(a1 + 632) + v19;
    *(_DWORD *)(a1 + 692) = v57;
    *(_DWORD *)(a1 + 1592) = v19;
    if ( *(int *)(a1 + 700) > 0 )
    {
      v20 = 0;
      do
        free(*(void **)(*(_DWORD *)(a1 + 672) + 4 * v20++));
      while ( *(_DWORD *)(a1 + 700) > v20 );
    }
    v21 = v54;
    if ( v54 )
    {
      *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * v54 + 1);
      if ( v54 > 0 )
      {
        v22 = 0;
        v49 = v6;
        v48 = v5;
        v47 = v7;
        v23 = v21;
        do
        {
          v24 = (unsigned __int8 *)sub_2CB58(v10, v22);
          v25 = *(_DWORD *)(a1 + 672);
          *(_DWORD *)(v25 + 4 * v22) = malloc(0x20u);
          if ( !*(_DWORD *)(*(_DWORD *)(a1 + 672) + 4 * v22) )
          {
            strcpy(v62, "Failed to malloc pool swork merkle_bin");
            sub_3F178(3, v62, 1);
            sub_134A4(1);
          }
          sub_2D164(*(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v22), v24, 32);
          free(v24);
          ++v22;
        }
        while ( v23 != v22 );
        v6 = v49;
        v5 = v48;
        v7 = v47;
      }
    }
    *(_DWORD *)(a1 + 700) = v54;
    if ( v52 )
      *(_QWORD *)(a1 + 624) = 0;
    v26 = *(const char **)(a1 + 676);
    v27 = strlen(v26);
    v28 = *(const char **)(a1 + 668);
    *(_DWORD *)(a1 + 1880) = (int)(strlen(v28) + v27) / 2;
    v29 = (const char *)ptr;
    if ( !v6 )
      v29 = &byte_6DF60;
    snprintf(
      v46,
      0x101u,
      "%s%s%s%s%s%s%s",
      v26,
      v28,
      "0000000000000000000000000000000000000000000000000000000000000000",
      v29,
      *(const char **)(a1 + 684),
      *(const char **)(a1 + 680),
      "00000000");
    v30 = strlen(v46);
    memset(&v46[v30], 48, 256 - v30);
    v46[256] = 0;
    if ( !sub_2D164((_BYTE *)(a1 + 1596), (unsigned __int8 *)v46, 128) )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(v62, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v46);
        sub_3F178(4, v62, 0);
      }
      sub_1A000(a1);
      return 0;
    }
    v31 = calloc(nmemb, 1u);
    v32 = v31;
    if ( !v31 )
    {
      snprintf(v62, 0x800u, "Failed to calloc cb1 in parse_notify in %s %s():%d", "util.c", "parse_notify_sia", 2497);
      sub_3F178(3, v62, 1);
      sub_134A4(1);
    }
    sub_2D164(v31, (unsigned __int8 *)s, nmemb);
    v33 = calloc(n, 1u);
    v34 = v33;
    if ( !v33 )
    {
      snprintf(v62, 0x800u, "Failed to calloc cb2 in parse_notify in %s %s():%d", "util.c", "parse_notify_sia", 2502);
      sub_3F178(3, v62, 1);
      sub_134A4(1);
    }
    sub_2D164(v33, (unsigned __int8 *)v59, n);
    free(*(void **)(a1 + 1584));
    if ( (v57 & 3) != 0 )
      v57 = (v57 & 0xFFFFFFFC) + 4;
    v35 = calloc(v57, 1u);
    *(_DWORD *)(a1 + 1584) = v35;
    if ( !v35 )
    {
      strcpy(v62, "Failed to calloc pool coinbase in parse_notify");
      sub_3F178(3, v62, 1);
      sub_134A4(1);
    }
    memcpy(*(void **)(a1 + 1584), v32, nmemb);
    memcpy((void *)(*(_DWORD *)(a1 + 1584) + nmemb), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
    memcpy((void *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + nmemb), v34, n);
    sub_2CF5C(v50, "util.c", "parse_notify_sia", 2514);
    if ( byte_804B0 )
    {
      if ( (((byte_7FE78 || byte_7CC60 || dword_7A52C > 4)
          && ((snprintf(v62, 0x800u, "job_id: %s", v5), sub_3F178(5, v62, 0), byte_7FE78) || byte_7CC60)
          || dword_7A52C > 4)
         && ((snprintf(v62, 0x800u, "prev_hash: %s", v7), sub_3F178(5, v62, 0), byte_7FE78) || byte_7CC60)
         || dword_7A52C > 4)
        && ((snprintf(v62, 0x800u, "coinbase1: %s", s), sub_3F178(5, v62, 0), byte_7FE78) || byte_7CC60)
        || dword_7A52C > 4 )
      {
        snprintf(v62, 0x800u, "coinbase2: %s", v59);
        sub_3F178(5, v62, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_90;
      }
      if ( dword_7A52C > 4 )
      {
LABEL_90:
        snprintf(v62, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
        sub_3F178(5, v62, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_93;
      }
      if ( dword_7A52C > 4 )
      {
LABEL_93:
        snprintf(v62, 0x800u, "nbit: %s", (const char *)v56);
        sub_3F178(5, v62, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_96;
      }
      if ( dword_7A52C > 4 )
      {
LABEL_96:
        snprintf(v62, 0x800u, "ntime: %s", (const char *)v55);
        sub_3F178(5, v62, 0);
        if ( byte_7FE78 || byte_7CC60 )
          goto LABEL_98;
      }
      if ( dword_7A52C > 4 )
      {
LABEL_98:
        v36 = "yes";
        if ( !v52 )
          v36 = (const char *)&dword_67E50;
        snprintf(v62, 0x800u, "clean: %s", v36);
        sub_3F178(5, v62, 0);
      }
    }
    free(s);
    free(v59);
    free(v32);
    free(v34);
    goto LABEL_144;
  }
  v37 = sub_2CB58(a2, 1u);
  v38 = sub_2CB58(a2, 2u);
  if ( sub_5BEB8(a2, 3) )
    v39 = *(_DWORD *)sub_5BEB8(a2, 3) == 5;
  else
    v39 = 0;
  v40 = v5 == 0;
  if ( v5 )
    v40 = v37 == 0;
  if ( !v40 && v38 )
  {
    if ( strstr(v37, "0x") )
    {
      v41 = strlen(v37);
      snprintf(v37, v41 - 1, "%s", v37 + 2);
    }
    if ( strstr(v38, "0x") )
    {
      v42 = strlen(v38);
      snprintf(v38, v42 - 1, "%s", v38 + 2);
    }
    s = (char *)(a1 + 220);
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
    {
      v43 = _errno_location();
      snprintf(v62, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v43, "util.c", "parse_notify_sia", 2557);
      sub_3F178(3, v62, 1);
      sub_134A4(1);
    }
    sub_2CB78((pthread_rwlock_t *)(a1 + 244), "util.c", "parse_notify_sia", 2557);
    v44 = *(void **)(a1 + 664);
    if ( v44 )
      free(v44);
    *(_DWORD *)(a1 + 664) = v5;
    sub_2D164(v61, (unsigned __int8 *)v38, 32);
    *(_DWORD *)(a1 + 1728) = bswap32(v61[7]);
    *(_DWORD *)(a1 + 1732) = bswap32(v61[6]);
    *(_DWORD *)(a1 + 1736) = bswap32(v61[5]);
    *(_DWORD *)(a1 + 1740) = bswap32(v61[4]);
    *(_DWORD *)(a1 + 1744) = bswap32(v61[3]);
    *(_DWORD *)(a1 + 1748) = bswap32(v61[2]);
    *(_DWORD *)(a1 + 1752) = bswap32(v61[1]);
    *(_DWORD *)(a1 + 1756) = bswap32(v61[0]);
    *(_BYTE *)(a1 + 688) = v39;
    if ( v39 )
      *(_QWORD *)(a1 + 624) = 0;
    sub_2CBE4((pthread_rwlock_t *)(a1 + 244), "util.c", "parse_notify_sia", 2568);
    v45 = sub_2C260((pthread_mutex_t *)s, "util.c", "parse_notify_sia", 2568);
    off_79D40(v45);
    if ( sub_2D164((_BYTE *)(a1 + 1596), (unsigned __int8 *)v37, 80) )
    {
      if ( byte_804B0 )
      {
        if ( ((byte_7FE78 || byte_7CC60 || dword_7A52C > 4)
           && ((snprintf(v62, 0x800u, "job_id: %s", v5), sub_3F178(5, v62, 0), byte_7FE78) || byte_7CC60)
           || dword_7A52C > 4)
          && ((snprintf(v62, 0x800u, "header: %s", v37), sub_3F178(5, v62, 0), byte_7FE78) || byte_7CC60)
          || dword_7A52C > 4 )
        {
          snprintf(v62, 0x800u, "target: %s", v38);
          sub_3F178(5, v62, 0);
        }
      }
      free(v37);
      free(v38);
LABEL_144:
      ++*(_DWORD *)(a1 + 120);
      ++*(_QWORD *)&dbl_807F0;
      if ( a1 == sub_14A18() )
        byte_80A54 = 1;
      return 1;
    }
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      snprintf(v62, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v37);
      sub_3F178(4, v62, 0);
    }
    sub_1A000(a1);
    free(v37);
    free(v38);
    return 0;
  }
  else
  {
    if ( v5 )
      free(v5);
    if ( v37 )
      free(v37);
    if ( v38 )
      free(v38);
    return 0;
  }
}
