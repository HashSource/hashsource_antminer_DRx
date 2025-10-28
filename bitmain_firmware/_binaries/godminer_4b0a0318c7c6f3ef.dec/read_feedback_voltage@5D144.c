int __fastcall read_feedback_voltage(int a1)
{
  int v1; // s0
  int v2; // s1
  int v5; // [sp+4h] [bp-1010h]
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( platform_is_pic_mcu_en() )
    pic1704_get_an_voltage1(a1);
  else
    bitmain_get_sample_voltage();
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1471776, a1, v5, v1, v2);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/power_api.c",
           150,
           "read_feedback_voltage",
           21,
           57,
           20,
           v6);
}
