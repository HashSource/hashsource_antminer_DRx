int __fastcall stratum_disconnect(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r6
  int kind; // r0
  _BYTE *spins; // r3
  _DWORD v6[7]; // [sp+28h] [bp-1020h] BYREF
  int v7; // [sp+44h] [bp-1004h]
  char v8[4096]; // [sp+48h] [bp-1000h] BYREF

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
    V_INT((int)v6, "poolno", a1->__lock);
    logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, 1352832);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_disconnect",
      18,
      227,
      20,
      v8);
  }
  return pthread_mutex_unlock(v1);
}
