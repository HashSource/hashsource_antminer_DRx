int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  float v4; // s16
  int v5; // r4
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "adjust_working_freq_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "adjust_working_freq_ltc",
    23,
    910,
    40,
    v7);
  v4 = (float)(a2 + *(_DWORD *)(a1 + 432));
  if ( *(float *)(a1 + 924) <= v4 )
  {
    v4 = *(float *)(a1 + 924);
    v5 = 0;
    goto LABEL_3;
  }
  v5 = 18;
  if ( v4 >= 900.0 )
  {
LABEL_3:
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 432) = (int)v4;
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "adjust_working_freq_ltc() out");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "adjust_working_freq_ltc",
      23,
      925,
      40,
      v7);
  }
  return v5;
}
