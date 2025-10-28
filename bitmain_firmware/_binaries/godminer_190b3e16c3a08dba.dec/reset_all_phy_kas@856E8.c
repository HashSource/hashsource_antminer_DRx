int __fastcall reset_all_phy_kas(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1024h] BYREF
  int v4; // [sp+44h] [bp-1008h]
  char v5[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 224));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "reset_all_phy_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "reset_all_phy_kas",
    17,
    326,
    60,
    v5);
  sub_828BC(a1, 80, 33489407);
  usleep(0x1E8480u);
  return 0;
}
