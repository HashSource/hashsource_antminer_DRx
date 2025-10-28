int __fastcall pool_died(int *a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r6
  int result; // r0
  int v5; // r5
  int *v6; // r7
  char *v7; // r1
  int v8; // r4
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r2
  char *v12; // r1
  int v13; // r4
  _DWORD *v14; // r3
  int v15; // r1
  _DWORD v16[7]; // [sp+28h] [bp-1044h] BYREF
  int v17; // [sp+44h] [bp-1028h]
  _DWORD v18[7]; // [sp+48h] [bp-1024h] BYREF
  int v19; // [sp+64h] [bp-1008h]
  char v20[4100]; // [sp+68h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 456);
  pthread_mutex_lock((pthread_mutex_t *)a1 + 76);
  v3 = *((unsigned __int8 *)a1 + 1904);
  *((_BYTE *)a1 + 1904) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    LOWORD(v5) = 23056;
    HIWORD(v5) = (unsigned int)&mutex.__count >> 16;
    cgtime((struct timeval *)(a1 + 477));
    sub_31C1C(a1, 1);
    pthread_mutex_lock((pthread_mutex_t *)(v5 + 4));
    v6 = *(int **)(v5 + 0x1C);
    pthread_mutex_unlock((pthread_mutex_t *)(v5 + 4));
    V_LOCK();
    if ( a1 == v6 )
    {
      v11 = *a1;
      LOWORD(v12) = -31764;
      HIWORD(v12) = (unsigned int)"ct reasons" >> 16;
      LOWORD(v13) = -30572;
      V_INT((int)v16, v12, v11);
      HIWORD(v13) = (unsigned int)"config too fast, pool is changing, please wait" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, v13);
      V_UNLOCK();
      LOWORD(v14) = 20532;
      HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v15) = -30968;
      HIWORD(v15) = (unsigned int)"d = %d" >> 16;
      zlog(*v14, v15, 134, "pool_died", 9, 406, 80, v20);
      return switch_pools();
    }
    else
    {
      LOWORD(v7) = -31764;
      HIWORD(v7) = (unsigned int)"ct reasons" >> 16;
      V_INT((int)v18, v7, *a1);
      LOWORD(v8) = -30556;
      HIWORD(v8) = (unsigned int)" pool is changing, please wait" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v8);
      V_UNLOCK();
      LOWORD(v9) = 20532;
      HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v10) = -30968;
      HIWORD(v10) = (unsigned int)"d = %d" >> 16;
      return zlog(*v9, v10, 134, "pool_died", 9, 409, 20, v20);
    }
  }
  return result;
}
