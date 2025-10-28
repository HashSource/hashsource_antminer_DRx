int __fastcall clear_dag_mode(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1020h] BYREF
  int v4; // [sp+44h] [bp-1004h]
  char v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 224));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "clear_dag_mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "clear_dag_mode",
    14,
    254,
    60,
    v5);
  sub_6E63C(a1, 196, 0);
  usleep(0x2710u);
  return 0;
}
