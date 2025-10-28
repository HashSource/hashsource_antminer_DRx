int __fastcall serdes_close_ctle(int a1, int a2, unsigned __int8 a3)
{
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 260));
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s ...", "serdes_close_ctle");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "serdes_close_ctle",
    17,
    218,
    60,
    v8);
  sub_80904(a1, a3, 77, 281022656);
  sub_80904(a1, a3, 78, -2144264179);
  sub_80904(a1, a3, 77, 281022656);
  sub_80904(a1, a3, 78, -2144263667);
  sub_80904(a1, a3, 77, 281022656);
  sub_80904(a1, a3, 78, -2144263155);
  sub_80904(a1, a3, 77, 281022656);
  sub_80904(a1, a3, 78, -2144262643);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144264178);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144263666);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144263154);
  sub_80904(a1, a3, 77, 0);
  sub_80904(a1, a3, 78, -2144262642);
  return 0;
}
