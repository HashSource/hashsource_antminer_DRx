int __fastcall phy_external_bist_init_rvn(int a1, int a2, unsigned int a3, int a4)
{
  char *v7; // r1
  int v8; // r7
  _DWORD *v9; // r7
  int v10; // r1
  char *v11; // r1
  int v12; // r11
  int v13; // r1
  int v14; // r10
  char *v15; // r1
  int v16; // r1
  char *v17; // r1
  int v18; // r10
  int v19; // lr
  int v20; // r1
  char *v22; // r1
  int v23; // r1
  int v24; // [sp+0h] [bp-10DCh] BYREF
  int v25; // [sp+20h] [bp-10BCh]
  int v26; // [sp+30h] [bp-10ACh]
  int *v27; // [sp+34h] [bp-10A8h]
  _DWORD v28[7]; // [sp+38h] [bp-10A4h] BYREF
  int v29; // [sp+54h] [bp-1088h]
  _DWORD v30[7]; // [sp+58h] [bp-1084h] BYREF
  int v31; // [sp+74h] [bp-1068h]
  _DWORD v32[7]; // [sp+78h] [bp-1064h] BYREF
  int v33; // [sp+94h] [bp-1048h]
  _DWORD v34[7]; // [sp+98h] [bp-1044h] BYREF
  int v35; // [sp+B4h] [bp-1028h]
  _DWORD v36[7]; // [sp+B8h] [bp-1024h] BYREF
  int v37; // [sp+D4h] [bp-1008h]
  char v38[4100]; // [sp+D8h] [bp-1004h] BYREF

  v26 = a4;
  V_LOCK();
  LOWORD(v7) = 27372;
  HIWORD(v7) = (unsigned int)":" >> 16;
  V_INT((int)v28, v7, *(int *)(a1 + 256));
  LOWORD(v8) = -6360;
  HIWORD(v8) = (unsigned int)"Setting_read_sensor_temp_local_on_ctrlboard_HNS_2130" >> 16;
  v25 = v8;
  LOWORD(v9) = 20532;
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(
    v38,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    v25,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v10) = 11320;
  HIWORD(v10) = (unsigned int)&unk_172FF8 >> 16;
  zlog(*v9, v10, 174, "phy_external_bist_init_rvn", 26, 988, 60, v38);
  sub_AEAEC(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v22) = 27372;
    HIWORD(v22) = (unsigned int)":" >> 16;
    V_INT((int)v30, v22, *(int *)(a1 + 256));
    logfmt_raw(
      v38,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v23) = 11320;
    HIWORD(v23) = (unsigned int)&unk_172FF8 >> 16;
    zlog(*v9, v23, 174, "phy_external_bist_init_rvn", 26, 1041, 100, v38);
  }
  sub_AEAEC(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_AEAEC(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v11) = 27372;
    HIWORD(v11) = (unsigned int)":" >> 16;
    V_INT((int)v32, v11, *(int *)(a1 + 256));
    LOWORD(v12) = -8476;
    HIWORD(v12) = (unsigned int)"ip 0x0 core 0x0 reg 0x70 rdata %08x" >> 16;
    logfmt_raw(
      v38,
      0x1000u,
      0,
      v33,
      v32[0],
      v32[1],
      v32[2],
      v32[3],
      v32[4],
      v32[5],
      v32[6],
      v33,
      v12,
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v13) = 11320;
    HIWORD(v13) = (unsigned int)&unk_172FF8 >> 16;
    zlog(*v9, v13, 174, "phy_external_bist_init_rvn", 26, 1068, 100, v38);
  }
  sub_AEAEC(a1, a3, 82, 0);
  LOWORD(v14) = -8440;
  usleep(0x64u);
  V_LOCK();
  LOWORD(v15) = 27372;
  HIWORD(v15) = (unsigned int)":" >> 16;
  V_INT((int)v34, v15, *(int *)(a1 + 256));
  HIWORD(v14) = (unsigned int)"first !!! %s PHY core %02x macro0 rx is invalid!" >> 16;
  logfmt_raw(
    v38,
    0x1000u,
    0,
    v35,
    v34[0],
    v34[1],
    v34[2],
    v34[3],
    v34[4],
    v34[5],
    v34[6],
    v35,
    v14,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v16) = 11320;
  HIWORD(v16) = (unsigned int)&unk_172FF8 >> 16;
  zlog(*v9, v16, 174, "phy_external_bist_init_rvn", 26, 1074, 100, v38);
  sub_AEAEC(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v17) = 27372;
    HIWORD(v17) = (unsigned int)":" >> 16;
    V_INT((int)v36, v17, *(int *)(a1 + 256));
    LOWORD(v18) = -11472;
    LOWORD(v19) = -8404;
    HIWORD(v18) = (unsigned int)"ate_r" >> 16;
    HIWORD(v19) = (unsigned int)" is invalid!" >> 16;
    v27 = &v24;
    logfmt_raw(
      v38,
      0x1000u,
      0,
      v37,
      v36[0],
      v36[1],
      v36[2],
      v36[3],
      v36[4],
      v36[5],
      v36[6],
      v37,
      v18,
      "phy_handshake_rvn",
      a3,
      v19,
      v26);
    V_UNLOCK();
    LOWORD(v20) = 11320;
    HIWORD(v20) = (unsigned int)&unk_172FF8 >> 16;
    zlog(*v9, v20, 174, "phy_handshake_rvn", 17, 827, 100, v38);
  }
  phy_pll_switch_rvn(a1, a2, a3, v26);
  return usleep(0x64u);
}
