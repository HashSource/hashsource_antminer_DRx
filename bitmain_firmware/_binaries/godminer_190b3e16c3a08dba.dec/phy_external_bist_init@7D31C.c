int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  unsigned __int8 *v7; // r2
  int v8; // r10
  int v9; // r9
  const char *v10; // lr
  int v11; // r8
  int v13; // [sp+38h] [bp-10DCh]
  int v14; // [sp+3Ch] [bp-10D8h]
  unsigned __int8 v16; // [sp+48h] [bp-10CCh]
  unsigned __int8 v17; // [sp+4Fh] [bp-10C5h] BYREF
  _DWORD v18[7]; // [sp+50h] [bp-10C4h] BYREF
  int v19; // [sp+6Ch] [bp-10A8h]
  _DWORD v20[7]; // [sp+70h] [bp-10A4h] BYREF
  int v21; // [sp+8Ch] [bp-1088h]
  _DWORD v22[7]; // [sp+90h] [bp-1084h] BYREF
  int v23; // [sp+ACh] [bp-1068h]
  _DWORD v24[7]; // [sp+B0h] [bp-1064h] BYREF
  int v25; // [sp+CCh] [bp-1048h]
  _DWORD v26[7]; // [sp+D0h] [bp-1044h] BYREF
  int v27; // [sp+ECh] [bp-1028h]
  _DWORD v28[7]; // [sp+F0h] [bp-1024h] BYREF
  int v29; // [sp+10Ch] [bp-1008h]
  char v30[4080]; // [sp+110h] [bp-1004h] BYREF

  v17 = a3;
  V_LOCK();
  V_INT((int)v18, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v30,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s PHY core %02x start",
    "phy_external_bist_init",
    v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    990,
    60,
    v30);
  v7 = (unsigned __int8 *)&eth_2280_phy_eq + 16 * a5;
  v8 = v7[12];
  v13 = *v7;
  v9 = v7[4];
  v16 = v7[4];
  v14 = v7[8];
  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 224));
  v10 = "enabled";
  if ( !v8 )
    v10 = "disabled";
  logfmt_raw(
    v30,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "rx adapt %s, main=%02d, pre=%02d, post=%02d",
    v10,
    v13,
    v9,
    v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    1010,
    60,
    v30);
  sub_74494(a1, v17, 86, 3670024);
  usleep(0x12Cu);
  sub_74494(a1, v17, 85, 109905420);
  usleep(0x12Cu);
  sub_74494(a1, v17, 101, -268374016);
  usleep(0x12Cu);
  sub_74494(a1, v17, 64, 256);
  usleep(0x12Cu);
  sub_74494(a1, v17, 80, 33423870);
  usleep(0x12Cu);
  sub_74494(a1, v17, 81, 832516511);
  usleep(0x12Cu);
  sub_74494(a1, v17, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, v17, 125, 0x70007000u) )
  {
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v30,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init",
      v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_bist_init",
      22,
      1043,
      100,
      v30);
  }
  phy_eq_main_set_by_apb(a1, a2, &v17, 1, v13);
  phy_eq_pre_set_by_apb(a1, a2, &v17, 1, v16);
  phy_eq_post_set_by_apb(a1, a2, &v17, 1, v14);
  sub_74494(a1, v17, 86, 137889800);
  usleep(0x12Cu);
  sub_74494(a1, v17, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, v17, 119, 0) )
  {
    V_LOCK();
    V_INT((int)v24, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v30,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "%s PHY core %02x wait ack failed!",
      "phy_external_bist_init",
      v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_bist_init",
      22,
      1070,
      100,
      v30);
  }
  sub_74494(a1, v17, 82, 0);
  usleep(0x64u);
  V_LOCK();
  V_INT((int)v26, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v30,
    0x1000u,
    0,
    v27,
    v26[0],
    v26[1],
    v26[2],
    v26[3],
    v26[4],
    v26[5],
    v26[6],
    v27,
    "%s PHY core %02x sram boot success!",
    "phy_external_bist_init",
    v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    1076,
    100,
    v30);
  v11 = v17;
  sub_74494(a1, v17, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v11, 83, 0) )
  {
    V_LOCK();
    V_INT((int)v28, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v30,
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
      "%s PHY core %02x %s handshake failed!",
      "phy_handshake",
      v11,
      "sram boot");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_handshake",
      13,
      829,
      100,
      v30);
  }
  phy_pll_switch(a1, a2, v17, a4);
  if ( v8 )
    phy_rx_adapt(a1, a2, v17);
  return usleep(0x64u);
}
