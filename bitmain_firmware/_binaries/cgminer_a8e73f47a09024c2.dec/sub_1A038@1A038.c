void __noreturn sub_1A038()
{
  int v0; // r11
  int v1; // r5
  _DWORD *v2; // r4
  int *v3; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r8
  _DWORD *v9; // r3
  int v10; // r2
  int *v11; // r0
  const char *v12; // r3
  time_t v13; // r9
  int *v14; // r0
  int v15; // r7
  int v16; // r8
  int v17; // r6
  int v18; // r12
  int v19; // r2
  int v20; // r1
  int v21; // r3
  int v22; // r3
  int **v23; // r3
  int v24; // r2
  int v25; // r1
  int v26; // r1
  int v27; // r2
  int v28; // r2
  int *v29; // r0
  __int64 v30; // r6
  double v31; // r0
  double v32; // d16
  int v33; // r6
  void **v34; // [sp+1Ch] [bp-818h]
  int v35; // [sp+20h] [bp-814h] BYREF
  int v36; // [sp+28h] [bp-80Ch] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_34684("Watchpool");
  sub_E714();
  v0 = 1;
  while ( 1 )
  {
    sub_30050(&v35);
    if ( dword_802C8 > 0 )
    {
      v1 = 0;
      do
      {
        v2 = *(_DWORD **)(dword_80568 + 4 * v1);
        if ( !byte_7AED0 && !dword_7AED4 )
        {
          sub_30050(&v36);
          if ( pthread_mutex_lock((pthread_mutex_t *)(v2 + 49)) )
          {
            v3 = _errno_location();
            snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "reap_curl", 10106);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          v4 = (_DWORD *)v2[88];
          v5 = v4 - 1;
          v6 = *v4 - 4;
          if ( v2 + 88 == v4 )
          {
            v8 = 0;
          }
          else
          {
            v7 = v2[74];
            if ( v7 <= 1 )
            {
              v8 = 0;
            }
            else
            {
              v8 = 0;
              while ( 1 )
              {
                if ( v36 - v5[3] > 300 )
                {
                  ++v8;
                  v2[74] = v7 - 1;
                  v9 = (_DWORD *)v5[2];
                  v10 = v5[1];
                  *(_DWORD *)(v10 + 4) = v9;
                  *v9 = v10;
                  v5[1] = 0;
                  v5[2] = 0;
                  free(v5);
                }
                if ( v2 + 88 == (_DWORD *)(v6 + 4) )
                  break;
                v7 = v2[74];
                v5 = (_DWORD *)v6;
                if ( v7 <= 1 )
                  break;
                v6 = *(_DWORD *)(v6 + 4) - 4;
              }
            }
          }
          if ( pthread_mutex_unlock((pthread_mutex_t *)(v2 + 49)) )
          {
            v11 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v11,
              "cgminer.c",
              "reap_curl",
              10120);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          off_79D40(0);
          if ( v8 && byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            if ( v8 <= 1 )
              v12 = &byte_6DF60;
            else
              v12 = "s";
            snprintf(s, 0x800u, "Reaped %d curl%s from pool %d", v8, v12, *v2);
            sub_3F178(7, s, 0);
          }
          v13 = time(0);
          if ( pthread_mutex_lock(&mutex) )
          {
            v14 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
              *v14,
              "cgminer.c",
              "prune_stratum_shares",
              10135);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          v15 = dword_7C360;
          if ( dword_7C360 )
          {
            v17 = *(_DWORD *)(dword_7C360 + 8);
            v16 = 0;
            while ( 1 )
            {
              if ( v2 == *(_DWORD **)(*(_DWORD *)(v15 + 36) + 316) && v13 > *(_DWORD *)(v15 + 44) + 120 )
              {
                v18 = *(_DWORD *)(v15 + 4);
                if ( v18 || *(_DWORD *)(v15 + 8) )
                {
                  v19 = dword_7C360;
                  v20 = *(_DWORD *)(*(_DWORD *)dword_7C360 + 20);
                  if ( v15 == *(_DWORD *)(*(_DWORD *)dword_7C360 + 16) - v20 )
                    *(_DWORD *)(*(_DWORD *)dword_7C360 + 16) = v18 + v20;
                  v21 = *(_DWORD *)(v15 + 4);
                  if ( v21 )
                    *(_DWORD *)(v21 + *(_DWORD *)(*(_DWORD *)v19 + 20) + 8) = *(_DWORD *)(v15 + 8);
                  else
                    dword_7C360 = *(_DWORD *)(v15 + 8);
                  v22 = *(_DWORD *)(v15 + 8);
                  if ( v22 )
                    *(_DWORD *)(v22 + *(_DWORD *)(*(_DWORD *)dword_7C360 + 20) + 4) = *(_DWORD *)(v15 + 4);
                  v23 = (int **)dword_7C360;
                  v24 = 3 * ((*(_DWORD *)(*(_DWORD *)dword_7C360 + 4) - 1) & *(_DWORD *)(v15 + 28));
                  v25 = **v23 + 12 * (((*v23)[1] - 1) & *(_DWORD *)(v15 + 28));
                  --*(_DWORD *)(v25 + 4);
                  v26 = **v23;
                  if ( v15 == *(_DWORD *)(v26 + 4 * v24) )
                    *(_DWORD *)(v26 + 4 * v24) = *(_DWORD *)(v15 + 16);
                  v27 = *(_DWORD *)(v15 + 12);
                  if ( v27 )
                    *(_DWORD *)(v27 + 16) = *(_DWORD *)(v15 + 16);
                  v28 = *(_DWORD *)(v15 + 16);
                  if ( v28 )
                    *(_DWORD *)(v28 + 12) = *(_DWORD *)(v15 + 12);
                  --(*v23)[3];
                }
                else
                {
                  v34 = (void **)dword_7C360;
                  free(**(void ***)dword_7C360);
                  free(*v34);
                  dword_7C360 = 0;
                }
                sub_11F58(*(void ***)(v15 + 36));
                *(_DWORD *)(v15 + 36) = 0;
                free((void *)v15);
                ++v16;
              }
              if ( !v17 )
                break;
              v15 = v17;
              v17 = *(_DWORD *)(v17 + 8);
            }
          }
          else
          {
            v16 = 0;
          }
          if ( pthread_mutex_unlock(&mutex) )
          {
            v29 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v29,
              "cgminer.c",
              "prune_stratum_shares",
              10146);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          off_79D40(0);
          if ( v16 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
            {
              snprintf(s, 0x800u, "Lost %d shares due to no stratum share response from pool %d", v16, *v2);
              sub_3F178(4, s, 0);
            }
            v2[31] += v16;
            *(_QWORD *)&dbl_80EB0 += v16;
          }
        }
        if ( v0 > 19 )
        {
          v30 = *((_QWORD *)v2 + 5);
          v31 = sub_5ED34((int)v30 - v2[40], (unsigned __int64)(v30 - (int)v2[40]) >> 32);
          v2[40] = v30;
          v32 = (*((double *)v2 + 19) + v31 * 0.63) / 1.63;
          *((double *)v2 + 19) = v32;
          v2[41] = (int)v32;
        }
        if ( v2[25] && !*((_BYTE *)v2 + 292) )
        {
          if ( !*((_BYTE *)v2 + 97) )
            goto LABEL_76;
          if ( v35 - v2[35] > 30 )
          {
            if ( sub_15960(v2, 1) && sub_14764((int)v2, (_BYTE *)v2 + 97) )
              sub_15148((int)v2);
            else
              sub_30050(v2 + 35);
            if ( !*((_BYTE *)v2 + 97) )
            {
LABEL_76:
              if ( !dword_7AA24 )
              {
                v33 = v2[1];
                if ( v33 < sub_150B0() && v35 - v2[35] > 300 )
                {
                  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
                  {
                    snprintf(s, 0x800u, "Pool %d %s stable for 5 mins", *v2, (const char *)v2[43]);
                    sub_3F178(4, s, 0);
                  }
                  sub_199D4(0);
                }
              }
            }
          }
        }
        ++v1;
      }
      while ( dword_802C8 > v1 );
    }
    if ( *(_BYTE *)(sub_14A18() + 97) )
      sub_199D4(0);
    if ( dword_7AA24 == 2 && v35 - dword_7C3B0 > 60 * dword_80700 )
    {
      sub_30050(&dword_7C3B0);
      sub_199D4(0);
    }
    sub_30140(30000);
    if ( ++v0 > 20 )
      v0 = 0;
  }
}
