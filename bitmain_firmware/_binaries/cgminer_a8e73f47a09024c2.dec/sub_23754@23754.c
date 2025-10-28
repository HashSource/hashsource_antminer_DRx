int __fastcall sub_23754(_DWORD *a1)
{
  pthread_t v2; // r0
  int v3; // r0
  int v4; // r0
  fd_set *v5; // r3
  int v6; // r3
  int v7; // r2
  int v8; // r0
  char *v9; // r6
  int v10; // r8
  int v11; // r0
  _DWORD *v12; // r0
  char *v13; // r5
  int v14; // r5
  int *v15; // r0
  int v16; // r5
  int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r3
  int v23; // r1
  int v24; // r10
  int v25; // r3
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r2
  int **v30; // r2
  int v31; // r1
  int v32; // r0
  int v33; // r0
  int v34; // r1
  int v35; // r1
  int *v36; // r0
  double v37; // d8
  int *v38; // r0
  int *v39; // r0
  int *v40; // r0
  int *v41; // r0
  int *v42; // r0
  int v43; // r10
  time_t v44; // r0
  int v45; // r1
  int i; // r3
  unsigned int v47; // r7
  __int64 v48; // d0
  __int64 v49; // d8
  const char *v50; // r3
  _DWORD *v51; // r7
  int v52; // r8
  int *v53; // r0
  double v54; // d16
  int *v55; // r0
  time_t v56; // r0
  int *v57; // r0
  double v58; // d16
  int *v59; // r0
  size_t v60; // r0
  _DWORD *v61; // r0
  const char *v62; // r0
  const char *v63; // r0
  int v64; // r2
  unsigned int v65; // r3
  _DWORD *v66; // r7
  int *v67; // r0
  int *v68; // r0
  __int64 v69; // r2
  int *v70; // r0
  int *v71; // r0
  int *v72; // r0
  int v73; // r5
  int *v74; // lr
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int v78; // r1
  int v79; // r2
  int v80; // r3
  int j; // r3
  int v82; // r1
  int v83; // r2
  int v84; // r3
  int v85; // r1
  int v86; // r2
  int v87; // r3
  int *v88; // r0
  char *v89; // r8
  char *v90; // r5
  int v91; // r2
  unsigned int nr_readers; // r3
  pthread_rwlock_t *rwlock; // [sp+1Ch] [bp-A50h]
  pthread_rwlock_t *rwlocka; // [sp+1Ch] [bp-A50h]
  _DWORD *n; // [sp+20h] [bp-A4Ch]
  size_t na; // [sp+20h] [bp-A4Ch]
  void **src; // [sp+24h] [bp-A48h]
  const char *srca; // [sp+24h] [bp-A48h]
  _DWORD *v100; // [sp+28h] [bp-A44h]
  _BYTE *v101; // [sp+28h] [bp-A44h]
  _DWORD *ptr; // [sp+2Ch] [bp-A40h]
  __int64 v103; // [sp+30h] [bp-A3Ch] BYREF
  struct timeval timeout; // [sp+3Ch] [bp-A30h] BYREF
  char v105[20]; // [sp+44h] [bp-A28h] BYREF
  char v106[2]; // [sp+58h] [bp-A14h] BYREF
  _BYTE dest[30]; // [sp+5Ah] [bp-A12h] BYREF
  char v108[36]; // [sp+78h] [bp-9F4h] BYREF
  char v109[4]; // [sp+9Ch] [bp-9D0h] BYREF
  int v110; // [sp+A0h] [bp-9CCh]
  int v111; // [sp+A4h] [bp-9C8h]
  int v112; // [sp+A8h] [bp-9C4h]
  int v113; // [sp+ACh] [bp-9C0h]
  int v114; // [sp+B0h] [bp-9BCh]
  int v115; // [sp+B4h] [bp-9B8h]
  int v116; // [sp+B8h] [bp-9B4h]
  char v117; // [sp+D8h] [bp-994h] BYREF
  fd_set readfds; // [sp+DCh] [bp-990h] BYREF
  int v119; // [sp+15Ch] [bp-910h] BYREF
  int v120; // [sp+160h] [bp-90Ch]
  int v121; // [sp+164h] [bp-908h]
  int v122; // [sp+168h] [bp-904h]
  int v123; // [sp+16Ch] [bp-900h]
  int v124; // [sp+170h] [bp-8FCh]
  int v125; // [sp+174h] [bp-8F8h]
  int v126; // [sp+178h] [bp-8F4h]
  int v127; // [sp+17Ch] [bp-8F0h]
  int v128; // [sp+180h] [bp-8ECh]
  int v129; // [sp+184h] [bp-8E8h]
  int v130; // [sp+188h] [bp-8E4h]
  int v131; // [sp+18Ch] [bp-8E0h]
  int v132; // [sp+190h] [bp-8DCh]
  int v133; // [sp+194h] [bp-8D8h]
  int v134; // [sp+198h] [bp-8D4h]
  char v135[160]; // [sp+1B8h] [bp-8B4h] BYREF
  char s[2040]; // [sp+258h] [bp-814h] BYREF
  char v137[8]; // [sp+A58h] [bp-14h] BYREF
  _BYTE v138[4]; // [sp+A68h] [bp-4h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(v137, 0x10u, "%d/RStratum", *a1);
  sub_34684(v137);
  while ( !*((_BYTE *)a1 + 105) )
  {
    if ( !sub_30618(a1) && !sub_15324((int)a1) )
    {
      sub_30748(a1);
      sub_191D0((int)a1);
      sub_18ED4(a1);
      while ( !sub_15324((int)a1) && (!a1[25] || a1 != (_DWORD *)sub_14A18() && dword_7AA24 != 3 && dword_7AA24 != 4) )
      {
        sub_142A0(&stru_7C364, "cgminer.c", "wait_lpcurrent", 9851);
        pthread_cond_wait(&stru_7C380, &stru_7C364);
        v3 = sub_1430C(&stru_7C364, "cgminer.c", "wait_lpcurrent", 9853);
        off_79D40(v3);
      }
      while ( !sub_32EB0(a1) )
      {
        if ( *((_BYTE *)a1 + 105) )
          return 0;
        if ( dword_8078C <= 1 )
          v4 = 3000;
        else
          v4 = 30000;
        sub_30140(v4);
      }
    }
    v5 = (fd_set *)&v117;
    do
    {
      v5->__fds_bits[1] = 0;
      v5 = (fd_set *)((char *)v5 + 4);
    }
    while ( v5 != (fd_set *)&readfds.__fds_bits[31] );
    v6 = a1[147];
    v7 = v6 + 31;
    if ( v6 >= 0 )
      v7 = a1[147];
    readfds.__fds_bits[v7 >> 5] |= 1 << (v6 % 32);
    timeout.tv_sec = 90;
    timeout.tv_usec = 0;
    if ( !sub_30618(a1) )
    {
      v8 = select(a1[147] + 1, &readfds, 0, 0, &timeout);
      if ( v8 <= 0 )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "Stratum select failed on pool %d with value %d", *a1, v8);
          sub_3F178(7, s, 0);
        }
        goto LABEL_32;
      }
    }
    v9 = (char *)sub_308C0(a1);
    if ( v9 )
    {
      sub_15280((int)a1);
      if ( sub_32F10(a1, v9) )
        goto LABEL_234;
      rwlock = (pthread_rwlock_t *)sub_5AF5C(v9, 0, &v119);
      if ( rwlock )
      {
        n = (_DWORD *)sub_5BC34(rwlock, "result");
        v100 = (_DWORD *)sub_5BC34(rwlock, "error");
        v12 = (_DWORD *)sub_5BC34(rwlock, "id");
        if ( v12 && *v12 != 7 )
        {
          LODWORD(v103) = sub_5C19C();
          if ( pthread_mutex_lock(&mutex) )
          {
            v15 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
              *v15,
              "cgminer.c",
              "parse_stratum_response",
              7242);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          src = (void **)dword_7C360;
          if ( dword_7C360 )
          {
            v17 = ((unsigned __int8)v103 + 17973517 + (BYTE3(v103) << 24) + (BYTE2(v103) << 16) + (BYTE1(v103) << 8))
                ^ 0x7F76D;
            v18 = (-1622558010 - v17) ^ (v17 << 8);
            v19 = (-17973517 - v17 - v18) ^ (v18 >> 13);
            v20 = (v17 - v18 - v19) ^ (v19 >> 12);
            v21 = (v18 - v19 - v20) ^ (v20 << 16);
            v22 = (v19 - v20 - v21) ^ (v21 >> 5);
            v23 = (v20 - v21 - v22) ^ (v22 >> 3);
            v24 = *(_DWORD *)dword_7C360;
            ptr = **(_DWORD ***)dword_7C360;
            v25 = ptr[3
                    * (((v22 - v23 - ((v21 - v22 - v23) ^ (v23 << 10)))
                      ^ (((v21 - v22 - v23) ^ (v23 << 10)) >> 15))
                     & (*(_DWORD *)(*(_DWORD *)dword_7C360 + 4) - 1))];
            if ( v25 )
              v16 = v25 - *(_DWORD *)(v24 + 20);
            else
              v16 = 0;
            while ( v16 )
            {
              if ( *(_DWORD *)(v16 + 24) == 4 && !memcmp(*(const void **)(v16 + 20), &v103, 4u) )
              {
                v91 = *(_DWORD *)(v16 + 4);
                if ( v91 || *(_DWORD *)(v16 + 8) )
                {
                  v27 = *(_DWORD *)(v24 + 20);
                  if ( v16 == *(_DWORD *)(v24 + 16) - v27 )
                    *(_DWORD *)(v24 + 16) = v91 + v27;
                  v28 = *(_DWORD *)(v16 + 4);
                  if ( v28 )
                    *(_DWORD *)(v28 + *((_DWORD *)*src + 5) + 8) = *(_DWORD *)(v16 + 8);
                  else
                    dword_7C360 = *(_DWORD *)(v16 + 8);
                  v29 = *(_DWORD *)(v16 + 8);
                  if ( v29 )
                    *(_DWORD *)(v29 + *(_DWORD *)(*(_DWORD *)dword_7C360 + 20) + 4) = *(_DWORD *)(v16 + 4);
                  v30 = (int **)dword_7C360;
                  v31 = 3 * ((*(_DWORD *)(*(_DWORD *)dword_7C360 + 4) - 1) & *(_DWORD *)(v16 + 28));
                  v32 = **v30 + 12 * (((*v30)[1] - 1) & *(_DWORD *)(v16 + 28));
                  --*(_DWORD *)(v32 + 4);
                  v33 = **v30;
                  if ( v16 == *(_DWORD *)(v33 + 4 * v31) )
                    *(_DWORD *)(v33 + 4 * v31) = *(_DWORD *)(v16 + 16);
                  v34 = *(_DWORD *)(v16 + 12);
                  if ( v34 )
                    *(_DWORD *)(v34 + 16) = *(_DWORD *)(v16 + 16);
                  v35 = *(_DWORD *)(v16 + 16);
                  if ( v35 )
                    *(_DWORD *)(v35 + 12) = *(_DWORD *)(v16 + 12);
                  --(*v30)[3];
                }
                else
                {
                  free(ptr);
                  free(*src);
                  dword_7C360 = 0;
                }
                --a1[187];
                break;
              }
              v26 = *(_DWORD *)(v16 + 16);
              if ( !v26 )
              {
                v16 = 0;
                break;
              }
              v16 = v26 - *(_DWORD *)(v24 + 20);
            }
          }
          else
          {
            v16 = 0;
          }
          if ( pthread_mutex_unlock(&mutex) )
          {
            v36 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v36,
              "cgminer.c",
              "parse_stratum_response",
              7249);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          off_79D40(0);
          if ( v16 )
          {
            v43 = *(_DWORD *)(v16 + 36);
            v44 = time(0);
            if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
            {
              snprintf(
                s,
                0x800u,
                "Pool %d stratum share result lag time %d seconds",
                **(_DWORD **)(v43 + 316),
                v44 - *(_DWORD *)(v16 + 48));
              sub_3F178(7, s, 0);
            }
            *(_DWORD *)s = bswap32(*(_DWORD *)(v43 + 272));
            *(_DWORD *)&s[4] = bswap32(*(_DWORD *)(v43 + 268));
            *(_DWORD *)&s[8] = bswap32(*(_DWORD *)(v43 + 264));
            *(_DWORD *)&s[12] = bswap32(*(_DWORD *)(v43 + 260));
            *(_DWORD *)&s[16] = bswap32(*(_DWORD *)(v43 + 256));
            *(_DWORD *)&s[20] = bswap32(*(_DWORD *)(v43 + 252));
            *(_DWORD *)&s[24] = bswap32(*(_DWORD *)(v43 + 248));
            *(_DWORD *)&s[28] = bswap32(*(_DWORD *)(v43 + 244));
            if ( s[0] )
            {
              i = 0;
            }
            else
            {
              for ( i = 1; i != 29; ++i )
              {
                if ( s[i] )
                  break;
              }
            }
            v47 = bswap32(*(_DWORD *)&s[i]);
            v48 = *(_QWORD *)(v43 + 440);
            round(v138, v45);
            v49 = sub_5EE18(v48, HIDWORD(v48));
            sub_E144(*(_QWORD *)(v43 + 288), v108, 0x10u, 0);
            if ( *(_BYTE *)(v43 + 339) )
              v50 = " BLOCK!";
            else
              v50 = &byte_6DF60;
            snprintf(v109, 0x40u, "%08lx Diff %s/%llu%s", v47, v108, v49, v50);
            v51 = *(_DWORD **)(v43 + 316);
            v52 = sub_13DE8(*(_DWORD *)(v43 + 312));
            if ( n && (*n == 5 || *(_BYTE *)(v43 + 384) && *n == 7) )
            {
              if ( pthread_mutex_lock(&stru_7FE7C) )
              {
                v53 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v53,
                  "cgminer.c",
                  "share_result",
                  3821);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              ++*(_DWORD *)(v52 + 36);
              dbl_80550 = dbl_80550 + 1.0;
              ++*((_QWORD *)v51 + 1);
              *(double *)(v52 + 200) = *(double *)(v52 + 200) + *((double *)v51 + 233);
              v54 = *((double *)v51 + 233);
              dbl_80790 = v54 + dbl_80790;
              *((double *)v51 + 9) = *((double *)v51 + 9) + v54;
              if ( pthread_mutex_unlock(&stru_7FE7C) )
              {
                v55 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v55,
                  "cgminer.c",
                  "share_result",
                  3833);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              off_79D40(0);
              v51[6] = 0;
              *(_DWORD *)(v52 + 216) = *v51;
              v56 = time(0);
              *(_DWORD *)(v52 + 220) = v56;
              *(_QWORD *)(v52 + 224) = *(_QWORD *)(v43 + 440);
              v51[90] = v56;
              *((_QWORD *)v51 + 46) = *(_QWORD *)(v43 + 440);
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                strcpy(s, "PROOF OF WORK RESULT: true (yay!!!)");
                sub_3F178(7, s, 0);
              }
              if ( !byte_80EA8 && !byte_80CC0 )
              {
                if ( dword_802C8 <= 1 )
                {
                  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
                  {
                    snprintf(
                      s,
                      0x800u,
                      "Accepted %s %s %d %s%s",
                      v109,
                      *(const char **)(*(_DWORD *)(v52 + 4) + 8),
                      *(_DWORD *)(v52 + 8),
                      &byte_6DF60,
                      &byte_6DF60);
                    sub_3F178(7, s, 0);
                  }
                }
                else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
                {
                  snprintf(
                    s,
                    0x800u,
                    "Accepted %s %s %d pool %d %s%s",
                    v109,
                    *(const char **)(*(_DWORD *)(v52 + 4) + 8),
                    *(_DWORD *)(v52 + 8),
                    **(_DWORD **)(v43 + 316),
                    &byte_6DF60,
                    &byte_6DF60);
                  sub_3F178(7, s, 0);
                }
              }
              sub_1D318("accept", (_DWORD *)v43);
              if ( dword_7AF34 && (double)dword_7AF34 <= dbl_80790 )
              {
                if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                {
                  snprintf(s, 0x800u, "Successfully mined %d accepted shares as requested and exiting.", dword_7AF34);
                  sub_3F178(4, s, 0);
                }
                sub_184A8();
              }
              if ( v51[25] == 2 )
              {
                if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                {
                  snprintf(s, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *v51);
                  sub_3F178(4, s, 0);
                }
                sub_BFC8((int)v51);
                sub_199D4(0);
              }
              if ( *(_BYTE *)(v43 + 339) )
                sub_1611C();
            }
            else
            {
              if ( pthread_mutex_lock(&stru_7FE7C) )
              {
                v57 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v57,
                  "cgminer.c",
                  "share_result",
                  3876);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              ++*(_DWORD *)(v52 + 40);
              dbl_808A0 = dbl_808A0 + 1.0;
              ++*((_QWORD *)v51 + 2);
              *(double *)(v52 + 208) = *(double *)(v52 + 208) + *(double *)(v43 + 440);
              v58 = *(double *)(v43 + 440);
              dbl_80818 = v58 + dbl_80818;
              *((double *)v51 + 10) = *((double *)v51 + 10) + v58;
              ++v51[6];
              if ( pthread_mutex_unlock(&stru_7FE7C) )
              {
                v59 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v59,
                  "cgminer.c",
                  "share_result",
                  3884);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              off_79D40(0);
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                strcpy(s, "PROOF OF WORK RESULT: false (booooo)");
                sub_3F178(7, s, 0);
              }
              if ( !byte_80EA8 && !byte_80CC0 )
              {
                strcpy(v108, "reject");
                memset(&v108[7], 0, 0x1Du);
                v106[0] = 0;
                if ( dword_802C8 > 1 )
                  snprintf(v105, 0x14u, "pool %d", **(_DWORD **)(v43 + 316));
                else
                  v105[0] = 0;
                if ( !*(_BYTE *)(v43 + 384) )
                  n = (_DWORD *)sub_5BC34(rwlock, "reject-reason");
                if ( n )
                {
                  srca = (const char *)sub_5C084(n);
                  v60 = strlen(srca);
                  if ( v60 >= 0x1C )
                    v60 = 28;
                  na = v60;
                  qmemcpy(v106, " (", sizeof(v106));
                  memcpy(dest, srca, v60);
                  v101 = &v138[na];
                  *(v101 - 2574) = 41;
                  *(v101 - 2573) = 0;
                  memcpy(&v108[7], srca, na);
                  v108[6] = 58;
                  *(v101 - 2537) = 0;
                }
                else if ( *(_BYTE *)(v43 + 340) && v100 )
                {
                  if ( *v100 == 1 )
                  {
                    v61 = (_DWORD *)sub_5BEB8(v100, 1);
                    if ( v61 && *v61 == 2 )
                    {
                      v62 = (const char *)sub_5C084(v61);
                      snprintf(v106, 0x1Fu, " (%s)", v62);
                    }
                  }
                  else if ( *v100 == 2 )
                  {
                    v63 = (const char *)sub_5C084(v100);
                    snprintf(v106, 0x1Fu, " (%s)", v63);
                  }
                }
                if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
                {
                  snprintf(
                    s,
                    0x800u,
                    "Rejected %s %s %d %s%s %s%s",
                    v109,
                    *(const char **)(*(_DWORD *)(v52 + 4) + 8),
                    *(_DWORD *)(v52 + 8),
                    v105,
                    v106,
                    &byte_6DF60,
                    &byte_6DF60);
                  sub_3F178(7, s, 0);
                }
                sub_1D318(v108, (_DWORD *)v43);
              }
              v64 = v51[6];
              if ( v64 > 10
                && !*(_BYTE *)(v43 + 337)
                && byte_80380
                && dword_8078C > 1
                && (double)v64 > dbl_80550 / dbl_79458 * 60.0 * 3.0 )
              {
                if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                {
                  snprintf(s, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *v51, v51[6]);
                  sub_3F178(4, s, 0);
                }
                if ( v51[25] == 1 )
                  --dword_8078C;
                v51[25] = 2;
                if ( v51 == (_DWORD *)sub_14A18() )
                  sub_199D4(0);
                v51[6] = 0;
              }
            }
            sub_11F58(*(void ***)(v16 + 36));
            *(_DWORD *)(v16 + 36) = 0;
            free((void *)v16);
            v14 = 1;
          }
          else if ( n )
          {
            sub_142A0((pthread_mutex_t *)(a1 + 55), "cgminer.c", "parse_stratum_response", 7259);
            sub_13B28((pthread_rwlock_t *)(a1 + 61), "cgminer.c", "parse_stratum_response", 7259);
            sub_1430C((pthread_mutex_t *)(a1 + 55), "cgminer.c", "parse_stratum_response", 7259);
            v37 = *((double *)a1 + 233);
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
            {
              v38 = _errno_location();
              snprintf(
                s,
                0x800u,
                "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v38,
                "cgminer.c",
                "parse_stratum_response",
                7261);
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
            off_79D40(0);
            if ( *n == 5 )
            {
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                snprintf(s, 0x800u, "Accepted untracked stratum share from pool %d", *a1);
                sub_3F178(7, s, 0);
              }
              if ( pthread_mutex_lock(&stru_7FE7C) )
              {
                v39 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v39,
                  "cgminer.c",
                  "parse_stratum_response",
                  7269);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              dbl_80550 = dbl_80550 + 1.0;
              ++*((_QWORD *)a1 + 1);
              dbl_80790 = v37 + dbl_80790;
              *((double *)a1 + 9) = *((double *)a1 + 9) + v37;
              if ( pthread_mutex_unlock(&stru_7FE7C) )
              {
                v40 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v40,
                  "cgminer.c",
                  "parse_stratum_response",
                  7274);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
            }
            else
            {
              if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
              {
                snprintf(s, 0x800u, "Rejected untracked stratum share from pool %d", *a1);
                sub_3F178(7, s, 0);
              }
              if ( pthread_mutex_lock(&stru_7FE7C) )
              {
                v41 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v41,
                  "cgminer.c",
                  "parse_stratum_response",
                  7280);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
              dbl_808A0 = dbl_808A0 + 1.0;
              ++*((_QWORD *)a1 + 2);
              dbl_80818 = v37 + dbl_80818;
              *((double *)a1 + 10) = *((double *)a1 + 10) + v37;
              if ( pthread_mutex_unlock(&stru_7FE7C) )
              {
                v42 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v42,
                  "cgminer.c",
                  "parse_stratum_response",
                  7285);
                sub_3F178(3, s, 1);
                sub_134A4(1);
              }
            }
            off_79D40(0);
            v14 = 0;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          if ( v100 )
          {
            v13 = (char *)sub_5942C(v100, 3);
          }
          else
          {
            v13 = (char *)malloc(0x11u);
            if ( v13 )
              strcpy(v13, "(unknown reason)");
          }
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(s, 0x800u, "JSON-RPC non method decode failed: %s", v13);
            sub_3F178(7, s, 0);
          }
          free(v13);
          v14 = 0;
        }
        nr_readers = rwlock->__nr_readers;
        if ( nr_readers != -1 )
        {
          v65 = nr_readers - 1;
          rwlock->__nr_readers = v65;
          if ( !v65 )
            sub_5C394();
        }
        if ( v14 )
        {
LABEL_234:
          if ( !*((_BYTE *)a1 + 688) )
            goto LABEL_274;
          v66 = sub_18540();
          *((_BYTE *)a1 + 688) = 0;
          if ( dword_79C4C == 1 )
          {
            sub_1B920((int)a1, (int)v66);
LABEL_273:
            *((_BYTE *)v66 + 336) = 1;
            sub_21624((int)v66);
            sub_11F58((void **)v66);
            goto LABEL_274;
          }
          if ( dword_79C4C )
            goto LABEL_273;
          if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
          {
            v67 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
              *v67,
              "cgminer.c",
              "gen_stratum_work_sia",
              8452);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          rwlocka = (pthread_rwlock_t *)(a1 + 61);
          if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
          {
            v68 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
              *v68,
              "cgminer.c",
              "gen_stratum_work_sia",
              8452);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          v103 = *((_QWORD *)a1 + 78);
          memcpy((void *)(a1[396] + a1[398]), &v103, a1[158]);
          v69 = *((_QWORD *)a1 + 78);
          *((_QWORD *)v66 + 44) = v69;
          *((_QWORD *)a1 + 78) = v69 + 1;
          v66[90] = a1[158];
          if ( pthread_rwlock_unlock(rwlocka) )
          {
            v70 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v70,
              "cgminer.c",
              "gen_stratum_work_sia",
              8462);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          if ( pthread_rwlock_rdlock(rwlocka) )
          {
            v71 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
              *v71,
              "cgminer.c",
              "gen_stratum_work_sia",
              8462);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
          {
            v72 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v72,
              "cgminer.c",
              "gen_stratum_work_sia",
              8462);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          sub_E4F8(a1[396], (int)v109, a1[397]);
          v119 = *(_DWORD *)v109;
          v120 = v110;
          v121 = v111;
          v122 = v112;
          v123 = v113;
          v124 = v114;
          v125 = v115;
          v126 = v116;
          if ( (int)a1[431] > 0 )
          {
            v73 = 0;
            do
            {
              v74 = *(int **)(a1[168] + 4 * v73);
              v75 = v74[1];
              v76 = v74[2];
              v77 = v74[3];
              v127 = *v74;
              v128 = v75;
              v129 = v76;
              v130 = v77;
              v78 = v74[5];
              v79 = v74[6];
              v80 = v74[7];
              v131 = v74[4];
              v132 = v78;
              v133 = v79;
              v134 = v80;
              sub_E4F8((int)&v119, (int)v109, 64);
              v119 = *(_DWORD *)v109;
              v120 = v110;
              v121 = v111;
              v122 = v112;
              v123 = v113;
              v124 = v114;
              v125 = v115;
              v126 = v116;
              ++v73;
            }
            while ( v73 < a1[431] );
          }
          for ( j = 0; j != 32; j += 4 )
            *(_DWORD *)&v109[j] = bswap32(*(int *)((char *)&v119 + j));
          memcpy(v66, a1 + 399, 0x80u);
          v82 = v110;
          v83 = v111;
          v84 = v112;
          v66[9] = *(_DWORD *)v109;
          v66[10] = v82;
          v66[11] = v83;
          v66[12] = v84;
          v85 = v114;
          v86 = v115;
          v87 = v116;
          v66[13] = v113;
          v66[14] = v85;
          v66[15] = v86;
          v66[16] = v87;
          *((_QWORD *)v66 + 46) = *((_QWORD *)a1 + 233);
          v66[86] = _strdup((const char *)a1[166]);
          v66[95] = _strdup((const char *)a1[153]);
          v66[91] = _strdup((const char *)a1 + 1852);
          if ( pthread_rwlock_unlock(rwlocka) )
          {
            v88 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v88,
              "cgminer.c",
              "gen_stratum_work_sia",
              8489);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          off_79D40(0);
          if ( byte_7CC61 )
          {
            v89 = (char *)sub_2D0B4(v66, 112);
            v90 = (char *)sub_2D0B4(v109, 32);
            if ( byte_7CC61 )
            {
              if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
              {
                snprintf(s, 0x800u, "Generated stratum merkle %s", v90);
                sub_3F178(7, s, 0);
                if ( byte_7CC61 )
                {
                  if ( !byte_7FE78 )
                    goto LABEL_262;
LABEL_264:
                  snprintf(s, 0x800u, "Generated stratum header %s", v89);
                  sub_3F178(7, s, 0);
                  if ( byte_7CC61 )
                  {
                    if ( !byte_7FE78 )
                      goto LABEL_266;
                    goto LABEL_268;
                  }
                }
              }
              else
              {
LABEL_262:
                if ( byte_7CC60 || dword_7A52C > 6 )
                  goto LABEL_264;
LABEL_266:
                if ( byte_7CC60 || dword_7A52C > 6 )
                {
LABEL_268:
                  snprintf(
                    s,
                    0x800u,
                    "Work job_id %s nonce2 %llu ntime %s",
                    (const char *)v66[86],
                    *((_QWORD *)v66 + 44),
                    (const char *)v66[91]);
                  sub_3F178(7, s, 0);
                }
              }
            }
            free(v89);
            free(v90);
          }
          sub_12B3C((int)(v66 + 53));
          ++dword_80678;
          if ( time(0) - dword_7C3D0 > 5 )
          {
            dword_7C3D0 = time(0);
            dword_7C3D4 = dword_80678;
          }
          v66[79] = a1;
          *((_BYTE *)v66 + 340) = 1;
          v66[76] = 0;
          *((_BYTE *)v66 + 336) = 0;
          *((_BYTE *)v66 + 504) = 83;
          v66[99] = dword_7AED8;
          v66[75] = 60;
          sub_E3D8((int)v66);
          sub_30050(v66 + 80);
          goto LABEL_273;
        }
      }
      else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "JSON decode failed(%d): %s", v119, v135);
        sub_3F178(7, s, 0);
      }
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Unknown stratum msg: %s", v9);
        sub_3F178(7, s, 0);
      }
LABEL_274:
      free(v9);
    }
    else
    {
LABEL_32:
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Stratum connection to pool %d interrupted", *a1);
        sub_3F178(7, s, 0);
      }
      ++a1[33];
      ++dword_8056C;
      sub_142A0((pthread_mutex_t *)(a1 + 55), "cgminer.c", "supports_resume", 7422);
      sub_13B28((pthread_rwlock_t *)(a1 + 61), "cgminer.c", "supports_resume", 7422);
      sub_1430C((pthread_mutex_t *)(a1 + 55), "cgminer.c", "supports_resume", 7422);
      v10 = a1[159];
      v11 = sub_13B94((pthread_rwlock_t *)(a1 + 61), "cgminer.c", "supports_resume", 7424);
      off_79D40(v11);
      if ( !v10 || byte_807EC )
        sub_191D0((int)a1);
      sub_18ED4(a1);
      if ( a1 == (_DWORD *)sub_14A18() )
        sub_1611C();
      while ( !sub_32EB0(a1) )
      {
        if ( *((_BYTE *)a1 + 105) )
          return 0;
        sub_30140(30000);
      }
    }
  }
  sub_30748(a1);
  return 0;
}
