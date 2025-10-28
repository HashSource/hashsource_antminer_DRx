void *__fastcall sub_1FC10(_DWORD *a1)
{
  pthread_t v2; // r0
  fd_set *v3; // r3
  int v4; // r3
  int v5; // r2
  int v6; // r0
  char *v7; // r5
  int v8; // r0
  int v10; // r0
  _DWORD *v11; // r0
  void **v12; // r6
  int v13; // r4
  unsigned int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r0
  int v17; // r7
  int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  int v21; // r1
  _DWORD *v22; // r8
  int v23; // r7
  time_t v24; // r0
  int v25; // r3
  __int64 v26; // d0
  unsigned int v27; // r8
  __int64 v28; // d8
  const char *v29; // r2
  unsigned int v30; // r3
  _DWORD *v31; // r8
  double v32; // d18
  double v33; // d16
  double v34; // d16
  double v35; // d17
  int v36; // r12
  size_t v37; // r0
  size_t v38; // r12
  int v39; // r12
  int v40; // r6
  int v41; // r3
  int v42; // r2
  _DWORD *v43; // r1
  bool v44; // zf
  int v45; // r3
  int v46; // r2
  int v47; // r2
  int v48; // r3
  int v49; // r3
  _DWORD *v50; // r0
  int v51; // r4
  int v52; // r3
  int v53; // r2
  int v54; // r4
  _DWORD *v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r3
  char *v59; // r4
  int v60; // r3
  int v61; // r3
  int v62; // r3
  double v63; // d8
  double v64; // d16
  double v65; // d18
  __int64 v66; // r6
  double v67; // d18
  double v68; // d16
  double v69; // d16
  int v70; // r3
  time_t v71; // r0
  int v72; // r1
  int v73; // r0
  double *v74; // r1
  int v75; // r2
  _DWORD *v76; // r0
  const char *v77; // r0
  double v78; // d16
  double v79; // d17
  __int64 v80; // r6
  char *v81; // [sp+18h] [bp-A6Ch]
  size_t na; // [sp+1Ch] [bp-A68h]
  size_t n; // [sp+1Ch] [bp-A68h]
  int v84; // [sp+3Ch] [bp-A48h]
  int v85; // [sp+44h] [bp-A40h]
  _DWORD *src; // [sp+48h] [bp-A3Ch]
  const char *srca; // [sp+48h] [bp-A3Ch]
  _DWORD *v88; // [sp+4Ch] [bp-A38h]
  int s2; // [sp+50h] [bp-A34h] BYREF
  struct timeval timeout; // [sp+54h] [bp-A30h] BYREF
  char s[16]; // [sp+5Ch] [bp-A28h] BYREF
  char v92[20]; // [sp+6Ch] [bp-A18h] BYREF
  char v93[2]; // [sp+80h] [bp-A04h] BYREF
  char dest[30]; // [sp+82h] [bp-A02h] BYREF
  char v95[36]; // [sp+A0h] [bp-9E4h] BYREF
  char v96[60]; // [sp+C4h] [bp-9C0h] BYREF
  char v97; // [sp+100h] [bp-984h] BYREF
  fd_set readfds; // [sp+104h] [bp-980h] BYREF
  int v99[23]; // [sp+184h] [bp-900h] BYREF
  char v100[160]; // [sp+1E0h] [bp-8A4h] BYREF
  _DWORD v101[513]; // [sp+280h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/RStratum", *a1);
  sub_2F02C(s);
  while ( !*((_BYTE *)a1 + 105) )
  {
    if ( !sub_2B6F8(a1) && !sub_1FB7C((int)a1) )
    {
      sub_2B7C0(a1);
      sub_18D90((int)a1);
      sub_17FC4(a1);
      while ( !sub_1FB7C((int)a1) && (!a1[25] || a1 != (_DWORD *)sub_1D644() && dword_611AC != 3 && dword_611AC != 4) )
      {
        if ( pthread_mutex_lock(&stru_61314) )
          sub_B4E4("wait_lpcurrent", 9252);
        pthread_cond_wait(&stru_61330, &stru_61314);
        if ( pthread_mutex_unlock(&stru_61314) )
          sub_B694("wait_lpcurrent", 9254);
        off_60178();
      }
      while ( 1 )
      {
        v44 = sub_2DC00(a1) == 0;
        v8 = 30000;
        if ( !v44 )
          break;
        if ( *((_BYTE *)a1 + 105) )
          return 0;
        if ( dword_63B84 <= 1 )
          v8 = 3000;
        sub_2B21C(v8);
      }
    }
    v3 = (fd_set *)&v97;
    do
    {
      v3->__fds_bits[1] = 0;
      v3 = (fd_set *)((char *)v3 + 4);
    }
    while ( v3 != (fd_set *)&readfds.__fds_bits[31] );
    v4 = a1[145];
    timeout.tv_usec = 0;
    v5 = v4 + 31;
    timeout.tv_sec = 90;
    if ( v4 >= 0 )
      v5 = v4;
    readfds.__fds_bits[v5 >> 5] |= 1 << (v4 % 32);
    if ( sub_2B6F8(a1) || (v6 = select(a1[145] + 1, &readfds, 0, 0, &timeout), v6 > 0) )
    {
      v7 = (char *)sub_2B920(a1);
      if ( !v7 )
      {
        v52 = (unsigned __int8)byte_630C1;
        goto LABEL_121;
      }
      sub_1F8F4((int)a1);
      if ( sub_2DC70(a1, v7) )
        goto LABEL_12;
      v10 = sub_45AA8(v7, 0, v99);
      v84 = v10;
      if ( v10 )
      {
        src = (_DWORD *)sub_46698(v10, "result");
        v88 = (_DWORD *)sub_46698(v84, "error");
        v11 = (_DWORD *)sub_46698(v84, "id");
        if ( !v11 || *v11 == 7 )
        {
          if ( v88 )
          {
            v59 = (char *)sub_440CC(v88, 3);
          }
          else
          {
            v59 = (char *)malloc(0x11u);
            if ( v59 )
              strcpy(v59, "(unknown reason)");
          }
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf((char *)v101, 0x800u, "JSON-RPC non method decode failed: %s", v59);
            sub_38438(7, v101, 0);
          }
          v40 = 0;
          free(v59);
        }
        else
        {
          s2 = sub_46AC0();
          if ( pthread_mutex_lock(&stru_612DC) )
            sub_B4E4("parse_stratum_response", 6899);
          v12 = (void **)dword_612F4;
          if ( dword_612F4 )
          {
            v14 = ((unsigned __int8)s2 + 17973517 + (HIBYTE(s2) << 24) + (BYTE2(s2) << 16) + (BYTE1(s2) << 8))
                ^ (unsigned int)&unk_7F76D;
            v15 = (-1622558010 - v14) ^ (v14 << 8);
            v16 = (-17973517 - v14 - v15) ^ (v15 >> 13);
            v17 = *(_DWORD *)dword_612F4;
            v18 = (v14 - v15 - v16) ^ (v16 >> 12);
            v19 = (v15 - v16 - v18) ^ (v18 << 16);
            v20 = (v16 - v18 - v19) ^ (v19 >> 5);
            v21 = (v18 - v19 - v20) ^ (v20 >> 3);
            v22 = **(_DWORD ***)dword_612F4;
            v13 = v22[3
                    * (((v20 - v21 - ((v19 - v20 - v21) ^ (v21 << 10)))
                      ^ (((v19 - v20 - v21) ^ (v21 << 10)) >> 15))
                     & (*(_DWORD *)(*(_DWORD *)dword_612F4 + 4) - 1))];
            if ( !v13 )
              goto LABEL_41;
            while ( 1 )
            {
              v13 -= *(_DWORD *)(v17 + 20);
LABEL_41:
              if ( !v13 )
                goto LABEL_44;
              if ( *(_DWORD *)(v13 + 24) == 4 && !memcmp(*(const void **)(v13 + 20), &s2, 4u) )
                break;
              v13 = *(_DWORD *)(v13 + 16);
              if ( !v13 )
                goto LABEL_44;
            }
            v41 = *(_DWORD *)(v13 + 4);
            if ( v41 || *(_DWORD *)(v13 + 8) )
            {
              v42 = *(_DWORD *)(v17 + 20);
              v43 = (_DWORD *)(*(_DWORD *)(v17 + 16) - v42);
              if ( (_DWORD *)v13 == v43 )
              {
                *(_DWORD *)(v17 + 16) = v41 + v42;
                v41 = *(_DWORD *)(v13 + 4);
              }
              v44 = v41 == 0;
              if ( v41 )
              {
                v43 = *v12;
                v42 = *(_DWORD *)(v13 + 8);
              }
              else
              {
                v41 = *(_DWORD *)(v13 + 8);
              }
              if ( v44 )
              {
                v12 = (void **)v41;
                dword_612F4 = v41;
              }
              else
              {
                v41 += v43[5];
              }
              if ( !v44 )
              {
                *(_DWORD *)(v41 + 8) = v42;
                v41 = *(_DWORD *)(v13 + 8);
              }
              if ( v41 )
                *(_DWORD *)(v41 + *((_DWORD *)*v12 + 5) + 4) = *(_DWORD *)(v13 + 4);
              v45 = 3 * ((*((_DWORD *)*v12 + 1) - 1) & *(_DWORD *)(v13 + 28));
              v46 = *(_DWORD *)*v12 + 12 * ((*((_DWORD *)*v12 + 1) - 1) & *(_DWORD *)(v13 + 28));
              --*(_DWORD *)(v46 + 4);
              v47 = *(_DWORD *)*v12;
              if ( v13 == *(_DWORD *)(v47 + 4 * v45) )
                *(_DWORD *)(v47 + 4 * v45) = *(_DWORD *)(v13 + 16);
              v48 = *(_DWORD *)(v13 + 12);
              if ( v48 )
                *(_DWORD *)(v48 + 16) = *(_DWORD *)(v13 + 16);
              v49 = *(_DWORD *)(v13 + 16);
              if ( v49 )
                *(_DWORD *)(v49 + 12) = *(_DWORD *)(v13 + 12);
              --*((_DWORD *)*v12 + 3);
            }
            else
            {
              free(v22);
              free(*v12);
              dword_612F4 = 0;
            }
            --a1[175];
          }
          else
          {
            v13 = 0;
          }
LABEL_44:
          if ( pthread_mutex_unlock(&stru_612DC) )
            sub_B694("parse_stratum_response", 6906);
          off_60178();
          if ( v13 )
          {
            v23 = *(_DWORD *)(v13 + 36);
            v24 = time(0);
            if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf(
                (char *)v101,
                0x800u,
                "Pool %d stratum share result lag time %d seconds",
                **(_DWORD **)(v23 + 260),
                v24 - *(_DWORD *)(v13 + 48));
              v24 = sub_38438(7, v101, 0);
            }
            v25 = 0;
            v101[0] = bswap32(*(_DWORD *)(v23 + 220));
            v101[1] = bswap32(*(_DWORD *)(v23 + 216));
            v101[2] = bswap32(*(_DWORD *)(v23 + 212));
            v101[3] = bswap32(*(_DWORD *)(v23 + 208));
            v101[4] = bswap32(*(_DWORD *)(v23 + 204));
            v101[5] = bswap32(*(_DWORD *)(v23 + 200));
            v101[6] = bswap32(*(_DWORD *)(v23 + 196));
            v101[7] = bswap32(*(_DWORD *)(v23 + 192));
            do
            {
              if ( *((_BYTE *)v101 + v25) )
                break;
              ++v25;
            }
            while ( v25 != 29 );
            v26 = *(_QWORD *)(v23 + 376);
            v27 = *(_DWORD *)((char *)v101 + v25);
            round(v24);
            v28 = sub_494C0(v26, HIDWORD(v26));
            sub_11130(*(_QWORD *)(v23 + 232), v95, 0x10u, 0);
            v29 = "";
            v30 = bswap32(v27);
            if ( *(_BYTE *)(v23 + 283) )
              v29 = " BLOCK!";
            snprintf(v96, 0x40u, "%08lx Diff %s/%llu%s", v30, v95, v28, v29);
            v31 = *(_DWORD **)(v23 + 260);
            v85 = *(_DWORD *)(sub_1C36C(*(_DWORD *)(v23 + 256)) + 36);
            if ( src && (*src == 5 || *(_BYTE *)(v23 + 324) && *src == 7) )
            {
              if ( pthread_mutex_lock(&mutex) )
                sub_B4E4("share_result", 3478);
              v67 = dbl_63B88;
              ++*(_DWORD *)(v85 + 36);
              ++*((_QWORD *)v31 + 1);
              v68 = *(double *)(v85 + 200) + *(double *)(v23 + 376);
              ++qword_639C8;
              *(double *)(v85 + 200) = v68;
              v69 = *(double *)(v23 + 376);
              *((double *)v31 + 9) = *((double *)v31 + 9) + v69;
              dbl_63B88 = v69 + v67;
              if ( pthread_mutex_unlock(&mutex) )
                sub_B694("share_result", 3485);
              off_60178();
              v70 = *v31;
              v31[6] = 0;
              *(_DWORD *)(v85 + 216) = v70;
              v71 = time(0);
              v72 = (unsigned __int8)byte_630C1;
              *(_DWORD *)(v85 + 220) = v71;
              *(_QWORD *)(v85 + 224) = *(_QWORD *)(v23 + 376);
              v31[88] = v71;
              *((_QWORD *)v31 + 45) = *(_QWORD *)(v23 + 376);
              if ( v72 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                strcpy((char *)v101, "PROOF OF WORK RESULT: true (yay!!!)");
                sub_38438(7, v101, 0);
              }
              if ( !byte_64218 && !byte_640B8 )
              {
                if ( dword_63740 <= 1 )
                {
                  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                  {
                    snprintf(
                      (char *)v101,
                      0x800u,
                      "Accepted %s %s %d %s%s",
                      v96,
                      *(const char **)(*(_DWORD *)(v85 + 4) + 8),
                      *(_DWORD *)(v85 + 8),
                      "",
                      "");
                    sub_38438(7, v101, 0);
                  }
                }
                else if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                {
                  snprintf(
                    (char *)v101,
                    0x800u,
                    "Accepted %s %s %d pool %d %s%s",
                    v96,
                    *(const char **)(*(_DWORD *)(v85 + 4) + 8),
                    *(_DWORD *)(v85 + 8),
                    **(_DWORD **)(v23 + 260),
                    "",
                    "");
                  sub_38438(7, v101, 0);
                }
              }
              sub_1D408("accept", (_DWORD *)v23);
              if ( dword_61414 )
              {
                v74 = &dbl_63B88;
                if ( (double)dword_61414 <= dbl_63B88 )
                {
                  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
                  {
                    snprintf(
                      (char *)v101,
                      0x800u,
                      "Successfully mined %d accepted shares as requested and exiting.",
                      dword_61414);
                    sub_38438(4, v101, 0);
                  }
                  sub_17328();
                }
              }
              if ( v31[25] == 2 )
              {
                if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3
                  || (snprintf((char *)v101, 0x800u, "Rejecting pool %d now accepting shares, re-enabling!", *v31),
                      sub_38438(4, v101, 0),
                      v31[25] != 1) )
                {
                  v31[25] = 1;
                  ++dword_63B84;
                }
                v73 = sub_195D4(0);
              }
              if ( *(_BYTE *)(v23 + 283) )
                sub_16C8C(v73, (int)v74, v75, *(unsigned __int8 *)(v23 + 283));
            }
            else
            {
              if ( pthread_mutex_lock(&mutex) )
                sub_B4E4("share_result", 3528);
              v32 = dbl_63C10;
              ++*(_DWORD *)(v85 + 40);
              ++*((_QWORD *)v31 + 2);
              v33 = *(double *)(v85 + 208) + *(double *)(v23 + 376);
              ++qword_63C98;
              *(double *)(v85 + 208) = v33;
              v34 = *(double *)(v23 + 376);
              v35 = *((double *)v31 + 10) + v34;
              ++v31[6];
              *((double *)v31 + 10) = v35;
              dbl_63C10 = v34 + v32;
              if ( pthread_mutex_unlock(&mutex) )
                sub_B694("share_result", 3536);
              off_60178();
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                strcpy((char *)v101, "PROOF OF WORK RESULT: false (booooo)");
                sub_38438(7, v101, 0);
              }
              if ( !byte_64218 && !byte_640B8 )
              {
                strcpy(v95, "reject");
                memset(&v95[7], (unsigned __int8)byte_640B8, 0x1Du);
                v93[0] = byte_640B8;
                if ( dword_63740 > 1 )
                  snprintf(v92, 0x14u, "pool %d", **(_DWORD **)(v23 + 260));
                else
                  v92[0] = byte_640B8;
                if ( *(_BYTE *)(v23 + 324) )
                {
                  v36 = (int)src;
                  if ( src )
                    goto LABEL_73;
LABEL_213:
                  if ( *(_BYTE *)(v23 + 284) && v88 )
                  {
                    if ( *v88 == 1 )
                    {
                      v76 = (_DWORD *)sub_46880(v88, 1);
                      if ( v76 && *v76 == 2 )
                      {
LABEL_218:
                        v77 = (const char *)sub_469F0(v76);
                        snprintf(v93, 0x1Fu, " (%s)", v77);
                      }
                    }
                    else if ( *v88 == 2 )
                    {
                      v76 = v88;
                      goto LABEL_218;
                    }
                  }
                }
                else
                {
                  v36 = sub_46698(v84, "reject-reason");
                  if ( !v36 )
                    goto LABEL_213;
LABEL_73:
                  srca = (const char *)sub_469F0(v36);
                  v37 = strlen(srca);
                  qmemcpy(v93, " (", sizeof(v93));
                  if ( v37 >= 0x1C )
                    v38 = 28;
                  else
                    v38 = v37;
                  na = v38;
                  v81 = (char *)&v101[512] + v38;
                  memcpy(dest, srca, v38);
                  *((_WORD *)v81 - 1279) = 41;
                  memcpy(&v95[7], srca, na);
                  v95[6] = 58;
                  *(v81 - 2521) = 0;
                }
                if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                {
                  snprintf(
                    (char *)v101,
                    0x800u,
                    "Rejected %s %s %d %s%s %s%s",
                    v96,
                    *(const char **)(*(_DWORD *)(v85 + 4) + 8),
                    *(_DWORD *)(v85 + 8),
                    v92,
                    v93,
                    "",
                    "");
                  sub_38438(7, v101, 0);
                }
                sub_1D408(v95, (_DWORD *)v23);
              }
              v39 = v31[6];
              if ( v39 > 10 && !*(_BYTE *)(v23 + 281) )
              {
                if ( byte_637F8 )
                {
                  if ( dword_63B84 > 1 )
                  {
                    n = v31[6];
                    if ( (double)v39 > sub_493DC(qword_639C8, HIDWORD(qword_639C8)) / dbl_5F898 * 60.0 * 3.0 )
                    {
                      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
                      {
                        snprintf((char *)v101, 0x800u, "Pool %d rejected %d sequential shares, disabling!", *v31, n);
                        sub_38438(4, v101, 0);
                      }
                      if ( v31[25] == 1 )
                        --dword_63B84;
                      v31[25] = 2;
                      if ( v31 == (_DWORD *)sub_1D644() )
                        sub_195D4(0);
                      v31[6] = 0;
                    }
                  }
                }
              }
            }
            v40 = 1;
            sub_152B8(*(void ***)(v13 + 36));
            *(_DWORD *)(v13 + 36) = 0;
            free((void *)v13);
          }
          else if ( src )
          {
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
              sub_B4E4("parse_stratum_response", 6916);
            if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
              sub_B76C("parse_stratum_response", 6916);
            if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
              sub_B694("parse_stratum_response", 6916);
            v63 = *((double *)a1 + 223);
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
              sub_B700("parse_stratum_response", 6918);
            off_60178();
            if ( *src == 5 )
            {
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf((char *)v101, 0x800u, "Accepted untracked stratum share from pool %d", *a1);
                sub_38438(7, v101, 0);
              }
              if ( pthread_mutex_lock(&mutex) )
                sub_B4E4("parse_stratum_response", 6926);
              v78 = *((double *)a1 + 9) + v63;
              v79 = dbl_63B88;
              v80 = qword_639C8;
              ++*((_QWORD *)a1 + 1);
              qword_639C8 = v80 + 1;
              *((double *)a1 + 9) = v78;
              dbl_63B88 = v63 + v79;
              if ( pthread_mutex_unlock(&mutex) )
                sub_B694("parse_stratum_response", 6931);
            }
            else
            {
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf((char *)v101, 0x800u, "Rejected untracked stratum share from pool %d", *a1);
                sub_38438(7, v101, 0);
              }
              if ( pthread_mutex_lock(&mutex) )
                sub_B4E4("parse_stratum_response", 6937);
              v64 = *((double *)a1 + 10) + v63;
              v65 = dbl_63C10;
              v66 = qword_63C98;
              ++*((_QWORD *)a1 + 2);
              qword_63C98 = v66 + 1;
              *((double *)a1 + 10) = v64;
              dbl_63C10 = v63 + v65;
              if ( pthread_mutex_unlock(&mutex) )
                sub_B694("parse_stratum_response", 6942);
            }
            v40 = 0;
            off_60178();
          }
          else
          {
            v40 = 0;
          }
        }
        v60 = *(_DWORD *)(v84 + 4);
        if ( v60 != -1 )
        {
          v61 = v60 - 1;
          *(_DWORD *)(v84 + 4) = v61;
          if ( !v61 )
            sub_46C5C(v84);
        }
        if ( v40 )
        {
LABEL_12:
          if ( *((_BYTE *)a1 + 648) )
          {
            v50 = sub_19DA0();
            *((_BYTE *)a1 + 648) = 0;
            v51 = (int)v50;
            sub_1A514((int)a1, (int)v50);
            *(_BYTE *)(v51 + 280) = 1;
            sub_1D6F8(v51);
            sub_152B8((void **)v51);
          }
          goto LABEL_14;
        }
        v62 = (unsigned __int8)byte_630C1;
        goto LABEL_156;
      }
      if ( !byte_630C1 )
        goto LABEL_14;
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        goto LABEL_157;
      snprintf((char *)v101, 0x800u, "JSON decode failed(%d): %s", v99[0], v100);
      sub_38438(7, v101, 0);
      v62 = (unsigned __int8)byte_630C1;
LABEL_156:
      if ( !v62 )
        goto LABEL_14;
LABEL_157:
      if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
      {
        snprintf((char *)v101, 0x800u, "Unknown stratum msg: %s", v7);
        sub_38438(7, v101, 0);
      }
LABEL_14:
      free(v7);
    }
    else
    {
      if ( !byte_630C1 )
        goto LABEL_126;
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      {
LABEL_122:
        if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
        {
          snprintf((char *)v101, 0x800u, "Stratum connection to pool %d interrupted", *a1);
          sub_38438(7, v101, 0);
        }
        goto LABEL_126;
      }
      snprintf((char *)v101, 0x800u, "Stratum select failed on pool %d with value %d", *a1, v6);
      sub_38438(7, v101, 0);
      v52 = (unsigned __int8)byte_630C1;
LABEL_121:
      if ( v52 )
        goto LABEL_122;
LABEL_126:
      v53 = dword_639E4;
      ++a1[32];
      dword_639E4 = v53 + 1;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
        sub_B4E4("supports_resume", 7079);
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
        sub_B76C("supports_resume", 7079);
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
        sub_B694("supports_resume", 7079);
      v54 = a1[157];
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        sub_B700("supports_resume", 7081);
      off_60178();
      if ( !v54 || byte_63BE4 )
        sub_18D90((int)a1);
      sub_17FC4(a1);
      v55 = (_DWORD *)sub_1D644();
      if ( a1 == v55 )
        sub_16C8C((int)v55, v56, v57, v58);
      while ( !sub_2DC00(a1) )
      {
        if ( *((_BYTE *)a1 + 105) )
          return 0;
        sub_2B21C(30000);
      }
    }
  }
  sub_2B7C0(a1);
  return 0;
}
