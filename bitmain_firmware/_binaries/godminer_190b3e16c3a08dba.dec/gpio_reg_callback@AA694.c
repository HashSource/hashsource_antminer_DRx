int __fastcall gpio_reg_callback(int a1, int a2)
{
  const char *v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  const char *v7; // r2
  _DWORD *v8; // r3
  int v9; // r1
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r2
  int v20; // r1
  int *v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v27; // [sp+1Ch] [bp-1800h]
  int v28; // [sp+20h] [bp-17FCh]
  int v29; // [sp+24h] [bp-17F8h]
  int v30; // [sp+28h] [bp-17F4h]
  int v31; // [sp+2Ch] [bp-17F0h]
  int v32; // [sp+30h] [bp-17ECh]
  char v33; // [sp+34h] [bp-17E8h]
  _DWORD v34[1025]; // [sp+818h] [bp-1004h] BYREF

  v25 = a1;
  if ( !a2 )
  {
    LOWORD(v21) = 4676;
    HIWORD(v21) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v22 = *v21;
    v23 = v21[1];
    v24 = v21[2];
    s = v22;
    v27 = v23;
    LOWORD(v28) = v24;
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v18) = -12376;
    HIWORD(v18) = (unsigned int)&unk_18C750 >> 16;
    v19 = 147;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18C168) )
  {
    LOWORD(v10) = -18364;
    HIWORD(v10) = (unsigned int)"unter_KDA_2110" >> 16;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v10 += 4;
    s = v11;
    v27 = v12;
    v28 = v13;
    v29 = v14;
    v15 = v10[1];
    v16 = v10[2];
    v17 = v10[3];
    v30 = *v10;
    v31 = v15;
    v32 = v16;
    v33 = v17;
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v18) = -12376;
    HIWORD(v18) = (unsigned int)&unk_18C750 >> 16;
    v19 = 152;
LABEL_9:
    LOWORD(v20) = -18540;
    HIWORD(v20) = (unsigned int)"0" >> 16;
    zlog(*v18, v20, 172, "gpio_reg_callback", 17, v19, 100, v34);
    return -1;
  }
  if ( exists_c_map((int *)dword_18C180, (int)&v25) )
  {
    LOWORD(v3) = -18308;
    HIWORD(v3) = (unsigned int)"ChipSetting_pmdata_KDA_2110" >> 16;
    snprintf((char *)&s, 0x800u, v3, v25);
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v4) = -12376;
    HIWORD(v4) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v5) = -18540;
    HIWORD(v5) = (unsigned int)"0" >> 16;
    zlog(*v4, v5, 172, "gpio_reg_callback", 17, 165, 20, v34);
  }
  else
  {
    LOWORD(v7) = -18332;
    HIWORD(v7) = (unsigned int)"_clock_count_KDA_2110" >> 16;
    snprintf((char *)&s, 0x800u, v7, v25);
    V_LOCK();
    logfmt_raw((char *)v34, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v8) = -12376;
    HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v9) = -18540;
    HIWORD(v9) = (unsigned int)"0" >> 16;
    zlog(*v8, v9, 172, "gpio_reg_callback", 17, 158, 20, v34);
    v34[0] = a2;
    v34[1] = -1;
    insert_c_map((int *)dword_18C180, &v25, 4u, v34, 8u);
  }
  pthread_mutex_unlock(&stru_18C168);
  return 0;
}
