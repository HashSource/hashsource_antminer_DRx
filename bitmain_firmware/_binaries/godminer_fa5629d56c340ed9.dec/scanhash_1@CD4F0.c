int __fastcall scanhash_1(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  int v6; // r3
  unsigned int v7; // r11
  int v8; // r11
  int v9; // r9
  int v11; // r0
  int v12; // r3
  char v13; // [sp+0h] [bp-123Ch]
  void *ptr; // [sp+14h] [bp-1228h]
  void *v15; // [sp+18h] [bp-1224h]
  int v16; // [sp+1Ch] [bp-1220h]
  unsigned int v17; // [sp+20h] [bp-121Ch]
  char v18; // [sp+24h] [bp-1218h]
  char v19; // [sp+2Fh] [bp-120Dh] BYREF
  int v20; // [sp+30h] [bp-120Ch] BYREF
  int v21; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v23[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v23, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "scanhash_1",
    10,
    118,
    40,
    v23);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 884);
  ptr = calloc(1u, *(_DWORD *)(a1 + 856));
  v15 = calloc(1u, *(_DWORD *)(a1 + 860));
  v16 = 0;
  v17 = 1;
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v4, s, 1u);
  if ( !*(_BYTE *)(a1 + 922) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v4, s, 1u);
        check_and_print_uart_debug_log(a1 + 1048, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 260), 0);
        if ( *(_BYTE *)(a1 + 922) )
          goto LABEL_5;
      }
      queue_dequeue(v4, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 922) )
        break;
      if ( s[1] == 85 )
      {
        v18 = *(_BYTE *)(a1 + 922);
        queue_dequeue(v4, &s[2], 1u);
        v7 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        queue_dequeue(v4, &s[3], v7);
        v8 = v7 + 3;
        check_and_print_uart_debug_log(a1 + 1048, v8, (unsigned __int8 *)s, *(_DWORD *)(a1 + 260), v18);
        v9 = *(unsigned __int8 *)(a1 + 922);
        if ( *(_BYTE *)(a1 + 922) )
          break;
        memset(ptr, *(unsigned __int8 *)(a1 + 922), *(_DWORD *)(a1 + 856));
        v20 = v9;
        v21 = v9;
        v19 = v9;
        if ( (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(a1 + 72))(
               a1,
               s,
               ptr,
               &v19,
               v15,
               &v20,
               &v21) == 10
          && !queue_enqueue(*(_DWORD *)(a1 + 892), s, v8)
          && v17 <= ++v16 )
        {
          V_LOCK();
          logfmt_raw(
            v23,
            0x1000u,
            0,
            "chain[%d], queue_enqueue of __low_priority_dag_packet_queue is false",
            *(_DWORD *)(a1 + 260));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_base.c",
            150,
            "scanhash_1",
            10,
            174,
            40,
            v23);
          V_LOCK();
          v11 = v16;
          v16 = 0;
          logfmt_raw(
            v23,
            0x1000u,
            0,
            "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
            v11,
            v17);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_base.c",
            150,
            "scanhash_1",
            10,
            175,
            40,
            v23);
          v12 = 10 * v17;
          if ( 10 * v17 >= 0x989680 )
            v12 = 10000000;
          v17 = v12;
        }
        goto LABEL_2;
      }
      v6 = *(_DWORD *)(a1 + 260);
      v13 = *(_BYTE *)(a1 + 922);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1048, 2, (unsigned __int8 *)s, v6, v13);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 922) = 0;
  free(ptr);
  free(v15);
  return 0;
}
