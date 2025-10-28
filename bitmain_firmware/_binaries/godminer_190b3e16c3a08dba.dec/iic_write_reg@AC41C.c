int __fastcall iic_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  pthread_mutex_t *v6; // r0
  int v10; // r4
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // lr
  _DWORD *v18; // r3
  int v19; // r1
  _DWORD v20[4]; // [sp+10h] [bp-1804h] BYREF
  __int16 v21; // [sp+20h] [bp-17F4h]
  char v22; // [sp+22h] [bp-17F2h]
  char v23[4080]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v6) = -15964;
  HIWORD(v6) = (unsigned int)&unk_18B8EC >> 16;
  if ( pthread_mutex_lock(v6) )
  {
    LOWORD(v12) = -17048;
    HIWORD(v12) = (unsigned int)"489" >> 16;
    v13 = *v12;
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v10 = -4;
    v17 = v12[4];
    v20[0] = v13;
    v20[1] = v14;
    v20[2] = v15;
    v20[3] = v16;
    v21 = v17;
    v22 = BYTE2(v17);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v20);
    V_UNLOCK();
    LOWORD(v18) = -12376;
    HIWORD(v18) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v19) = -17352;
    HIWORD(v19) = (unsigned int)":%02x, %08x" >> 16;
    zlog(*v18, v19, 171, "iic_write_reg", 13, 145, 100, v23);
  }
  else
  {
    v10 = i2c_write_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_18C1A4);
  }
  return v10;
}
