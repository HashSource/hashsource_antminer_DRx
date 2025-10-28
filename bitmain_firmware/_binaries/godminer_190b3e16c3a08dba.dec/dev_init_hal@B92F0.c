int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  int *v2; // r5
  _DWORD *v3; // r9
  int hash_on_plug; // r0
  int v5; // r2
  unsigned int v6; // r8
  int v7; // r3
  int v8; // r6
  int v9; // r1
  int v10; // r3
  int v11; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r1
  int v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r3
  int v23; // r3
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // [sp+14h] [bp-1018h]
  unsigned __int8 v28; // [sp+27h] [bp-1005h] BYREF
  char v29[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    LOWORD(v23) = -8444;
    HIWORD(v23) = (unsigned int)"baud_zec_1746" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v23);
    V_UNLOCK();
    LOWORD(v24) = -12376;
    HIWORD(v24) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v25) = -8420;
    HIWORD(v25) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
    zlog(*v24, v25, 164, "dev_init_hal", 12, 57, 100, v29);
    return -1;
  }
  else
  {
    LOWORD(v2) = -12636;
    LOWORD(v3) = -12376;
    HIWORD(v2) = (unsigned int)&unk_18C64C >> 16;
    LOWORD(v8) = -8752;
    *v2 = 0;
    HIWORD(v3) = (unsigned int)&unk_18C750 >> 16;
    hash_on_plug = get_hash_on_plug();
    LOWORD(v5) = -8252;
    v6 = hash_on_plug;
    HIWORD(v5) = (unsigned int)"ing_read_sensor_temp_local_on_pic_ZEC_1746" >> 16;
    v7 = *v2;
    HIWORD(v8) = (unsigned int)&unk_18D578 >> 16;
    v26 = v5;
    do
    {
      while ( ((v6 >> v1) & 1) == 0 )
      {
        if ( ++v1 == 16 )
          goto LABEL_7;
      }
      *(_DWORD *)(v8 + 8 * v7) = v1;
      *(_BYTE *)(v8 + 8 * v7 + 4) = 1;
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, v26, *v2, *(_DWORD *)(v8 + 8 * *v2));
      V_UNLOCK();
      LOWORD(v9) = -8420;
      HIWORD(v9) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
      zlog(*v3, v9, 164, "dev_init_hal", 12, 67, 60, v29);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(v29, 0x1000u, 0, "chain_offset %d, chain %d, open pic error!", *v2, *(_DWORD *)(v8 + 8 * *v2));
          V_UNLOCK();
          v19 = *v3;
          v20 = 71;
LABEL_14:
          LOWORD(v21) = -8420;
          HIWORD(v21) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
          zlog(v19, v21, 164, "dev_init_hal", 12, v20, 100, v29);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(*(_BYTE *)(v8 + 8 * *v2), &v28) )
        {
          V_LOCK();
          LOWORD(v22) = -8180;
          HIWORD(v22) = (unsigned int)"_remote_on_pic_ZEC_1746" >> 16;
          logfmt_raw(v29, 0x1000u, 0, v22, *v2, *(_DWORD *)(v8 + 8 * *v2));
          V_UNLOCK();
          v19 = *v3;
          v20 = 82;
          goto LABEL_14;
        }
        V_LOCK();
        LOWORD(v13) = -8128;
        HIWORD(v13) = (unsigned int)"_local_on_ctrlboard_ZEC_1746" >> 16;
        logfmt_raw(v29, 0x1000u, 0, v13, *v2, *(_DWORD *)(v8 + 8 * *v2), v28);
        V_UNLOCK();
        LOWORD(v14) = -8420;
        HIWORD(v14) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
        zlog(*v3, v14, 164, "dev_init_hal", 12, 88, 60, v29);
      }
      ++v1;
      v7 = *v2 + 1;
      *v2 = v7;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v7 )
    {
      V_LOCK();
      LOWORD(v15) = -8072;
      LOWORD(v16) = 944;
      HIWORD(v15) = (unsigned int)"temp_local_on_ctrlboard_ZEC_1746" >> 16;
      HIWORD(v16) = (unsigned int)"cribe send failed" >> 16;
      logfmt_raw(v29, 0x1000u, 0, v16, v15);
      V_UNLOCK();
      LOWORD(v17) = -8420;
      HIWORD(v17) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
      zlog(*v3, v17, 164, "dev_init_hal", 12, 96, 100, v29);
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, *v2);
      V_UNLOCK();
      LOWORD(v18) = -8420;
      HIWORD(v18) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
      zlog(*v3, v18, 164, "dev_init_hal", 12, 97, 100, v29);
    }
    fpga_reset();
    V_LOCK();
    LOWORD(v10) = -8016;
    HIWORD(v10) = (unsigned int)"sor_temp_remote_on_ctrlboard_ZEC_1746" >> 16;
    logfmt_raw(v29, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = -8420;
    HIWORD(v11) = (unsigned int)"ing_misc_ctrl_ZEC_1746" >> 16;
    zlog(*v3, v11, 164, "dev_init_hal", 12, 101, 60, v29);
    enable_bypass_mode();
    dev_config_hal("c_mutex");
    return 0;
  }
}
