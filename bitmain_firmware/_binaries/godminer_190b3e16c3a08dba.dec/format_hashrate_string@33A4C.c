int __fastcall format_hashrate_string(int a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r3
  double v7; // d0
  double v8; // d8
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, 1253076, v2, a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/util.c",
    134,
    "format_hashrate_string",
    22,
    55,
    20,
    v10);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 < 10000000.0 )
  {
    v6 = 75;
    v8 = v2 * 0.001;
  }
  else
  {
    if ( v2 >= 1.0e10 )
      v6 = 71;
    else
      v6 = 77;
    if ( v2 >= 1.0e10 )
      v7 = 0.000000001;
    else
      v7 = 0.000001;
    v8 = v5 * v7;
  }
  return sprintf(a2, "%.2f %c%s/s", v8, v6, a1);
}
