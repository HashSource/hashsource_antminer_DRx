void *__fastcall sub_21AB0(_DWORD *a1)
{
  pthread_t v1; // r0
  int v2; // r0
  int v3; // r0
  __int64 v4; // r6
  int v5; // r5
  _DWORD *v6; // r12
  int v7; // r0
  int v8; // r4
  __int64 v9; // r2
  int **v10; // r11
  time_t v11; // r0
  int v12; // r3
  int *v13; // r6
  size_t v14; // r0
  int **v15; // r4
  int *v16; // r5
  unsigned int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r1
  unsigned int v24; // r3
  int v25; // r2
  int v26; // r3
  int *v27; // r1
  int v28; // r1
  int ***v29; // r0
  int v30; // r2
  int *v31; // r4
  size_t v32; // r5
  _DWORD *v33; // r0
  _DWORD *v34; // r6
  int v35; // r8
  void **v36; // r1
  unsigned int v37; // r5
  void ***v38; // r10
  _DWORD *v39; // r4
  _DWORD *v40; // r11
  int v41; // r5
  char *v42; // r7
  unsigned int v43; // r3
  int v44; // r3
  int *v45; // r3
  unsigned int v46; // r1
  unsigned int v47; // r2
  bool v48; // cc
  int v49; // r2
  time_t v50; // r0
  int *v51; // r2
  bool v52; // zf
  int *v54; // r0
  void *v55; // r0
  __int64 v56; // r2
  const char *v57; // r1
  _BOOL4 v58; // r9
  int v59; // r3
  unsigned int i; // [sp+18h] [bp-C5Ch]
  __int64 v62; // [sp+20h] [bp-C54h]
  int v63; // [sp+28h] [bp-C4Ch]
  int v64; // [sp+34h] [bp-C40h] BYREF
  __int64 v65; // [sp+38h] [bp-C3Ch] BYREF
  char v66[12]; // [sp+40h] [bp-C34h] BYREF
  char s[16]; // [sp+4Ch] [bp-C28h] BYREF
  char v68[20]; // [sp+5Ch] [bp-C18h] BYREF
  char v69[1024]; // [sp+70h] [bp-C04h] BYREF
  char v70[2052]; // [sp+470h] [bp-804h] BYREF

  v1 = pthread_self();
  pthread_detach(v1);
  snprintf(s, 0x10u, "%d/SStratum", *a1);
  v2 = sub_2F02C(s);
  v3 = sub_2AA90(v2);
  a1[174] = v3;
  if ( !v3 )
  {
    strcpy(v70, "Failed to create stratum_q in stratum_sthread");
    sub_38438(3, v70, 1);
    sub_16724(1);
  }
  v4 = 0;
  v5 = 0;
LABEL_4:
  v6 = a1;
  if ( *((_BYTE *)a1 + 105) )
    goto LABEL_62;
  do
  {
    v7 = sub_2AC28(v6[174]);
    v8 = v7;
    if ( !v7 )
    {
      strcpy(v70, "Stratum q returned empty work");
      sub_38438(3, v70, 1);
      sub_16724(1);
    }
    if ( *(_DWORD *)(v7 + 304) > 8u )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf(v70, 0x800u, "Pool %d asking for inappropriately long nonce2 length %d", *a1, *(_DWORD *)(v7 + 304));
        sub_38438(3, v70, 0);
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          strcpy(v70, "Not attempting to submit shares");
          sub_38438(3, v70, 0);
        }
      }
LABEL_108:
      sub_152B8((void **)v8);
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(v7 + 296);
    v63 = *(_DWORD *)(v7 + 76);
    v62 = v9;
    v64 = v63;
    v65 = v9;
    if ( v5 == v63 && v4 == v9 )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(v70, 0x800u, "Filtering duplicate share to pool %d", *a1);
        sub_38438(7, v70, 0);
      }
      goto LABEL_108;
    }
    sub_29460(v66, &v64, 4);
    sub_29460(v68, &v65, *(_DWORD *)(v8 + 304));
    v10 = (int **)calloc(0x34u, 1u);
    v11 = time(0);
    v10[9] = (int *)v8;
    v10[11] = (int *)v11;
    memset(v69, 0, sizeof(v69));
    if ( pthread_mutex_lock(&stru_612DC) )
      sub_B4E4("stratum_sthread", 7277);
    v12 = dword_636A0++;
    v10[10] = (int *)v12;
    if ( pthread_mutex_unlock(&stru_612DC) )
      sub_B694("stratum_sthread", 7280);
    off_60178();
    snprintf(
      v69,
      0x400u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      (const char *)a1[43],
      *(const char **)(v8 + 288),
      v68,
      *(const char **)(v8 + 308),
      v66,
      v10[10]);
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(v70, 0x800u, "Submitting share %08lx to pool %d", *(_DWORD *)(v8 + 216), *a1);
      sub_38438(7, v70, 0);
    }
    while ( 1 )
    {
      v13 = v10[11];
      if ( (int)v13 + 119 < time(0) )
        goto LABEL_71;
      v14 = strlen(v69);
      if ( sub_2BEA8(a1, v69, v14) )
      {
        if ( pthread_mutex_lock(&stru_612DC) )
          sub_B4E4("stratum_sthread", 7307);
        v10[2] = 0;
        v10[5] = (int *)(v10 + 10);
        v15 = (int **)dword_612F4;
        v10[6] = (int *)4;
        if ( v15 )
        {
          *(_DWORD *)((*v15)[4] + 8) = v10;
          v10[1] = (int *)((*v15)[4] - (*v15)[5]);
          (*v15)[4] = (int)v10;
          v16 = *v15;
        }
        else
        {
          v10[1] = 0;
          dword_612F4 = (int)v10;
          v54 = (int *)malloc(0x2Cu);
          v16 = v54;
          *v10 = v54;
          if ( !v54 )
            goto LABEL_78;
          *v54 = 0;
          v54[3] = 0;
          v54[4] = 0;
          v54[5] = 0;
          v54[6] = 0;
          v54[7] = 0;
          v54[8] = 0;
          v54[9] = 0;
          v54[10] = 0;
          v54[4] = (int)v10;
          v54[5] = 0;
          v54[1] = 32;
          v54[2] = 5;
          v55 = malloc(0x180u);
          *v16 = (int)v55;
          if ( !v55 )
            goto LABEL_78;
          memset(v55, 0, 0x180u);
          v15 = v10;
          v16[10] = -1609490463;
        }
        ++v16[3];
        v17 = (*((unsigned __int8 *)v10 + 40)
             + 17973517
             + (*((unsigned __int8 *)v10 + 43) << 24)
             + (*((unsigned __int8 *)v10 + 42) << 16)
             + (*((unsigned __int8 *)v10 + 41) << 8))
            ^ (unsigned int)&unk_7F76D;
        *v10 = *v15;
        v18 = (-1622558010 - v17) ^ (v17 << 8);
        v19 = (-17973517 - v17 - v18) ^ (v18 >> 13);
        v20 = (v17 - v18 - v19) ^ (v19 >> 12);
        v21 = (v18 - v19 - v20) ^ (v20 << 16);
        v22 = (v19 - v20 - v21) ^ (v21 >> 5);
        v23 = v20 - v21 - v22;
        v24 = (v22 - (v23 ^ (v22 >> 3)) - ((v21 - v22 - (v23 ^ (v22 >> 3))) ^ ((v23 ^ (v22 >> 3)) << 10)))
            ^ (((v21 - v22 - (v23 ^ (v22 >> 3))) ^ ((v23 ^ (v22 >> 3)) << 10)) >> 15);
        v10[7] = (int *)v24;
        v25 = 3 * (v24 & ((*v15)[1] - 1));
        v26 = 12 * (v24 & ((*v15)[1] - 1));
        ++*(_DWORD *)(**v15 + v26 + 4);
        v27 = *(int **)(**v15 + 4 * v25);
        v10[3] = 0;
        v10[4] = v27;
        v28 = **v15;
        v29 = (int ***)(v28 + v26);
        v30 = *(_DWORD *)(v28 + 4 * v25);
        if ( v30 )
        {
          *(_DWORD *)(v30 + 12) = v10;
          v29 = (int ***)(**v15 + v26);
        }
        *v29 = v10;
        if ( *(_DWORD *)(**v15 + v26 + 4) < (unsigned int)(10 * (*(_DWORD *)(**v15 + v26 + 8) + 1)) )
          goto LABEL_45;
        v31 = *v10;
        if ( (*v10)[9] == 1 )
          goto LABEL_45;
        v32 = 24 * v31[1];
        v33 = malloc(v32);
        v34 = v33;
        if ( v33 )
        {
          memset(v33, 0, v32);
          v35 = 0;
          v31[6] = (((2 * v31[1] - 1) & v31[3]) != 0) + ((unsigned int)v31[3] >> (*((_BYTE *)v31 + 8) + 1));
          (*v10)[7] = 0;
          v36 = (void **)*v10;
          v37 = (*v10)[1];
          if ( v37 )
          {
            v38 = (void ***)v10;
            for ( i = 0; i < v37; ++i )
            {
              v39 = *(_DWORD **)((char *)*v36 + v35);
              if ( v39 )
              {
                while ( 1 )
                {
                  v40 = (_DWORD *)v39[4];
                  v41 = 3 * ((2 * v37 - 1) & v39[7]);
                  v42 = (char *)&v34[v41];
                  v43 = *((_DWORD *)v42 + 1) + 1;
                  *((_DWORD *)v42 + 1) = v43;
                  if ( v43 > (unsigned int)v36[6] )
                  {
                    v36[7] = (char *)v36[7] + 1;
                    *((_DWORD *)v42 + 2) = sub_48EC0(*((_DWORD *)v42 + 1), (*v38)[6]);
                  }
                  v39[3] = 0;
                  v39[4] = v34[v41];
                  v44 = v34[v41];
                  if ( v44 )
                    *(_DWORD *)(v44 + 12) = v39;
                  v34[v41] = v39;
                  v36 = *v38;
                  if ( !v40 )
                    break;
                  v37 = (unsigned int)v36[1];
                  v39 = v40;
                }
                v37 = (unsigned int)v36[1];
              }
              v35 += 12;
            }
            v10 = (int **)v38;
          }
          free(*v36);
          (*v10)[1] *= 2;
          ++(*v10)[2];
          **v10 = (int)v34;
          v45 = *v10;
          v46 = (*v10)[3];
          v47 = (*v10)[7];
          v48 = v47 > v46 >> 1;
          if ( v47 <= v46 >> 1 )
            v49 = 0;
          else
            v49 = v45[8];
          if ( v48 )
            ++v49;
          v45[8] = v49;
          if ( (unsigned int)(*v10)[8] > 1 )
            (*v10)[9] = 1;
LABEL_45:
          ++a1[175];
          if ( pthread_mutex_unlock(&stru_612DC) )
            sub_B694("stratum_sthread", 7310);
          off_60178();
          if ( sub_1822C((int)a1, (_BYTE *)a1 + 96) && (byte_632F0 || byte_630C0 || dword_60964 > 3) )
          {
            snprintf(v70, 0x800u, "Pool %d communication resumed, submitting work", *a1);
            sub_38438(4, v70, 0);
          }
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            strcpy(v70, "Successfully submitted, adding to stratum_shares db");
            sub_38438(7, v70, 0);
          }
          v50 = time(0);
          v51 = v10[11];
          v52 = byte_630C1 == 0;
          v10[12] = (int *)v50;
          if ( !v52 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(v70, 0x800u, "Pool %d stratum share submission lag time %d seconds", *a1, v50 - (_DWORD)v51);
            sub_38438(7, v70, 0);
          }
          goto LABEL_61;
        }
LABEL_78:
        exit(-1);
      }
      if ( !sub_17E64((int)a1, (_BYTE *)a1 + 96) && sub_1FB7C((int)a1) )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(v70, 0x800u, "Pool %d stratum share submission failure", *a1);
          sub_38438(4, v70, 0);
        }
        v59 = a1[33];
        ++dword_63410;
        a1[33] = v59 + 1;
      }
      if ( byte_63BE4 )
        break;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
        sub_B4E4("stratum_sthread", 7331);
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 59)) )
        sub_B76C("stratum_sthread", 7331);
      if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
        sub_B694("stratum_sthread", 7331);
      v57 = (const char *)a1[151];
      if ( v57 )
        v58 = strcmp(*(const char **)(v8 + 320), v57) == 0;
      else
        v58 = 0;
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
        sub_B700("stratum_sthread", 7333);
      off_60178();
      if ( !v58 )
      {
        if ( byte_630C1 )
        {
          if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
            goto LABEL_74;
          strcpy(v70, "No matching session id for resubmitting stratum share");
          sub_38438(7, v70, 0);
LABEL_71:
          if ( byte_630C1 )
          {
            if ( !byte_632F0 )
              goto LABEL_74;
            goto LABEL_76;
          }
        }
        goto LABEL_72;
      }
      sleep(5u);
    }
    if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
      {
        strcpy(v70, "Lowmem option prevents resubmitting stratum share");
        sub_38438(7, v70, 0);
        goto LABEL_71;
      }
LABEL_74:
      if ( byte_630C0 || dword_60964 > 6 )
      {
LABEL_76:
        strcpy(v70, "Failed to submit stratum share, discarding");
        sub_38438(7, v70, 0);
      }
    }
LABEL_72:
    sub_152B8((void **)v8);
    free(v10);
    v56 = *(_QWORD *)&dword_64220 + 1LL;
    ++a1[30];
    *(_QWORD *)&dword_64220 = v56;
LABEL_61:
    v6 = a1;
    v5 = v63;
    v4 = v62;
  }
  while ( !*((_BYTE *)a1 + 105) );
LABEL_62:
  sub_2AB58(a1[174]);
  return 0;
}
