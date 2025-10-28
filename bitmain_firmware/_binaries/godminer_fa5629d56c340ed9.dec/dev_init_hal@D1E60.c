int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  int *v2; // r5
  _DWORD *v3; // r11
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
  int v15; // r1
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  int v23; // [sp+14h] [bp-1018h]
  unsigned __int8 v25; // [sp+27h] [bp-1005h] BYREF
  char v26[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    LOWORD(v20) = -25316;
    HIWORD(v20) = (unsigned int)"Decode Chip FT Program Version OOM" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v21) = 24916;
    HIWORD(v21) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v22) = -25292;
    HIWORD(v22) = (unsigned int)"ersion OOM" >> 16;
    zlog(*v21, v22, 164, "dev_init_hal", 12, 61, 100, v26);
    return -1;
  }
  else
  {
    LOWORD(v2) = 24656;
    LOWORD(v3) = 24916;
    HIWORD(v2) = (unsigned int)&unk_1B4F38 >> 16;
    LOWORD(v8) = 28536;
    *v2 = 0;
    HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
    hash_on_plug = get_hash_on_plug();
    LOWORD(v5) = -25124;
    v6 = hash_on_plug;
    HIWORD(v5) = (unsigned int)"_standard" >> 16;
    v7 = *v2;
    HIWORD(v8) = (unsigned int)&unk_1B5E60 >> 16;
    v23 = v5;
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
      logfmt_raw(v26, 0x1000u, 0, v23, *v2, *(_DWORD *)(v8 + 8 * *v2));
      V_UNLOCK();
      LOWORD(v9) = -25292;
      HIWORD(v9) = (unsigned int)"ersion OOM" >> 16;
      zlog(*v3, v9, 164, "dev_init_hal", 12, 71, 60, v26);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(v26, 0x1000u, 0, "chain_offset %d, chain %d, open pic error!", *v2, *(_DWORD *)(v8 + 8 * *v2));
          V_UNLOCK();
          v16 = *v3;
          v17 = 75;
LABEL_14:
          LOWORD(v18) = -25292;
          HIWORD(v18) = (unsigned int)"ersion OOM" >> 16;
          zlog(v16, v18, 164, "dev_init_hal", 12, v17, 100, v26);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(*(_BYTE *)(v8 + 8 * *v2), &v25) )
        {
          V_LOCK();
          LOWORD(v19) = -25052;
          HIWORD(v19) = (unsigned int)"2x" >> 16;
          logfmt_raw(v26, 0x1000u, 0, v19, *v2, *(_DWORD *)(v8 + 8 * *v2));
          V_UNLOCK();
          v16 = *v3;
          v17 = 86;
          goto LABEL_14;
        }
        V_LOCK();
        LOWORD(v13) = -25000;
        HIWORD(v13) = (unsigned int)"%-30s : %u" >> 16;
        logfmt_raw(v26, 0x1000u, 0, v13, *v2, *(_DWORD *)(v8 + 8 * *v2), v25);
        V_UNLOCK();
        LOWORD(v14) = -25292;
        HIWORD(v14) = (unsigned int)"ersion OOM" >> 16;
        zlog(*v3, v14, 164, "dev_init_hal", 12, 92, 60, v26);
      }
      ++v1;
      v7 = *v2 + 1;
      *v2 = v7;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v7 )
    {
      set_miner_6060info_board_num_less_than_design_err(1);
      V_LOCK();
      logfmt_raw(v26, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, *v2);
      V_UNLOCK();
      LOWORD(v15) = -25292;
      HIWORD(v15) = (unsigned int)"ersion OOM" >> 16;
      zlog(*v3, v15, 164, "dev_init_hal", 12, 105, 100, v26);
    }
    fpga_reset();
    V_LOCK();
    LOWORD(v10) = -24896;
    HIWORD(v10) = (unsigned int)"asic sensor" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = -25292;
    HIWORD(v11) = (unsigned int)"ersion OOM" >> 16;
    zlog(*v3, v11, 164, "dev_init_hal", 12, 109, 60, v26);
    enable_bypass_mode();
    dev_config_hal("l");
    return 0;
  }
}
