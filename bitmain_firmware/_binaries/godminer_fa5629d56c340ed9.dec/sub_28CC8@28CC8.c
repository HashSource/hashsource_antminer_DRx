int sub_28CC8()
{
  int v0; // r8
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "reload_config",
    13,
    1093,
    20,
    v2);
  v0 = strcmp(s1, "127.0.0.1");
  if ( v0 )
    return -2147483643;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "START %s", "load_default_config_without_restart");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "load_default_config_without_restart",
    35,
    1045,
    20,
    v2);
  if ( default_config
    && !access((const char *)default_config, 4)
    && (judge_load_config((char *)default_config) & 1) != 0 )
  {
    reload_pool();
  }
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "reload_config",
    13,
    1100,
    20,
    v2);
  return v0;
}
