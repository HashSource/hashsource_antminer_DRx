int __fastcall sub_98BC(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r6
  int v7; // r3
  int v9; // r0
  int v10; // r0

  if ( (a2 & 0x40) != 0 )
    sub_AE34(
      "!(mode & 0100)",
      "/home/lzq/work/Zynq7000/rootfs_angstrom/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angs"
      "trom-linux-gnueabi/systemd/1_208-r0/systemd-208/src/shared/util.c",
      1824,
      "open_terminal");
  v4 = 21;
  while ( 1 )
  {
    v5 = open64(a1, a2);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v9 = isatty(v5);
      if ( v9 < 0 )
      {
        sub_9868(v6);
        return -*_errno_location();
      }
      else if ( !v9 )
      {
        v10 = v6;
        v6 = -25;
        sub_9868(v10);
      }
      return v6;
    }
    v7 = *_errno_location();
    if ( v7 != 5 )
      break;
    if ( !--v4 )
      return -5;
    usleep(0xC350u);
  }
  return -v7;
}
