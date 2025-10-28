int __fastcall iic_read(int a1, _BYTE *a2, int a3)
{
  pthread_mutex_t *v4; // r0
  int v7; // r4
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r3
  int v16; // r1
  _DWORD v17[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v18; // [sp+20h] [bp-17F0h]
  char v19; // [sp+22h] [bp-17EEh]
  char v20[4096]; // [sp+810h] [bp-1000h] BYREF

  LOWORD(v4) = -15964;
  HIWORD(v4) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v4) )
  {
    LOWORD(v9) = -17048;
    HIWORD(v9) = (unsigned int)"489" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    v7 = -4;
    v14 = v9[4];
    v17[0] = v10;
    v17[1] = v11;
    v17[2] = v12;
    v17[3] = v13;
    v18 = v14;
    v19 = BYTE2(v14);
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v15) = -12376;
    HIWORD(v15) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v16) = -17352;
    HIWORD(v16) = (unsigned int)":%02x, %08x" >> 16;
    zlog(*v15, v16, 171, "iic_read", 8, 83, 100, v20);
  }
  else
  {
    v7 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&stru_18C1A4);
  }
  return v7;
}
