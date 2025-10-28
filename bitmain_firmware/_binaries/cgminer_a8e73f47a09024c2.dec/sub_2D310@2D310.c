int __fastcall sub_2D310(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  char *v7; // r6
  char *v8; // r10
  char *v9; // r9
  char *v10; // r8
  _BOOL4 v11; // r7
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf
  int *v15; // r0
  double v16; // d16
  size_t v17; // r3
  int v18; // r7
  void *v19; // r8
  unsigned int v20; // r7
  unsigned __int8 *v21; // r6
  int v22; // r10
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r1
  const char *v30; // r7
  size_t v31; // r4
  signed int v32; // r4
  const char *v33; // r8
  size_t v34; // r0
  size_t v35; // r1
  _BYTE *v36; // r0
  void *v37; // r8
  void *v38; // r0
  int v39; // r0
  const char *v40; // r4
  int v41; // r3
  int v42; // r3
  const char *v43; // r3
  char s[4]; // [sp+18h] [bp-85Ch] BYREF
  char *v45; // [sp+1Ch] [bp-858h]
  size_t v46; // [sp+20h] [bp-854h]
  pthread_rwlock_t *v47; // [sp+24h] [bp-850h]
  pthread_mutex_t *v48; // [sp+28h] [bp-84Ch]
  char *v49; // [sp+2Ch] [bp-848h]
  _BOOL4 v50; // [sp+30h] [bp-844h]
  size_t v51; // [sp+34h] [bp-840h]
  size_t n; // [sp+38h] [bp-83Ch]
  size_t nmemb; // [sp+3Ch] [bp-838h]
  void *src; // [sp+40h] [bp-834h]
  void *v55; // [sp+44h] [bp-830h]
  void *v56; // [sp+48h] [bp-82Ch]
  void *ptr; // [sp+4Ch] [bp-828h]
  _DWORD v58[513]; // [sp+50h] [bp-824h] BYREF

  v4 = (_DWORD *)sub_5BEB8(a2, 4);
  v5 = v4;
  if ( v4 && *v4 == 1 )
  {
    src = (void *)sub_5BE8C(v4);
    v7 = sub_2CB58(a2, 0);
    v8 = sub_2CB58(a2, 1u);
    ptr = sub_2CB58(a2, 2u);
    v9 = sub_2CB58(a2, 3u);
    v10 = sub_2CB58(a2, 5u);
    v56 = sub_2CB58(a2, 6u);
    v55 = sub_2CB58(a2, 7u);
    if ( sub_5BEB8(a2, 8) )
      v11 = *(_DWORD *)sub_5BEB8(a2, 8) == 5;
    else
      v11 = 0;
    v12 = v7 == 0;
    if ( v7 )
      v12 = v8 == 0;
    if ( v12 )
      goto LABEL_21;
    v13 = ptr == 0;
    if ( ptr )
      v13 = v9 == 0;
    if ( v13 )
      goto LABEL_21;
    v14 = v10 == 0;
    if ( v10 )
      v14 = v56 == 0;
    if ( v14 || !v55 )
    {
LABEL_21:
      if ( v7 )
        free(v7);
      if ( v8 )
        free(v8);
      if ( ptr )
        free(ptr);
      if ( v9 )
        free(v9);
      if ( v10 )
        free(v10);
      if ( v56 )
        free(v56);
      if ( v55 )
        free(v55);
      return 0;
    }
    else
    {
      v48 = (pthread_mutex_t *)(a1 + 220);
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
      {
        v15 = _errno_location();
        snprintf(
          (char *)v58,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v15,
          "util.c",
          "parse_notify_decred",
          2193);
        sub_3F178(3, v58, 1);
        sub_134A4(1);
      }
      v50 = v11;
      v47 = (pthread_rwlock_t *)(a1 + 244);
      sub_2CB78((pthread_rwlock_t *)(a1 + 244), "util.c", "parse_notify_decred", 2193);
      free(*(void **)(a1 + 664));
      free(*(void **)(a1 + 668));
      free(*(void **)(a1 + 676));
      free(*(void **)(a1 + 680));
      free(*(void **)(a1 + 684));
      *(_DWORD *)(a1 + 664) = v7;
      *(_DWORD *)(a1 + 668) = v8;
      nmemb = strlen((const char *)ptr) >> 1;
      n = strlen(v9) >> 1;
      *(_DWORD *)(a1 + 676) = v10;
      *(_DWORD *)(a1 + 680) = v56;
      *(_DWORD *)(a1 + 684) = v55;
      *(_BYTE *)(a1 + 688) = v50;
      v16 = *(double *)(a1 + 1872);
      if ( v16 > 0.0 )
        *(double *)(a1 + 704) = v16;
      v17 = nmemb + *(_DWORD *)(a1 + 1580);
      v51 = n + *(_DWORD *)(a1 + 632) + v17;
      *(_DWORD *)(a1 + 692) = v51;
      *(_DWORD *)(a1 + 1592) = v17;
      if ( *(int *)(a1 + 700) > 0 )
      {
        v18 = 0;
        do
          free(*(void **)(*(_DWORD *)(a1 + 672) + 4 * v18++));
        while ( *(_DWORD *)(a1 + 700) > v18 );
      }
      v19 = src;
      if ( src )
      {
        *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * (_DWORD)src + 1);
        if ( (int)src > 0 )
        {
          v20 = 0;
          *(_DWORD *)s = "Failed to malloc pool swork merkle_bin";
          v49 = v7;
          v46 = (size_t)v8;
          v45 = v9;
          do
          {
            v21 = (unsigned __int8 *)sub_2CB58(v5, v20);
            v22 = *(_DWORD *)(a1 + 672);
            *(_DWORD *)(v22 + 4 * v20) = malloc(0x20u);
            if ( !*(_DWORD *)(*(_DWORD *)(a1 + 672) + 4 * v20) )
            {
              v23 = *(_DWORD *)(*(_DWORD *)s + 4);
              v24 = *(_DWORD *)(*(_DWORD *)s + 8);
              v25 = *(_DWORD *)(*(_DWORD *)s + 12);
              v58[0] = **(_DWORD **)s;
              v58[1] = v23;
              v58[2] = v24;
              v58[3] = v25;
              v26 = *(_DWORD *)(*(_DWORD *)s + 20);
              v27 = *(_DWORD *)(*(_DWORD *)s + 24);
              v28 = *(_DWORD *)(*(_DWORD *)s + 28);
              v58[4] = *(_DWORD *)(*(_DWORD *)s + 16);
              v58[5] = v26;
              v58[6] = v27;
              v58[7] = v28;
              v29 = *(_DWORD *)(*(_DWORD *)s + 36);
              v58[8] = *(_DWORD *)(*(_DWORD *)s + 32);
              LOWORD(v58[9]) = v29;
              BYTE2(v58[9]) = BYTE2(v29);
              sub_3F178(3, v58, 1);
              sub_134A4(1);
            }
            sub_2D164(*(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v20), v21, 32);
            free(v21);
            ++v20;
          }
          while ( v19 != (void *)v20 );
          v7 = v49;
          v8 = (char *)v46;
          v9 = v45;
        }
      }
      *(_DWORD *)(a1 + 700) = src;
      if ( v50 )
        *(_QWORD *)(a1 + 624) = 0;
      v30 = *(const char **)(a1 + 676);
      v31 = strlen(v30);
      src = *(void **)(a1 + 668);
      v32 = strlen((const char *)src) + v31;
      *(_DWORD *)(a1 + 1880) = v32;
      v49 = *(char **)(a1 + 684);
      v46 = strlen(v49);
      v33 = *(const char **)(a1 + 680);
      v34 = strlen(v33);
      *(_DWORD *)(a1 + 1880) = v32 / 2;
      v35 = ((2 * (v46 + v34 + 136 + v32) + 1) & 0xFFFFFFFC) + 4;
      *(_DWORD *)(a1 + 696) = v35;
      snprintf(
        s,
        v35,
        "%s%s%s%s%s%s%s",
        v30,
        (const char *)src,
        "0000000000000000000000000000000000000000000000000000000000000000",
        v49,
        v33,
        "00000000",
        off_79D18);
      if ( sub_2D164((_BYTE *)(a1 + 1596), (unsigned __int8 *)s, 128) )
      {
        src = calloc(nmemb, 1u);
        if ( !src )
        {
          snprintf(
            (char *)v58,
            0x800u,
            "Failed to calloc cb1 in parse_notify in %s %s():%d",
            "util.c",
            "parse_notify_decred",
            2268);
          sub_3F178(3, v58, 1);
          sub_134A4(1);
        }
        sub_2D164(src, (unsigned __int8 *)ptr, nmemb);
        v36 = calloc(n, 1u);
        v37 = v36;
        if ( !v36 )
        {
          snprintf(
            (char *)v58,
            0x800u,
            "Failed to calloc cb2 in parse_notify in %s %s():%d",
            "util.c",
            "parse_notify_decred",
            2273);
          sub_3F178(3, v58, 1);
          sub_134A4(1);
        }
        sub_2D164(v36, (unsigned __int8 *)v9, n);
        free(*(void **)(a1 + 1584));
        if ( (v51 & 3) != 0 )
          v51 = (v51 & 0xFFFFFFFC) + 4;
        v38 = calloc(v51, 1u);
        *(_DWORD *)(a1 + 1584) = v38;
        if ( !v38 )
        {
          strcpy((char *)v58, "Failed to calloc pool coinbase in parse_notify");
          sub_3F178(3, v58, 1);
          sub_134A4(1);
        }
        memcpy(*(void **)(a1 + 1584), src, nmemb);
        memcpy((void *)(*(_DWORD *)(a1 + 1584) + nmemb), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
        memcpy((void *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + nmemb), v37, n);
        sub_2CBE4(v47, "util.c", "parse_notify_decred", 2285);
        v39 = sub_2C260(v48, "util.c", "parse_notify_decred", 2285);
        off_79D40(v39);
        v40 = *(const char **)(a1 + 576);
        if ( !strncmp(v40, "hc", 2u) )
        {
          if ( !strncmp(v40, "hc.antpool", 0xAu) )
            v41 = 2;
          else
            v41 = 1;
          *(_DWORD *)(a1 + 1896) = v41;
        }
        else
        {
          *(_DWORD *)(a1 + 1896) = 0;
        }
        if ( !strncmp(v40, "47.52.92.112", 0xCu) )
        {
          if ( !strncmp(*(const char **)(a1 + 584), "9001", 4u) )
            v42 = 2;
          else
            v42 = 0;
          *(_DWORD *)(a1 + 1896) = v42;
        }
        if ( byte_804B0 )
        {
          if ( (((byte_7FE78 || byte_7CC60 || dword_7A52C > 4)
              && ((snprintf((char *)v58, 0x800u, "pool stratum_url: %s port %s", v40, *(const char **)(a1 + 584)),
                   sub_3F178(5, v58, 0),
                   byte_7FE78)
               || byte_7CC60)
              || dword_7A52C > 4)
             && ((snprintf((char *)v58, 0x800u, "pool rpc_url: %s", *(const char **)(a1 + 172)),
                  sub_3F178(5, v58, 0),
                  byte_7FE78)
              || byte_7CC60)
             || dword_7A52C > 4)
            && ((snprintf((char *)v58, 0x800u, "pool dcr_type: %d", *(_DWORD *)(a1 + 1896)),
                 sub_3F178(5, v58, 0),
                 byte_7FE78)
             || byte_7CC60)
            || dword_7A52C > 4 )
          {
            snprintf((char *)v58, 0x800u, "job_id: %s", v7);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_94;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_94:
            snprintf((char *)v58, 0x800u, "prev_hash: %s", v8);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_97;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_97:
            snprintf((char *)v58, 0x800u, "coinbase1: %s", (const char *)ptr);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_100;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_100:
            snprintf((char *)v58, 0x800u, "coinbase2: %s", v9);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_103;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_103:
            snprintf((char *)v58, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_106;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_106:
            snprintf((char *)v58, 0x800u, "nbit: %s", (const char *)v56);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_109;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_109:
            snprintf((char *)v58, 0x800u, "ntime: %s", (const char *)v55);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_115;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_115:
            v43 = v50 ? "yes" : (const char *)&dword_67E50;
            snprintf((char *)v58, 0x800u, "clean: %s", v43);
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_118;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_118:
            snprintf((char *)v58, 0x800u, "nonce1bin: %s", *(const char **)(a1 + 616));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_121;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_121:
            snprintf(
              (char *)v58,
              0x800u,
              "header_bin1 %x %x %x",
              *(unsigned __int8 *)(a1 + 1596),
              *(unsigned __int8 *)(a1 + 1597),
              *(unsigned __int8 *)(a1 + 1598));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_124;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_124:
            snprintf(
              (char *)v58,
              0x800u,
              "header_bin4 %x %x %x",
              *(unsigned __int8 *)(a1 + 1600),
              *(unsigned __int8 *)(a1 + 1601),
              *(unsigned __int8 *)(a1 + 1602));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_127;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_127:
            snprintf(
              (char *)v58,
              0x800u,
              "header_bin8 %x %x %x",
              *(unsigned __int8 *)(a1 + 1604),
              *(unsigned __int8 *)(a1 + 1605),
              *(unsigned __int8 *)(a1 + 1606));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_130;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_130:
            snprintf((char *)v58, 0x800u, "nonce2 %lld", *(_QWORD *)(a1 + 624));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_133;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_133:
            snprintf((char *)v58, 0x800u, "n1_len %d", *(_DWORD *)(a1 + 1580));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_136;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_136:
            snprintf((char *)v58, 0x800u, "nonce2_offset %d", *(_DWORD *)(a1 + 1592));
            sub_3F178(5, v58, 0);
            if ( byte_7FE78 || byte_7CC60 )
              goto LABEL_138;
          }
          if ( dword_7A52C > 4 )
          {
LABEL_138:
            snprintf((char *)v58, 0x800u, "n2size %d", *(_DWORD *)(a1 + 632));
            sub_3F178(5, v58, 0);
          }
        }
        free(ptr);
        free(v9);
        free(src);
        free(v37);
        ++*(_DWORD *)(a1 + 120);
        ++*(_QWORD *)&dbl_807F0;
        if ( a1 == sub_14A18() )
          byte_80A54 = 1;
        return 1;
      }
      else
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
        {
          snprintf((char *)v58, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_decred", s);
          sub_3F178(4, v58, 0);
        }
        sub_1A000(a1);
        return 0;
      }
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy((char *)v58, "parse notify:arr is null \n");
    sub_3F178(5, v58, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
