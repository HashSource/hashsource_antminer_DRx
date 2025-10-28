int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1B5618) )
  {
    v7 = -4;
    strcpy((char *)s, "failed to api lock");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
      170,
      "lcd_show_result",
      15,
      470,
      100,
      v10);
  }
  else
  {
    v6 = dword_1954C4;
    if ( dword_1954C4 < 0 )
    {
      dword_1954C4 = lcd_init((int)lcd_path);
      lcd_clear(dword_1954C4);
      v6 = dword_1954C4;
    }
    if ( v6 <= 0 )
    {
      snprintf((char *)s, 0x800u, "failed to init %s", lcd_path);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      v7 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_ui.c",
        170,
        "lcd_show_result",
        15,
        486,
        100,
        v10);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_1B5618);
  }
  return v7;
}
