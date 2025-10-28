int __fastcall sub_252D0(_DWORD *a1)
{
  pthread_t v2; // r0
  _DWORD *v3; // r0
  fd_set *v4; // r3
  __fd_mask *v5; // r4
  int v6; // r3
  int v7; // r2
  bool v8; // nf
  int v9; // r2
  int v10; // r1
  int v11; // r0
  char *v12; // r5
  int v14; // r0
  int v15; // r2
  int v16; // r4
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r7
  void **v20; // r6
  int v21; // r0
  unsigned int v22; // r2
  _DWORD *v23; // r9
  unsigned int v24; // r12
  unsigned int v25; // r3
  int v26; // r7
  unsigned int v27; // r2
  unsigned int v28; // r12
  int v29; // r3
  int v30; // r7
  int v31; // lr
  _DWORD *v32; // r7
  unsigned __int8 *v33; // r2
  int v34; // r12
  unsigned __int8 *v35; // r2
  int v36; // r1
  int v37; // r8
  _DWORD *v38; // r2
  int v39; // r3
  int v40; // r2
  int v41; // r2
  int v42; // r3
  int v43; // r9
  int v44; // r8
  time_t v45; // r12
  unsigned __int8 *v46; // r3
  __int64 v48; // d0
  unsigned int v49; // r9
  char *v50; // r12
  __int64 v51; // kr10_8
  double v52; // d5
  double v53; // d4
  double v54; // d7
  double v55; // d6
  int v56; // r1
  const char *v57; // r7
  size_t v58; // r3
  char *v59; // r12
  int v60; // r1
  void **v61; // r6
  unsigned int v62; // r3
  unsigned int v63; // r3
  _DWORD *v64; // r0
  int v65; // r7
  int v66; // r3
  char *v67; // r7
  unsigned int nr_readers; // r3
  unsigned int v69; // r3
  size_t v70; // r2
  void *v71; // r0
  unsigned int v72; // r3
  unsigned int v73; // r2
  int v74; // r9
  int v75; // r6
  _DWORD *v76; // r12
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r5
  _BYTE *v84; // r2
  unsigned int v85; // t1
  int v86; // r1
  int v87; // r2
  int v88; // r3
  int v89; // r0
  int v90; // r2
  int v91; // r3
  int v92; // r2
  const char *v93; // r5
  int v94; // r3
  int v95; // r4
  const char *v96; // r5
  int v97; // r3
  int v98; // r4
  const char *v99; // r5
  int v100; // r3
  int v101; // r4
  const char *v102; // r5
  int v103; // r3
  int v104; // r4
  double v105; // d8
  double v106; // d5
  double v107; // d6
  double v108; // d8
  __int64 v109; // kr18_8
  char *v110; // r0
  const char *v111; // r0
  char *v112; // r4
  double v113; // d5
  double v114; // d4
  double v115; // d7
  double v116; // d7
  double v117; // d5
  double v118; // d7
  int v119; // r2
  time_t v120; // r0
  int v121; // r3
  int *v122; // r0
  double v123; // d5
  double v124; // d7
  __int64 v125; // kr20_8
  double v126; // d6
  int *v127; // r0
  int *v128; // r0
  int v129; // r1
  int *v130; // r0
  time_t *v131; // r0
  const char *v132; // r0
  int *v133; // r0
  int *v134; // r0
  const char *v135; // r2
  int v136; // r4
  int timeout_4; // [sp+4h] [bp-A80h]
  pthread_rwlock_t *rwlock; // [sp+1Ch] [bp-A68h]
  pthread_rwlock_t *rwlocka; // [sp+1Ch] [bp-A68h]
  pthread_rwlock_t *rwlockb; // [sp+1Ch] [bp-A68h]
  _DWORD *v141; // [sp+20h] [bp-A64h]
  char *v142; // [sp+20h] [bp-A64h]
  __int64 v143; // [sp+30h] [bp-A54h]
  int v144; // [sp+30h] [bp-A54h]
  _DWORD *n; // [sp+3Ch] [bp-A48h]
  size_t na; // [sp+3Ch] [bp-A48h]
  time_t *timer; // [sp+44h] [bp-A40h]
  int v148; // [sp+50h] [bp-A34h]
  struct timeval timeout; // [sp+54h] [bp-A30h] BYREF
  char s[16]; // [sp+5Ch] [bp-A28h] BYREF
  char v151[20]; // [sp+6Ch] [bp-A18h] BYREF
  char v152[2]; // [sp+80h] [bp-A04h] BYREF
  _BYTE dest[30]; // [sp+82h] [bp-A02h] BYREF
  _BYTE src[36]; // [sp+A0h] [bp-9E4h] BYREF
  int v155; // [sp+C4h] [bp-9C0h] BYREF
  int v156; // [sp+C8h] [bp-9BCh]
  int v157; // [sp+CCh] [bp-9B8h]
  int v158; // [sp+D0h] [bp-9B4h]
  int v159; // [sp+D4h] [bp-9B0h]
  int v160; // [sp+D8h] [bp-9ACh]
  int v161; // [sp+DCh] [bp-9A8h]
  int v162; // [sp+E0h] [bp-9A4h]
  char v163; // [sp+100h] [bp-984h] BYREF
  fd_set v164; // [sp+104h] [bp-980h] BYREF
  int v165; // [sp+184h] [bp-900h] BYREF
  int v166; // [sp+188h] [bp-8FCh]
  int v167; // [sp+18Ch] [bp-8F8h]
  int v168; // [sp+190h] [bp-8F4h]
  int v169; // [sp+194h] [bp-8F0h]
  int v170; // [sp+198h] [bp-8ECh]
  int v171; // [sp+19Ch] [bp-8E8h]
  _DWORD v172[16]; // [sp+1A0h] [bp-8E4h] BYREF
  char v173[160]; // [sp+1E0h] [bp-8A4h] BYREF
  _DWORD v174[513]; // [sp+280h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/RStratum", *a1);
  sub_2D764(s);
  do
  {
LABEL_2:
    v3 = a1;
    if ( *((_BYTE *)a1 + 105) )
    {
LABEL_16:
      sub_2AC10(v3);
      return 0;
    }
    while ( 1 )
    {
      if ( !sub_2AB58(v3) && !sub_1E394((int)a1) )
      {
        sub_2AC10(a1);
        sub_1FD64((int)a1);
        sub_1EEFC(a1);
        if ( sub_1E394((int)a1) )
          goto LABEL_32;
        while ( !a1[25] || a1 != (_DWORD *)sub_1E098() && (unsigned int)(dword_6DB74 - 3) > 1 )
        {
          if ( pthread_mutex_lock(&mutex) )
          {
            v93 = "wait_lpcurrent";
            v94 = *_errno_location();
            v95 = 9851;
            goto LABEL_174;
          }
          pthread_cond_wait(&cond, &mutex);
          if ( pthread_mutex_unlock(&mutex) )
          {
            v99 = "wait_lpcurrent";
            v100 = *_errno_location();
            v101 = 9853;
            goto LABEL_179;
          }
          off_6CB70();
          if ( sub_1E394((int)a1) )
            break;
        }
LABEL_32:
        while ( !sub_2C77C(a1) )
        {
          if ( *((_BYTE *)a1 + 105) )
            return 0;
          if ( dword_73520 <= 1 )
            v14 = 3000;
          else
            v14 = 30000;
          sub_2A7F4(v14);
        }
      }
      v4 = (fd_set *)&v163;
      v5 = &v164.__fds_bits[31];
      do
      {
        v4->__fds_bits[1] = 0;
        v4 = (fd_set *)((char *)v4 + 4);
      }
      while ( &v164.__fds_bits[31] != (__fd_mask *)v4 );
      v6 = a1[147];
      timeout.tv_usec = 0;
      timeout.tv_sec = 90;
      v7 = (v6 + 31) & (v6 >> 31);
      if ( v6 >= 0 )
        v7 = v6;
      v8 = -v6 < 0;
      v9 = v7 >> 5;
      v10 = -v6 & 0x1F;
      LOBYTE(v6) = v6 & 0x1F;
      if ( !v8 )
        v6 = -v10;
      v164.__fds_bits[v9] |= 1 << v6;
      if ( !sub_2AB58(a1) )
      {
        v11 = select(a1[147] + 1, &v164, 0, 0, &timeout);
        if ( v11 <= 0 )
          break;
      }
      v12 = (char *)sub_2AFE4(a1);
      if ( !v12 )
        goto LABEL_34;
      sub_1E37C((int)a1);
      if ( !sub_2D320(a1, v12) )
      {
        v17 = sub_475C8(v12, 0, &v165);
        rwlock = (pthread_rwlock_t *)v17;
        if ( !v17 )
        {
          if ( !byte_6FA71 )
            goto LABEL_15;
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
            goto LABEL_154;
          snprintf((char *)v174, 0x800u, "JSON decode failed(%d): %s", v165, v173);
          sub_343C4(7, v174, 0);
          goto LABEL_152;
        }
        n = (_DWORD *)sub_47F24(v17, "result");
        timer = (time_t *)sub_47F24(rwlock, "error");
        v18 = (_DWORD *)sub_47F24(rwlock, "id");
        if ( !v18 || *v18 == 7 )
        {
          if ( timer )
          {
            v67 = (char *)sub_46454(timer, 3);
          }
          else
          {
            v110 = (char *)malloc(0x11u);
            v67 = v110;
            if ( v110 )
              strcpy(v110, "(unknown reason)");
          }
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf((char *)v174, 0x800u, "JSON-RPC non method decode failed: %s", v67);
            sub_343C4(7, v174, 0);
          }
          free(v67);
          nr_readers = rwlock->__nr_readers;
          if ( nr_readers != -1 )
            goto LABEL_150;
          goto LABEL_152;
        }
        v19 = sub_481D0();
        v148 = v19;
        if ( pthread_mutex_lock(&stru_6DDB4) )
        {
          v93 = "parse_stratum_response";
          v94 = *_errno_location();
          v95 = 7242;
          goto LABEL_174;
        }
        v20 = (void **)dword_6DDCC;
        if ( !dword_6DDCC )
          goto LABEL_185;
        v21 = *(_DWORD *)dword_6DDCC;
        v22 = (unsigned int)&unk_7F76D
            ^ ((v19 & 0xFF000000) + (unsigned __int8)v19 + 17973517 + (v19 & 0xFF0000) + (v19 & 0xFF00));
        v23 = **(_DWORD ***)dword_6DDCC;
        v24 = (-1622558010 - v22) ^ (v22 << 8);
        v25 = (-17973517 - v22 - v24) ^ (v24 >> 13);
        v26 = (v22 - v24 - v25) ^ (v25 >> 12);
        v27 = (v24 - v25 - v26) ^ (v26 << 16);
        v28 = (v25 - v26 - v27) ^ (v27 >> 5);
        v29 = (v26 - v27 - v28) ^ (v28 >> 3);
        v30 = v23[3
                * ((*(_DWORD *)(*(_DWORD *)dword_6DDCC + 4) - 1)
                 & ((v28 - v29 - ((v27 - v28 - v29) ^ (v29 << 10)))
                  ^ (((v27 - v28 - v29) ^ (v29 << 10)) >> 15)))];
        if ( !v30 )
        {
LABEL_185:
          if ( pthread_mutex_unlock(&stru_6DDB4) )
          {
LABEL_256:
            v99 = "parse_stratum_response";
            v100 = *_errno_location();
            v101 = 7249;
LABEL_179:
            snprintf(
              (char *)v174,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              v100,
              "cgminer.c",
              v99,
              v101);
            goto LABEL_175;
          }
          off_6CB70();
          if ( n )
          {
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
            {
              v134 = _errno_location();
              v135 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
              v136 = 7259;
              goto LABEL_301;
            }
            if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 61)) )
            {
              v134 = _errno_location();
              v135 = "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
              v136 = 7259;
LABEL_301:
              snprintf((char *)v174, 0x800u, v135, *v134, "cgminer.c", "parse_stratum_response", v136);
LABEL_175:
              sub_343C4(3, v174, 1);
              sub_1B070(1, 1);
            }
            if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
            {
              v134 = _errno_location();
              v136 = 7259;
              goto LABEL_304;
            }
            v105 = *((double *)a1 + 233);
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
            {
              v134 = _errno_location();
              v135 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
              v136 = 7261;
              goto LABEL_301;
            }
            off_6CB70();
            if ( *n == 5 )
            {
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf((char *)v174, 0x800u, "Accepted untracked stratum share from pool %d", *a1);
                sub_343C4(7, v174, 0);
              }
              if ( pthread_mutex_lock(&stru_73A00) )
                sub_1BF10("parse_stratum_response", 7269);
              v123 = *((double *)a1 + 9) + v105;
              v124 = dbl_73790 + 1.0;
              v125 = *((_QWORD *)a1 + 1) + 1LL;
              v126 = dbl_72D90 + v105;
              a1[2] = v125;
              *((double *)a1 + 9) = v123;
              a1[3] = HIDWORD(v125);
              dbl_73790 = v124;
              dbl_72D90 = v126;
              if ( pthread_mutex_unlock(&stru_73A00) )
                sub_1BF54("parse_stratum_response", 7274);
            }
            else
            {
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                snprintf((char *)v174, 0x800u, "Rejected untracked stratum share from pool %d", *a1);
                sub_343C4(7, v174, 0);
              }
              if ( pthread_mutex_lock(&stru_73A00) )
              {
                v134 = _errno_location();
                v135 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
                v136 = 7280;
                goto LABEL_301;
              }
              v106 = *((double *)a1 + 10) + v105;
              v107 = dbl_73CA8 + 1.0;
              v108 = dbl_72E30 + v105;
              v109 = *((_QWORD *)a1 + 2) + 1LL;
              a1[4] = v109;
              *((double *)a1 + 10) = v106;
              a1[5] = HIDWORD(v109);
              dbl_73CA8 = v107;
              dbl_72E30 = v108;
              if ( pthread_mutex_unlock(&stru_73A00) )
              {
                v134 = _errno_location();
                v136 = 7285;
LABEL_304:
                v135 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
                goto LABEL_301;
              }
            }
            off_6CB70();
            nr_readers = rwlock->__nr_readers;
            if ( nr_readers != -1 )
            {
LABEL_150:
              v69 = nr_readers - 1;
              rwlock->__nr_readers = v69;
              if ( !v69 )
                sub_482FC(rwlock);
            }
          }
          else
          {
            nr_readers = rwlock->__nr_readers;
            if ( nr_readers != -1 )
              goto LABEL_150;
          }
LABEL_152:
          if ( byte_6FA71 )
          {
            if ( !byte_73320 )
            {
LABEL_154:
              if ( !byte_6FA70 && dword_6D35C <= 6 )
                goto LABEL_15;
            }
            snprintf((char *)v174, 0x800u, "Unknown stratum msg: %s", v12);
            sub_343C4(7, v174, 0);
            goto LABEL_15;
          }
          goto LABEL_15;
        }
        v31 = *(_DWORD *)(v21 + 20);
        while ( 1 )
        {
          v32 = (_DWORD *)(v30 - v31);
          if ( !v32 )
            goto LABEL_185;
          if ( v32[6] == 4 )
          {
            v33 = (unsigned __int8 *)v32[5];
            if ( *v33 == (unsigned __int8)v148 )
            {
              v34 = v33[1];
              v35 = v33 + 1;
              if ( v34 == BYTE1(v148) && __PAIR64__(v35[2], v35[1]) == __PAIR64__(HIBYTE(v148), BYTE2(v148)) )
                break;
            }
          }
          v30 = v32[4];
          if ( !v30 )
            goto LABEL_185;
        }
        v36 = v32[1];
        v141 = v32;
        if ( v36 )
        {
          if ( v32 != (_DWORD *)(*(_DWORD *)(v21 + 16) - v31) )
            goto LABEL_66;
LABEL_247:
          *(_DWORD *)(v21 + 16) = v36 + v31;
          v36 = v32[1];
          if ( v36 )
          {
            v31 = *((_DWORD *)*v20 + 5);
LABEL_66:
            *(_DWORD *)(v36 + v31 + 8) = v32[2];
            v37 = v32[2];
LABEL_67:
            v38 = *v20;
            if ( v37 )
            {
              *(_DWORD *)(v37 + v38[5] + 4) = v32[1];
              v38 = *v20;
            }
            v39 = 3 * ((v38[1] - 1) & v32[7]);
            --*(_DWORD *)(*v38 + 4 * v39 + 4);
            v40 = *(_DWORD *)*v20;
            if ( *(_DWORD **)(v40 + 4 * v39) == v32 )
              *(_DWORD *)(v40 + 4 * v39) = v32[4];
            v41 = v32[3];
            v42 = v32[4];
            if ( v41 )
            {
              *(_DWORD *)(v41 + 16) = v42;
              v42 = v32[4];
            }
            if ( v42 )
              *(_DWORD *)(v42 + 12) = v32[3];
            --*((_DWORD *)*v20 + 3);
LABEL_76:
            --a1[187];
            v43 = pthread_mutex_unlock(&stru_6DDB4);
            if ( v43 )
              goto LABEL_256;
            off_6CB70();
            v44 = v32[9];
            v45 = time(0);
            if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              snprintf(
                (char *)v174,
                0x800u,
                "Pool %d stratum share result lag time %d seconds",
                **(_DWORD **)(v44 + 316),
                v45 - v32[12]);
              sub_343C4(7, v174, 0);
            }
            v46 = (unsigned __int8 *)v174;
            v174[0] = bswap32(*(_DWORD *)(v44 + 272));
            v174[1] = bswap32(*(_DWORD *)(v44 + 268));
            v174[2] = bswap32(*(_DWORD *)(v44 + 264));
            v174[3] = bswap32(*(_DWORD *)(v44 + 260));
            v174[4] = bswap32(*(_DWORD *)(v44 + 256));
            v174[5] = bswap32(*(_DWORD *)(v44 + 252));
            v174[6] = bswap32(*(_DWORD *)(v44 + 248));
            v174[7] = bswap32(*(_DWORD *)(v44 + 244));
            do
            {
              if ( *v46++ )
                break;
              ++v43;
            }
            while ( v43 != 29 );
            v48 = *(_QWORD *)(v44 + 440);
            v49 = bswap32(*(_DWORD *)((char *)v174 + v43));
            round();
            v143 = sub_4A178(v48, HIDWORD(v48));
            sub_16DA4(*(_QWORD *)(v44 + 288), src, 0x10u, 0);
            if ( *(_BYTE *)(v44 + 339) )
              v50 = " BLOCK!";
            else
              v50 = &byte_57FF0;
            snprintf((char *)&v155, 0x40u, "%08lx Diff %s/%llu%s", v49, src, timeout_4, v143, v50);
            v51 = *(_QWORD *)(v44 + 312);
            v144 = *(_DWORD *)(sub_1DD14(v51) + 36);
            if ( n && (*n == 5 || *(_BYTE *)(v44 + 384) && *n == 7) )
            {
              if ( pthread_mutex_lock(&stru_73A00) )
              {
                v130 = _errno_location();
                snprintf(
                  (char *)v174,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v130,
                  "cgminer.c",
                  "share_result",
                  3821);
                goto LABEL_175;
              }
              v113 = dbl_72D90;
              v114 = dbl_73790;
              ++*(_DWORD *)(v144 + 36);
              ++*(_QWORD *)(HIDWORD(v51) + 8);
              v115 = *(double *)(HIDWORD(v51) + 1864);
              dbl_73790 = v114 + 1.0;
              *(double *)(v144 + 200) = *(double *)(v144 + 200) + v115;
              v116 = *(double *)(HIDWORD(v51) + 1864);
              v117 = v113 + v116;
              v118 = *(double *)(HIDWORD(v51) + 72) + v116;
              dbl_72D90 = v117;
              *(double *)(HIDWORD(v51) + 72) = v118;
              if ( pthread_mutex_unlock(&stru_73A00) )
              {
                v128 = _errno_location();
                v129 = 3833;
LABEL_280:
                snprintf(
                  (char *)v174,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v128,
                  "cgminer.c",
                  "share_result",
                  v129);
                goto LABEL_175;
              }
              off_6CB70();
              v119 = *(_DWORD *)HIDWORD(v51);
              *(_DWORD *)(HIDWORD(v51) + 24) = 0;
              *(_DWORD *)(v144 + 216) = v119;
              v120 = time(0);
              *(_DWORD *)(v144 + 220) = v120;
              v121 = (unsigned __int8)byte_6FA71;
              *(_QWORD *)(v144 + 224) = *(_QWORD *)(v44 + 440);
              *(_DWORD *)(HIDWORD(v51) + 360) = v120;
              *(_QWORD *)(HIDWORD(v51) + 368) = *(_QWORD *)(v44 + 440);
              if ( v121 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                strcpy((char *)v174, "PROOF OF WORK RESULT: true (yay!!!)");
                sub_343C4(7, v174, 0);
              }
              if ( !byte_72D98 && !byte_735C4 )
              {
                if ( dword_72EF0 <= 1 )
                {
                  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                  {
                    snprintf(
                      (char *)v174,
                      0x800u,
                      "Accepted %s %s %d %s%s",
                      (const char *)&v155,
                      *(const char **)(*(_DWORD *)(v144 + 4) + 8),
                      *(_DWORD *)(v144 + 8),
                      &byte_57FF0,
                      &byte_57FF0);
                    sub_343C4(7, v174, 0);
                  }
                }
                else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  snprintf(
                    (char *)v174,
                    0x800u,
                    "Accepted %s %s %d pool %d %s%s",
                    (const char *)&v155,
                    *(const char **)(*(_DWORD *)(v144 + 4) + 8),
                    *(_DWORD *)(v144 + 8),
                    **(_DWORD **)(v44 + 316),
                    &byte_57FF0,
                    &byte_57FF0);
                  sub_343C4(7, v174, 0);
                }
              }
              sub_1FFF0("accept", (_DWORD *)v44);
              if ( dword_6DD3C && (double)dword_6DD3C <= dbl_72D90 )
              {
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
                {
                  snprintf(
                    (char *)v174,
                    0x800u,
                    "Successfully mined %d accepted shares as requested and exiting.",
                    dword_6DD3C);
                  sub_343C4(4, v174, 0);
                }
                sub_1B198();
              }
              if ( *(_DWORD *)(HIDWORD(v51) + 100) == 2 )
              {
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
                {
                  snprintf(
                    (char *)v174,
                    0x800u,
                    "Rejecting pool %d now accepting shares, re-enabling!",
                    *(_DWORD *)HIDWORD(v51));
                  sub_343C4(4, v174, 0);
                }
                if ( *(_DWORD *)(HIDWORD(v51) + 100) != 1 )
                  sub_1747C((_DWORD *)(HIDWORD(v51) + 100));
                sub_1F158(0);
              }
              if ( *(_BYTE *)(v44 + 339) )
                sub_1B73C();
            }
            else
            {
              if ( pthread_mutex_lock(&stru_73A00) )
              {
                v133 = _errno_location();
                snprintf(
                  (char *)v174,
                  0x800u,
                  "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v133,
                  "cgminer.c",
                  "share_result",
                  3876);
                goto LABEL_175;
              }
              v52 = dbl_72E30;
              ++*(_DWORD *)(v144 + 40);
              ++*(_QWORD *)(HIDWORD(v51) + 16);
              v53 = dbl_73CA8 + 1.0;
              *(double *)(v144 + 208) = *(double *)(v144 + 208) + *(double *)(v44 + 440);
              v54 = *(double *)(v44 + 440);
              v55 = *(double *)(HIDWORD(v51) + 80);
              v56 = *(_DWORD *)(HIDWORD(v51) + 24);
              dbl_73CA8 = v53;
              *(_DWORD *)(HIDWORD(v51) + 24) = v56 + 1;
              dbl_72E30 = v52 + v54;
              *(double *)(HIDWORD(v51) + 80) = v55 + v54;
              if ( pthread_mutex_unlock(&stru_73A00) )
              {
                v128 = _errno_location();
                v129 = 3884;
                goto LABEL_280;
              }
              off_6CB70();
              if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                strcpy((char *)v174, "PROOF OF WORK RESULT: false (booooo)");
                sub_343C4(7, v174, 0);
              }
              if ( !byte_72D98 && !byte_735C4 )
              {
                strcpy(src, "reject");
                memset(&src[7], (unsigned __int8)byte_735C4, 0x1Du);
                v152[0] = 0;
                if ( dword_72EF0 > 1 )
                  snprintf(v151, 0x14u, "pool %d", **(_DWORD **)(v44 + 316));
                else
                  v151[0] = 0;
                if ( !*(_BYTE *)(v44 + 384) )
                  n = (_DWORD *)sub_47F24(rwlock, "reject-reason");
                if ( n )
                {
                  v57 = (const char *)sub_4813C(n);
                  v58 = strlen(v57);
                  if ( v58 >= 0x1C )
                    v58 = 28;
                  *(_WORD *)v152 = 10272;
                  na = v58;
                  memcpy(dest, v57, v58);
                  v59 = &v152[na];
                  v59[2] = 41;
                  v59[3] = 0;
                  memcpy(&src[7], v57, na);
                  src[6] = 58;
                  src[na + 7] = 0;
                }
                else if ( timer && *(_BYTE *)(v44 + 340) )
                {
                  if ( *timer == 1 )
                  {
                    v131 = (time_t *)sub_48048(timer, 1);
                    if ( !v131 || *v131 != 2 )
                      goto LABEL_105;
                  }
                  else
                  {
                    if ( *timer != 2 )
                      goto LABEL_105;
                    v131 = timer;
                  }
                  v132 = (const char *)sub_4813C(v131);
                  snprintf(v152, 0x1Fu, " (%s)", v132);
                }
LABEL_105:
                if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                {
                  snprintf(
                    (char *)v174,
                    0x800u,
                    "Rejected %s %s %d %s%s %s%s",
                    (const char *)&v155,
                    *(const char **)(*(_DWORD *)(v144 + 4) + 8),
                    *(_DWORD *)(v144 + 8),
                    v151,
                    v152,
                    &byte_57FF0,
                    &byte_57FF0);
                  sub_343C4(7, v174, 0);
                }
                sub_1FFF0(src, (_DWORD *)v44);
              }
              v60 = *(_DWORD *)(HIDWORD(v51) + 24);
              if ( v60 > 10
                && !*(_BYTE *)(v44 + 337)
                && byte_73AA0
                && dword_73520 > 1
                && (double)v60 > dbl_73790 / dbl_6C2C0 * 60.0 * 3.0 )
              {
                if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
                {
                  snprintf(
                    (char *)v174,
                    0x800u,
                    "Pool %d rejected %d sequential shares, disabling!",
                    *(_DWORD *)HIDWORD(v51),
                    *(_DWORD *)(HIDWORD(v51) + 24));
                  sub_343C4(4, v174, 0);
                }
                if ( *(_DWORD *)(HIDWORD(v51) + 100) == 1 )
                  --dword_73520;
                *(_DWORD *)(HIDWORD(v51) + 100) = 2;
                if ( HIDWORD(v51) == sub_1E098() )
                  sub_1F158(0);
                *(_DWORD *)(HIDWORD(v51) + 24) = 0;
              }
            }
            v61 = (void **)v141[9];
            sub_19F2C(v61);
            free(v61);
            free(v141);
            v62 = rwlock->__nr_readers;
            if ( v62 != -1 )
            {
              v63 = v62 - 1;
              rwlock->__nr_readers = v63;
              if ( !v63 )
                sub_482FC(rwlock);
            }
            goto LABEL_14;
          }
          v37 = v32[2];
        }
        else
        {
          v37 = v32[2];
          if ( !v37 )
          {
            free(v23);
            free(*v20);
            dword_6DDCC = 0;
            goto LABEL_76;
          }
          if ( v32 == (_DWORD *)(*(_DWORD *)(v21 + 16) - v31) )
            goto LABEL_247;
        }
        v20 = (void **)v37;
        dword_6DDCC = v37;
        goto LABEL_67;
      }
LABEL_14:
      if ( *((_BYTE *)a1 + 688) )
      {
        v64 = sub_1B0EC();
        v65 = (int)v64;
        v66 = dword_6CA78;
        *((_BYTE *)a1 + 688) = 0;
        if ( v66 == 1 )
        {
          sub_20EC8((int)a1, (int)v64);
          goto LABEL_135;
        }
        if ( v66 )
        {
LABEL_135:
          *(_BYTE *)(v65 + 336) = 1;
          sub_2385C(v65);
          sub_19F2C((void **)v65);
          free((void *)v65);
          goto LABEL_15;
        }
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v93 = "gen_stratum_work_sia";
          v94 = *_errno_location();
          v95 = 8452;
LABEL_174:
          snprintf((char *)v174, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v94, "cgminer.c", v93, v95);
          goto LABEL_175;
        }
        rwlocka = (pthread_rwlock_t *)(a1 + 61);
        if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v127 = _errno_location();
          snprintf(
            (char *)v174,
            0x800u,
            "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v127,
            "cgminer.c",
            "gen_stratum_work_sia",
            8452);
          goto LABEL_175;
        }
        v70 = a1[158];
        v71 = (void *)(a1[396] + a1[398]);
        *(_QWORD *)src = *((_QWORD *)a1 + 78);
        memcpy(v71, src, v70);
        v72 = a1[156];
        v73 = a1[157];
        *((_QWORD *)a1 + 78) = __PAIR64__(v73, v72) + 1;
        *(_DWORD *)(v65 + 352) = v72;
        *(_DWORD *)(v65 + 356) = v73;
        *(_DWORD *)(v65 + 360) = a1[158];
        if ( pthread_rwlock_unlock(rwlocka) )
        {
          v102 = "gen_stratum_work_sia";
          v103 = *_errno_location();
          v104 = 8462;
          goto LABEL_181;
        }
        if ( pthread_rwlock_rdlock(rwlocka) )
        {
          v96 = "gen_stratum_work_sia";
          v97 = *_errno_location();
          v98 = 8462;
          goto LABEL_177;
        }
        v74 = pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55));
        if ( v74 )
        {
          v99 = "gen_stratum_work_sia";
          v100 = *_errno_location();
          v101 = 8462;
          goto LABEL_179;
        }
        sub_2E3D4(a1[396], a1[397]);
        sub_2E3D4((int)v174, 0x20u);
        v75 = a1[431];
        v165 = v155;
        v166 = v156;
        v167 = v157;
        v168 = v158;
        v169 = v159;
        v170 = v160;
        v171 = v161;
        v172[0] = v162;
        if ( v75 > 0 )
        {
          v142 = v12;
          do
          {
            v76 = *(_DWORD **)(a1[168] + 4 * v74++);
            v77 = v76[1];
            v78 = v76[2];
            v79 = v76[3];
            v172[1] = *v76;
            v172[2] = v77;
            v172[3] = v78;
            v172[4] = v79;
            v80 = v76[5];
            v81 = v76[6];
            v82 = v76[7];
            v172[5] = v76[4];
            v172[6] = v80;
            v172[7] = v81;
            v172[8] = v82;
            sub_2E3D4((int)&v165, 0x40u);
            sub_2E3D4((int)v174, 0x20u);
            v83 = a1[431];
            v165 = v155;
            v166 = v156;
            v167 = v157;
            v168 = v158;
            v169 = v159;
            v170 = v160;
            v171 = v161;
            v172[0] = v162;
          }
          while ( v74 < v83 );
          v12 = v142;
        }
        v84 = &src[32];
        do
        {
          v85 = v5[1];
          ++v5;
          *((_DWORD *)v84 + 1) = bswap32(v85);
          v84 += 4;
        }
        while ( v172 != v5 );
        memcpy((void *)v65, a1 + 399, 0x80u);
        v86 = v156;
        v87 = v157;
        v88 = v158;
        *(_DWORD *)(v65 + 36) = v155;
        *(_DWORD *)(v65 + 40) = v86;
        *(_DWORD *)(v65 + 44) = v87;
        *(_DWORD *)(v65 + 48) = v88;
        v89 = v159;
        v90 = v161;
        v91 = v162;
        *(_DWORD *)(v65 + 56) = v160;
        *(_DWORD *)(v65 + 52) = v89;
        *(_DWORD *)(v65 + 60) = v90;
        *(_DWORD *)(v65 + 64) = v91;
        *(_QWORD *)(v65 + 368) = *((_QWORD *)a1 + 233);
        *(_DWORD *)(v65 + 344) = _strdup((const char *)a1[166]);
        *(_DWORD *)(v65 + 380) = _strdup((const char *)a1[153]);
        *(_DWORD *)(v65 + 364) = _strdup((const char *)a1 + 1852);
        if ( pthread_rwlock_unlock(rwlocka) )
        {
          v122 = _errno_location();
          snprintf(
            (char *)v174,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v122,
            "cgminer.c",
            "gen_stratum_work_sia",
            8489);
          goto LABEL_175;
        }
        off_6CB70();
        if ( !byte_6FA71 )
        {
LABEL_170:
          sub_1A9C0(v65 + 212);
          ++dword_73CA0;
          if ( time(0) - dword_6F200 > 5 )
          {
            dword_6F200 = time(0);
            dword_6F204 = dword_73CA0;
          }
          v92 = dword_6DDF0;
          *(_BYTE *)(v65 + 340) = 1;
          *(_DWORD *)(v65 + 316) = a1;
          *(_DWORD *)(v65 + 396) = v92;
          *(_DWORD *)(v65 + 304) = 0;
          *(_BYTE *)(v65 + 336) = 0;
          *(_BYTE *)(v65 + 504) = 83;
          *(_DWORD *)(v65 + 300) = 60;
          sub_16F70(v65);
          sub_2A69C(v65 + 320);
          goto LABEL_135;
        }
        rwlockb = (pthread_rwlock_t *)sub_2826C(v65, 112);
        v111 = (const char *)sub_2826C(&v155, 32);
        v112 = (char *)v111;
        if ( byte_6FA71 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
          {
            snprintf((char *)v174, 0x800u, "Generated stratum merkle %s", v111);
            sub_343C4(7, v174, 0);
            if ( byte_6FA71 )
            {
              if ( !byte_73320 )
                goto LABEL_213;
LABEL_215:
              snprintf((char *)v174, 0x800u, "Generated stratum header %s", (const char *)rwlockb);
              sub_343C4(7, v174, 0);
              if ( byte_6FA71 )
              {
                if ( !byte_73320 )
                  goto LABEL_217;
                goto LABEL_219;
              }
            }
          }
          else
          {
LABEL_213:
            if ( byte_6FA70 || dword_6D35C > 6 )
              goto LABEL_215;
LABEL_217:
            if ( byte_6FA70 || dword_6D35C > 6 )
            {
LABEL_219:
              snprintf(
                (char *)v174,
                0x800u,
                "Work job_id %s nonce2 %llu ntime %s",
                *(const char **)(v65 + 344),
                *(_QWORD *)(v65 + 352),
                *(const char **)(v65 + 364));
              sub_343C4(7, v174, 0);
            }
          }
        }
        free(rwlockb);
        free(v112);
        goto LABEL_170;
      }
LABEL_15:
      free(v12);
      v3 = a1;
      if ( *((_BYTE *)a1 + 105) )
        goto LABEL_16;
    }
    if ( byte_6FA71 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        snprintf((char *)v174, 0x800u, "Stratum select failed on pool %d with value %d", *a1, v11);
        sub_343C4(7, v174, 0);
LABEL_34:
        if ( byte_6FA71 )
        {
          if ( !byte_73320 )
            goto LABEL_36;
LABEL_37:
          snprintf((char *)v174, 0x800u, "Stratum connection to pool %d interrupted", *a1);
          sub_343C4(7, v174, 0);
        }
      }
      else
      {
LABEL_36:
        if ( byte_6FA70 || dword_6D35C > 6 )
          goto LABEL_37;
      }
    }
    v15 = dword_7367C;
    ++a1[33];
    dword_7367C = v15 + 1;
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
    {
      v93 = "supports_resume";
      v94 = *_errno_location();
      v95 = 7422;
      goto LABEL_174;
    }
    if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 61)) )
    {
      v96 = "supports_resume";
      v97 = *_errno_location();
      v98 = 7422;
LABEL_177:
      snprintf((char *)v174, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v97, "cgminer.c", v96, v98);
      goto LABEL_175;
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
    {
      v99 = "supports_resume";
      v100 = *_errno_location();
      v101 = 7422;
      goto LABEL_179;
    }
    v16 = a1[159];
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
    {
      v102 = "supports_resume";
      v103 = *_errno_location();
      v104 = 7424;
LABEL_181:
      snprintf(
        (char *)v174,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        v103,
        "cgminer.c",
        v102,
        v104);
      goto LABEL_175;
    }
    off_6CB70();
    if ( !v16 || byte_7383C )
      sub_1FD64((int)a1);
    sub_1EEFC(a1);
    if ( a1 == (_DWORD *)sub_1E098() )
      sub_1B73C();
  }
  while ( sub_2C77C(a1) );
  while ( !*((_BYTE *)a1 + 105) )
  {
    sub_2A7F4(30000);
    if ( sub_2C77C(a1) )
      goto LABEL_2;
  }
  return 0;
}
