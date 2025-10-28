int __fastcall get_response_1(int a1)
{
  char *v2; // r4
  int v3; // r0
  unsigned int v4; // r10
  void *v5; // r0
  int (**v6)(); // r0
  int v7; // r4
  __useconds_t v9; // r0
  int v11; // r0
  int v12; // r3
  int v13; // [sp+14h] [bp-2010h]
  unsigned int v14; // [sp+18h] [bp-200Ch]
  char s[4096]; // [sp+20h] [bp-2004h] BYREF
  char v16[4100]; // [sp+1020h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response_1", *(_DWORD *)(a1 + 256));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v16, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "get_response_1",
    14,
    390,
    40,
    v16);
  v4 = 64;
  v14 = 1;
  prctl(15, v2);
  v13 = 0;
  v5 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v6 = dev_ctrl((int)v5);
    v7 = ((int (__fastcall *)(int, char *, int))v6[20])(14, s, 256);
    getresponce_1_len += v7;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "%s, %d, %d\n", "get_response_1", v7, getresponce_1_len);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_base.c",
      150,
      "get_response_1",
      14,
      405,
      20,
      v16);
    if ( *(_BYTE *)(a1 + 921) )
      break;
    if ( v7 <= 0 )
    {
      v9 = v4;
      v4 *= 2;
      v5 = (void *)usleep(v9);
      if ( v4 >= 0x3E8 )
        v4 = 1000;
    }
    else
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 884), s, v7) && v14 <= ++v13 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(a1 + 260));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response_1",
          14,
          417,
          40,
          v16);
        V_LOCK();
        v11 = v13;
        v13 = 0;
        logfmt_raw(v16, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v11, v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response_1",
          14,
          418,
          40,
          v16);
        v12 = 10 * v14;
        if ( 10 * v14 >= 0x989680 )
          v12 = 10000000;
        v14 = v12;
      }
      v4 = 64;
      v5 = memset(s, 0, v7);
    }
  }
  *(_BYTE *)(a1 + 921) = 0;
  return 0;
}
