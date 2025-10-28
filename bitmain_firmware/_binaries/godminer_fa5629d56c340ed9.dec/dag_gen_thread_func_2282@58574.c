int dag_gen_thread_func_2282()
{
  signed int v0; // r5
  char *all_created_runtime; // r0
  char *v2; // r8
  __int64 *p_newthread; // r6
  void *(**v4)(void *); // t1
  pthread_t *v5; // r0
  char *v6; // r7
  signed int i; // r5
  pthread_t v8; // t1
  int epoch_number_eth_2282; // r0
  int v10; // r5
  signed int v11; // r5
  char *v12; // r6
  int v13; // t1
  const char *v14; // r7
  signed int *v15; // r1
  int v16; // r3
  unsigned int v17; // r2
  signed int v18; // t1
  pthread_t *v19; // r0
  pthread_t *v20; // r6
  signed int v21; // r5
  void **v22; // r7
  _DWORD *v23; // t1
  pthread_t *v24; // r0
  signed int v25; // r5
  int v26; // r6
  pthread_t v27; // t1
  pthread_t *v28; // r0
  pthread_t *v29; // r6
  signed int v30; // r5
  char *v31; // r7
  void *(**v32)(void *); // t1
  pthread_t *v33; // r0
  signed int v34; // r5
  int v35; // r6
  pthread_t v36; // t1
  __int64 *v37; // r7
  signed int v38; // r6
  char *v39; // r5
  void *(**v40)(void *); // t1
  pthread_t *v41; // r0
  char *v42; // r8
  signed int j; // r5
  pthread_t v44; // t1
  int v46; // [sp+4h] [bp-10B0h]
  __int64 v47; // [sp+10h] [bp-10A4h] BYREF
  __int64 newthread; // [sp+18h] [bp-109Ch] BYREF
  __int64 v49; // [sp+20h] [bp-1094h]
  const char *v50; // [sp+28h] [bp-108Ch]
  char *v51; // [sp+2Ch] [bp-1088h]
  const char *v52; // [sp+30h] [bp-1084h]
  const char *v53; // [sp+34h] [bp-1080h]
  signed int v54; // [sp+3Ch] [bp-1078h] BYREF
  _DWORD v55[8]; // [sp+40h] [bp-1074h] BYREF
  _DWORD v56[5]; // [sp+60h] [bp-1054h] BYREF
  char v57[36]; // [sp+90h] [bp-1024h] BYREF

  v0 = 0;
  v54 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v54);
  v51 = all_created_runtime;
  if ( v54 > 0 )
  {
    v2 = all_created_runtime - 4;
    p_newthread = &newthread;
    do
    {
      v4 = (void *(**)(void *))*((_DWORD *)v2 + 1);
      v2 += 4;
      v5 = (pthread_t *)p_newthread;
      ++v0;
      p_newthread = (__int64 *)((char *)p_newthread + 4);
      pthread_create(v5, 0, v4[60], v4);
    }
    while ( v54 > v0 );
    if ( v54 > 0 )
    {
      v6 = (char *)&v47 + 4;
      for ( i = 0; i < v54; ++i )
      {
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
        pthread_join(v8, 0);
      }
    }
  }
  if ( (case_select[0] & 0xF7) != 6 )
  {
    v50 = "cur_epoch-epoch [%d-%d], synchronizing the state of the blockchain and start mining";
    v53 = "dag_gen_thread_func_2282";
    v52 = "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c";
    while ( 1 )
    {
      while ( 1 )
      {
        memset(v55, 0, sizeof(v55));
        get_cur_seed_2282(v55);
        epoch_number_eth_2282 = get_epoch_number_eth_2282(v55);
        v10 = epoch_number_eth_2282;
        if ( !dword_1978E8 )
          dword_1978E8 = epoch_number_eth_2282;
        if ( epoch_number_eth_2282 == dword_19470C )
          break;
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_19470C, v10);
        V_UNLOCK();
        zlog(g_zc, v52, 174, v53, 24, 237, 40, v57);
        if ( !v10 )
          goto LABEL_18;
        if ( v10 != dword_19470C )
        {
          if ( v10 != dword_1978E8 )
          {
            V_LOCK();
            logfmt_raw(v57, 0x1000u, 0, "epoch changed from %d-%d, exit mining exe...", v10, dword_1978E8);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
              174,
              "dag_gen_thread_func_2282",
              24,
              249,
              40,
              v57);
            exit(0);
          }
          if ( v10 >= dword_19470C )
          {
            dword_19470C = v10;
            V_LOCK();
            logfmt_raw(v57, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
            V_UNLOCK();
            zlog(g_zc, v52, 174, v53, 24, 260, 60, v57);
            if ( v54 > 0 )
            {
              v11 = 0;
              v12 = v51 - 4;
              do
              {
                v13 = *((_DWORD *)v12 + 1);
                v12 += 4;
                ++v11;
                (*(void (**)(void))(v13 + 24))();
              }
              while ( v54 > v11 );
            }
            v49 = qword_1577E8[dword_19470C];
            newthread = qword_15B7E8[dword_19470C];
            V_LOCK();
            logfmt_raw(v57, 0x1000u, 0, "ethereum epoch changed, start to generate and download dag items");
            V_UNLOCK();
            v14 = v52;
            zlog(g_zc, v52, 174, v53, 24, 269, 60, v57);
            V_LOCK();
            logfmt_raw(
              v57,
              0x1000u,
              0,
              "epoch %d, set cache size %llx, dag size %llx",
              dword_19470C,
              v46,
              v49,
              newthread);
            V_UNLOCK();
            zlog(g_zc, v14, 174, v53, 24, 271, 60, v57);
            v15 = &v54;
            *(_QWORD *)v56 = v49;
            v16 = 0;
            *(_QWORD *)&v56[2] = newthread;
            do
            {
              v17 = v16 & 0xFFFFFFFC;
              v18 = v15[1];
              ++v15;
              v16 += 4;
              *(_DWORD *)((char *)&v56[4] + v17) = v18;
            }
            while ( v16 != 32 );
            v19 = (pthread_t *)calloc(v54, 4u);
            LODWORD(v49) = v19;
            if ( v54 > 0 )
            {
              v20 = v19;
              v21 = 0;
              v22 = (void **)(v51 - 4);
              do
              {
                v23 = v22[1];
                ++v22;
                v24 = v20;
                ++v21;
                v23[259] = v56;
                ++v20;
                pthread_create(v24, 0, *((void *(**)(void *))*v22 + 59), *v22);
              }
              while ( v54 > v21 );
              if ( v54 > 0 )
              {
                v25 = 0;
                v26 = v49 - 4;
                do
                {
                  v27 = *(_DWORD *)(v26 + 4);
                  v26 += 4;
                  pthread_join(v27, 0);
                  ++v25;
                }
                while ( v54 > v25 );
              }
            }
            free((void *)v49);
            V_LOCK();
            logfmt_raw(v57, 0x1000u, 0, "recover mining all backend!");
            V_UNLOCK();
            zlog(g_zc, v52, 174, v53, 24, 297, 60, v57);
            v28 = (pthread_t *)calloc(v54, 4u);
            LODWORD(v49) = v28;
            if ( v54 > 0 )
            {
              v29 = v28;
              v30 = 0;
              v31 = v51 - 4;
              do
              {
                v32 = (void *(**)(void *))*((_DWORD *)v31 + 1);
                v31 += 4;
                v33 = v29;
                ++v30;
                ++v29;
                pthread_create(v33, 0, v32[7], v32);
              }
              while ( v54 > v30 );
              if ( v54 > 0 )
              {
                v34 = 0;
                v35 = v49 - 4;
                do
                {
                  v36 = *(_DWORD *)(v35 + 4);
                  v35 += 4;
                  pthread_join(v36, 0);
                  ++v34;
                }
                while ( v54 > v34 );
              }
            }
            free((void *)v49);
          }
          else
          {
            V_LOCK();
            logfmt_raw(v57, 0x1000u, 0, "cur_epoch-epoch [%d-%d], only etc mining support, sorry...", dword_19470C, v10);
            V_UNLOCK();
            zlog(g_zc, v52, 174, v53, 24, 255, 40, v57);
          }
        }
      }
      if ( !epoch_number_eth_2282 )
      {
LABEL_18:
        V_LOCK();
        logfmt_raw(v57, 0x1000u, 0, v50, dword_19470C, 0);
        V_UNLOCK();
        zlog(g_zc, v52, 174, v53, 24, 240, 40, v57);
      }
    }
  }
  if ( v54 > 0 )
  {
    v37 = &newthread;
    v38 = 0;
    v39 = v51 - 4;
    do
    {
      v40 = (void *(**)(void *))*((_DWORD *)v39 + 1);
      v39 += 4;
      v41 = (pthread_t *)v37;
      ++v38;
      v37 = (__int64 *)((char *)v37 + 4);
      pthread_create(v41, 0, v40[62], v40);
    }
    while ( v54 > v38 );
    if ( v54 > 0 )
    {
      v42 = (char *)&v47 + 4;
      for ( j = 0; j < v54; ++j )
      {
        v44 = *((_DWORD *)v42 + 1);
        v42 += 4;
        pthread_join(v44, 0);
      }
    }
  }
  return 0;
}
