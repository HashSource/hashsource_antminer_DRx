int __fastcall set_dag_node_num_kas(int a1, int a2, int a3, int a4)
{
  int v8; // [sp+4h] [bp-100Ch]
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "%s at %llx ...", "set_dag_node_num_kas", v8, a3, a4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_dag_node_num_kas",
    20,
    1609,
    60,
    v9);
  sub_828BC(a1, 27, a3);
  usleep(0x3E8u);
  return 0;
}
