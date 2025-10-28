int __fastcall lcd_init(int a1)
{
  int result; // r0
  char v2[2048]; // [sp+10h] [bp-1800h] BYREF
  char v3[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4F54 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_1B4F58 = result;
    if ( result < 0 )
    {
      strcpy(v2, "open lcd failed!!!");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
        171,
        "lcd_init",
        8,
        41,
        100,
        v3);
      return -1;
    }
    else
    {
      dword_1B4F54 = 1;
    }
  }
  else
  {
    strcpy(v2, "bad param");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
      171,
      "lcd_init",
      8,
      35,
      100,
      v3);
    return -3;
  }
  return result;
}
