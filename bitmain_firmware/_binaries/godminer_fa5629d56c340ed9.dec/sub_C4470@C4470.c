int __fastcall sub_C4470(int a1)
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, "gpio port %d is not a supported key", a1);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
           170,
           "gpio_key_callback",
           17,
           134,
           80,
           v3);
}
