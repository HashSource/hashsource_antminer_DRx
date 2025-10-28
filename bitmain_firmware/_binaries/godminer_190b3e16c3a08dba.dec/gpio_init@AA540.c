int gpio_init()
{
  int v0; // r0
  void *(*v1)(void *); // r2
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  _DWORD v11[3]; // [sp+10h] [bp-1800h] BYREF
  char v12; // [sp+1Ch] [bp-17F4h]
  char v13[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18C164 )
  {
    LOWORD(v3) = -18556;
    HIWORD(v3) = (unsigned int)"ge_reset_KDA_2110" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v11[0] = v4;
    v11[1] = v5;
    v11[2] = v6;
    v12 = v7;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v8) = -12376;
    HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
    v9 = *v8;
    LOWORD(v8) = -18728;
    LOWORD(v10) = -18540;
    HIWORD(v8) = (unsigned int)"DA_2110" >> 16;
    HIWORD(v10) = (unsigned int)"0" >> 16;
    zlog(v9, v10, 172, v8, 9, 98, 80, v13);
  }
  else
  {
    pthread_mutex_init(&stru_18C168, 0);
    LOWORD(v0) = -23248;
    HIWORD(v0) = (unsigned int)&loc_AC090 >> 16;
    dword_18C180 = (int)new_c_map(v0, 0, 0);
    pthread_mutex_init(&stru_18C184, 0);
    LOWORD(v1) = -18688;
    HIWORD(v1) = (unsigned int)&loc_AD260 >> 16;
    dword_18C19C = 1;
    pthread_create((pthread_t *)&dword_18C1A0, 0, v1, 0);
    dword_18C164 = 1;
  }
  return 0;
}
