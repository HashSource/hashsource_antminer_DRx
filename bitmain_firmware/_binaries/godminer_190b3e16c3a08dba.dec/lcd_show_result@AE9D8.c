int __fastcall lcd_show_result(char a1, int a2, unsigned int a3)
{
  int v6; // r0
  int v7; // r4
  const char *v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // lr
  _DWORD *v18; // r3
  int v19; // r1
  _DWORD s[4]; // [sp+10h] [bp-1804h] BYREF
  __int16 v21; // [sp+20h] [bp-17F4h]
  char v22; // [sp+22h] [bp-17F2h]
  char v23[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_18C4D0) )
  {
    LOWORD(v12) = -18196;
    HIWORD(v12) = (unsigned int)"DA_2110" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v7 = -4;
    v17 = v12[4];
    s[0] = v13;
    s[1] = v14;
    s[2] = v15;
    s[3] = v16;
    v21 = v17;
    v22 = BYTE2(v17);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v18) = -12376;
    HIWORD(v18) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v19) = -15584;
    HIWORD(v19) = (unsigned int)") in" >> 16;
    zlog(*v18, v19, 170, "lcd_show_result", 15, 470, 100, v23);
  }
  else
  {
    v6 = dword_178AF4;
    if ( dword_178AF4 < 0 )
    {
      dword_178AF4 = lcd_init((int)lcd_path);
      lcd_clear(dword_178AF4);
      v6 = dword_178AF4;
    }
    if ( v6 <= 0 )
    {
      LOWORD(v9) = -15180;
      HIWORD(v9) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c" >> 16;
      snprintf((char *)s, 0x800u, v9, lcd_path);
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v10) = -12376;
      HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v11) = -15584;
      HIWORD(v11) = (unsigned int)") in" >> 16;
      v7 = -1;
      zlog(*v10, v11, 170, "lcd_show_result", 15, 486, 100, v23);
    }
    else
    {
      v7 = lcd_write(v6, a1, a2, a3);
    }
    pthread_mutex_unlock(&stru_18C4D0);
  }
  return v7;
}
