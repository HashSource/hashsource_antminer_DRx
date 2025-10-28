int __fastcall format_hashrate_double(int a1, double *a2, char *a3)
{
  double v3; // d0
  int v8; // r2
  double v9; // d9
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, 1253132, v3, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/util.c",
    134,
    "format_hashrate_double",
    22,
    90,
    20,
    v10);
  if ( v3 >= 10000.0 )
  {
    if ( v3 < 10000000.0 )
    {
      v8 = 75;
      *a2 = v3 * 0.001;
    }
    else
    {
      if ( v3 < 1.0e10 )
        v8 = 77;
      else
        v8 = 71;
      if ( v3 < 1.0e10 )
        v9 = 0.000001;
      else
        v9 = 0.000000001;
      *a2 = v3 * v9;
    }
    return sprintf(a3, "%c%s/s", v8, a1);
  }
  else
  {
    *a2 = v3;
    return sprintf(a3, "%s/s", a1);
  }
}
