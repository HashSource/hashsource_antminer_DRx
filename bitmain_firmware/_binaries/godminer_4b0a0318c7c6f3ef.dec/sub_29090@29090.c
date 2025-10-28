int sub_29090()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "%s: input bad api param", "get_warnings");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "get_warnings",
    12,
    1074,
    100,
    v1);
  return -2147483646;
}
