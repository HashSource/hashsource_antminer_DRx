int __fastcall sub_1BE9C(_DWORD *a1)
{
  pthread_t v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r5
  double v6; // d8
  int v7; // r0
  int v8; // r4
  unsigned int v9; // r3
  double v10; // r2
  int v11; // r5
  int v12; // r1
  _DWORD *v13; // r10
  int *v14; // r0
  int v15; // r2
  int *v16; // r0
  size_t v17; // r0
  int *v18; // r0
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r4
  void *v22; // r0
  int v23; // r3
  int v24; // r2
  unsigned int v25; // r1
  unsigned int v26; // r12
  int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r2
  int v30; // r0
  unsigned int v31; // r1
  int v32; // r2
  int v33; // r1
  int v34; // r0
  int v35; // r4
  size_t v36; // r5
  _DWORD *v37; // r0
  _DWORD *v38; // r6
  void **v39; // r3
  int v40; // r11
  _DWORD *v41; // r4
  _DWORD *v42; // r8
  int v43; // r3
  int v44; // r5
  char *v45; // r7
  unsigned int v46; // r2
  int v47; // r3
  int v48; // r3
  int v49; // r2
  int *v50; // r0
  int *v51; // r0
  int *v52; // r0
  int *v53; // r0
  const char *v54; // r1
  _BOOL4 v55; // r0
  _BOOL4 v56; // r8
  int *v57; // r0
  time_t v58; // r0
  unsigned int v60; // [sp+18h] [bp-C7Ch]
  unsigned int v61; // [sp+1Ch] [bp-C78h]
  _DWORD *v62; // [sp+28h] [bp-C6Ch]
  char *ptr; // [sp+2Ch] [bp-C68h]
  unsigned int v64; // [sp+38h] [bp-C5Ch] BYREF
  double v65; // [sp+3Ch] [bp-C58h] BYREF
  char v66[12]; // [sp+44h] [bp-C50h] BYREF
  char v67[4]; // [sp+50h] [bp-C44h] BYREF
  int v68; // [sp+54h] [bp-C40h]
  int v69; // [sp+58h] [bp-C3Ch]
  int v70; // [sp+5Ch] [bp-C38h]
  char v71[32]; // [sp+60h] [bp-C34h] BYREF
  char v72[1024]; // [sp+80h] [bp-C14h] BYREF
  char v73[2048]; // [sp+480h] [bp-814h] BYREF
  char s[16]; // [sp+C80h] [bp-14h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  v3 = sub_34604(s);
  v4 = sub_2F760(v3);
  a1[186] = v4;
  if ( !v4 )
  {
    strcpy(v73, "Failed to create stratum_q in stratum_sthread");
    sub_3F1C0(3, v73, 1);
    sub_132C4(1);
  }
  v5 = 0;
  v6 = 0.0;
  while ( 1 )
  {
    *(_DWORD *)v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    if ( *((_BYTE *)a1 + 105) )
      break;
    v7 = sub_2F910(a1[186], 0);
    v8 = v7;
    if ( !v7 )
    {
      strcpy(v73, "Stratum q returned empty work");
      sub_3F1C0(3, v73, 1);
      sub_132C4(1);
    }
    if ( !dword_72C0C )
    {
      v9 = bswap32(*(_DWORD *)(v7 + 32));
      v64 = v9;
      if ( *((_BYTE *)a1 + 108) )
      {
        *(_DWORD *)(v7 + 32) = v9;
        ptr = (char *)sub_2CDEC(v7, 80);
      }
    }
    if ( dword_72C0C != 1 )
    {
      strcpy(v73, "Fatal Error Coin Type");
      sub_3F1C0(3, v73, 1);
      sub_132C4(1);
    }
    v64 = *(_DWORD *)(v8 + 140);
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(v73, 0x800u, "%s: nonce = 0x%08x", "stratum_sthread", v64);
      sub_3F1C0(7, v73, 0);
    }
    v10 = *(double *)(v8 + 352);
    v65 = v10;
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(v73, 0x800u, "%s: *nonce2_64 = 0x%llx", "stratum_sthread", v10);
      sub_3F1C0(7, v73, 0);
    }
    v61 = v64;
    if ( v5 == v64 && *(_QWORD *)&v6 == *(_QWORD *)&v65 )
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(v73, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_3F1C0(7, v73, 0);
      }
      sub_11D18((void **)v8);
    }
    else
    {
      v6 = v65;
      if ( dword_72C0C )
      {
        if ( dword_72C0C == 1 )
        {
          v11 = *(_WORD *)(v8 + 25) & 1 | (unsigned __int16)(2 * dword_7536C);
          sub_2CD88(v66, &v64, 4);
          v12 = a1[473] ? v8 + a1[395] + 144 : v8 + 144;
          sub_2CD88(v71, v12, a1[158]);
          if ( dword_7536C )
            snprintf(v67, 0x10u, ",\"%04hx\"", v11);
        }
      }
      else
      {
        sub_2CD88(v66, &v64, 4);
        sub_2CD88(v71, &v65, *(_DWORD *)(v8 + 360));
        strcat(v66, "00000000");
      }
      v13 = calloc(0x34u, 1u);
      v13[11] = time(0);
      v13[9] = v8;
      memset(v72, 0, sizeof(v72));
      if ( pthread_mutex_lock(&mutex) )
      {
        v14 = _errno_location();
        snprintf(
          v73,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v14,
          "cgminer.c",
          "stratum_sthread",
          7667);
        sub_3F1C0(3, v73, 1);
        sub_132C4(1);
      }
      v15 = dword_79148;
      v13[10] = dword_79148;
      dword_79148 = v15 + 1;
      if ( pthread_mutex_unlock(&mutex) )
      {
        v16 = _errno_location();
        snprintf(
          v73,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v16,
          "cgminer.c",
          "stratum_sthread",
          7670);
        sub_3F1C0(3, v73, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( dword_72C0C )
      {
        if ( dword_72C0C == 1 )
          snprintf(
            v72,
            0x400u,
            "{\"method\":\"mining.submit\",\"params\":[\"%s\",\"%s\",\"%s\",\"%s\",\"%s\"],\"id\":%d}",
            (const char *)a1[45],
            *(const char **)(v8 + 344),
            v71,
            *(const char **)(v8 + 364),
            v66,
            v13[10]);
      }
      else if ( *((_BYTE *)a1 + 108) )
      {
        snprintf(
          v72,
          0x400u,
          "{\"params\": [\"%s\", \"%s\", \"0x%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
          (const char *)a1[45],
          *(const char **)(v8 + 344),
          ptr,
          v13[10]);
        free(ptr);
      }
      else
      {
        snprintf(
          v72,
          0x400u,
          "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
          (const char *)a1[45],
          *(const char **)(v8 + 344),
          v71,
          *(const char **)(v8 + 364),
          v66,
          v13[10]);
      }
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(v73, 0x800u, "Submitting share %08lx to pool %d", *(_DWORD *)(v8 + 268), *a1);
        sub_3F1C0(7, v73, 0);
      }
      while ( 1 )
      {
        if ( time(0) >= v13[11] + 120 )
          goto LABEL_142;
        v17 = strlen(v72);
        if ( sub_30BA0(a1, v72, v17) )
          break;
        if ( !sub_147D0((int)a1, (_BYTE *)a1 + 96) && sub_15144((int)a1) )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
          {
            snprintf(v73, 0x800u, "Pool %d stratum share submission failure", *a1);
            sub_3F1C0(4, v73, 0);
          }
          ++dword_78EB8;
          ++a1[34];
        }
        if ( byte_7970C )
        {
          if ( byte_75C09 )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
            {
              strcpy(v73, "Lowmem option prevents resubmitting stratum share");
              sub_3F1C0(7, v73, 0);
              goto LABEL_142;
            }
            goto LABEL_130;
          }
          goto LABEL_134;
        }
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v51 = _errno_location();
          snprintf(
            v73,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            *v51,
            "cgminer.c",
            "stratum_sthread",
            7739);
          sub_3F1C0(3, v73, 1);
          sub_132C4(1);
        }
        if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v52 = _errno_location();
          snprintf(
            v73,
            0x800u,
            "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v52,
            "cgminer.c",
            "stratum_sthread",
            7739);
          sub_3F1C0(3, v73, 1);
          sub_132C4(1);
        }
        if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
        {
          v53 = _errno_location();
          snprintf(
            v73,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v53,
            "cgminer.c",
            "stratum_sthread",
            7739);
          sub_3F1C0(3, v73, 1);
          sub_132C4(1);
        }
        v54 = (const char *)a1[153];
        if ( v54 )
          v55 = strcmp(*(const char **)(v8 + 380), v54) == 0;
        else
          v55 = 0;
        v56 = v55;
        if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v57 = _errno_location();
          snprintf(
            v73,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v57,
            "cgminer.c",
            "stratum_sthread",
            7741);
          sub_3F1C0(3, v73, 1);
          sub_132C4(1);
        }
        off_72D00(0);
        if ( !v56 )
        {
          if ( byte_75C09 )
          {
            if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
              goto LABEL_130;
            strcpy(v73, "No matching session id for resubmitting stratum share");
            sub_3F1C0(7, v73, 0);
LABEL_142:
            if ( byte_75C09 )
            {
LABEL_130:
              if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
              {
                strcpy(v73, "Failed to submit stratum share, discarding");
                sub_3F1C0(7, v73, 0);
              }
            }
          }
LABEL_134:
          sub_11D18((void **)v8);
          free(v13);
          ++a1[31];
          ++*(_QWORD *)&dbl_79DD0;
          goto LABEL_139;
        }
        sleep(5u);
      }
      if ( pthread_mutex_lock(&mutex) )
      {
        v18 = _errno_location();
        snprintf(
          v73,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v18,
          "cgminer.c",
          "stratum_sthread",
          7715);
        sub_3F1C0(3, v73, 1);
        sub_132C4(1);
      }
      v13[2] = 0;
      v13[5] = v13 + 10;
      v13[6] = 4;
      v19 = dword_75300;
      if ( dword_75300 )
      {
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_75300 + 16) + 8) = v13;
        v13[1] = *(_DWORD *)(*(_DWORD *)v19 + 16) - *(_DWORD *)(*(_DWORD *)v19 + 20);
        *(_DWORD *)(*(_DWORD *)v19 + 16) = v13;
      }
      else
      {
        dword_75300 = (int)v13;
        v13[1] = 0;
        v20 = malloc(0x2Cu);
        v21 = v20;
        *v13 = v20;
        if ( !v20 )
          exit(-1);
        *v20 = 0;
        v20[3] = 0;
        v20[4] = 0;
        v20[5] = 0;
        v20[6] = 0;
        v20[7] = 0;
        v20[8] = 0;
        v20[9] = 0;
        v20[10] = 0;
        v20[4] = v13;
        v20[1] = 32;
        v20[2] = 5;
        v20[5] = 0;
        v22 = malloc(0x180u);
        *v21 = v22;
        if ( !v22 )
          exit(-1);
        memset(v22, 0, 0x180u);
        *(_DWORD *)(*v13 + 40) = -1609490463;
      }
      v23 = dword_75300;
      ++*(_DWORD *)(*(_DWORD *)dword_75300 + 12);
      *v13 = *(_DWORD *)v23;
      v24 = (*((unsigned __int8 *)v13 + 40)
           + 17973517
           + (*((unsigned __int8 *)v13 + 43) << 24)
           + (*((unsigned __int8 *)v13 + 42) << 16)
           + (*((unsigned __int8 *)v13 + 41) << 8))
          ^ 0x7F76D;
      v25 = (-1622558010 - v24) ^ (v24 << 8);
      v26 = (-17973517 - v24 - v25) ^ (v25 >> 13);
      v27 = (v24 - v25 - v26) ^ (v26 >> 12);
      v28 = (v25 - v26 - v27) ^ (v27 << 16);
      v29 = (v26 - v27 - v28) ^ (v28 >> 5);
      v30 = (v27 - v28 - v29) ^ (v29 >> 3);
      v31 = (v29 - v30 - ((v28 - v29 - v30) ^ (v30 << 10))) ^ (((v28 - v29 - v30) ^ (v30 << 10)) >> 15);
      v13[7] = v31;
      v32 = 3 * (v31 & (*(_DWORD *)(*(_DWORD *)v23 + 4) - 1));
      v33 = 12 * (v31 & (*(_DWORD *)(*(_DWORD *)v23 + 4) - 1));
      ++*(_DWORD *)(**(_DWORD **)v23 + v33 + 4);
      v13[4] = *(_DWORD *)(**(_DWORD **)v23 + 4 * v32);
      v13[3] = 0;
      v34 = *(_DWORD *)(**(_DWORD **)v23 + 4 * v32);
      if ( v34 )
        *(_DWORD *)(v34 + 12) = v13;
      *(_DWORD *)(**(_DWORD **)v23 + 4 * v32) = v13;
      if ( *(_DWORD *)(**(_DWORD **)v23 + v33 + 4) >= (unsigned int)(10 * (*(_DWORD *)(**(_DWORD **)v23 + v33 + 8) + 1)) )
      {
        v35 = *v13;
        if ( *(_DWORD *)(*v13 + 36) != 1 )
        {
          v36 = 24 * *(_DWORD *)(v35 + 4);
          v37 = malloc(v36);
          v38 = v37;
          if ( !v37 )
            exit(-1);
          memset(v37, 0, v36);
          *(_DWORD *)(v35 + 24) = (((2 * *(_DWORD *)(v35 + 4) - 1) & *(_DWORD *)(v35 + 12)) != 0)
                                + (*(_DWORD *)(v35 + 12) >> (*(_BYTE *)(v35 + 8) + 1));
          *(_DWORD *)(*v13 + 28) = 0;
          v39 = (void **)*v13;
          if ( *(_DWORD *)(*v13 + 4) )
          {
            v60 = 0;
            v62 = a1;
            v40 = 0;
            do
            {
              v41 = *(_DWORD **)((char *)*v39 + v40);
              if ( v41 )
              {
                do
                {
                  v42 = (_DWORD *)v41[4];
                  v43 = *v13;
                  v44 = 3 * ((2 * *(_DWORD *)(*v13 + 4) - 1) & v41[7]);
                  v45 = (char *)&v38[3 * ((2 * *(_DWORD *)(*v13 + 4) - 1) & v41[7])];
                  v46 = *((_DWORD *)v45 + 1) + 1;
                  *((_DWORD *)v45 + 1) = v46;
                  if ( v46 > *(_DWORD *)(v43 + 24) )
                  {
                    ++*(_DWORD *)(v43 + 28);
                    *((_DWORD *)v45 + 2) = sub_59EE8(*((_DWORD *)v45 + 1), *(_DWORD *)(*v13 + 24));
                  }
                  v41[3] = 0;
                  v41[4] = v38[v44];
                  v47 = v38[v44];
                  if ( v47 )
                    *(_DWORD *)(v47 + 12) = v41;
                  v38[v44] = v41;
                  v41 = v42;
                }
                while ( v42 );
              }
              ++v60;
              v39 = (void **)*v13;
              v40 += 12;
            }
            while ( *(_DWORD *)(*v13 + 4) > v60 );
            a1 = v62;
          }
          free(*v39);
          *(_DWORD *)(*v13 + 4) *= 2;
          ++*(_DWORD *)(*v13 + 8);
          *(_DWORD *)*v13 = v38;
          v48 = *v13;
          if ( *(_DWORD *)(*v13 + 28) <= *(_DWORD *)(*v13 + 12) >> 1 )
            v49 = 0;
          else
            v49 = *(_DWORD *)(v48 + 32) + 1;
          *(_DWORD *)(v48 + 32) = v49;
          if ( *(_DWORD *)(*v13 + 32) > 1u )
            *(_DWORD *)(*v13 + 36) = 1;
        }
      }
      ++a1[187];
      if ( pthread_mutex_unlock(&mutex) )
      {
        v50 = _errno_location();
        snprintf(
          v73,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v50,
          "cgminer.c",
          "stratum_sthread",
          7718);
        sub_3F1C0(3, v73, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( sub_14584((int)a1, (_BYTE *)a1 + 96) && (byte_78D98 || byte_75C08 || dword_734EC > 3) )
      {
        snprintf(v73, 0x800u, "Pool %d communication resumed, submitting work", *a1);
        sub_3F1C0(4, v73, 0);
      }
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(v73, "Successfully submitted, adding to stratum_shares db");
        sub_3F1C0(7, v73, 0);
      }
      v58 = time(0);
      v13[12] = v58;
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(v73, 0x800u, "Pool %d stratum share submission lag time %d seconds", *a1, v58 - v13[11]);
        sub_3F1C0(7, v73, 0);
      }
LABEL_139:
      v5 = v61;
    }
  }
  sub_2F82C(a1[186]);
  return 0;
}
