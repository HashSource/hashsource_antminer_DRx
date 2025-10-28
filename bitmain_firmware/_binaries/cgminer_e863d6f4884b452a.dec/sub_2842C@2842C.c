int __fastcall sub_2842C(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r4
  char *v8; // r10
  void *v9; // r8
  char *v10; // r9
  _BOOL4 v11; // r6
  bool v12; // zf
  bool v13; // zf
  _BOOL4 v14; // r3
  char *v15; // r0
  size_t v16; // r0
  void *v17; // r2
  double v18; // d7
  int v19; // r2
  int v20; // r1
  size_t v21; // r3
  size_t v22; // r0
  int v23; // r6
  void *v24; // r0
  const char *v25; // r9
  const char *v26; // r11
  size_t v27; // r6
  size_t v28; // r0
  void *v29; // r3
  signed int v30; // r6
  size_t v31; // r4
  size_t v32; // r0
  const char *v33; // r2
  const char *v34; // lr
  size_t v35; // r1
  void *v36; // r0
  size_t v37; // r9
  const char *v38; // r6
  __int64 v39; // kr08_8
  const char *v40; // r3
  void *v41; // r6
  void *v42; // r3
  unsigned int v43; // r6
  void *v44; // r11
  char *v45; // r0
  int v46; // r8
  unsigned __int8 *v47; // r9
  _BYTE *v48; // r0
  int *v49; // r0
  int *v50; // r0
  int *v51; // r0
  const char *v52; // [sp+8h] [bp-10h]
  pthread_rwlock_t *rwlock; // [sp+18h] [bp+0h] BYREF
  pthread_mutex_t *mutex; // [sp+1Ch] [bp+4h]
  size_t v55; // [sp+20h] [bp+8h]
  void *ptr; // [sp+24h] [bp+Ch]
  size_t n; // [sp+28h] [bp+10h]
  size_t nmemb; // [sp+2Ch] [bp+14h]
  _BOOL4 v59; // [sp+30h] [bp+18h]
  void *src; // [sp+34h] [bp+1Ch]
  void *v61; // [sp+38h] [bp+20h]
  void *v62; // [sp+3Ch] [bp+24h]
  char *v63; // [sp+40h] [bp+28h]
  char *s; // [sp+44h] [bp+2Ch]
  char v65[2052]; // [sp+48h] [bp+30h] BYREF

  v4 = (_DWORD *)sub_48048(a2, 4);
  if ( !v4 || (v5 = v4, *v4 != 1) )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      v6 = 0;
      strcpy(v65, "parse notify:arr is null \n");
      sub_343C4(5, v65, 0);
      return v6;
    }
LABEL_8:
    __asm { POP.W           {R4-R11,PC} }
  }
  src = (void *)sub_48034(v4);
  v8 = sub_27E58(a2, 0);
  v9 = sub_27E58(a2, 1u);
  s = sub_27E58(a2, 2u);
  v63 = sub_27E58(a2, 3u);
  v10 = sub_27E58(a2, 5u);
  v62 = sub_27E58(a2, 6u);
  v61 = sub_27E58(a2, 7u);
  if ( sub_48048(a2, 8) )
  {
    v11 = *(_DWORD *)sub_48048(a2, 8) == 5;
    v59 = v11;
  }
  else
  {
    LOBYTE(v11) = 0;
    v59 = 0;
  }
  v12 = v9 == 0;
  if ( v9 )
    v12 = v8 == 0;
  if ( v12 )
  {
    if ( !v8 )
      goto LABEL_74;
    goto LABEL_73;
  }
  v13 = v63 == 0;
  if ( v63 )
    v13 = s == 0;
  if ( v13 )
    goto LABEL_73;
  v14 = v62 == 0;
  if ( !v10 )
    v14 = 1;
  if ( !v61 )
    v14 = 1;
  if ( v14 )
  {
LABEL_73:
    free(v8);
LABEL_74:
    if ( v9 )
      free(v9);
    if ( s )
      free(s);
    if ( v63 )
      free(v63);
    if ( v10 )
      free(v10);
    if ( v62 )
      free(v62);
    if ( v61 )
    {
      v6 = 0;
      free(v61);
      return v6;
    }
    goto LABEL_8;
  }
  mutex = (pthread_mutex_t *)(a1 + 220);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
    sub_28044("parse_notify_decred", 2193);
  rwlock = (pthread_rwlock_t *)(a1 + 244);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v49 = _errno_location();
    snprintf(
      v65,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v49,
      "util.c",
      "parse_notify_decred",
      2193);
    sub_343C4(3, v65, 1);
    sub_26B0C(1);
  }
  free(*(void **)(a1 + 664));
  free(*(void **)(a1 + 668));
  free(*(void **)(a1 + 676));
  free(*(void **)(a1 + 680));
  free(*(void **)(a1 + 684));
  *(_DWORD *)(a1 + 664) = v8;
  v15 = s;
  *(_DWORD *)(a1 + 668) = v9;
  nmemb = strlen(v15) >> 1;
  v16 = strlen(v63);
  v17 = v62;
  *(_DWORD *)(a1 + 676) = v10;
  *(_BYTE *)(a1 + 688) = v11;
  *(_DWORD *)(a1 + 680) = v17;
  n = v16 >> 1;
  *(_DWORD *)(a1 + 684) = v61;
  v18 = *(double *)(a1 + 1872);
  if ( v18 > 0.0 )
    *(double *)(a1 + 704) = v18;
  v19 = *(_DWORD *)(a1 + 632);
  v20 = *(_DWORD *)(a1 + 700);
  v21 = *(_DWORD *)(a1 + 1580) + nmemb;
  v22 = n;
  *(_DWORD *)(a1 + 1592) = v21;
  v55 = v21 + v19 + v22;
  *(_DWORD *)(a1 + 692) = v55;
  if ( v20 > 0 )
  {
    v23 = 0;
    do
    {
      v24 = *(void **)(*(_DWORD *)(a1 + 672) + 4 * v23++);
      free(v24);
    }
    while ( *(_DWORD *)(a1 + 700) > v23 );
  }
  if ( src )
  {
    v41 = src;
    *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * (_DWORD)src + 1);
    v42 = v41;
    if ( (int)v41 > 0 )
    {
      v43 = 0;
      v44 = v42;
      ptr = v9;
      do
      {
        v45 = sub_27E58(v5, v43);
        v46 = *(_DWORD *)(a1 + 672);
        v47 = (unsigned __int8 *)v45;
        *(_DWORD *)(v46 + 4 * v43) = malloc(0x20u);
        v48 = *(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v43);
        if ( !v48 )
        {
          strcpy(v65, "Failed to malloc pool swork merkle_bin");
          sub_343C4(3, v65, 1);
          sub_26B0C(1);
        }
        sub_28324(v48, v47, 32);
        ++v43;
        free(v47);
      }
      while ( v44 != (void *)v43 );
      v9 = ptr;
    }
  }
  *(_DWORD *)(a1 + 700) = src;
  if ( v59 )
    *(_QWORD *)(a1 + 624) = 0;
  v25 = *(const char **)(a1 + 676);
  v26 = *(const char **)(a1 + 668);
  v27 = strlen(v25);
  v28 = strlen(v26);
  v29 = *(void **)(a1 + 684);
  v30 = v27 + v28;
  *(_DWORD *)(a1 + 1880) = v30;
  src = v29;
  v31 = strlen((const char *)v29);
  ptr = *(void **)(a1 + 680);
  v32 = strlen((const char *)ptr);
  v33 = (const char *)ptr;
  v34 = off_6CB38;
  *(_DWORD *)(a1 + 1880) = v30 / 2;
  v35 = ((2 * (v31 + v32 + 136 + v30) + 1) & 0xFFFFFFFC) + 4;
  v52 = (const char *)src;
  *(_DWORD *)(a1 + 696) = v35;
  snprintf(
    (char *)&rwlock,
    v35,
    "%s%s%s%s%s%s%s",
    v25,
    v26,
    "0000000000000000000000000000000000000000000000000000000000000000",
    v52,
    v33,
    "00000000",
    v34);
  v6 = sub_28324((_BYTE *)(a1 + 1596), (unsigned __int8 *)&rwlock, 128);
  if ( v6 )
  {
    src = calloc(nmemb, 1u);
    if ( !src )
    {
      snprintf(v65, 0x800u, "Failed to calloc cb1 in parse_notify in %s %s():%d", "util.c", "parse_notify_decred", 2268);
      sub_343C4(3, v65, 1);
      sub_26B0C(1);
    }
    sub_28324(src, (unsigned __int8 *)s, nmemb);
    ptr = calloc(n, 1u);
    if ( !ptr )
    {
      snprintf(v65, 0x800u, "Failed to calloc cb2 in parse_notify in %s %s():%d", "util.c", "parse_notify_decred", 2273);
      sub_343C4(3, v65, 1);
      sub_26B0C(1);
    }
    sub_28324(ptr, (unsigned __int8 *)v63, n);
    free(*(void **)(a1 + 1584));
    if ( v55 << 30 )
      v55 = (v55 & 0xFFFFFFFC) + 4;
    v36 = calloc(v55, 1u);
    *(_DWORD *)(a1 + 1584) = v36;
    if ( !v36 )
    {
      strcpy(v65, "Failed to calloc pool coinbase in parse_notify");
      sub_343C4(3, v65, 1);
      sub_26B0C(1);
    }
    v37 = nmemb;
    memcpy(v36, src, nmemb);
    memcpy((void *)(*(_DWORD *)(a1 + 1584) + v37), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
    memcpy((void *)(*(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + v37 + *(_DWORD *)(a1 + 1584)), ptr, n);
    if ( pthread_rwlock_unlock(rwlock) )
    {
      v51 = _errno_location();
      snprintf(
        v65,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v51,
        "util.c",
        "parse_notify_decred",
        2285);
      sub_343C4(3, v65, 1);
      sub_26B0C(1);
    }
    if ( pthread_mutex_unlock(mutex) )
    {
      v50 = _errno_location();
      snprintf(
        v65,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v50,
        "util.c",
        "parse_notify_decred",
        2285);
      sub_343C4(3, v65, 1);
      sub_26B0C(1);
    }
    off_6CB70(0);
    v38 = *(const char **)(a1 + 576);
    if ( !strncmp(v38, "hc", 2u) )
    {
      if ( !strncmp(v38, "hc.antpool", 0xAu) )
        *(_DWORD *)(a1 + 1896) = 2;
      else
        *(_DWORD *)(a1 + 1896) = 1;
    }
    else
    {
      *(_DWORD *)(a1 + 1896) = 0;
    }
    if ( !strncmp(v38, "47.52.92.112", 0xCu) )
    {
      if ( !strncmp(*(const char **)(a1 + 584), "9001", 4u) )
        *(_DWORD *)(a1 + 1896) = 2;
      else
        *(_DWORD *)(a1 + 1896) = 0;
    }
    if ( byte_72E38 )
    {
      if ( (((byte_73320 || byte_6FA70 || dword_6D35C > 4)
          && ((snprintf(v65, 0x800u, "pool stratum_url: %s port %s", v38, *(const char **)(a1 + 584)),
               sub_343C4(5, v65, 0),
               byte_73320)
           || byte_6FA70)
          || dword_6D35C > 4)
         && ((snprintf(v65, 0x800u, "pool rpc_url: %s", *(const char **)(a1 + 172)), sub_343C4(5, v65, 0), byte_73320)
          || byte_6FA70)
         || dword_6D35C > 4)
        && ((snprintf(v65, 0x800u, "pool dcr_type: %d", *(_DWORD *)(a1 + 1896)), sub_343C4(5, v65, 0), byte_73320)
         || byte_6FA70)
        || dword_6D35C > 4 )
      {
        snprintf(v65, 0x800u, "job_id: %s", v8);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_123;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_123:
        snprintf(v65, 0x800u, "prev_hash: %s", (const char *)v9);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_120;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_120:
        snprintf(v65, 0x800u, "coinbase1: %s", s);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_117;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_117:
        snprintf(v65, 0x800u, "coinbase2: %s", v63);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_114;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_114:
        snprintf(v65, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_111;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_111:
        snprintf(v65, 0x800u, "nbit: %s", (const char *)v62);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_108;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_108:
        snprintf(v65, 0x800u, "ntime: %s", (const char *)v61);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_91;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_91:
        v40 = "no";
        if ( v59 )
          v40 = "yes";
        snprintf(v65, 0x800u, "clean: %s", v40);
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_93;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_93:
        snprintf(v65, 0x800u, "nonce1bin: %s", *(const char **)(a1 + 616));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_95;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_95:
        snprintf(
          v65,
          0x800u,
          "header_bin1 %x %x %x",
          *(unsigned __int8 *)(a1 + 1596),
          *(unsigned __int8 *)(a1 + 1597),
          *(unsigned __int8 *)(a1 + 1598));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_97;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_97:
        snprintf(
          v65,
          0x800u,
          "header_bin4 %x %x %x",
          *(unsigned __int8 *)(a1 + 1600),
          *(unsigned __int8 *)(a1 + 1601),
          *(unsigned __int8 *)(a1 + 1602));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_99;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_99:
        snprintf(
          v65,
          0x800u,
          "header_bin8 %x %x %x",
          *(unsigned __int8 *)(a1 + 1604),
          *(unsigned __int8 *)(a1 + 1605),
          *(unsigned __int8 *)(a1 + 1606));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_101;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_101:
        snprintf(v65, 0x800u, "nonce2 %lld", *(_QWORD *)(a1 + 624));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_103;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_103:
        snprintf(v65, 0x800u, "n1_len %d", *(_DWORD *)(a1 + 1580));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_105;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_105:
        snprintf(v65, 0x800u, "nonce2_offset %d", *(_DWORD *)(a1 + 1592));
        sub_343C4(5, v65, 0);
        if ( byte_73320 || byte_6FA70 )
          goto LABEL_68;
      }
      if ( dword_6D35C > 4 )
      {
LABEL_68:
        snprintf(v65, 0x800u, "n2size %d", *(_DWORD *)(a1 + 632));
        sub_343C4(5, v65, 0);
      }
    }
    free(s);
    free(v63);
    free(src);
    free(ptr);
    v39 = *(_QWORD *)&dword_737A0;
    ++*(_DWORD *)(a1 + 120);
    *(_QWORD *)&dword_737A0 = v39 + 1;
    if ( a1 == sub_1E098() )
      byte_73CB0 = 1;
  }
  else
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(
        v65,
        0x800u,
        "%s: Failed to convert header to header_bin, got %s",
        "parse_notify_decred",
        (const char *)&rwlock);
      sub_343C4(4, v65, 0);
    }
    sub_1F4D0(a1);
  }
  return v6;
}
