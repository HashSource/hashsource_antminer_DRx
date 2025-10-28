int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  _DWORD *v12; // r3
  int v13; // r1
  const char *v15; // r2
  _DWORD *v16; // r3
  int v17; // r1
  int *v18; // lr
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r2
  int v28; // r1
  int *v29; // r2
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // [sp+14h] [bp-1808h] BYREF
  int s; // [sp+18h] [bp-1804h] BYREF
  int v35; // [sp+1Ch] [bp-1800h]
  int v36; // [sp+20h] [bp-17FCh]
  int v37; // [sp+24h] [bp-17F8h]
  int v38; // [sp+28h] [bp-17F4h]
  int v39; // [sp+2Ch] [bp-17F0h]
  int v40; // [sp+30h] [bp-17ECh]
  int v41; // [sp+34h] [bp-17E8h]
  int v42; // [sp+38h] [bp-17E4h]
  int v43; // [sp+3Ch] [bp-17E0h]
  char v44[4100]; // [sp+818h] [bp-1004h] BYREF

  v33 = a1;
  if ( !a2 )
  {
    LOWORD(v29) = 4676;
    HIWORD(v29) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    s = v30;
    v35 = v31;
    LOWORD(v36) = v32;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v26) = -12376;
    HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
    v27 = 183;
    goto LABEL_9;
  }
  if ( pthread_mutex_lock(&stru_18C168) )
  {
    LOWORD(v18) = -18364;
    HIWORD(v18) = (unsigned int)"unter_KDA_2110" >> 16;
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    v22 = v18[3];
    v18 += 4;
    s = v19;
    v35 = v20;
    v36 = v21;
    v37 = v22;
    v23 = v18[1];
    v24 = v18[2];
    v25 = v18[3];
    v38 = *v18;
    v39 = v23;
    v40 = v24;
    LOBYTE(v41) = v25;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v26) = -12376;
    HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
    v27 = 189;
LABEL_9:
    LOWORD(v28) = -18540;
    HIWORD(v28) = (unsigned int)"0" >> 16;
    zlog(*v26, v28, 172, "gpio_unreg_callback", 19, v27, 100, v44);
    return -1;
  }
  if ( exists_c_map((int *)dword_18C180, (int)&v33) == (int *)1 )
  {
    LOWORD(v15) = -18268;
    HIWORD(v15) = (unsigned int)"uart_relay_KDA_2110" >> 16;
    snprintf((char *)&s, 0x800u, v15, v33);
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v16) = -12376;
    HIWORD(v16) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v17) = -18540;
    HIWORD(v17) = (unsigned int)"0" >> 16;
    zlog(*v16, v17, 172, "gpio_unreg_callback", 19, 195, 20, v44);
    remove_c_map((int *)dword_18C180, (int)&v33);
  }
  else
  {
    LOWORD(v2) = -18236;
    HIWORD(v2) = (unsigned int)"pll_sel_KDA_2110" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v2 += 4;
    s = v3;
    v35 = v4;
    v36 = v5;
    v37 = v6;
    v7 = *v2;
    v8 = v2[1];
    v9 = v2[2];
    v10 = v2[3];
    v2 += 4;
    v38 = v7;
    v39 = v8;
    v40 = v9;
    v41 = v10;
    v11 = v2[1];
    v42 = *v2;
    v43 = v11;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v12) = -12376;
    HIWORD(v12) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v13) = -18540;
    HIWORD(v13) = (unsigned int)"0" >> 16;
    zlog(*v12, v13, 172, "gpio_unreg_callback", 19, 200, 80, v44);
  }
  pthread_mutex_unlock(&stru_18C168);
  return 0;
}
