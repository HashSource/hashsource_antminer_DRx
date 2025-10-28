int __fastcall get_response(int a1)
{
  char *v2; // r4
  int v3; // r0
  unsigned int v4; // r10
  unsigned int v5; // r6
  int v6; // r7
  void *v7; // r0
  int (**v8)(); // r0
  int v9; // r0
  size_t v10; // r4
  __useconds_t v11; // r0
  int v13; // [sp+0h] [bp-1124h]
  unsigned int v14; // [sp+4h] [bp-1120h]
  char s[256]; // [sp+20h] [bp-1104h] BYREF
  char v16[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v16, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "get_response",
    12,
    346,
    40,
    v16);
  v4 = 1;
  v5 = 64;
  prctl(15, v2);
  v6 = 0;
  v7 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v8 = dev_ctrl((int)v7);
    v9 = ((int (__fastcall *)(_DWORD, char *, int))v8[19])(*(_DWORD *)(a1 + 252), s, 256);
    v10 = v9;
    if ( *(_BYTE *)(a1 + 921) )
      break;
    if ( v9 <= 0 )
    {
      v11 = v5;
      v5 *= 2;
      v7 = (void *)usleep(v11);
      if ( v5 >= 0x3E8 )
        v5 = 1000;
    }
    else
    {
      v5 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 880), s, v9) && v4 <= ++v6 )
      {
        V_LOCK();
        logfmt_raw(v16, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(a1 + 260));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response",
          12,
          366,
          40,
          v16);
        V_LOCK();
        v13 = v6;
        v14 = v4;
        v6 = 0;
        v4 *= 10;
        logfmt_raw(v16, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v13, v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response",
          12,
          367,
          40,
          v16);
        if ( v4 >= 0x989680 )
          v4 = 10000000;
      }
      v7 = memset(s, 0, v10);
    }
  }
  *(_BYTE *)(a1 + 921) = 0;
  return 0;
}
