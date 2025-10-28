int ui_init()
{
  int v0; // r5
  int v2; // r1
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r0
  void *(*v6)(void *); // r2
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r12
  _DWORD *v13; // r3
  int v14; // r1
  _DWORD v15[4]; // [sp+10h] [bp-1800h] BYREF
  char v16; // [sp+20h] [bp-17F0h]
  char v17[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18C500 )
    return 0;
  if ( gpio_init() )
  {
    LOWORD(v7) = -19744;
    HIWORD(v7) = (unsigned int)"018127e3disable_cores_kas" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v0 = -1;
    v12 = v7[4];
    v15[0] = v8;
    v15[1] = v9;
    v15[2] = v10;
    v15[3] = v11;
    v16 = v12;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v13) = -12376;
    HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v14) = -15584;
    HIWORD(v14) = (unsigned int)") in" >> 16;
    zlog(*v13, v14, 170, "ui_init", 7, 152, 100, v17);
    return v0;
  }
  gpio_export(941);
  gpio_export(942);
  gpio_export(921);
  gpio_export(943);
  LOWORD(v2) = -8088;
  HIWORD(v2) = (unsigned int)&loc_AFBC8 >> 16;
  gpio_reg_callback(921, v2);
  LOWORD(v3) = -8088;
  HIWORD(v3) = (unsigned int)&loc_AFBC8 >> 16;
  gpio_reg_callback(943, v3);
  pthread_mutex_init(&stru_18C4D0, 0);
  LOWORD(v4) = -8748;
  HIWORD(v4) = (unsigned int)&loc_AF934 >> 16;
  off_18C4EC = 0;
  dword_18C4F0 = 0;
  dword_18C4F4 = 0;
  dword_18C4F8 = 0;
  dword_18C4FC = 0;
  v5 = new_c_map(v4, 0, 0);
  LOWORD(v6) = -8732;
  dword_18C4E8 = (int)v5;
  HIWORD(v6) = (unsigned int)&locret_AF944 >> 16;
  dword_18C4CC[0] = 1;
  pthread_create((pthread_t *)&dword_18C504, 0, v6, 0);
  dword_18C500 = 1;
  return 0;
}
