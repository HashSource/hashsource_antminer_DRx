__int64 __fastcall sub_9A24(int *a1)
{
  int v1; // r6
  int v2; // r0
  __int64 v3; // r4

  if ( !a1 )
    sub_AE34(
      "ts",
      "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angs"
      "trom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/time-util.c",
      94,
      "timespec_load");
  v1 = *a1;
  v2 = a1[1];
  if ( v1 == -1 && v2 == -1 )
    return -1;
  v3 = sub_AFAC(v2, v2 >> 31, 1000, 0);
  if ( sub_AFAC(~(_DWORD)v3, ~HIDWORD(v3), 1000000, 0) < (unsigned __int64)v1 )
    return -1;
  else
    return 1000000LL * v1 + v3;
}
