int __fastcall gpio_direction(int a1, int a2)
{
  const char *v4; // r2
  int v5; // r0
  int v6; // r8
  bool v7; // zf
  size_t v8; // r2
  const char *v9; // r5
  const char *v10; // r2
  _DWORD *v11; // r3
  int v12; // r1
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // lr
  _DWORD *v20; // r3
  int v21; // r1
  const char *v22; // r2
  _DWORD *v23; // r3
  int v24; // r1
  const char *v25; // r2
  _DWORD *v26; // r3
  int v27; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v29[4]; // [sp+50h] [bp-1800h] BYREF
  __int16 v30; // [sp+60h] [bp-17F0h]
  char v31; // [sp+62h] [bp-17EEh]
  char v32[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18C184) )
  {
    LOWORD(v14) = -18196;
    HIWORD(v14) = (unsigned int)"DA_2110" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14[4];
    v29[0] = v15;
    v29[1] = v16;
    v29[2] = v17;
    v29[3] = v18;
    v30 = v19;
    v31 = BYTE2(v19);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, v29);
    V_UNLOCK();
    LOWORD(v20) = -12376;
    HIWORD(v20) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v21) = -18540;
    HIWORD(v21) = (unsigned int)"0" >> 16;
    zlog(*v20, v21, 172, "gpio_direction", 14, 327, 100, v32);
    return -1;
  }
  else
  {
    LOWORD(v4) = -17848;
    HIWORD(v4) = (unsigned int)"_sensor_temp_remote_on_ctrlboard_KDA_2110" >> 16;
    snprintf(s, 0x40u, v4, a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      LOWORD(v25) = -17812;
      HIWORD(v25) = (unsigned int)"_2110" >> 16;
      snprintf((char *)v29, 0x800u, v25, a1);
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, v29);
      V_UNLOCK();
      LOWORD(v26) = -12376;
      HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v27) = -18540;
      HIWORD(v27) = (unsigned int)"0" >> 16;
      zlog(*v26, v27, 172, "gpio_direction", 14, 334, 100, v32);
      pthread_mutex_unlock(&stru_18C184);
      return -2;
    }
    else
    {
      v7 = a2 == 0;
      if ( a2 )
        v8 = 3;
      else
        v8 = 2;
      v9 = "out";
      if ( v7 )
        v9 = "in";
      if ( write(v5, v9, v8) < 0 )
      {
        LOWORD(v22) = -17764;
        HIWORD(v22) = (unsigned int)"sweep_frequency_kda_2110" >> 16;
        snprintf((char *)v29, 0x800u, v22, a1, v9);
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, v29);
        V_UNLOCK();
        LOWORD(v23) = -12376;
        HIWORD(v23) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v24) = -18540;
        HIWORD(v24) = (unsigned int)"0" >> 16;
        zlog(*v23, v24, 172, "gpio_direction", 14, 343, 100, v32);
        close(v6);
        pthread_mutex_unlock(&stru_18C184);
        return -3;
      }
      else
      {
        LOWORD(v10) = -17724;
        HIWORD(v10) = (unsigned int)"fuart_cfg_KDA_2110" >> 16;
        snprintf((char *)v29, 0x800u, v10, a1, v9);
        V_LOCK();
        logfmt_raw(v32, 0x1000u, 0, v29);
        V_UNLOCK();
        LOWORD(v11) = -12376;
        HIWORD(v11) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v12) = -18540;
        HIWORD(v12) = (unsigned int)"0" >> 16;
        zlog(*v11, v12, 172, "gpio_direction", 14, 350, 20, v32);
        close(v6);
        pthread_mutex_unlock(&stru_18C184);
        return 0;
      }
    }
  }
}
