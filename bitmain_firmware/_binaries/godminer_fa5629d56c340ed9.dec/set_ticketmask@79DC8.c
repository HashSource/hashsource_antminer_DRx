int __fastcall set_ticketmask(int a1, int a2)
{
  _DWORD v5[7]; // [sp+30h] [bp-1024h] BYREF
  int v6; // [sp+4Ch] [bp-1008h]
  char v7[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 260));
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s 0x%08x", "set_ticketmask", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_ticketmask",
    14,
    129,
    40,
    v7);
  sub_79D84(a1, 10, a2);
  *(_DWORD *)(a1 + 456) = a2;
  usleep(0x2710u);
  return 0;
}
