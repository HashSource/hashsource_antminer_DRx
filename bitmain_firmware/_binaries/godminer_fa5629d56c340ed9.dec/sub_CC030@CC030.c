int __fastcall sub_CC030(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    172,
    "find_index",
    10,
    208,
    100,
    v3);
  return -2147482111;
}
