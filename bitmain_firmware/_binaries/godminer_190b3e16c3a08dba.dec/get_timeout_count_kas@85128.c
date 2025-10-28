int __fastcall get_timeout_count_kas(int a1)
{
  int v2; // r4
  char v4[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s...", "get_timeout_count_kas");
  V_UNLOCK();
  v2 = 69;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "get_timeout_count_kas",
    21,
    256,
    20,
    v4);
  do
  {
    sub_82C6C(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 75 );
  return 0;
}
