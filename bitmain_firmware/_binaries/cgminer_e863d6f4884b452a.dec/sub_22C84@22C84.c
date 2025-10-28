int __fastcall sub_22C84(_DWORD *a1)
{
  pthread_t v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r9
  int v6; // r1
  int v7; // r0
  int v8; // r4
  int v9; // r3
  int v10; // r2
  unsigned int v11; // r3
  int v12; // r0
  unsigned int v13; // r1
  char *v14; // r6
  int v15; // r2
  time_t v16; // r9
  size_t v17; // r0
  __int64 **v18; // r4
  __int64 v19; // r2
  __int64 *v20; // r5
  int v21; // r0
  unsigned int v22; // r2
  unsigned int v23; // r5
  unsigned int v24; // r0
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r0
  unsigned int v28; // r0
  __int64 v29; // kr00_8
  int v30; // r0
  int v31; // r2
  int v32; // r2
  int v33; // r3
  _DWORD *v34; // r2
  __int64 v35; // r2
  int v36; // r4
  time_t v37; // r0
  int v38; // r3
  const char *v39; // r3
  const char *v40; // r1
  char *v41; // r5
  char *v42; // r4
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  _DWORD *v47; // r5
  char *v48; // r4
  int v49; // r1
  int v50; // r2
  int v51; // r3
  _DWORD *v53; // r8
  unsigned int v54; // r1
  unsigned int v55; // r3
  int v56; // r1
  unsigned int v57; // r4
  unsigned int v58; // r9
  int v59; // r11
  char *v60; // r10
  _DWORD *v61; // r5
  _DWORD *v62; // r6
  int v63; // r4
  char *v64; // r7
  unsigned int v65; // r0
  int v66; // r3
  int v67; // r3
  unsigned int v68; // r2
  unsigned int v69; // r1
  bool v70; // cc
  int v71; // r2
  __int16 v72; // r8
  __int16 v73; // r6
  __int64 *v74; // r0
  void *v75; // r0
  int v76; // r2
  int v77; // r3
  int v78; // r4
  int v79; // r3
  int v80; // r4
  const char *v81; // r1
  __int64 v82; // kr08_8
  int *v83; // r0
  int v84; // r3
  int *v85; // r0
  __int64 v86; // [sp+20h] [bp-C8Ch]
  __int64 rwlock; // [sp+28h] [bp-C84h]
  _DWORD *rwlocka; // [sp+28h] [bp-C84h]
  pthread_rwlock_t *rwlockb; // [sp+28h] [bp-C84h]
  unsigned int v90; // [sp+40h] [bp-C6Ch]
  char *v91; // [sp+44h] [bp-C68h]
  unsigned int v92; // [sp+50h] [bp-C5Ch] BYREF
  __int64 v93; // [sp+54h] [bp-C58h] BYREF
  char v94[12]; // [sp+5Ch] [bp-C50h] BYREF
  char s[16]; // [sp+68h] [bp-C44h] BYREF
  char v96[4]; // [sp+78h] [bp-C34h] BYREF
  int v97; // [sp+7Ch] [bp-C30h]
  int v98; // [sp+80h] [bp-C2Ch]
  int v99; // [sp+84h] [bp-C28h]
  char v100[32]; // [sp+88h] [bp-C24h] BYREF
  char v101[1024]; // [sp+A8h] [bp-C04h] BYREF
  char v102[2052]; // [sp+4A8h] [bp-804h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  v3 = sub_2D764(s);
  v4 = sub_2A1F4(v3);
  a1[186] = v4;
  if ( !v4 )
  {
    v41 = " stratum_q in stratum_sthread";
    qmemcpy(v102, "Failed to create", 16);
    v42 = &v102[16];
    goto LABEL_59;
  }
  v5 = 0;
  for ( rwlock = 0; ; rwlock = v86 )
  {
    v6 = *((unsigned __int8 *)a1 + 105);
    *(_DWORD *)v96 = 0;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    if ( v6 )
      break;
    v7 = sub_2A2FC();
    v8 = v7;
    if ( !v7 )
    {
      v41 = "Stratum q returned empty work";
      v42 = v102;
LABEL_59:
      v43 = *(_DWORD *)v41;
      v44 = *((_DWORD *)v41 + 1);
      v45 = *((_DWORD *)v41 + 2);
      v46 = *((_DWORD *)v41 + 3);
      v47 = v41 + 16;
      *(_DWORD *)v42 = v43;
      *((_DWORD *)v42 + 1) = v44;
      *((_DWORD *)v42 + 2) = v45;
      *((_DWORD *)v42 + 3) = v46;
      v48 = v42 + 16;
      v49 = v47[1];
      v50 = v47[2];
      v51 = v47[3];
      *(_DWORD *)v48 = *v47;
      *((_DWORD *)v48 + 1) = v49;
      *((_DWORD *)v48 + 2) = v50;
      *((_WORD *)v48 + 6) = v51;
      sub_343C4(3, v102, 1);
      sub_1B070(1, 1);
    }
    v9 = dword_6CA78;
    if ( !dword_6CA78 )
    {
      v10 = *((unsigned __int8 *)a1 + 108);
      v11 = bswap32(*(_DWORD *)(v7 + 32));
      v92 = v11;
      if ( !v10 )
        goto LABEL_7;
      *(_DWORD *)(v7 + 32) = v11;
      v12 = sub_2826C(v7, 80);
      v9 = dword_6CA78;
      v91 = (char *)v12;
    }
    if ( v9 != 1 )
    {
LABEL_7:
      strcpy(v102, "Fatal Error Coin Type");
      sub_343C4(3, v102, 1);
      sub_1B070(1, 1);
    }
    v13 = *(_DWORD *)(v8 + 140);
    v92 = v13;
    if ( byte_6FA71 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
      {
        v86 = *(_QWORD *)(v8 + 352);
        v93 = v86;
LABEL_15:
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
        {
          snprintf(v102, 0x800u, "%s: *nonce2_64 = 0x%llx", "stratum_sthread", v86);
          sub_343C4(7, v102, 0);
          v86 = v93;
        }
        goto LABEL_20;
      }
      snprintf(v102, 0x800u, "%s: nonce = 0x%08x", "stratum_sthread", v13);
      sub_343C4(7, v102, 0);
      v86 = *(_QWORD *)(v8 + 352);
      v93 = v86;
      if ( byte_6FA71 )
        goto LABEL_15;
    }
    else
    {
      v86 = *(_QWORD *)(v8 + 352);
      v93 = v86;
    }
LABEL_20:
    v90 = v92;
    if ( v92 == v5 && rwlock == v86 )
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(v102, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_343C4(7, v102, 0);
      }
      sub_19F2C((void **)v8);
      free((void *)v8);
      goto LABEL_54;
    }
    if ( dword_6CA78 )
    {
      if ( dword_6CA78 == 1 )
      {
        v72 = dword_6F1FC;
        v73 = *(_WORD *)(v8 + 25);
        sub_2821C(v94, &v92, 4);
        if ( *((_BYTE *)a1 + 1900) )
        {
          sub_2821C(v100, v8 + a1[395] + 144, a1[158]);
        }
        else
        {
          v76 = a1[158];
          if ( v76 < 12 )
            v76 = 12;
          sub_2821C(v100, v8 + 144, v76);
        }
        if ( dword_6F1FC )
          snprintf(v96, 0x10u, ",\"%04hx\"", v73 & 1 | (unsigned __int16)(2 * v72));
      }
    }
    else
    {
      sub_2821C(v94, &v92, 4);
      sub_2821C(v100, &v93, *(_DWORD *)(v8 + 360));
      strcat(v94, "00000000");
    }
    v14 = (char *)calloc(0x34u, 1u);
    *((_DWORD *)v14 + 11) = time(0);
    *((_DWORD *)v14 + 9) = v8;
    memset(v101, 0, sizeof(v101));
    if ( pthread_mutex_lock(&stru_6DDB4) )
    {
      v77 = *_errno_location();
      v78 = 7671;
      goto LABEL_114;
    }
    v15 = dword_732B0;
    *((_DWORD *)v14 + 10) = dword_732B0;
    dword_732B0 = v15 + 1;
    if ( pthread_mutex_unlock(&stru_6DDB4) )
    {
      v79 = *_errno_location();
      v80 = 7674;
      goto LABEL_117;
    }
    off_6CB70();
    if ( dword_6CA78 )
    {
      if ( dword_6CA78 == 1 )
        snprintf(
          v101,
          0x400u,
          "{\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"],\"id\":%d}",
          (const char *)a1[45],
          *(const char **)(v8 + 344),
          v100,
          *(const char **)(v8 + 364),
          v94,
          *((_DWORD *)v14 + 10));
    }
    else
    {
      v39 = (const char *)a1[45];
      v40 = *(const char **)(v8 + 344);
      if ( *((_BYTE *)a1 + 108) )
      {
        snprintf(
          v101,
          0x400u,
          "{\"params\": [\"%s\", \"%s\", \"0x%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
          v39,
          v40,
          v91,
          *((_DWORD *)v14 + 10));
        free(v91);
      }
      else
      {
        snprintf(
          v101,
          0x400u,
          "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
          v39,
          v40,
          v100,
          *(const char **)(v8 + 364),
          v94,
          *((_DWORD *)v14 + 10));
      }
    }
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v102, 0x800u, "Submitting share %08lx to pool %d", *(_DWORD *)(v8 + 268), *a1);
      sub_343C4(7, v102, 0);
    }
    while ( 1 )
    {
      v16 = *((_DWORD *)v14 + 11) + 119;
      if ( v16 < time(0) )
        goto LABEL_134;
      v17 = strlen(v101);
      if ( sub_2AD28(a1, v101, v17) )
      {
        if ( !pthread_mutex_lock(&stru_6DDB4) )
        {
          v18 = (__int64 **)dword_6DDCC;
          LODWORD(v19) = v14 + 40;
          HIDWORD(v19) = 4;
          *((_DWORD *)v14 + 2) = 0;
          *(_QWORD *)(v14 + 20) = v19;
          if ( v18 )
          {
            *(_DWORD *)(*((_DWORD *)*v18 + 4) + 8) = v14;
            *((_DWORD *)v14 + 1) = *((_DWORD *)*v18 + 4) - *((_DWORD *)*v18 + 5);
            *((_DWORD *)*v18 + 4) = v14;
            v20 = *v18;
            goto LABEL_37;
          }
          *((_DWORD *)v14 + 1) = 0;
          dword_6DDCC = (int)v14;
          v74 = (__int64 *)malloc(0x2Cu);
          v20 = v74;
          *(_DWORD *)v14 = v74;
          if ( v74 )
          {
            memset((char *)v74 + 12, 0, 0x20u);
            *((_DWORD *)v20 + 1) = 32;
            *((_DWORD *)v20 + 4) = v14;
            *((_DWORD *)v20 + 5) = 0;
            *((_DWORD *)v20 + 2) = 5;
            v75 = calloc(0x180u, 1u);
            *(_DWORD *)v20 = v75;
            if ( v75 )
            {
              v18 = (__int64 **)v14;
              *((_DWORD *)v20 + 10) = -1609490463;
LABEL_37:
              ++*((_DWORD *)v20 + 3);
              v21 = (unsigned __int8)v14[40]
                  + 17973517
                  + ((unsigned __int8)v14[43] << 24)
                  + ((unsigned __int8)v14[42] << 16)
                  + ((unsigned __int8)v14[41] << 8);
              *(_DWORD *)v14 = *v18;
              v22 = (-1622558010 - ((unsigned int)&unk_7F76D ^ v21)) ^ (((unsigned int)&unk_7F76D ^ v21) << 8);
              v23 = (-17973517 - ((unsigned int)&unk_7F76D ^ v21) - v22) ^ (v22 >> 13);
              v24 = (((unsigned int)&unk_7F76D ^ v21) - v22 - v23) ^ (v23 >> 12);
              v25 = (v22 - v23 - v24) ^ (v24 << 16);
              v26 = (v23 - v24 - v25) ^ (v25 >> 5);
              v27 = v24 - v25 - v26;
              v28 = (v26 - (v27 ^ (v26 >> 3)) - ((v25 - v26 - (v27 ^ (v26 >> 3))) ^ ((v27 ^ (v26 >> 3)) << 10)))
                  ^ (((v25 - v26 - (v27 ^ (v26 >> 3))) ^ ((v27 ^ (v26 >> 3)) << 10)) >> 15);
              *((_DWORD *)v14 + 7) = v28;
              v29 = **v18;
              v30 = 12 * ((HIDWORD(v29) - 1) & v28);
              ++*(_DWORD *)(v29 + v30 + 4);
              v31 = *(_DWORD *)(*(_DWORD *)*v18 + v30);
              *((_DWORD *)v14 + 3) = 0;
              *((_DWORD *)v14 + 4) = v31;
              v32 = *(_DWORD *)*v18;
              v33 = *(_DWORD *)(v32 + v30);
              v34 = (_DWORD *)(v32 + v30);
              if ( v33 )
              {
                *(_DWORD *)(v33 + 12) = v14;
                v34 = (_DWORD *)(*(_DWORD *)*v18 + v30);
              }
              *v34 = v14;
              v35 = *(_QWORD *)(v30 + *(_DWORD *)*v18 + 4);
              if ( (unsigned int)v35 < 10 * (HIDWORD(v35) + 1)
                || (v36 = *(_DWORD *)v14, *(_DWORD *)(*(_DWORD *)v14 + 36) == 1) )
              {
LABEL_41:
                ++a1[187];
                if ( !pthread_mutex_unlock(&stru_6DDB4) )
                {
                  off_6CB70();
                  if ( sub_1BFF8((int)a1, (_BYTE *)a1 + 96) )
                  {
                    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
                    {
                      if ( byte_6FA71 )
                        goto LABEL_97;
                      goto LABEL_50;
                    }
                    snprintf(v102, 0x800u, "Pool %d communication resumed, submitting work", *a1);
                    sub_343C4(4, v102, 0);
                  }
                  if ( byte_6FA71 )
                  {
                    if ( !byte_73320 && !byte_6FA70 )
                    {
LABEL_97:
                      if ( dword_6D35C <= 6 )
                        goto LABEL_50;
                    }
                    strcpy(v102, "Successfully submitted, adding to stratum_shares db");
                    sub_343C4(7, v102, 0);
                  }
LABEL_50:
                  v37 = time(0);
                  v38 = (unsigned __int8)byte_6FA71;
                  *((_DWORD *)v14 + 12) = v37;
                  if ( v38 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
                  {
                    snprintf(
                      v102,
                      0x800u,
                      "Pool %d stratum share submission lag time %d seconds",
                      *a1,
                      v37 - *((_DWORD *)v14 + 11));
                    sub_343C4(7, v102, 0);
                  }
                  goto LABEL_54;
                }
                v79 = *_errno_location();
                v80 = 7722;
LABEL_117:
                snprintf(
                  v102,
                  0x800u,
                  "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  v79,
                  "cgminer.c",
                  "stratum_sthread",
                  v80);
LABEL_115:
                sub_343C4(3, v102, 1);
                sub_1B070(1, 1);
              }
              v53 = calloc(24 * *(_DWORD *)(v36 + 4), 1u);
              if ( v53 )
              {
                v54 = *(_DWORD *)(v36 + 12);
                v55 = v54 >> (*(_QWORD *)(v36 + 8) + 1);
                if ( ((2 * *(_DWORD *)(v36 + 4) - 1) & v54) != 0 )
                  ++v55;
                *(_DWORD *)(v36 + 24) = v55;
                *(_DWORD *)(*(_DWORD *)v14 + 28) = 0;
                v56 = *(_DWORD *)v14;
                v57 = *(_DWORD *)(*(_DWORD *)v14 + 4);
                if ( v57 )
                {
                  v58 = 0;
                  v59 = 0;
                  v60 = v14;
                  rwlocka = a1;
                  do
                  {
                    v61 = *(_DWORD **)(*(_DWORD *)v56 + v59);
                    if ( v61 )
                    {
                      while ( 1 )
                      {
                        v62 = (_DWORD *)v61[4];
                        v63 = 3 * ((2 * v57 - 1) & v61[7]);
                        v64 = (char *)&v53[v63];
                        v65 = *((_DWORD *)v64 + 1) + 1;
                        *((_DWORD *)v64 + 1) = v65;
                        if ( v65 > *(_DWORD *)(v56 + 24) )
                        {
                          ++*(_DWORD *)(v56 + 28);
                          *((_DWORD *)v64 + 2) = sub_49878(*((_DWORD *)v64 + 1), *(_DWORD *)(*(_DWORD *)v60 + 24));
                        }
                        v61[3] = 0;
                        v61[4] = v53[v63];
                        v66 = v53[v63];
                        if ( v66 )
                          *(_DWORD *)(v66 + 12) = v61;
                        v53[v63] = v61;
                        v56 = *(_DWORD *)v60;
                        if ( !v62 )
                          break;
                        v57 = *(_DWORD *)(v56 + 4);
                        v61 = v62;
                      }
                      v57 = *(_DWORD *)(v56 + 4);
                    }
                    ++v58;
                    v59 += 12;
                  }
                  while ( v58 < v57 );
                  v14 = v60;
                  a1 = rwlocka;
                }
                free(*(void **)v56);
                *(_DWORD *)(*(_DWORD *)v14 + 4) *= 2;
                ++*(_DWORD *)(*(_DWORD *)v14 + 8);
                **(_DWORD **)v14 = v53;
                v67 = *(_DWORD *)v14;
                v68 = *(_DWORD *)(*(_DWORD *)v14 + 28);
                v69 = *(_DWORD *)(*(_DWORD *)v14 + 12);
                v70 = v68 > v69 >> 1;
                if ( v68 <= v69 >> 1 )
                  v71 = 0;
                else
                  v71 = *(_DWORD *)(v67 + 32);
                if ( v70 )
                  ++v71;
                *(_DWORD *)(v67 + 32) = v71;
                if ( *(_DWORD *)(*(_DWORD *)v14 + 32) > 1u )
                  *(_DWORD *)(*(_DWORD *)v14 + 36) = 1;
                goto LABEL_41;
              }
            }
          }
          exit(-1);
        }
        v77 = *_errno_location();
        v78 = 7719;
LABEL_114:
        snprintf(
          v102,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          v77,
          "cgminer.c",
          "stratum_sthread",
          v78);
        goto LABEL_115;
      }
      if ( !sub_1C040((int)a1, (_BYTE *)a1 + 96) && sub_1E394((int)a1) )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        {
          snprintf(v102, 0x800u, "Pool %d stratum share submission failure", *a1);
          sub_343C4(4, v102, 0);
        }
        v84 = a1[34] + 1;
        ++dword_732B8;
        a1[34] = v84;
      }
      if ( byte_7383C )
        break;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
      {
        v77 = *_errno_location();
        v78 = 7743;
        goto LABEL_114;
      }
      rwlockb = (pthread_rwlock_t *)(a1 + 61);
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 61)) )
      {
        v85 = _errno_location();
        snprintf(
          v102,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v85,
          "cgminer.c",
          "stratum_sthread",
          7743);
        goto LABEL_115;
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
      {
        v79 = *_errno_location();
        v80 = 7743;
        goto LABEL_117;
      }
      v81 = (const char *)a1[153];
      if ( !v81 || strcmp(*(const char **)(v8 + 380), v81) )
      {
        if ( !pthread_rwlock_unlock(rwlockb) )
        {
          off_6CB70();
          if ( byte_6FA71 )
          {
            if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
              goto LABEL_136;
            strcpy(v102, "No matching session id for resubmitting stratum share");
            sub_343C4(7, v102, 0);
LABEL_134:
            if ( byte_6FA71 )
            {
              if ( !byte_73320 )
                goto LABEL_136;
              goto LABEL_138;
            }
          }
          goto LABEL_139;
        }
LABEL_141:
        v83 = _errno_location();
        snprintf(
          v102,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v83,
          "cgminer.c",
          "stratum_sthread",
          7745);
        goto LABEL_115;
      }
      if ( pthread_rwlock_unlock(rwlockb) )
        goto LABEL_141;
      off_6CB70();
      sleep(5u);
    }
    if ( byte_6FA71 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        strcpy(v102, "Lowmem option prevents resubmitting stratum share");
        sub_343C4(7, v102, 0);
        goto LABEL_134;
      }
LABEL_136:
      if ( byte_6FA70 || dword_6D35C > 6 )
      {
LABEL_138:
        strcpy(v102, "Failed to submit stratum share, discarding");
        sub_343C4(7, v102, 0);
      }
    }
LABEL_139:
    sub_19F2C((void **)v8);
    free((void *)v8);
    free(v14);
    v82 = *(_QWORD *)&dword_72C38;
    ++a1[31];
    *(_QWORD *)&dword_72C38 = v82 + 1;
LABEL_54:
    v5 = v90;
    v4 = a1[186];
  }
  sub_2A268(v4);
  return 0;
}
