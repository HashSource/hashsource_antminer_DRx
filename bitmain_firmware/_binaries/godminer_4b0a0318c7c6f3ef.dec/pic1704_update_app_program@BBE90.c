int __fastcall pic1704_update_app_program(int a1)
{
  int v2; // r1
  int v3; // r0
  FILE *v4; // r6
  char *v5; // r11
  char *v6; // r5
  unsigned int v7; // r0
  int v8; // r9
  int v9; // r7
  const char *v10; // r2
  _DWORD *v11; // r3
  int v12; // r2
  char *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  const char *v18; // r2
  int v19; // r1
  const char *v21; // r2
  _DWORD *v22; // r5
  int v23; // r1
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r1
  const char *v28; // r2
  _DWORD *v29; // r5
  int v30; // r1
  int v31; // r3
  const char *v32; // r2
  _DWORD *v33; // r3
  int v34; // r1
  const char *v35; // r2
  _DWORD *v36; // r3
  int v37; // r1
  unsigned __int8 v38[4]; // [sp+14h] [bp-1820h] BYREF
  char s[8]; // [sp+18h] [bp-181Ch] BYREF
  int v40; // [sp+20h] [bp-1814h] BYREF
  int v41; // [sp+24h] [bp-1810h]
  int v42; // [sp+28h] [bp-180Ch]
  int v43; // [sp+2Ch] [bp-1808h]
  int v44[512]; // [sp+30h] [bp-1804h] BYREF
  char v45[20]; // [sp+830h] [bp-1004h] BYREF
  __int16 v46; // [sp+844h] [bp-FF0h]

  LOWORD(v2) = -10508;
  LOWORD(v3) = 20420;
  HIWORD(v2) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
  HIWORD(v3) = (unsigned int)"fan_control_1" >> 16;
  *(_DWORD *)s = 0;
  v40 = 0;
  *(_DWORD *)&s[3] = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v4 = (FILE *)fopen64(v3, v2);
  if ( !v4 )
  {
    LOWORD(v35) = 20460;
    HIWORD(v35) = (unsigned int)"bt8d_control" >> 16;
    snprintf((char *)v44, 0x800u, v35, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, v44);
    V_UNLOCK();
    LOWORD(v36) = 20532;
    HIWORD(v36) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v37) = 20140;
    HIWORD(v37) = (unsigned int)"set_hardware_type" >> 16;
    v8 = -1;
    zlog(*v36, v37, 165, "pic1704_update_app_program", 26, 303, 20, v45);
    return v8;
  }
  v5 = (char *)calloc(0x3700u, 1u);
  if ( !v5 )
  {
    LOWORD(v32) = 20516;
    HIWORD(v32) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
    snprintf((char *)v44, 0x800u, v32, "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, v44);
    V_UNLOCK();
    LOWORD(v33) = 20532;
    HIWORD(v33) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v34) = 20140;
    HIWORD(v34) = (unsigned int)"set_hardware_type" >> 16;
    v8 = -1;
    zlog(*v33, v34, 165, "pic1704_update_app_program", 26, 310, 20, v45);
    set_miner_6060info_malloc_failed_err(1);
    return v8;
  }
  v6 = v5;
  fseek(v4, 0, 0);
  do
  {
    v6 += 4;
    fgets(s, 7, v4);
    v7 = strtoul(s, 0, 16);
    *(v6 - 1) = v7;
    *(v6 - 4) = HIBYTE(v7);
    *(v6 - 3) = BYTE2(v7);
    *(v6 - 2) = BYTE1(v7);
  }
  while ( v5 + 14080 != v6 );
  fclose(v4);
  if ( pic1704_reset(a1) )
  {
    v8 = pic1704_erase_program(a1);
    if ( !v8 )
    {
      LOWORD(v10) = 20604;
      HIWORD(v10) = (unsigned int)"ease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
      snprintf((char *)v44, 0x800u, v10, "pic1704_update_app_program", a1);
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, v44);
      V_UNLOCK();
      LOWORD(v11) = 20532;
      HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
      v12 = 346;
LABEL_12:
      LOWORD(v19) = 20140;
      HIWORD(v19) = (unsigned int)"set_hardware_type" >> 16;
      zlog(*v11, v19, 165, "pic1704_update_app_program", 26, v12, 20, v45);
      free(v5);
      return v8;
    }
    v9 = 0;
    do
    {
      v13 = &v5[16 * v9];
      v44[1] = (int)&v40;
      v14 = *(_DWORD *)v13;
      v15 = *((_DWORD *)v13 + 1);
      v16 = *((_DWORD *)v13 + 2);
      v17 = *((_DWORD *)v13 + 3);
      ++v9;
      HIBYTE(v44[0]) = a1;
      LOWORD(v44[0]) = 4098;
      v40 = v14;
      v41 = v15;
      v42 = v16;
      v43 = v17;
      BYTE2(v44[0]) = 2;
      v38[1] = 0;
      memset(v45, 0, sizeof(v45));
      v46 = 0;
      v38[0] = -1;
      if ( !sub_BB8DC(v44[0], (int)&v40, (int)v45, v38) )
      {
        LOWORD(v18) = 20636;
        HIWORD(v18) = (unsigned int)"ner-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
        v8 = 0;
        snprintf((char *)v44, 0x800u, v18, "pic1704_update_app_program", a1);
        V_LOCK();
        logfmt_raw(v45, 0x1000u, 0, v44);
        V_UNLOCK();
        LOWORD(v11) = 20532;
        HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
        v12 = 366;
        goto LABEL_12;
      }
    }
    while ( v9 != 880 );
    if ( pic1704_reset(a1) )
    {
      v8 = 1;
      free(v5);
      return v8;
    }
    LOWORD(v28) = 20676;
    HIWORD(v28) = (unsigned int)"/7007_common.c" >> 16;
    snprintf((char *)v44, 0x800u, v28, "pic1704_update_app_program", a1);
    LOWORD(v29) = 20532;
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, v44);
    HIWORD(v29) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v30) = 20140;
    HIWORD(v30) = (unsigned int)"set_hardware_type" >> 16;
    zlog(*v29, v30, 165, "pic1704_update_app_program", 26, 376, 20, v45);
    V_LOCK();
    LOWORD(v31) = 20576;
    HIWORD(v31) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
    logfmt_raw(v45, 0x1000u, 0, v31, a1);
    V_UNLOCK();
    v25 = *v29;
    v26 = 377;
  }
  else
  {
    LOWORD(v21) = 20544;
    HIWORD(v21) = (unsigned int)"orkspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
    snprintf((char *)v44, 0x800u, v21, "pic1704_update_app_program", a1);
    LOWORD(v22) = 20532;
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, v44);
    HIWORD(v22) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v23) = 20140;
    HIWORD(v23) = (unsigned int)"set_hardware_type" >> 16;
    zlog(*v22, v23, 165, "pic1704_update_app_program", 26, 336, 20, v45);
    V_LOCK();
    LOWORD(v24) = 20576;
    HIWORD(v24) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_common.c" >> 16;
    logfmt_raw(v45, 0x1000u, 0, v24, a1);
    V_UNLOCK();
    v25 = *v22;
    v26 = 337;
  }
  LOWORD(v27) = 20140;
  HIWORD(v27) = (unsigned int)"set_hardware_type" >> 16;
  zlog(v25, v27, 165, "pic1704_update_app_program", 26, v26, 100, v45);
  free(v5);
  return 0;
}
