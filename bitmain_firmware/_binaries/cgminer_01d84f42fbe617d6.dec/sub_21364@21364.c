void __noreturn sub_21364()
{
  int v0; // r2
  int v1; // r3
  int v2; // r2
  int v3; // r5
  int v4; // r4
  __int64 v5; // r10
  double v6; // r0
  double v7; // d16
  double v8; // d16
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r9
  _DWORD *v13; // r3
  _DWORD *v14; // r2
  int v15; // r11
  int v16; // r3
  int v17; // r9
  int v18; // r5
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r12
  int v22; // r3
  const char *v23; // r9
  int v24; // r10
  int v25; // r11
  int v26; // r3
  int v27; // r9
  int v28; // r5
  int v29; // r4
  int v30; // r1
  int **v31; // r3
  int v32; // r0
  int *v33; // r12
  bool v34; // zf
  int v35; // r1
  int v36; // r0
  int v37; // r0
  int v38; // r1
  int v39; // r1
  int v40; // r3
  __int64 v41; // r2
  void **v42; // [sp+10h] [bp-824h]
  int v43; // [sp+14h] [bp-820h]
  int v44; // [sp+14h] [bp-820h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-81Ch]
  pthread_mutex_t *mutexa; // [sp+18h] [bp-81Ch]
  int v47; // [sp+1Ch] [bp-818h]
  int v48; // [sp+20h] [bp-814h] BYREF
  int v49; // [sp+28h] [bp-80Ch] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_2F02C("Watchpool");
  sub_11C4C();
  v43 = 0;
  while ( 1 )
  {
    v44 = v43 + 1;
    sub_2B13C(&v48, v44, v0, v1);
    v2 = v44;
    if ( v44 > 20 )
      v2 = 0;
    v43 = v2;
    if ( dword_63740 > 0 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = *(_DWORD *)(dword_639E0 + 4 * v3);
        if ( byte_615C9 || dword_612AC )
          goto LABEL_11;
        mutex = (pthread_mutex_t *)(v4 + 188);
        sub_2B13C(&v49, &dword_60E88, v4 + 188, 0);
        if ( pthread_mutex_lock((pthread_mutex_t *)(v4 + 188)) )
          sub_B4E4("reap_curl", 9507);
        v13 = *(_DWORD **)(v4 + 344);
        v14 = v13 - 1;
        v15 = *v13 - 4;
        if ( (_DWORD *)(v4 + 344) == v13 )
        {
          v17 = 0;
          if ( pthread_mutex_unlock(mutex) )
            goto LABEL_95;
        }
        else
        {
          v16 = *(_DWORD *)(v4 + 288);
          v17 = 0;
          if ( v16 > 1 )
          {
            v47 = v3;
            v18 = 0;
            do
            {
              if ( v49 - v14[3] > 300 )
              {
                *(_DWORD *)(v4 + 288) = v16 - 1;
                v20 = (_DWORD *)v14[2];
                v21 = v14[1];
                ++v18;
                *(_DWORD *)(v21 + 4) = v20;
                *v20 = v21;
                v14[1] = 0;
                v14[2] = 0;
                free(v14);
              }
              v14 = (_DWORD *)v15;
              v19 = v15 + 4;
              v15 = *(_DWORD *)(v15 + 4) - 4;
              if ( v4 + 344 == v19 )
                break;
              v16 = *(_DWORD *)(v4 + 288);
            }
            while ( v16 > 1 );
            v17 = v18;
            v3 = v47;
          }
          if ( pthread_mutex_unlock(mutex) )
LABEL_95:
            sub_B694("reap_curl", 9521);
        }
        off_60178();
        if ( v17 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v22 = v17;
          if ( v17 == 1 )
            v23 = "";
          else
            v23 = "s";
          snprintf(s, 0x800u, "Reaped %d curl%s from pool %d", v22, v23, *(_DWORD *)v4);
          sub_38438(7, s, 0);
        }
        mutexa = (pthread_mutex_t *)time(0);
        if ( pthread_mutex_lock(&stru_612DC) )
          sub_B4E4("prune_stratum_shares", 9536);
        v24 = dword_612F4;
        if ( !dword_612F4 )
        {
          v25 = 0;
          goto LABEL_81;
        }
        v26 = v3;
        v27 = *(_DWORD *)(dword_612F4 + 8);
        v28 = v4;
        v25 = 0;
        v29 = v26;
        while ( v28 != *(_DWORD *)(*(_DWORD *)(v24 + 36) + 260) || (int)mutexa <= *(_DWORD *)(v24 + 44) + 120 )
        {
          if ( !v27 )
            goto LABEL_80;
LABEL_56:
          v24 = v27;
          v27 = *(_DWORD *)(v27 + 8);
        }
        v30 = *(_DWORD *)(v24 + 4);
        if ( v30 || *(_DWORD *)(v24 + 8) )
        {
          v31 = (int **)dword_612F4;
          v32 = *(_DWORD *)dword_612F4;
          v33 = *(int **)(*(_DWORD *)dword_612F4 + 20);
          if ( v24 == *(_DWORD *)(*(_DWORD *)dword_612F4 + 16) - (_DWORD)v33 )
          {
            *(_DWORD *)(v32 + 16) = (char *)v33 + v30;
            v30 = *(_DWORD *)(v24 + 4);
          }
          v34 = v30 == 0;
          if ( v30 )
          {
            v33 = *v31;
            v32 = *(_DWORD *)(v24 + 8);
          }
          else
          {
            v30 = *(_DWORD *)(v24 + 8);
          }
          if ( v34 )
          {
            v31 = (int **)v30;
            dword_612F4 = v30;
          }
          else
          {
            v30 += v33[5];
          }
          if ( !v34 )
          {
            *(_DWORD *)(v30 + 8) = v32;
            v30 = *(_DWORD *)(v24 + 8);
          }
          if ( v30 )
            *(_DWORD *)(v30 + (*v31)[5] + 4) = *(_DWORD *)(v24 + 4);
          v35 = 3 * (((*v31)[1] - 1) & *(_DWORD *)(v24 + 28));
          v36 = **v31 + 12 * (((*v31)[1] - 1) & *(_DWORD *)(v24 + 28));
          --*(_DWORD *)(v36 + 4);
          v37 = **v31;
          if ( v24 == *(_DWORD *)(v37 + 4 * v35) )
            *(_DWORD *)(v37 + 4 * v35) = *(_DWORD *)(v24 + 16);
          v38 = *(_DWORD *)(v24 + 12);
          if ( v38 )
            *(_DWORD *)(v38 + 16) = *(_DWORD *)(v24 + 16);
          v39 = *(_DWORD *)(v24 + 16);
          if ( v39 )
            *(_DWORD *)(v39 + 12) = *(_DWORD *)(v24 + 12);
          --(*v31)[3];
        }
        else
        {
          v42 = (void **)dword_612F4;
          free(**(void ***)dword_612F4);
          free(*v42);
          dword_612F4 = 0;
        }
        ++v25;
        sub_152B8(*(void ***)(v24 + 36));
        *(_DWORD *)(v24 + 36) = 0;
        free((void *)v24);
        if ( v27 )
          goto LABEL_56;
LABEL_80:
        v40 = v29;
        v4 = v28;
        v3 = v40;
LABEL_81:
        if ( pthread_mutex_unlock(&stru_612DC) )
          sub_B694("prune_stratum_shares", 9547);
        off_60178();
        if ( v25 )
        {
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            snprintf(s, 0x800u, "Lost %d shares due to no stratum share response from pool %d", v25, *(_DWORD *)v4);
            sub_38438(4, s, 0);
          }
          v41 = *(_QWORD *)&dword_64220;
          *(_DWORD *)(v4 + 120) += v25;
          *(_QWORD *)&dword_64220 = v41 + v25;
        }
LABEL_11:
        if ( v43 == 20 )
        {
          v5 = *(_QWORD *)(v4 + 40);
          v6 = sub_493DC((int)v5 - *(_DWORD *)(v4 + 152), (unsigned __int64)(v5 - *(int *)(v4 + 152)) >> 32);
          v7 = *(double *)(v4 + 144);
          *(_DWORD *)(v4 + 152) = v5;
          v8 = (v7 + v6 * 0.63) / 1.63;
          *(double *)(v4 + 144) = v8;
          *(_DWORD *)(v4 + 156) = (int)v8;
        }
        if ( !*(_DWORD *)(v4 + 100) || *(_BYTE *)(v4 + 284) )
          goto LABEL_8;
        if ( !*(_BYTE *)(v4 + 97) )
        {
LABEL_7:
          if ( !dword_611AC )
          {
            v12 = *(_DWORD *)(v4 + 4);
            if ( v12 < sub_1F70C() && v48 - *(_DWORD *)(v4 + 136) > 300 )
            {
              if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
              {
                snprintf(s, 0x800u, "Pool %d %s stable for 5 mins", *(_DWORD *)v4, *(const char **)(v4 + 164));
                sub_38438(4, s, 0);
              }
              sub_195D4(0);
            }
          }
          goto LABEL_8;
        }
        if ( v48 - *(_DWORD *)(v4 + 136) <= 30 )
        {
LABEL_8:
          if ( dword_63740 <= ++v3 )
            break;
        }
        else
        {
          if ( sub_182A0((_DWORD *)v4, 1, v48) && sub_1822C(v4, (_BYTE *)(v4 + 97)) )
            sub_1F7C4(v4);
          else
            sub_2B13C(v4 + 136, v9, v10, v11);
          if ( !*(_BYTE *)(v4 + 97) )
            goto LABEL_7;
          if ( dword_63740 <= ++v3 )
            break;
        }
      }
    }
    if ( *(_BYTE *)(sub_1D644() + 97) )
    {
      sub_195D4(0);
      if ( dword_611AC != 2 )
        goto LABEL_24;
    }
    else if ( dword_611AC != 2 )
    {
      goto LABEL_24;
    }
    if ( v48 - dword_615CC > 60 * dword_63AF8 )
    {
      sub_2B13C(&dword_615CC, v48, v48 - dword_615CC, 15 * dword_63AF8);
      sub_195D4(0);
    }
LABEL_24:
    sub_2B21C(30000);
  }
}
