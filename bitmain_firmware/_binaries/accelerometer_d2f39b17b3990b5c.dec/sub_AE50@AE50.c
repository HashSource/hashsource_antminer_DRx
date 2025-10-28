int __fastcall sub_AE50(int result)
{
  if ( result != (result & 7) )
    sub_AE34(
      (int)"(level & 0x07) == level",
      "/home/lol/workspace/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/s"
      "ystemd/1_208-r0/systemd-208/src/shared/log.c",
      299,
      "log_set_max_level");
  dword_16000 = result;
  return result;
}
