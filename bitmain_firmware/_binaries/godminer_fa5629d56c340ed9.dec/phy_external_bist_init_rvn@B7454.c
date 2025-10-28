int __fastcall phy_external_bist_init_rvn(int a1, int a2, unsigned int a3, int a4)
{
  int v8; // [sp+0h] [bp-10DCh] BYREF
  int v9; // [sp+30h] [bp-10ACh]
  int *v10; // [sp+34h] [bp-10A8h]
  _DWORD v11[7]; // [sp+38h] [bp-10A4h] BYREF
  int v12; // [sp+54h] [bp-1088h]
  _DWORD v13[7]; // [sp+58h] [bp-1084h] BYREF
  int v14; // [sp+74h] [bp-1068h]
  _DWORD v15[7]; // [sp+78h] [bp-1064h] BYREF
  int v16; // [sp+94h] [bp-1048h]
  _DWORD v17[7]; // [sp+98h] [bp-1044h] BYREF
  int v18; // [sp+B4h] [bp-1028h]
  _DWORD v19[7]; // [sp+B8h] [bp-1024h] BYREF
  int v20; // [sp+D4h] [bp-1008h]
  char v21[4100]; // [sp+D8h] [bp-1004h] BYREF

  v9 = a4;
  V_LOCK();
  V_INT((int)v11, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s PHY core %02x start",
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_init_rvn",
    26,
    988,
    60,
    v21);
  sub_AFB94(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    V_INT((int)v13, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_external_bist_init_rvn",
      26,
      1041,
      100,
      v21);
  }
  sub_AFB94(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_AFB94(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    V_INT((int)v15, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "%s PHY core %02x wait ack failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_external_bist_init_rvn",
      26,
      1068,
      100,
      v21);
  }
  sub_AFB94(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s PHY core %02x sram boot success!",
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_init_rvn",
    26,
    1074,
    100,
    v21);
  sub_AFB94(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    V_INT((int)v19, "chain", *(int *)(a1 + 260));
    v10 = &v8;
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v20,
      v19[0],
      v19[1],
      v19[2],
      v19[3],
      v19[4],
      v19[5],
      v19[6],
      v20,
      "%s PHY core %02x %s handshake failed!",
      "phy_handshake_rvn",
      a3,
      "sram boot",
      v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_handshake_rvn",
      17,
      827,
      100,
      v21);
  }
  phy_pll_switch_rvn(a1, a2, a3, v9);
  return usleep(0x64u);
}
