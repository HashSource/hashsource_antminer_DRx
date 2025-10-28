int __fastcall send_work(int a1)
{
  char *v2; // r5
  int v3; // r0
  void *v4; // r0
  size_t v5; // r2
  void *v6; // r5
  size_t v8; // [sp+14h] [bp-1004h]
  char v9[4096]; // [sp+18h] [bp-1000h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v9, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "send_work",
    9,
    66,
    40,
    v9);
  prctl(15, v2);
  v8 = *(_DWORD *)(a1 + 852);
  v4 = calloc(1u, v8);
  v5 = v8;
  v6 = v4;
  while ( 1 )
  {
    memset(v6, 0, v5);
    queue_dequeue(*(_DWORD *)(a1 + 876), (char *)v6, 1u);
    if ( *(_BYTE *)(a1 + 924) )
      break;
    push_work_base(a1, (int)v6);
    v5 = *(_DWORD *)(a1 + 852);
  }
  *(_BYTE *)(a1 + 924) = 0;
  free(v6);
  return 0;
}
