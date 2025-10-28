int __fastcall sub_29198(int a1, _DWORD *a2)
{
  int v4; // r9
  char *v5; // r0
  int v6; // r4
  char *v7; // r10
  unsigned int v8; // r1
  int v9; // r5
  unsigned int v10; // r6
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  char *v14; // r5
  char *v15; // r6
  int v16; // r0
  _BOOL4 v17; // r4
  int v18; // r9
  bool v19; // zf
  size_t v20; // r0
  size_t v21; // r0
  void *v22; // r0
  __int64 v23; // r2
  __int64 v24; // kr08_8
  unsigned int v25; // lr
  unsigned int v26; // r4
  unsigned int v27; // r12
  unsigned __int64 v28; // r2
  unsigned int v29; // r8
  __int64 v30; // kr10_8
  char *v31; // r0
  char *v32; // r5
  _BOOL4 v33; // r5
  bool v34; // zf
  bool v35; // zf
  _BOOL4 v36; // r3
  int *v37; // r0
  int *v38; // r0
  int *v39; // r0
  int *v40; // r0
  bool v41; // zf
  __int64 v42; // kr18_8
  size_t v43; // r0
  size_t v44; // r2
  double v45; // d7
  int v46; // r2
  int v47; // r1
  size_t v48; // r3
  size_t v49; // r0
  int v50; // r4
  void *v51; // r0
  const char *v52; // r6
  size_t v53; // r5
  size_t v54; // r0
  const char *v55; // r1
  signed int v56; // r3
  const char *v57; // r0
  char *v58; // r4
  int v59; // r3
  size_t v60; // r0
  _BYTE *v61; // r0
  void *v62; // r5
  _BYTE *v63; // r0
  void *v64; // r6
  void *v65; // r0
  size_t v66; // r8
  const char *v67; // r3
  int v68; // r4
  unsigned int v69; // r5
  char *v70; // r0
  int v71; // r8
  unsigned __int8 *v72; // r4
  _BYTE *v73; // r0
  int *v74; // r0
  int *v75; // r0
  int *v76; // r0
  const char *v77; // [sp+0h] [bp-120h]
  char v78[268]; // [sp+18h] [bp-108h] BYREF
  pthread_rwlock_t *v79; // [sp+124h] [bp+4h]
  pthread_mutex_t *v80; // [sp+128h] [bp+8h]
  size_t v81; // [sp+12Ch] [bp+Ch]
  size_t nmemb; // [sp+130h] [bp+10h]
  _BOOL4 v83; // [sp+134h] [bp+14h]
  int v84; // [sp+138h] [bp+18h]
  size_t n; // [sp+13Ch] [bp+1Ch]
  void *ptr; // [sp+140h] [bp+20h]
  void *v87; // [sp+144h] [bp+24h]
  char *v88; // [sp+148h] [bp+28h]
  __int64 v89; // [sp+14Ch] [bp+2Ch]
  pthread_mutex_t *mutex; // [sp+154h] [bp+34h]
  _DWORD v91[4]; // [sp+158h] [bp+38h] BYREF
  __int64 v92; // [sp+168h] [bp+48h]
  __int64 v93; // [sp+170h] [bp+50h]
  char s[2052]; // [sp+178h] [bp+58h] BYREF

  v4 = sub_48034(a2);
  *(_BYTE *)(a1 + 108) = sub_48034(a2) == 4;
  v5 = sub_27E58(a2, 0);
  v6 = *(unsigned __int8 *)(a1 + 108);
  v7 = v5;
  if ( !*(_BYTE *)(a1 + 108) )
  {
    HIDWORD(v89) = sub_27E58(a2, 1u);
    v8 = 2;
    if ( v4 == 10 )
    {
      v9 = 5;
      v31 = sub_27E58(a2, 2u);
      v8 = 3;
      ptr = v31;
      v10 = 4;
      v87 = (void *)6;
      mutex = (pthread_mutex_t *)3;
    }
    else
    {
      v9 = 4;
      v10 = 3;
      mutex = (pthread_mutex_t *)2;
      v87 = (void *)5;
    }
    LODWORD(v89) = sub_27E58(a2, v8);
    v88 = sub_27E58(a2, v10);
    v11 = (_DWORD *)sub_48048(a2, v9);
    v12 = v11;
    if ( !v11 || *v11 != 1 )
      return v6;
    v84 = sub_48034(v11);
    n = (size_t)sub_27E58(a2, (unsigned int)v87);
    v32 = &mutex->__size[6];
    v87 = sub_27E58(a2, (unsigned int)&mutex->__count);
    mutex = (pthread_mutex_t *)sub_27E58(a2, (unsigned int)&mutex->__align + 5);
    if ( sub_48048(a2, v32) )
    {
      v33 = *(_DWORD *)sub_48048(a2, v32) == 5;
      v83 = v33;
    }
    else
    {
      LOBYTE(v33) = 0;
      v83 = 0;
    }
    v34 = HIDWORD(v89) == 0;
    if ( HIDWORD(v89) )
      v34 = v7 == 0;
    if ( v34 )
    {
      if ( !v7 )
        goto LABEL_64;
    }
    else
    {
      v35 = v88 == 0;
      if ( v88 )
        v35 = (_DWORD)v89 == 0;
      if ( !v35 )
      {
        v36 = v87 == 0;
        if ( !n )
          v36 = 1;
        if ( !mutex )
          v36 = 1;
        if ( !v36 )
        {
          v41 = ptr == 0;
          if ( !ptr )
            v41 = v4 == 10;
          if ( !v41 )
          {
            v80 = (pthread_mutex_t *)(a1 + 220);
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
              sub_28044("parse_notify_sia", 2424);
            v79 = (pthread_rwlock_t *)(a1 + 244);
            if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
            {
              v74 = _errno_location();
              snprintf(
                s,
                0x800u,
                "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
                *v74,
                "util.c",
                "parse_notify_sia",
                2424);
              sub_343C4(3, s, 1);
              sub_26B0C(1);
            }
            free(*(void **)(a1 + 664));
            free(*(void **)(a1 + 668));
            free(*(void **)(a1 + 676));
            free(*(void **)(a1 + 680));
            free(*(void **)(a1 + 684));
            v42 = v89;
            *(_DWORD *)(a1 + 664) = v7;
            *(_DWORD *)(a1 + 668) = HIDWORD(v42);
            nmemb = strlen((const char *)v42) >> 1;
            v43 = strlen(v88);
            v44 = n;
            *(_BYTE *)(a1 + 688) = v33;
            *(_DWORD *)(a1 + 676) = v44;
            *(_DWORD *)(a1 + 680) = v87;
            n = v43 >> 1;
            *(_DWORD *)(a1 + 684) = mutex;
            v45 = *(double *)(a1 + 1872);
            if ( v45 > 0.0 )
              *(double *)(a1 + 704) = v45;
            v46 = *(_DWORD *)(a1 + 632);
            v47 = *(_DWORD *)(a1 + 700);
            v48 = *(_DWORD *)(a1 + 1580) + nmemb;
            v49 = n;
            *(_DWORD *)(a1 + 1592) = v48;
            v81 = v48 + v46 + v49;
            *(_DWORD *)(a1 + 692) = v81;
            if ( v47 > 0 )
            {
              v50 = 0;
              do
              {
                v51 = *(void **)(*(_DWORD *)(a1 + 672) + 4 * v50++);
                free(v51);
              }
              while ( *(_DWORD *)(a1 + 700) > v50 );
            }
            if ( v84 )
            {
              v68 = v84;
              *(_DWORD *)(a1 + 672) = realloc(*(void **)(a1 + 672), 4 * v84 + 1);
              if ( v68 > 0 )
              {
                v69 = 0;
                do
                {
                  v70 = sub_27E58(v12, v69);
                  v71 = *(_DWORD *)(a1 + 672);
                  v72 = (unsigned __int8 *)v70;
                  *(_DWORD *)(v71 + 4 * v69) = malloc(0x20u);
                  v73 = *(_BYTE **)(*(_DWORD *)(a1 + 672) + 4 * v69);
                  if ( !v73 )
                  {
                    strcpy(s, "Failed to malloc pool swork merkle_bin");
                    sub_343C4(3, s, 1);
                    sub_26B0C(1);
                  }
                  sub_28324(v73, v72, 32);
                  ++v69;
                  free(v72);
                }
                while ( v84 != v69 );
              }
            }
            *(_DWORD *)(a1 + 700) = v84;
            if ( v83 )
              *(_QWORD *)(a1 + 624) = 0;
            v52 = *(const char **)(a1 + 676);
            v53 = strlen(v52);
            v54 = strlen(*(const char **)(a1 + 668));
            v55 = *(const char **)(a1 + 680);
            v56 = v53 + v54;
            v57 = *(const char **)(a1 + 684);
            v77 = *(const char **)(a1 + 668);
            v58 = (char *)ptr;
            v59 = v56 / 2;
            if ( v4 != 10 )
              v58 = &byte_57FF0;
            *(_DWORD *)(a1 + 1880) = v59;
            ptr = v58;
            snprintf(
              v78,
              0x101u,
              "%s%s%s%s%s%s%s",
              v52,
              v77,
              "0000000000000000000000000000000000000000000000000000000000000000",
              v58,
              v57,
              v55,
              "00000000");
            v60 = strlen(v78);
            memset(&v78[v60], 48, 256 - v60);
            v78[256] = 0;
            v6 = sub_28324((_BYTE *)(a1 + 1596), (unsigned __int8 *)v78, 128);
            if ( v6 )
            {
              v61 = calloc(nmemb, 1u);
              v62 = v61;
              if ( !v61 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Failed to calloc cb1 in parse_notify in %s %s():%d",
                  "util.c",
                  "parse_notify_sia",
                  2497);
                sub_343C4(3, s, 1);
                sub_26B0C(1);
              }
              sub_28324(v61, (unsigned __int8 *)v89, nmemb);
              v63 = calloc(n, 1u);
              v64 = v63;
              if ( !v63 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Failed to calloc cb2 in parse_notify in %s %s():%d",
                  "util.c",
                  "parse_notify_sia",
                  2502);
                sub_343C4(3, s, 1);
                sub_26B0C(1);
              }
              sub_28324(v63, (unsigned __int8 *)v88, n);
              free(*(void **)(a1 + 1584));
              if ( v81 << 30 )
                v81 = (v81 & 0xFFFFFFFC) + 4;
              v65 = calloc(v81, 1u);
              *(_DWORD *)(a1 + 1584) = v65;
              if ( !v65 )
              {
                strcpy(s, "Failed to calloc pool coinbase in parse_notify");
                sub_343C4(3, s, 1);
                sub_26B0C(1);
              }
              v66 = nmemb;
              memcpy(v65, v62, nmemb);
              memcpy((void *)(*(_DWORD *)(a1 + 1584) + v66), *(const void **)(a1 + 616), *(_DWORD *)(a1 + 1580));
              memcpy((void *)(*(_DWORD *)(a1 + 632) + *(_DWORD *)(a1 + 1580) + v66 + *(_DWORD *)(a1 + 1584)), v64, n);
              if ( pthread_rwlock_unlock(v79) )
              {
                v76 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v76,
                  "util.c",
                  "parse_notify_sia",
                  2514);
                sub_343C4(3, s, 1);
                sub_26B0C(1);
              }
              if ( pthread_mutex_unlock(v80) )
              {
                v75 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v75,
                  "util.c",
                  "parse_notify_sia",
                  2514);
                sub_343C4(3, s, 1);
                sub_26B0C(1);
              }
              off_6CB70(0);
              if ( byte_72E38 )
              {
                if ( (((byte_73320 || byte_6FA70 || dword_6D35C > 4)
                    && ((snprintf(s, 0x800u, "job_id: %s", v7), sub_343C4(5, s, 0), byte_73320) || byte_6FA70)
                    || dword_6D35C > 4)
                   && ((snprintf(s, 0x800u, "prev_hash: %s", (const char *)HIDWORD(v89)), sub_343C4(5, s, 0), byte_73320)
                    || byte_6FA70)
                   || dword_6D35C > 4)
                  && ((snprintf(s, 0x800u, "coinbase1: %s", (const char *)v89), sub_343C4(5, s, 0), byte_73320)
                   || byte_6FA70)
                  || dword_6D35C > 4 )
                {
                  snprintf(s, 0x800u, "coinbase2: %s", v88);
                  sub_343C4(5, s, 0);
                  if ( byte_73320 || byte_6FA70 )
                    goto LABEL_127;
                }
                if ( dword_6D35C > 4 )
                {
LABEL_127:
                  snprintf(s, 0x800u, "bbversion: %s", *(const char **)(a1 + 676));
                  sub_343C4(5, s, 0);
                  if ( byte_73320 || byte_6FA70 )
                    goto LABEL_129;
                }
                if ( dword_6D35C > 4 )
                {
LABEL_129:
                  snprintf(s, 0x800u, "nbit: %s", (const char *)v87);
                  sub_343C4(5, s, 0);
                  if ( byte_73320 || byte_6FA70 )
                    goto LABEL_143;
                }
                if ( dword_6D35C > 4 )
                {
LABEL_143:
                  snprintf(s, 0x800u, "ntime: %s", (const char *)mutex);
                  sub_343C4(5, s, 0);
                  if ( byte_73320 || byte_6FA70 )
                    goto LABEL_131;
                }
                if ( dword_6D35C > 4 )
                {
LABEL_131:
                  v67 = "no";
                  if ( v83 )
                    v67 = "yes";
                  snprintf(s, 0x800u, "clean: %s", v67);
                  sub_343C4(5, s, 0);
                }
              }
              free((void *)v89);
              free(v88);
              free(v62);
              free(v64);
              goto LABEL_44;
            }
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
            {
              snprintf(s, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v78);
              sub_343C4(4, s, 0);
            }
            sub_1F4D0(a1);
            return v6;
          }
        }
      }
    }
    free(v7);
LABEL_64:
    if ( HIDWORD(v89) )
      free((void *)HIDWORD(v89));
    if ( ptr )
      free(ptr);
    if ( (_DWORD)v89 )
      free((void *)v89);
    if ( v88 )
      free(v88);
    if ( n )
      free((void *)n);
    if ( v87 )
      free(v87);
    if ( mutex )
      free(mutex);
    return v6;
  }
  v14 = sub_27E58(a2, 1u);
  v15 = sub_27E58(a2, 2u);
  v16 = sub_48048(a2, 3);
  LOBYTE(v17) = v16;
  v18 = v16;
  if ( v16 )
  {
    v17 = *(_DWORD *)sub_48048(a2, 3) == 5;
    v18 = v17;
  }
  v19 = v14 == 0;
  if ( v14 )
    v19 = v7 == 0;
  if ( v19 )
  {
    if ( !v7 )
    {
      if ( !v14 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_48:
    free(v7);
    if ( !v14 )
    {
LABEL_16:
      if ( v15 )
        free(v15);
      __asm { POP.W           {R4-R11,PC} }
    }
LABEL_15:
    free(v14);
    goto LABEL_16;
  }
  if ( !v15 )
    goto LABEL_48;
  if ( strstr(v14, "0x") )
  {
    v20 = strlen(v14);
    snprintf(v14, v20 - 1, "%s", v14 + 2);
  }
  if ( strstr(v15, "0x") )
  {
    v21 = strlen(v15);
    snprintf(v15, v21 - 1, "%s", v15 + 2);
  }
  mutex = (pthread_mutex_t *)(a1 + 220);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
  {
    v39 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v39, "util.c", "parse_notify_sia", 2557);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  HIDWORD(v89) = a1 + 244;
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v38 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v38, "util.c", "parse_notify_sia", 2557);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  v22 = *(void **)(a1 + 664);
  if ( v22 )
    free(v22);
  *(_DWORD *)(a1 + 664) = v7;
  sub_28324(v91, (unsigned __int8 *)v15, 32);
  v23 = v92;
  v24 = v93;
  *(_BYTE *)(a1 + 688) = v17;
  LODWORD(v89) = v23;
  v25 = bswap32(HIDWORD(v23));
  v26 = v91[1];
  v27 = bswap32(v23);
  v28 = __PAIR64__(v91[3], bswap32(v91[2]));
  *(_DWORD *)(a1 + 1728) = bswap32(HIDWORD(v24));
  *(_DWORD *)(a1 + 1732) = bswap32(v24);
  v29 = bswap32(HIDWORD(v28));
  HIDWORD(v28) = v91[0];
  *(_DWORD *)(a1 + 1736) = v25;
  *(_DWORD *)(a1 + 1740) = v27;
  *(_DWORD *)(a1 + 1744) = v29;
  *(_DWORD *)(a1 + 1748) = v28;
  *(_DWORD *)(a1 + 1752) = bswap32(v26);
  *(_DWORD *)(a1 + 1756) = bswap32(HIDWORD(v28));
  if ( v18 )
    *(_QWORD *)(a1 + 624) = 0;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)HIDWORD(v89)) )
  {
    v37 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v37, "util.c", "parse_notify_sia", 2568);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_mutex_unlock(mutex) )
  {
    v40 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v40, "util.c", "parse_notify_sia", 2568);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  off_6CB70(0);
  v6 = sub_28324((_BYTE *)(a1 + 1596), (unsigned __int8 *)v14, 80);
  if ( v6 )
  {
    if ( byte_72E38 )
    {
      if ( ((byte_73320 || byte_6FA70 || dword_6D35C > 4)
         && ((snprintf(s, 0x800u, "job_id: %s", v7), sub_343C4(5, s, 0), byte_73320) || byte_6FA70)
         || dword_6D35C > 4)
        && ((snprintf(s, 0x800u, "header: %s", v14), sub_343C4(5, s, 0), byte_73320) || byte_6FA70)
        || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "target: %s", v15);
        sub_343C4(5, s, 0);
      }
    }
    free(v14);
    free(v15);
LABEL_44:
    v30 = *(_QWORD *)&dword_737A0;
    ++*(_DWORD *)(a1 + 120);
    *(_QWORD *)&dword_737A0 = v30 + 1;
    if ( a1 == sub_1E098() )
      byte_73CB0 = 1;
    __asm { POP.W           {R4-R11,PC} }
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "%s: Failed to convert header to header_bin, got %s", "parse_notify_sia", v14);
    sub_343C4(4, s, 0);
  }
  sub_1F4D0(a1);
  free(v14);
  free(v15);
  return v6;
}
