int __fastcall iic_uninit(int a1)
{
  pthread_mutex_t *v2; // r0
  int *v4; // lr
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // lr
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD v12[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v13; // [sp+20h] [bp-17F0h]
  char v14; // [sp+22h] [bp-17EEh]
  char v15[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v2) = -15964;
  HIWORD(v2) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v2) )
  {
    LOWORD(v4) = -17048;
    HIWORD(v4) = (unsigned int)"489" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v12[0] = v5;
    v12[1] = v6;
    v12[2] = v7;
    v12[3] = v8;
    v13 = v9;
    v14 = BYTE2(v9);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v10) = -12376;
    HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v11) = -17352;
    HIWORD(v11) = (unsigned int)":%02x, %08x" >> 16;
    return zlog(*v10, v11, 171, "iic_uninit", 10, 64, 100, v15);
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&stru_18C1A4);
  }
}
