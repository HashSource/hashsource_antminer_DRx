int __fastcall set_chip0_1_work_1_pe(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-20h] BYREF
  int v4; // [sp+44h] [bp-4h]
  char v5[4100]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 260));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "set_chip0_1_work_1_pe");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_chip0_1_work_1_pe",
    21,
    1010,
    60,
    v5);
  sub_7BB78(a1, 0);
  usleep(0x2710u);
  sub_7BB78(a1, 1);
  usleep(0x2710u);
  return 0;
}
