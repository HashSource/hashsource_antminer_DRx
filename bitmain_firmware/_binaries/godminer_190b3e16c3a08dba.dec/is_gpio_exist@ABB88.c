int __fastcall is_gpio_exist(int a1)
{
  const char *v2; // r2
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  int *v7; // lr
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // lr
  _DWORD *v13; // r3
  int v14; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v16[4]; // [sp+50h] [bp-1800h] BYREF
  __int16 v17; // [sp+60h] [bp-17F0h]
  char v18; // [sp+62h] [bp-17EEh]
  char v19[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18C184) )
  {
    LOWORD(v7) = -18196;
    HIWORD(v7) = (unsigned int)"DA_2110" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v12 = v7[4];
    v16[0] = v8;
    v16[1] = v9;
    v16[2] = v10;
    v16[3] = v11;
    v17 = v12;
    v18 = BYTE2(v12);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v13) = -12376;
    HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v14) = -18540;
    HIWORD(v14) = (unsigned int)"0" >> 16;
    zlog(*v13, v14, 172, "is_gpio_exist", 13, 443, 100, v19);
    return -1;
  }
  else
  {
    LOWORD(v2) = -18176;
    HIWORD(v2) = (unsigned int)"kda" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_18C184);
      return 0;
    }
    else
    {
      LOWORD(v4) = -18152;
      HIWORD(v4) = (unsigned int)"_KDA_2110" >> 16;
      snprintf((char *)v16, 0x800u, v4, a1);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, v16);
      V_UNLOCK();
      LOWORD(v5) = -12376;
      HIWORD(v5) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v6) = -18540;
      HIWORD(v6) = (unsigned int)"0" >> 16;
      zlog(*v5, v6, 172, "is_gpio_exist", 13, 449, 20, v19);
      pthread_mutex_unlock(&stru_18C184);
      return 1;
    }
  }
}
