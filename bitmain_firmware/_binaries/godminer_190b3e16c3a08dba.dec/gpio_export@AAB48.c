int __fastcall gpio_export(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r6
  size_t v5; // r0
  const char *v6; // r2
  _DWORD *v7; // r3
  int v8; // r1
  const char *v10; // r2
  _DWORD *v11; // r3
  int v12; // r1
  int *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // lr
  _DWORD *v19; // r3
  int v20; // r1
  int *v21; // lr
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // lr
  _DWORD *v31; // r3
  int v32; // r1
  const char *v33; // r2
  _DWORD *v34; // r3
  int v35; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v37; // [sp+50h] [bp-1800h] BYREF
  int v38; // [sp+54h] [bp-17FCh]
  int v39; // [sp+58h] [bp-17F8h]
  int v40; // [sp+5Ch] [bp-17F4h]
  int v41; // [sp+60h] [bp-17F0h]
  int v42; // [sp+64h] [bp-17ECh]
  int v43; // [sp+68h] [bp-17E8h]
  int v44; // [sp+6Ch] [bp-17E4h]
  __int16 v45; // [sp+70h] [bp-17E0h]
  char v46; // [sp+72h] [bp-17DEh]
  char v47[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18C184) )
  {
    LOWORD(v13) = -18196;
    HIWORD(v13) = (unsigned int)"DA_2110" >> 16;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    v37 = v14;
    v38 = v15;
    v39 = v16;
    v40 = v17;
    LOWORD(v41) = v18;
    BYTE2(v41) = BYTE2(v18);
    V_LOCK();
    logfmt_raw(v47, 0x1000u, 0, &v37);
    V_UNLOCK();
    LOWORD(v19) = -12376;
    HIWORD(v19) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v20) = -18540;
    HIWORD(v20) = (unsigned int)"0" >> 16;
    zlog(*v19, v20, 172, "gpio_export", 11, 221, 100, v47);
    return -1;
  }
  else
  {
    LOWORD(v2) = -18176;
    HIWORD(v2) = (unsigned int)"kda" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      LOWORD(v3) = -18124;
      HIWORD(v3) = (unsigned int)"addr_KDA_2110" >> 16;
      v4 = open64(v3);
      if ( v4 < 0 )
      {
        LOWORD(v21) = -18100;
        HIWORD(v21) = (unsigned int)"_nonce_kda" >> 16;
        v22 = *v21;
        v23 = v21[1];
        v24 = v21[2];
        v25 = v21[3];
        v21 += 4;
        v37 = v22;
        v38 = v23;
        v39 = v24;
        v40 = v25;
        v26 = *v21;
        v27 = v21[1];
        v28 = v21[2];
        v29 = v21[3];
        v30 = v21[4];
        v41 = v26;
        v42 = v27;
        v43 = v28;
        v44 = v29;
        v45 = v30;
        v46 = BYTE2(v30);
        V_LOCK();
        logfmt_raw(v47, 0x1000u, 0, &v37);
        V_UNLOCK();
        LOWORD(v31) = -12376;
        HIWORD(v31) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v32) = -18540;
        HIWORD(v32) = (unsigned int)"0" >> 16;
        zlog(*v31, v32, 172, "gpio_export", 11, 238, 100, v47);
        pthread_mutex_unlock(&stru_18C184);
        return -2;
      }
      else
      {
        v5 = snprintf(s, 0x40u, "%d", a1);
        if ( write(v4, s, v5) < 0 )
        {
          LOWORD(v33) = -18064;
          HIWORD(v33) = (unsigned int)"temp_local_on_pic_KDA_2110" >> 16;
          snprintf((char *)&v37, 0x800u, v33, a1);
          V_LOCK();
          logfmt_raw(v47, 0x1000u, 0, &v37);
          V_UNLOCK();
          LOWORD(v34) = -12376;
          HIWORD(v34) = (unsigned int)&unk_18C750 >> 16;
          LOWORD(v35) = -18540;
          HIWORD(v35) = (unsigned int)"0" >> 16;
          zlog(*v34, v35, 172, "gpio_export", 11, 246, 100, v47);
          close(v4);
          pthread_mutex_unlock(&stru_18C184);
          return -3;
        }
        else
        {
          LOWORD(v6) = -18036;
          HIWORD(v6) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_pic_KDA_2110" >> 16;
          snprintf((char *)&v37, 0x800u, v6, a1);
          V_LOCK();
          logfmt_raw(v47, 0x1000u, 0, &v37);
          V_UNLOCK();
          LOWORD(v7) = -12376;
          HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
          LOWORD(v8) = -18540;
          HIWORD(v8) = (unsigned int)"0" >> 16;
          zlog(*v7, v8, 172, "gpio_export", 11, 251, 20, v47);
          close(v4);
          pthread_mutex_unlock(&stru_18C184);
          return 0;
        }
      }
    }
    else
    {
      LOWORD(v10) = -18152;
      HIWORD(v10) = (unsigned int)"_KDA_2110" >> 16;
      snprintf((char *)&v37, 0x800u, v10, a1);
      V_LOCK();
      logfmt_raw(v47, 0x1000u, 0, &v37);
      V_UNLOCK();
      LOWORD(v11) = -12376;
      HIWORD(v11) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v12) = -18540;
      HIWORD(v12) = (unsigned int)"0" >> 16;
      zlog(*v11, v12, 172, "gpio_export", 11, 229, 80, v47);
      pthread_mutex_unlock(&stru_18C184);
      return 0;
    }
  }
}
