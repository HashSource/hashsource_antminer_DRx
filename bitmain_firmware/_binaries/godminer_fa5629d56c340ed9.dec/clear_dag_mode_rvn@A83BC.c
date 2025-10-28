int __fastcall clear_dag_mode_rvn(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1024h] BYREF
  int v4; // [sp+44h] [bp-1008h]
  char v5[4100]; // [sp+48h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 260));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "clear_dag_mode_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "clear_dag_mode_rvn",
    18,
    316,
    60,
    v5);
  sub_A55C8(a1, 147, 0);
  usleep(0x2710u);
  return 0;
}
