int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  unsigned __int8 *v7; // r3
  int v8; // r10
  int v9; // r8
  const char *v10; // r9
  int v11; // r8
  int v12; // r9
  int v13; // r0
  int v14; // r2
  int v15; // r7
  int v18; // [sp+3Ch] [bp-1118h]
  int v19; // [sp+40h] [bp-1114h]
  unsigned __int8 v20; // [sp+48h] [bp-110Ch]
  unsigned __int8 v21; // [sp+4Fh] [bp-1105h] BYREF
  _DWORD v22[7]; // [sp+50h] [bp-1104h] BYREF
  int v23; // [sp+6Ch] [bp-10E8h]
  _DWORD v24[7]; // [sp+70h] [bp-10E4h] BYREF
  int v25; // [sp+8Ch] [bp-10C8h]
  _DWORD v26[7]; // [sp+90h] [bp-10C4h] BYREF
  int v27; // [sp+ACh] [bp-10A8h]
  _DWORD v28[7]; // [sp+B0h] [bp-10A4h] BYREF
  int v29; // [sp+CCh] [bp-1088h]
  _DWORD v30[7]; // [sp+D0h] [bp-1084h] BYREF
  int v31; // [sp+ECh] [bp-1068h]
  _DWORD v32[7]; // [sp+F0h] [bp-1064h] BYREF
  int v33; // [sp+10Ch] [bp-1048h]
  _DWORD v34[7]; // [sp+110h] [bp-1044h] BYREF
  int v35; // [sp+12Ch] [bp-1028h]
  _DWORD v36[7]; // [sp+130h] [bp-1024h] BYREF
  int v37; // [sp+14Ch] [bp-1008h]
  char v38[4080]; // [sp+150h] [bp-1004h] BYREF

  v21 = a3;
  V_LOCK();
  V_INT((int)v22, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v38,
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
    "%s PHY core %02x start",
    "phy_external_bist_init",
    v21);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    1920,
    60,
    v38);
  v7 = (unsigned __int8 *)&case_select[16 * a5];
  v8 = v7[16];
  v9 = v7[8];
  v20 = v7[8];
  v18 = v7[4];
  v19 = v7[12];
  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 260));
  v10 = "enabled";
  if ( !v8 )
    v10 = "disabled";
  logfmt_raw(
    v38,
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
    "rx adapt %s, mode=%02d, main=%02d, pre=%02d, post=%02d",
    v10,
    a4,
    v18,
    v9,
    v19);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    1942,
    60,
    v38);
  sub_80904(a1, v21, 86, 3670024);
  usleep(0x12Cu);
  sub_80904(a1, v21, 85, 109905420);
  usleep(0x12Cu);
  sub_80904(a1, v21, 101, -268374016);
  usleep(0x12Cu);
  sub_80904(a1, v21, 64, 256);
  usleep(0x12Cu);
  sub_80904(a1, v21, 80, 33423870);
  usleep(0x12Cu);
  sub_80904(a1, v21, 81, 832516511);
  usleep(0x12Cu);
  sub_80904(a1, v21, 88, -1);
  usleep(0x12Cu);
  v11 = check_core_reg_with_expect_data_eth(a1, a2, v21, 125, 0x70007000u);
  V_LOCK();
  if ( v11 )
  {
    V_INT((int)v26, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v38,
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
      "%s sram init failed!",
      "phy_external_bist_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_bist_init",
      22,
      1975,
      100,
      v38);
  }
  else
  {
    V_INT((int)v28, "chain", *(int *)(a1 + 260));
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
      "%s PHY core-%02x sram init successed!",
      "phy_external_bist_init",
      v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_external_bist_init",
      22,
      1977,
      100,
      v38);
  }
  phy_eq_main_set_by_apb(a1, a2, &v21, 1, v18);
  phy_eq_pre_set_by_apb(a1, a2, &v21, 1, v20);
  phy_eq_post_set_by_apb(a1, a2, &v21, 1, v19);
  sub_80904(a1, v21, 86, 137889800);
  usleep(0x12Cu);
  sub_80904(a1, v21, 80, 0);
  usleep(0x12Cu);
  v12 = check_core_reg_with_expect_data(a1, a2, v21, 119, 0);
  V_LOCK();
  if ( v12 )
  {
    V_INT((int)v30, "chain", *(int *)(a1 + 260));
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
      "%s PHY core-%02x wait ack failed!",
      "phy_external_bist_init",
      v21);
    V_UNLOCK();
    v13 = g_zc;
    v14 = 2003;
  }
  else
  {
    V_INT((int)v32, "chain", *(int *)(a1 + 260));
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
      "%s PHY core-%02x wait ack successed!",
      "phy_external_bist_init",
      v21);
    V_UNLOCK();
    v13 = g_zc;
    v14 = 2005;
  }
  zlog(
    v13,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    v14,
    100,
    v38);
  sub_80904(a1, v21, 82, 0);
  usleep(0x64u);
  V_LOCK();
  V_INT((int)v34, "chain", *(int *)(a1 + 260));
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
    "%s PHY core %02x sram boot success!",
    "phy_external_bist_init",
    v21);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_external_bist_init",
    22,
    2010,
    100,
    v38);
  v15 = v21;
  sub_80904(a1, v21, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v15, 83, 0) )
  {
    V_LOCK();
    V_INT((int)v36, "chain", *(int *)(a1 + 260));
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
      "%s PHY core %02x %s handshake failed!",
      "phy_handshake",
      v15,
      "sram boot");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_handshake",
      13,
      1744,
      100,
      v38);
  }
  phy_pll_switch(a1, a2, v21, a4);
  if ( v8 )
    phy_rx_adapt(a1, a2, v21);
  return usleep(0x64u);
}
