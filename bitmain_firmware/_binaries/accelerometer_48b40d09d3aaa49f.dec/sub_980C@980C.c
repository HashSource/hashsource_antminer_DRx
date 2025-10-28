int __fastcall sub_980C(int a1)
{
  int result; // r0
  int v2; // r0

  if ( a1 < 0 )
    sub_AE34(
      "fd >= 0",
      "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angs"
      "trom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/util.c",
      157,
      "close_nointr");
  result = close(a1);
  if ( result < 0 )
  {
    v2 = *_errno_location();
    if ( v2 == 4 )
      return 0;
    else
      return -v2;
  }
  return result;
}
