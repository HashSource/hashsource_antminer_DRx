int __fastcall stratum_disconnect(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r6
  int kind; // r0
  _BYTE *spins; // r3
  char *v5; // r1
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  char v12[4096]; // [sp+48h] [bp-1000h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  kind = a1[1].__kind;
  if ( kind != -1 )
  {
    shutdown(kind, 2);
    close(a1[1].__kind);
    spins = (_BYTE *)a1[1].__spins;
    a1[1].__kind = -1;
    *spins = 0;
    V_LOCK();
    LOWORD(v5) = 1232;
    HIWORD(v5) = (unsigned int)"t extranonce2_size" >> 16;
    V_INT((int)v10, v5, a1->__lock);
    LOWORD(v6) = 5632;
    HIWORD(v6) = (unsigned int)"tend/frontend_kas/frontend_kas.c" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v6);
    V_UNLOCK();
    LOWORD(v7) = -12376;
    HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v8) = 5000;
    HIWORD(v8) = (unsigned int)"e nameroot failed!" >> 16;
    zlog(*v7, v8, 145, "stratum_disconnect", 18, 227, 20, v12);
  }
  return pthread_mutex_unlock(v1);
}
