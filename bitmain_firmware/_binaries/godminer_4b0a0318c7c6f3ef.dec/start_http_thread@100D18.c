int start_http_thread()
{
  int v0; // r10
  pthread_t v2; // [sp+10h] [bp-1028h] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1024h] BYREF
  char v4[4096]; // [sp+38h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, 1548876);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "start_http_thread",
    17,
    273,
    60,
    v4);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  v0 = pthread_create(&v2, &attr, (void *(*)(void *))httpListenThread, 0);
  pthread_detach(v2);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, 1548900, v0);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/common/general/http.c",
           149,
           "start_http_thread",
           17,
           280,
           60,
           v4);
}
