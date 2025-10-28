int __fastcall sub_2D048(int a1, _DWORD *a2)
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
  int *v16; // r0
  double v17; // d16
  size_t v18; // r3
  int v19; // r7
  void *v20; // r8
  unsigned int v21; // r7
  unsigned __int8 *v22; // r6
  int v23; // r10
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  const char *v31; // r7
  size_t v32; // r4
  signed int v33; // r4
  const char *v34; // r8
  size_t v35; // r0
  size_t v36; // r1
  _BYTE *v37; // r0
  void *v38; // r8
  void *v39; // r0
  int v40; // r0
  const char *v41; // r4
  int v42; // r3
  int v43; // r3
  const char *v44; // r3
  char s[4]; // [sp+18h] [bp-85Ch] BYREF
  char *v46; // [sp+1Ch] [bp-858h]
  size_t v47; // [sp+20h] [bp-854h]
  pthread_rwlock_t *v48; // [sp+24h] [bp-850h]
  pthread_mutex_t *v49; // [sp+28h] [bp-84Ch]
  char *v50; // [sp+2Ch] [bp-848h]
  _BOOL4 v51; // [sp+30h] [bp-844h]
  size_t v52; // [sp+34h] [bp-840h]
  size_t n; // [sp+38h] [bp-83Ch]
  size_t nmemb; // [sp+3Ch] [bp-838h]
  void *src; // [sp+40h] [bp-834h]
  void *v56; // [sp+44h] [bp-830h]
  void *v57; // [sp+48h] [bp-82Ch]
  void *ptr; // [sp+4Ch] [bp-828h]
  _DWORD v59[513]; // [sp+50h] [bp-824h] BYREF

  v4 = (_DWORD *)sub_57588(a2, 4);
  v5 = v4;
  if ( v4 && *v4 == 1 )
  {
    src = (void *)sub_5755C(v4);
    v7 = sub_2C940(a2, 0);
    v8 = sub_2C940(a2, 1u);
    ptr = sub_2C940(a2, 2u);
    v9 = sub_2C940(a2, 3u);
    v10 = sub_2C940(a2, 5u);
    v57 = sub_2C940(a2, 6u);
    v56 = sub_2C940(a2, 7u);
    if ( sub_57588(a2, 8) )
      v11 = *(_DWORD *)sub_57588(a2, 8) == 5;
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
      v14 = v57 == 0;
    if ( v14 || !v56 )
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
      if ( v57 )
        free(v57);
      if ( v56 )
        free(v56);
      return 0;
    }
    else
    {
      v49 = (pthread_mutex_t *)(a1 + 220);
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
      {
        v15 = _errno_location();
        snprintf(
          (char *)v59,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v15,
          "util.c",
          "parse_notify_decred",
          2174);
        sub_3F1C0(3, v59, 1);
        sub_132C4(1);
      }
      v48 = (pthread_rwlock_t *)(a1 + 244);
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
      {
        v16 = _errno_location();
        snprintf(
          (char *)v59,
          0x800u,
          "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v16,
          "util.c",
          "parse_notify_decred",
          2174);
        sub_3F1C0(3, v59, 1);
        sub_132C4(1);
      }
      v51 = v11;
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
      *(_DWORD *)(a1 + 680) = v57;
      *(_DWORD *)(a1 + 684) = v56;
      *(_BYTE *)(a1 + 688) = v51;
      v17 = *(double *)(a1 + 1872);
      if ( v17 > 0.0 )
        *(double *)(a1 + 704) = v17;
      v18 = nmemb + *(_DWORD *)(a1 + 1580);
      v52 = n + *(_DWORD *)(a1 + 632) + v18;
      *(_DWORD *)(a1 + 692) = v52;
      *(_DWORD *)(a1 + 1592) = v18;
      if ( *(int *)(a1 + 700) > 0 )
      {
        v19 = 0;
        do
          free(*(void **)(*(_DWORD *)(a1 + 672) + 4 * v19++));
        while ( *(_DWORD *)(a1 + 700) > v19 );
      }
      v20 = src;
      if ( src )
      {
        *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * (_DWORD)src + 1);
        if ( (int)src > 0 )
        {
          v21 = 0;
          *(_DWORD *)s = "Failed to malloc pool swork merkle_bin";
          v50 = v7;
          v47 = (size_t)v8;
          v46 = v9;
          do
          {
            v22 = (unsigned __int8 *)sub_2C940(v5, v21);
            v23 = *(_DWORD *)(a1 + 672);
            *(_DWORD *)(v23 + 4 * v21) = malloc(0x20u);
            if ( !*(_DWORD *)(*(_DWORD *)(a1 + 672) + 4 * v21) )
            {
              v24 = *(_DWORD *)(*(_DWORD *)s + 4);
              v25 = *(_DWORD *)(*(_DWORD *)s + 8);
              v26 = *(_DWORD *)(*(_DWORD *)s + 12);
              v59[0] = **(_DWORD **)s;
              v59[1] = v24;
              v59[2] = v25;
              v59[3] = v26;
              v27 = *(_DWORD *)(*(_DWORD *)s + 20);
              v28 = *(_DWORD *)(*(_DWORD *)s + 24);
              v29 = *(_DWORD *)(*(_DWORD *)s + 28);
              v59[4] = *(_DWORD *)(*(_DWORD *)s + 16);
              v59[5] = v27;
              v59[6] = v28;
              v59[7] = v29;
              v30 = *(_DWORD *)(*(_DWORD *)s + 36);
              v59[8] = *(_DWORD *)(*(_DWORD *)s + 32);
              LOWORD(v59[9]) = v30;
              BYTE2(v59[9]) = BYTE2(v30);
              sub_3F1C0(3, v59, 1);
              sub_132C4(1);
            }
            sub_2CE9C(*(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v21), v22, 32);
            free(v22);
            ++v21;
          }
          while ( v20 != (void *)v21 );
          v7 = v50;
          v8 = (char *)v47;
          v9 = v46;
        }
      }
      *(_DWORD *)(a1 + 700) = src;
      if ( v51 )
        *(_QWORD *)(a1 + 624) = 0;
      v31 = *(const char **)(a1 + 676);
      v32 = strlen(v31);
      src = *(void **)(a1 + 668);
      v33 = strlen((const char *)src) + v32;
      *(_DWORD *)(a1 + 1880) = v33;
      v50 = *(char **)(a1 + 684);
      v47 = strlen(v50);
      v34 = *(const char **)(a1 + 680);
      v35 = strlen(v34);
      *(_DWORD *)(a1 + 1880) = v33 / 2;
      v36 = ((2 * (v47 + v35 + 136 + v33) + 1) & 0xFFFFFFFC) + 4;
      *(_DWORD *)(a1 + 696) = v36;
      snprintf(
        s,
        v36,
        "%s%s%s%s%s%s%s",
        v31,
        (const char *)src,
        "0000000000000000000000000000000000000000000000000000000000000000",
        v50,
        v34,
        "00000000",
        off_72CD8);
      if ( sub_2CE9C((_BYTE *)(a1 + 1596), (unsigned __int8 *)s, 128) )
      {
        src = calloc(nmemb, 1u);
        if ( !src )
        {
          snprintf(
            (char *)v59,
            0x800u,
            "Failed to calloc cb1 in parse_notify in %s %s():%d",
            "util.c",
            "parse_notify_decred",
            2249);
          sub_3F1C0(3, v59, 1);
          sub_132C4(1);
        }
        sub_2CE9C(src, (unsigned __int8 *)ptr, nmemb);
        v37 = calloc(n, 1u);
        v38 = v37;
        if ( !v37 )
        {
          snprintf(
            (char *)v59,
            0x800u,
            "Failed to calloc cb2 in parse_notify in %s %s():%d",
            "util.c",
            "parse_notify_decred",
            2254);
          sub_3F1C0(3, v59, 1);
          sub_132C4(1);
        }
        sub_2CE9C(v37, (unsigned __int8 *)v9, n);
        free(*(void **)(a1 + 1584));
        if ( (v52 & 3) != 0 )
          v52 = (v52 & 0xFFFFFFFC) + 4;
        v39 = calloc(v52, 1u);
        *(_DWORD *)(a1 + 1584) = v39;
        if ( !v39 )
        {
          strcpy((char *)v59, "Failed to calloc pool coinbase in parse_notify");
          sub_3F1C0(3, v59, 1);
          sub_132C4(1);
        }
        memcpy(*(void **)(a1 + 1584), src, nmemb);
        memcpy((void *)(*(_DWORD *)(a1 + 1584) + nmemb), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
        memcpy((void *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + nmemb), v38, n);
        sub_2C960(v48, "util.c", "parse_notify_decred", 2266);
        v40 = sub_2C048(v49, "util.c", "parse_notify_decred", 2266);
        off_72D00(v40);
        v41 = *(const char **)(a1 + 576);
        if ( !strncmp(v41, "hc", 2u) )
        {
          if ( !strncmp(v41, "hc.antpool", 0xAu) )
            v42 = 2;
          else
            v42 = 1;
          *(_DWORD *)(a1 + 1896) = v42;
        }
        else
        {
          *(_DWORD *)(a1 + 1896) = 0;
        }
        if ( !strncmp(v41, "47.52.92.112", 0xCu) )
        {
          if ( !strncmp(*(const char **)(a1 + 584), "9001", 4u) )
            v43 = 2;
          else
            v43 = 0;
          *(_DWORD *)(a1 + 1896) = v43;
        }
        if ( byte_793D0 )
        {
          if ( (((byte_78D98 || byte_75C08 || dword_734EC > 4)
              && ((snprintf((char *)v59, 0x800u, "pool stratum_url: %s", v41), sub_3F1C0(5, v59, 0), byte_78D98)
               || byte_75C08)
              || dword_734EC > 4)
             && ((snprintf((char *)v59, 0x800u, "pool rpc_url: %s", *(const char **)(a1 + 172)),
                  sub_3F1C0(5, v59, 0),
                  byte_78D98)
              || byte_75C08)
             || dword_734EC > 4)
            && ((snprintf((char *)v59, 0x800u, "pool dcr_type: %d", *(_DWORD *)(a1 + 1896)),
                 sub_3F1C0(5, v59, 0),
                 byte_78D98)
             || byte_75C08)
            || dword_734EC > 4 )
          {
            snprintf((char *)v59, 0x800u, "job_id: %s", v7);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_96;
          }
          if ( dword_734EC > 4 )
          {
LABEL_96:
            snprintf((char *)v59, 0x800u, "prev_hash: %s", v8);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_99;
          }
          if ( dword_734EC > 4 )
          {
LABEL_99:
            snprintf((char *)v59, 0x800u, "coinbase1: %s", (const char *)ptr);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_102;
          }
          if ( dword_734EC > 4 )
          {
LABEL_102:
            snprintf((char *)v59, 0x800u, "coinbase2: %s", v9);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_105;
          }
          if ( dword_734EC > 4 )
          {
LABEL_105:
            snprintf((char *)v59, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_108;
          }
          if ( dword_734EC > 4 )
          {
LABEL_108:
            snprintf((char *)v59, 0x800u, "nbit: %s", (const char *)v57);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_111;
          }
          if ( dword_734EC > 4 )
          {
LABEL_111:
            snprintf((char *)v59, 0x800u, "ntime: %s", (const char *)v56);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_117;
          }
          if ( dword_734EC > 4 )
          {
LABEL_117:
            v44 = v51 ? "yes" : (const char *)&dword_634DC;
            snprintf((char *)v59, 0x800u, "clean: %s", v44);
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_120;
          }
          if ( dword_734EC > 4 )
          {
LABEL_120:
            snprintf(
              (char *)v59,
              0x800u,
              "header_bin1 %x %x %x",
              *(unsigned __int8 *)(a1 + 1596),
              *(unsigned __int8 *)(a1 + 1597),
              *(unsigned __int8 *)(a1 + 1598));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_123;
          }
          if ( dword_734EC > 4 )
          {
LABEL_123:
            snprintf(
              (char *)v59,
              0x800u,
              "header_bin4 %x %x %x",
              *(unsigned __int8 *)(a1 + 1600),
              *(unsigned __int8 *)(a1 + 1601),
              *(unsigned __int8 *)(a1 + 1602));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_126;
          }
          if ( dword_734EC > 4 )
          {
LABEL_126:
            snprintf(
              (char *)v59,
              0x800u,
              "header_bin8 %x %x %x",
              *(unsigned __int8 *)(a1 + 1604),
              *(unsigned __int8 *)(a1 + 1605),
              *(unsigned __int8 *)(a1 + 1606));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_129;
          }
          if ( dword_734EC > 4 )
          {
LABEL_129:
            snprintf((char *)v59, 0x800u, "nonce2 %lld", *(_QWORD *)(a1 + 624));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_132;
          }
          if ( dword_734EC > 4 )
          {
LABEL_132:
            snprintf((char *)v59, 0x800u, "n1_len %d", *(_DWORD *)(a1 + 1580));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_135;
          }
          if ( dword_734EC > 4 )
          {
LABEL_135:
            snprintf((char *)v59, 0x800u, "nonce2_offset %d", *(_DWORD *)(a1 + 1592));
            sub_3F1C0(5, v59, 0);
            if ( byte_78D98 || byte_75C08 )
              goto LABEL_137;
          }
          if ( dword_734EC > 4 )
          {
LABEL_137:
            snprintf((char *)v59, 0x800u, "n2size %d", *(_DWORD *)(a1 + 632));
            sub_3F1C0(5, v59, 0);
          }
        }
        free(ptr);
        free(v9);
        free(src);
        free(v38);
        ++*(_DWORD *)(a1 + 120);
        ++*(_QWORD *)&dbl_79710;
        if ( a1 == sub_14838() )
          byte_79974 = 1;
        return 1;
      }
      else
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          snprintf((char *)v59, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_decred", s);
          sub_3F1C0(4, v59, 0);
        }
        sub_19E20(a1);
        return 0;
      }
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy((char *)v59, "parse notify:arr is null \n");
    sub_3F1C0(5, v59, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
