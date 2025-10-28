int __fastcall set_ticketmask_rvn(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %u...", "set_ticketmask_rvn", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_ticketmask_rvn",
    18,
    163,
    40,
    v5);
  sub_A55C8(a1, 26, a2);
  *(_DWORD *)(a1 + 456) = a2;
  usleep(0x2710u);
  return 0;
}
