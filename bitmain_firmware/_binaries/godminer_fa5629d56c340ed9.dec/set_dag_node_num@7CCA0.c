int __fastcall set_dag_node_num(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %08x", "set_dag_node_num", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "set_dag_node_num",
    16,
    263,
    40,
    v5);
  sub_79D84(a1, 11, a2);
  usleep(0x2710u);
  return 0;
}
