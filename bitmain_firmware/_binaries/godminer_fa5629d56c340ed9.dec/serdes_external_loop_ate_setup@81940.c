int __fastcall serdes_external_loop_ate_setup(int a1, int a2, int a3, int a4)
{
  char *v7; // r3
  _DWORD v10[7]; // [sp+30h] [bp-1064h] BYREF
  int v11; // [sp+4Ch] [bp-1048h]
  _DWORD v12[7]; // [sp+50h] [bp-1044h] BYREF
  int v13; // [sp+6Ch] [bp-1028h]
  _DWORD v14[7]; // [sp+70h] [bp-1024h] BYREF
  int v15; // [sp+8Ch] [bp-1008h]
  char v16[4100]; // [sp+90h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v10, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v16,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s ...",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_setup",
    30,
    1544,
    60,
    v16);
  V_LOCK();
  V_INT((int)v12, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v16,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_setup",
    30,
    1546,
    60,
    v16);
  if ( LFSR31 )
  {
    sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&loc_110010 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&dword_10000 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&loc_110010 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    v7 = (char *)&dword_10000 + 1;
  }
  else
  {
    sub_80904(a1, a3, 77, (int)&locret_90008 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&locret_90008 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, 1638425);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, (int)&locret_90008 + 1);
    sub_80904(a1, a3, 78, -2144251757);
    sub_80904(a1, a3, 77, 1638425);
    sub_80904(a1, a3, 78, -2144251757);
    v7 = (char *)&locret_90008;
  }
  sub_80904(a1, a3, 77, (int)v7);
  sub_80904(a1, a3, 78, -2144251757);
  usleep(0xFA0u);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4244, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 4756, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5268, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  serdes_wait_status(a1, a2, a3, 5780, 0);
  V_LOCK();
  V_INT((int)v14, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s Introducing error",
    "serdes_external_loop_ate_setup");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_external_loop_ate_setup",
    30,
    1575,
    60,
    v16);
  sub_80904(a1, a3, 77, 716778169);
  sub_80904(a1, a3, 78, -2144251791);
  sub_80904(a1, a3, 77, 715729577);
  sub_80904(a1, a3, 78, -2144251791);
  usleep((__useconds_t)&stru_13878.st_size);
  serdes_wait_status(a1, a2, a3, 4244, a4);
  serdes_wait_status(a1, a2, a3, 4244, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 4756, a4);
  serdes_wait_status(a1, a2, a3, 4756, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5268, a4);
  serdes_wait_status(a1, a2, a3, 5268, (int)&dword_10000 + 1);
  serdes_wait_status(a1, a2, a3, 5780, a4);
  serdes_wait_status(a1, a2, a3, 5780, (int)&dword_10000 + 1);
  return 0;
}
