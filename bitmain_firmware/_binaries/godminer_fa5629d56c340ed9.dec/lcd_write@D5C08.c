int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r11
  unsigned __int8 v10; // r5
  size_t v11; // r6
  const void *v12; // r1
  char v15[2048]; // [sp+10h] [bp-1804h] BYREF
  char v16[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_1B6074 )
    return -2;
  v5 = a4;
  if ( dword_1B6078 != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    strcpy(v15, "bad param");
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
      171,
      "lcd_write",
      9,
      69,
      80,
      v16);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_1B607C);
    if ( v9 )
    {
      strcpy(v15, "failed to lcd lock");
      V_LOCK();
      logfmt_raw(v16, 0x1000u, v7, v15);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_lcd.c",
        171,
        "lcd_write",
        9,
        75,
        100,
        v16);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        v12 = (const void *)(a3 + v9);
        v9 += v11;
        memcpy((char *)&unk_1B6094 + 16 * v4, v12, v11);
        v5 -= v11;
        v4 = (char)v10;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_1B6078, &unk_1B6094, 0x40u);
      pthread_mutex_unlock(&stru_1B607C);
      return 0;
    }
  }
}
