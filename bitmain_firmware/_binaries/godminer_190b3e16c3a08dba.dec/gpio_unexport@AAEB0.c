int __fastcall gpio_unexport(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  size_t v7; // r0
  const char *v8; // r2
  _DWORD *v9; // r3
  int v10; // r1
  const char *v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  int *v15; // lr
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // lr
  _DWORD *v21; // r3
  int v22; // r1
  int *v23; // r12
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r1
  _DWORD *v33; // r3
  int v34; // r1
  const char *v35; // r2
  _DWORD *v36; // r3
  int v37; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  int v39; // [sp+50h] [bp-1800h] BYREF
  int v40; // [sp+54h] [bp-17FCh]
  int v41; // [sp+58h] [bp-17F8h]
  int v42; // [sp+5Ch] [bp-17F4h]
  int v43; // [sp+60h] [bp-17F0h]
  int v44; // [sp+64h] [bp-17ECh]
  int v45; // [sp+68h] [bp-17E8h]
  int v46; // [sp+6Ch] [bp-17E4h]
  int v47; // [sp+70h] [bp-17E0h]
  char v48; // [sp+74h] [bp-17DCh]
  char v49[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18C184) )
  {
    LOWORD(v15) = -18196;
    HIWORD(v15) = (unsigned int)"DA_2110" >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v19 = v15[3];
    v4 = -1;
    v20 = v15[4];
    v39 = v16;
    v40 = v17;
    v41 = v18;
    v42 = v19;
    LOWORD(v43) = v20;
    BYTE2(v43) = BYTE2(v20);
    V_LOCK();
    logfmt_raw(v49, 0x1000u, 0, &v39);
    V_UNLOCK();
    LOWORD(v21) = -12376;
    HIWORD(v21) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v22) = -18540;
    HIWORD(v22) = (unsigned int)"0" >> 16;
    zlog(*v21, v22, 172, "gpio_unexport", 13, 273, 100, v49);
    return v4;
  }
  LOWORD(v2) = -18176;
  HIWORD(v2) = (unsigned int)"kda" >> 16;
  snprintf(s, 0x40u, v2, a1);
  v3 = access(s, 0);
  v4 = v3;
  if ( !v3 )
  {
    LOWORD(v5) = -17972;
    HIWORD(v5) = (unsigned int)"read_sensor_temp_local_on_ctrlboard_KDA_2110" >> 16;
    v6 = open64(v5);
    if ( v6 < 0 )
    {
      LOWORD(v23) = -17944;
      HIWORD(v23) = (unsigned int)"rlboard_KDA_2110" >> 16;
      v24 = *v23;
      v25 = v23[1];
      v26 = v23[2];
      v27 = v23[3];
      v23 += 4;
      v39 = v24;
      v40 = v25;
      v41 = v26;
      v42 = v27;
      v28 = *v23;
      v29 = v23[1];
      v30 = v23[2];
      v31 = v23[3];
      v23 += 4;
      v43 = v28;
      v44 = v29;
      v45 = v30;
      v46 = v31;
      v32 = v23[1];
      v47 = *v23;
      v48 = v32;
      V_LOCK();
      logfmt_raw(v49, 0x1000u, 0, &v39);
      V_UNLOCK();
      LOWORD(v33) = -12376;
      HIWORD(v33) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v34) = -18540;
      HIWORD(v34) = (unsigned int)"0" >> 16;
      v4 = -2;
      zlog(*v33, v34, 172, "gpio_unexport", 13, 290, 100, v49);
      pthread_mutex_unlock(&stru_18C184);
    }
    else
    {
      v7 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v6, s, v7) < 0 )
      {
        LOWORD(v35) = -17904;
        HIWORD(v35) = (unsigned int)"sor_temp_local_on_ctrlboard_KDA_2110" >> 16;
        snprintf((char *)&v39, 0x800u, v35, a1);
        V_LOCK();
        logfmt_raw(v49, 0x1000u, 0, &v39);
        V_UNLOCK();
        LOWORD(v36) = -12376;
        HIWORD(v36) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v37) = -18540;
        HIWORD(v37) = (unsigned int)"0" >> 16;
        v4 = -2;
        zlog(*v36, v37, 172, "gpio_unexport", 13, 298, 100, v49);
      }
      else
      {
        LOWORD(v8) = -17876;
        HIWORD(v8) = (unsigned int)"KDA_2110" >> 16;
        snprintf((char *)&v39, 0x800u, v8, a1);
        V_LOCK();
        logfmt_raw(v49, 0x1000u, 0, &v39);
        V_UNLOCK();
        LOWORD(v9) = -12376;
        HIWORD(v9) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v10) = -18540;
        HIWORD(v10) = (unsigned int)"0" >> 16;
        zlog(*v9, v10, 172, "gpio_unexport", 13, 304, 20, v49);
      }
      close(v6);
      pthread_mutex_unlock(&stru_18C184);
    }
    return v4;
  }
  LOWORD(v12) = -18012;
  HIWORD(v12) = (unsigned int)"temp_remote_on_pic_KDA_2110" >> 16;
  snprintf((char *)&v39, 0x800u, v12, a1, v3);
  V_LOCK();
  logfmt_raw(v49, 0x1000u, 0, &v39);
  V_UNLOCK();
  LOWORD(v13) = -12376;
  HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v14) = -18540;
  HIWORD(v14) = (unsigned int)"0" >> 16;
  zlog(*v13, v14, 172, "gpio_unexport", 13, 281, 80, v49);
  pthread_mutex_unlock(&stru_18C184);
  return 0;
}
