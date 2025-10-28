int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_194724 = a1;
  dword_194728 = a2;
  dword_19472C = a3;
  dword_194730 = a4;
  dword_194734 = a5;
  dword_194738 = a6;
  flt_19473C = a7;
  dword_194740 = a8;
  dword_194744 = a9;
  dword_194748 = a10;
  dword_19474C = a11;
  dword_194750 = a12;
  dword_194754 = a13;
  memset(&flt_197B38, 0, 0x2Cu);
  if ( dword_194724 == 2 )
  {
    LODWORD(flt_197B48) = dword_194748;
    flt_197B40 = (float)SLODWORD(flt_19473C);
    LODWORD(flt_197B4C) = dword_19474C;
    LODWORD(flt_197B50) = dword_194750;
    flt_197B3C = (float)dword_194728;
    LODWORD(flt_197B54) = dword_194754;
    flt_197B38 = (float)dword_19472C;
  }
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "startup P: %f, p: %f, i: %f, d: %f   target: %f, min %f, max %f",
    flt_197B48,
    flt_197B4C,
    flt_197B50,
    flt_197B54,
    flt_197B40,
    flt_197B3C,
    flt_197B38);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "fan_control_info_init",
    21,
    378,
    40,
    var1004);
  return 0;
}
