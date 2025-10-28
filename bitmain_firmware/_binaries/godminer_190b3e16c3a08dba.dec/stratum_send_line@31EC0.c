int __fastcall stratum_send_line(pthread_mutex_t *a1, char *a2)
{
  char *v4; // r1
  int v5; // r4
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  pthread_mutex_t *v9; // r4
  int v10; // r5
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  char v14[4100]; // [sp+48h] [bp-1004h] BYREF

  if ( opt_protocol )
  {
    V_LOCK();
    LOWORD(v4) = 1232;
    HIWORD(v4) = (unsigned int)"t extranonce2_size" >> 16;
    V_INT((int)v12, v4, a1->__lock);
    LOWORD(v5) = 4992;
    HIWORD(v5) = (unsigned int)"ed!" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v5, a2);
    V_UNLOCK();
    LOWORD(v6) = -12376;
    HIWORD(v6) = (unsigned int)&unk_18C750 >> 16;
    v7 = *v6;
    LOWORD(v6) = 4864;
    LOWORD(v8) = 5000;
    HIWORD(v6) = (unsigned int)"failed!" >> 16;
    HIWORD(v8) = (unsigned int)"e nameroot failed!" >> 16;
    zlog(v7, v8, 145, v6, 17, 31, 60, v14);
  }
  v9 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  v10 = send_line(a1[1].__kind, a2);
  pthread_mutex_unlock(v9);
  return v10;
}
