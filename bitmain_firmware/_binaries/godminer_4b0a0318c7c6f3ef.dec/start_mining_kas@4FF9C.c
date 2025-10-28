int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r11
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int started; // r9
  int *v14; // r5
  int (**v15)(void); // t1
  int v16; // r0
  int v17; // r7
  int v18; // r0
  int v19; // r4
  int v20; // r4
  int *v21; // r6
  int v22; // r1
  unsigned int v23; // r0
  int *v24; // r5
  int i; // r4
  int v26; // t1
  int v27; // r5
  _DWORD *v28; // r7
  int *v29; // r9
  int v30; // r4
  int v31; // r3
  int v32; // t1
  int v33; // t1
  int *v34; // r6
  int j; // r4
  int v36; // t1
  int v37; // r1
  const char *v38; // r0
  int v40; // r3
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r1
  int v45; // r3
  int v46; // r1
  int v47; // r3
  int v48; // r1
  _DWORD *v49; // [sp+14h] [bp-1010h]
  int v50; // [sp+1Ch] [bp-1008h] BYREF
  char v51[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v50 = 0;
  all_created_runtime = get_all_created_runtime(&v50);
  v4 = all_created_runtime;
  if ( v50 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_35:
      LOWORD(v37) = -13804;
      LOWORD(v38) = 32240;
      v27 = 3;
      HIWORD(v37) = (unsigned int)"e_freq: %.2f, sweep_level_freq: %d\n" >> 16;
      HIWORD(v38) = (unsigned int)"help" >> 16;
      printf(v38, v37);
      return v27;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v50 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_35;
    }
  }
  V_LOCK();
  LOWORD(v8) = -13848;
  HIWORD(v8) = (unsigned int)"%-6.1f " >> 16;
  LOWORD(v9) = 20532;
  logfmt_raw(v51, 0x1000u, 0, v8);
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v10) = -14028;
  HIWORD(v10) = (unsigned int)" may take up to 2 minutes..." >> 16;
  zlog(*v9, v10, 179, "start_mining_kas", 16, 145, 60, v51);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    LOWORD(v45) = -13788;
    HIWORD(v45) = (unsigned int)"eep_level_freq: %d\n" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v45);
    V_UNLOCK();
    LOWORD(v46) = -14028;
    HIWORD(v46) = (unsigned int)" may take up to 2 minutes..." >> 16;
    zlog(*v9, v46, 179, "start_mining_kas", 16, 153, 60, v51);
  }
  if ( power_init(0, v50) )
  {
    V_LOCK();
    LOWORD(v40) = -13776;
    HIWORD(v40) = (unsigned int)"eq: %d\n" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v40);
    V_UNLOCK();
    LOWORD(v41) = -14028;
    HIWORD(v41) = (unsigned int)" may take up to 2 minutes..." >> 16;
    zlog(*v9, v41, 179, "start_mining_kas", 16, 156, 100, v51);
    V_LOCK();
    LOWORD(v42) = 31900;
    LOWORD(v43) = 31232;
    HIWORD(v42) = (unsigned int)"2407a8dcb3ba67d09c39f48bef282a34fa1f935_May 28 2024 09:52:14" >> 16;
    HIWORD(v43) = (unsigned int)"own algo parameter '%s'" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v43, v42);
    V_UNLOCK();
    LOWORD(v44) = -14028;
    HIWORD(v44) = (unsigned int)" may take up to 2 minutes..." >> 16;
    zlog(*v9, v44, 179, "start_mining_kas", 16, 157, 100, v51);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v11) = -13732;
    HIWORD(v11) = (unsigned int)&unk_14CC50 >> 16;
    logfmt_raw(v51, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v12) = -14028;
    HIWORD(v12) = (unsigned int)" may take up to 2 minutes..." >> 16;
    zlog(*v9, v12, 179, "start_mining_kas", 16, 160, 40, v51);
    started = start_heartbeat_thread();
    if ( !started )
    {
      puts("send fake work to open cores");
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v50 > 0 )
      {
        v14 = v4 - 1;
        v49 = v4;
        do
        {
          v15 = (int (**)(void))v14[1];
          ++v14;
          v16 = (*v15)();
          if ( !v16 )
          {
            v17 = 3;
            do
            {
              v18 = dev_ctrl(v16);
              v19 = 10;
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v18 + 28))(
                *(_DWORD *)(*v14 + 248),
                *(_DWORD *)(*v14 + 1000),
                *(_DWORD *)(*v14 + 1024));
              do
              {
                usleep((__useconds_t)&stru_186A0);
                send_fake_work_kas(*v14);
                --v19;
              }
              while ( v19 );
              v20 = (*(int (**)(void))(*v14 + 208))();
              v16 = (*(int (**)(void))(*v14 + 220))();
              if ( !v20 )
                break;
              --v17;
            }
            while ( v17 );
          }
          ++started;
        }
        while ( v50 > started );
        v4 = v49;
      }
      check_and_destroy_abnormal_runtime();
      v21 = (int *)get_all_created_runtime(&v50);
      if ( v50 <= 0 )
      {
        V_LOCK();
        LOWORD(v47) = -13672;
        HIWORD(v47) = (unsigned int)&unk_14CC8C >> 16;
        v27 = 12;
        logfmt_raw(v51, 0x1000u, 0, v47);
        V_UNLOCK();
        LOWORD(v48) = -14028;
        HIWORD(v48) = (unsigned int)" may take up to 2 minutes..." >> 16;
        zlog(*v9, v48, 179, "start_mining_kas", 16, 199, 100, v51);
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK();
        logfmt_raw(v51, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
        V_UNLOCK();
        LOWORD(v22) = -14028;
        HIWORD(v22) = (unsigned int)" may take up to 2 minutes..." >> 16;
        zlog(*v9, v22, 179, "start_mining_kas", 16, 205, 60, v51);
        check_if_bringup_temp_too_low(a1);
        v23 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
        fan_pwm_set(v23);
        if ( v50 > 0 )
        {
          v24 = v21 - 1;
          for ( i = 0; i < v50; ++i )
          {
            v26 = v24[1];
            ++v24;
            redirect_nonce_output(*v21, v26);
            (*(void (**)(void))(*v24 + 228))();
          }
        }
        v27 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v50 > 0 )
        {
          v28 = v4 - 1;
          v29 = v21 - 1;
          v30 = 0;
          do
          {
            v32 = v28[1];
            ++v28;
            v31 = v32;
            ++v30;
            v33 = v29[1];
            ++v29;
            (*(void (__fastcall **)(int))(v31 + 60))(v33);
          }
          while ( v50 > v30 );
        }
        if ( !v27 )
        {
          v27 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v27 && v50 > 0 )
          {
            v34 = v21 - 1;
            for ( j = 0; j < v50; ++j )
            {
              v36 = v34[1];
              ++v34;
              (*(void (**)(void))(v36 + 124))();
              (*(void (**)(void))(*v34 + 16))();
            }
          }
        }
      }
      return v27;
    }
    return start_heartbeat_thread();
  }
}
