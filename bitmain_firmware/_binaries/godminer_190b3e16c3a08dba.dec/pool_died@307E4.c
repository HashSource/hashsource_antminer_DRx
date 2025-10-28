int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int *v5; // r7
  char *v6; // r1
  int v7; // r4
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r2
  char *v11; // r1
  int v12; // r4
  _DWORD *v13; // r3
  int v14; // r1
  _DWORD v15[7]; // [sp+28h] [bp-1044h] BYREF
  int v16; // [sp+44h] [bp-1028h]
  _DWORD v17[7]; // [sp+48h] [bp-1024h] BYREF
  int v18; // [sp+64h] [bp-1008h]
  char v19[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 456);
  pthread_mutex_lock((pthread_mutex_t *)a1 + 76);
  v3 = *((unsigned __int8 *)a1 + 1904);
  *((_BYTE *)a1 + 1904) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    cgtime((struct timeval *)(a1 + 477));
    sub_2FE94(a1, 1);
    pthread_mutex_lock(&mutex);
    v5 = (int *)dword_17A05C;
    pthread_mutex_unlock(&mutex);
    V_LOCK();
    if ( a1 == v5 )
    {
      v10 = *a1;
      LOWORD(v11) = 1232;
      HIWORD(v11) = (unsigned int)"t extranonce2_size" >> 16;
      LOWORD(v12) = 4032;
      V_INT((int)v15, v11, v10);
      HIWORD(v12) = (unsigned int)"0\",\"method\":\"eth_submitWork\",\"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v12);
      V_UNLOCK();
      LOWORD(v13) = -12376;
      HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v14) = 3632;
      HIWORD(v14) = (unsigned int)"getdiff:%d" >> 16;
      zlog(*v13, v14, 134, "pool_died", 9, 402, 80, v19);
      return switch_pools();
    }
    else
    {
      LOWORD(v6) = 1232;
      HIWORD(v6) = (unsigned int)"t extranonce2_size" >> 16;
      V_INT((int)v17, v6, *a1);
      LOWORD(v7) = 4048;
      HIWORD(v7) = (unsigned int)"_submitWork\",\"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}" >> 16;
      logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v7);
      V_UNLOCK();
      LOWORD(v8) = -12376;
      HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v9) = 3632;
      HIWORD(v9) = (unsigned int)"getdiff:%d" >> 16;
      return zlog(*v8, v9, 134, "pool_died", 9, 405, 20, v19);
    }
  }
  return result;
}
