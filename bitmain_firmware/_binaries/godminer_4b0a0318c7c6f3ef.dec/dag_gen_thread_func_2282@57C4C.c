void __noreturn dag_gen_thread_func_2282()
{
  int v0; // r6
  int v1; // r7
  int v2; // r8
  int v3; // r9
  int *v4; // r5
  _DWORD *v5; // r10
  int v6; // r11
  int epoch_number_eth_2282; // r6
  int v8; // r3
  void **v9; // r7
  signed int i; // r6
  void (**v11)(void); // t1
  int v12; // r3
  __int64 v13; // r6
  int v14; // r3
  int v15; // r3
  signed int *v16; // r1
  int v17; // r3
  unsigned int v18; // r2
  signed int v19; // t1
  pthread_t *v20; // r0
  pthread_t *v21; // r9
  void **v22; // r8
  pthread_t *v23; // r7
  signed int v24; // r6
  _DWORD *v25; // t1
  pthread_t *v26; // r0
  char *v27; // r7
  signed int j; // r6
  pthread_t v29; // t1
  int v30; // r3
  pthread_t *v31; // r0
  pthread_t *v32; // r9
  void **v33; // r8
  pthread_t *v34; // r7
  signed int k; // r6
  void *(**v36)(void *); // t1
  pthread_t *v37; // r0
  char *v38; // r7
  signed int m; // r6
  pthread_t v40; // t1
  int v41; // [sp+4h] [bp-1098h]
  int v42; // [sp+1Ch] [bp-1080h]
  __int64 v43; // [sp+28h] [bp-1074h]
  void **v44; // [sp+30h] [bp-106Ch]
  int v45; // [sp+34h] [bp-1068h]
  int v46; // [sp+38h] [bp-1064h]
  int v47; // [sp+3Ch] [bp-1060h]
  signed int v48; // [sp+44h] [bp-1058h] BYREF
  _DWORD s[8]; // [sp+48h] [bp-1054h] BYREF
  _QWORD v50[6]; // [sp+68h] [bp-1034h] BYREF
  char v51[4100]; // [sp+98h] [bp-1004h] BYREF

  LOWORD(v4) = 14084;
  LOWORD(v5) = 20532;
  LOWORD(v6) = -7832;
  LOWORD(v0) = 24912;
  LOWORD(v1) = -24240;
  LOWORD(v2) = -7656;
  LOWORD(v3) = 24856;
  HIWORD(v4) = (unsigned int)&dword_193708 >> 16;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v6) = (unsigned int)"ld/godminer-origin_godminer-new/dhash_content/kda/kda_2110/kda_2110_content.c" >> 16;
  v48 = 0;
  HIWORD(v1) = (unsigned int)&unk_15A510 >> 16;
  HIWORD(v2) = (unsigned int)"" >> 16;
  HIWORD(v3) = (unsigned int)&unk_1564D8 >> 16;
  HIWORD(v0) = (unsigned int)&unk_156510 >> 16;
  v46 = v0;
  v44 = (void **)((char *)get_all_created_runtime(&v48) - 4);
  v47 = v1;
  v45 = v2;
  v42 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed_2282(s);
      epoch_number_eth_2282 = get_epoch_number_eth_2282(s);
      if ( *v4 == epoch_number_eth_2282 )
        break;
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", *v4, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(*v5, v6, 174, v42, 24, 194, 40, v51);
      if ( !epoch_number_eth_2282 )
        goto LABEL_8;
      if ( *v4 != epoch_number_eth_2282 )
      {
        if ( *v4 <= epoch_number_eth_2282 )
        {
          *v4 = epoch_number_eth_2282;
          V_LOCK();
          LOWORD(v8) = -7512;
          HIWORD(v8) = (unsigned int)"t/rvn/rvn_2044/rvn_2044_content.c" >> 16;
          logfmt_raw(v51, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(*v5, v6, 174, v42, 24, 211, 60, v51);
          if ( v48 > 0 )
          {
            v9 = v44;
            for ( i = 0; i < v48; ++i )
            {
              v11 = (void (**)(void))v9[1];
              ++v9;
              v11[6]();
            }
          }
          v12 = 8 * *v4;
          v43 = *(_QWORD *)(v46 + v12);
          v13 = *(_QWORD *)(v47 + v12);
          V_LOCK();
          LOWORD(v14) = -7464;
          HIWORD(v14) = (unsigned int)"gin for new job comming..." >> 16;
          logfmt_raw(v51, 0x1000u, 0, v14);
          V_UNLOCK();
          zlog(*v5, v6, 174, v42, 24, 220, 60, v51);
          V_LOCK();
          LOWORD(v15) = -7396;
          HIWORD(v15) = (unsigned int)"start_nonce_rvn_high: %016llx" >> 16;
          logfmt_raw(v51, 0x1000u, 0, v15, *v4, v41, v43, v13);
          V_UNLOCK();
          zlog(*v5, v6, 174, v42, 24, 222, 60, v51);
          v16 = &v48;
          v17 = 0;
          v50[0] = v43;
          v50[1] = v13;
          do
          {
            v18 = v17 & 0xFFFFFFFC;
            v19 = v16[1];
            ++v16;
            v17 += 4;
            *(_DWORD *)((char *)&v50[2] + v18) = v19;
          }
          while ( v17 != 32 );
          v20 = (pthread_t *)calloc(v48, 4u);
          v21 = v20;
          if ( v48 > 0 )
          {
            v22 = v44;
            v23 = v20;
            v24 = 0;
            do
            {
              v25 = v22[1];
              ++v22;
              v26 = v23;
              ++v24;
              ++v23;
              v25[257] = v50;
              pthread_create(v26, 0, *((void *(**)(void *))*v22 + 59), *v22);
            }
            while ( v48 > v24 );
            if ( v48 > 0 )
            {
              v27 = (char *)(v21 - 1);
              for ( j = 0; j < v48; ++j )
              {
                v29 = *((_DWORD *)v27 + 1);
                v27 += 4;
                pthread_join(v29, 0);
              }
            }
          }
          free(v21);
          V_LOCK();
          LOWORD(v30) = -7348;
          HIWORD(v30) = (unsigned int)"thread_func" >> 16;
          logfmt_raw(v51, 0x1000u, 0, v30);
          V_UNLOCK();
          zlog(*v5, v6, 174, v42, 24, 248, 60, v51);
          v31 = (pthread_t *)calloc(v48, 4u);
          v32 = v31;
          if ( v48 > 0 )
          {
            v33 = v44;
            v34 = v31;
            for ( k = 0; k < v48; ++k )
            {
              v36 = (void *(**)(void *))v33[1];
              ++v33;
              v37 = v34++;
              pthread_create(v37, 0, v36[7], v36);
            }
            if ( v48 > 0 )
            {
              v38 = (char *)(v32 - 1);
              for ( m = 0; m < v48; ++m )
              {
                v40 = *((_DWORD *)v38 + 1);
                v38 += 4;
                pthread_join(v40, 0);
              }
            }
          }
          free(v32);
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v51,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            *v4,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(*v5, v6, 174, v42, 24, 206, 40, v51);
        }
      }
    }
    if ( !*v4 )
    {
LABEL_8:
      V_LOCK();
      logfmt_raw(v51, 0x1000u, 0, v45, *v4, 0);
      V_UNLOCK();
      zlog(*v5, v6, 174, v42, 24, 197, 40, v51);
    }
  }
}
