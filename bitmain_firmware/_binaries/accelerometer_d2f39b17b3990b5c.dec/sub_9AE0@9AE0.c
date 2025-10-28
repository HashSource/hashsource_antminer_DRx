__int64 __fastcall sub_9AE0(clockid_t a1)
{
  struct timespec v2; // [sp+0h] [bp-Ch] BYREF

  if ( clock_gettime(a1, &v2) )
    sub_AE34(
      "clock_gettime(clock_id, &ts) == 0",
      "/home/lol/workspace/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/s"
      "ystemd/1_208-r0/systemd-208/src/shared/time-util.c",
      31,
      "now");
  return sub_9A24(&v2.tv_sec);
}
