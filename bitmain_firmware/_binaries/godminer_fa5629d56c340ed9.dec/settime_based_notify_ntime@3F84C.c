int __fastcall settime_based_notify_ntime(const char *a1)
{
  int v1; // r0
  int v2; // r4
  unsigned int v4; // r6
  struct timeval tv; // [sp+10h] [bp-1008h] BYREF
  char v6[4096]; // [sp+18h] [bp-1000h] BYREF

  v1 = strtol(a1, 0, 16);
  if ( v1 )
    v2 = ((unsigned __int8)byte_1974B5 ^ 1) & 1;
  else
    v2 = 0;
  if ( v2 )
  {
    v4 = v1;
    tv.tv_usec = 0;
    tv.tv_sec = 0;
    gettimeofday(&tv, 0);
    if ( tv.tv_sec < v4 )
    {
      tv.tv_sec = v4;
      settimeofday(&tv, 0);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, 1358584);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "settime_based_notify_ntime",
        26,
        383,
        60,
        v6);
      byte_1974B5 = 1;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
