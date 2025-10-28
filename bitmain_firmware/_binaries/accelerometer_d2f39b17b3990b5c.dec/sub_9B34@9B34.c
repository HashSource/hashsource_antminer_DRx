_DWORD *__fastcall sub_9B34(_DWORD *a1, __int64 a2)
{
  int v5; // r2

  if ( !a1 )
    sub_AE34(
      "tv",
      "/home/lol/workspace/A8_buildenv/build/tmp-angstrom_v2013_06-eglibc/work/armv7ahf-vfp-neon-angstrom-linux-gnueabi/s"
      "ystemd/1_208-r0/systemd-208/src/shared/time-util.c",
      139,
      "timeval_store");
  if ( a2 == -1 )
  {
    *a1 = -1;
    a1[1] = -1;
  }
  else
  {
    *a1 = sub_AFAC(a2, HIDWORD(a2), 1000000, 0);
    sub_AFAC(a2, HIDWORD(a2), 1000000, 0);
    a1[1] = v5;
  }
  return a1;
}
