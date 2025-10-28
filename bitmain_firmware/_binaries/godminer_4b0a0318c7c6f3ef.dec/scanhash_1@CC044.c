int __fastcall scanhash_1(int a1)
{
  char *v2; // r5
  _DWORD *v3; // r7
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // r5
  void *v8; // r8
  void *v9; // r11
  int v11; // r3
  unsigned int v12; // r10
  int v13; // r10
  int v14; // r9
  int v16; // r1
  int v17; // r0
  int v18; // r3
  int v19; // r1
  int v20; // r3
  char v21; // [sp+0h] [bp-1234h]
  int v22; // [sp+10h] [bp-1224h]
  unsigned int v23; // [sp+14h] [bp-1220h]
  char v24; // [sp+1Ch] [bp-1218h]
  char v25; // [sp+27h] [bp-120Dh] BYREF
  int v26; // [sp+28h] [bp-120Ch] BYREF
  int v27; // [sp+2Ch] [bp-1208h] BYREF
  char s[512]; // [sp+30h] [bp-1204h] BYREF
  char v29[4100]; // [sp+230h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = 20532;
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(a1 + 248));
  V_LOCK();
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  v4 = syscall(224);
  LOWORD(v5) = -31520;
  HIWORD(v5) = (unsigned int)"URL -- '%s'" >> 16;
  logfmt_raw(v29, 0x1000u, 0, v5, v2, v4);
  V_UNLOCK();
  LOWORD(v6) = 31772;
  HIWORD(v6) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  zlog(*v3, v6, 150, "scanhash_1", 10, 118, 40, v29);
  v23 = 1;
  prctl(15, v2);
  v22 = 0;
  v7 = *(_DWORD *)(a1 + 876);
  v8 = calloc(1u, *(_DWORD *)(a1 + 848));
  v9 = calloc(1u, *(_DWORD *)(a1 + 852));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v7, s, 1u);
  if ( !*(_BYTE *)(a1 + 914) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v7, s, 1u);
        check_and_print_uart_debug_log(a1 + 1040, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), 0);
        if ( *(_BYTE *)(a1 + 914) )
          goto LABEL_5;
      }
      queue_dequeue(v7, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 914) )
        break;
      if ( s[1] == 85 )
      {
        v24 = *(_BYTE *)(a1 + 914);
        queue_dequeue(v7, &s[2], 1u);
        v12 = (*(int (__fastcall **)(_DWORD))(a1 + 176))((unsigned __int8)s[2]);
        queue_dequeue(v7, &s[3], v12);
        v13 = v12 + 3;
        check_and_print_uart_debug_log(a1 + 1040, v13, (unsigned __int8 *)s, *(_DWORD *)(a1 + 256), v24);
        v14 = *(unsigned __int8 *)(a1 + 914);
        if ( *(_BYTE *)(a1 + 914) )
          break;
        memset(v8, *(unsigned __int8 *)(a1 + 914), *(_DWORD *)(a1 + 848));
        v26 = v14;
        v27 = v14;
        v25 = v14;
        if ( (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(a1 + 72))(
               a1,
               s,
               v8,
               &v25,
               v9,
               &v26,
               &v27) == 10
          && !queue_enqueue(*(_DWORD *)(a1 + 884), s, v13)
          && v23 <= ++v22 )
        {
          V_LOCK();
          logfmt_raw(
            v29,
            0x1000u,
            0,
            "chain[%d], queue_enqueue of __low_priority_dag_packet_queue is false",
            *(_DWORD *)(a1 + 256));
          V_UNLOCK();
          LOWORD(v16) = 31772;
          HIWORD(v16) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
          zlog(*v3, v16, 150, "scanhash_1", 10, 174, 40, v29);
          V_LOCK();
          v17 = v22;
          LOWORD(v18) = 32256;
          HIWORD(v18) = (unsigned int)"header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x" >> 16;
          v22 = 0;
          logfmt_raw(v29, 0x1000u, 0, v18, v17, v23);
          V_UNLOCK();
          LOWORD(v19) = 31772;
          HIWORD(v19) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
          zlog(*v3, v19, 150, "scanhash_1", 10, 175, 40, v29);
          v20 = 10 * v23;
          if ( 10 * v23 >= 0x989680 )
            v20 = 10000000;
          v23 = v20;
        }
        goto LABEL_2;
      }
      v11 = *(_DWORD *)(a1 + 256);
      v21 = *(_BYTE *)(a1 + 914);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1040, 2, (unsigned __int8 *)s, v11, v21);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 914) = 0;
  free(v8);
  free(v9);
  return 0;
}
