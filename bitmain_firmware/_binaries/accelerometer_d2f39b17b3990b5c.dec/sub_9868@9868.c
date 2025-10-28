int __fastcall sub_9868(int a1)
{
  int *v2; // r4
  int v3; // r0
  int v4; // r5
  int result; // r0

  v2 = _errno_location();
  v3 = a1;
  v4 = *v2;
  result = sub_980C(v3);
  if ( result )
    sub_AE34(
      "close_nointr(fd) == 0",
      "/home/lol/workspace/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/s"
      "ystemd/1_208-r0/systemd-208/src/shared/util.c",
      182,
      "close_nointr_nofail");
  *v2 = v4;
  return result;
}
