int __fastcall get_response_1(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r1
  int v7; // r9
  _DWORD *v8; // r5
  unsigned int v9; // r10
  void *v10; // r0
  int (**v11)(); // r0
  int v12; // r4
  int v13; // r1
  __useconds_t v15; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // [sp+14h] [bp-2010h]
  unsigned int v23; // [sp+18h] [bp-200Ch]
  char s[4096]; // [sp+20h] [bp-2004h] BYREF
  char v25[4100]; // [sp+1020h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "get_response_1", *(_DWORD *)(a1 + 252));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -31520;
  HIWORD(v4) = (unsigned int)"URL -- '%s'" >> 16;
  LOWORD(v5) = 20532;
  logfmt_raw(v25, 0x1000u, 0, v4, v2, v3);
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v6) = 31772;
  HIWORD(v6) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  LOWORD(v8) = 19240;
  LOWORD(v7) = 32404;
  HIWORD(v8) = (unsigned int)dword_1B4B30 >> 16;
  zlog(*v5, v6, 150, "get_response_1", 14, 390, 40, v25);
  v9 = 64;
  v23 = 1;
  prctl(15, v2);
  v22 = 0;
  v10 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v11 = dev_ctrl((int)v10);
    v12 = ((int (__fastcall *)(int, char *, int))v11[20])(14, s, 256);
    *v8 += v12;
    V_LOCK();
    HIWORD(v7) = (unsigned int)"mand_packet_1" >> 16;
    logfmt_raw(v25, 0x1000u, 0, v7, "get_response_1", v12, *v8);
    V_UNLOCK();
    LOWORD(v13) = 31772;
    HIWORD(v13) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
    zlog(*v5, v13, 150, "get_response_1", 14, 405, 20, v25);
    if ( *(_BYTE *)(a1 + 913) )
      break;
    if ( v12 <= 0 )
    {
      v15 = v9;
      v9 *= 2;
      v10 = (void *)usleep(v15);
      if ( v9 >= 0x3E8 )
        v9 = 1000;
    }
    else
    {
      if ( !queue_enqueue(*(_DWORD *)(a1 + 876), s, v12) && v23 <= ++v22 )
      {
        V_LOCK();
        logfmt_raw(v25, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(a1 + 256));
        V_UNLOCK();
        LOWORD(v17) = 31772;
        HIWORD(v17) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
        zlog(*v5, v17, 150, "get_response_1", 14, 417, 40, v25);
        V_LOCK();
        v18 = v22;
        LOWORD(v19) = 31984;
        HIWORD(v19) = (unsigned int)"length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x" >> 16;
        v22 = 0;
        logfmt_raw(v25, 0x1000u, 0, v19, v18, v23);
        V_UNLOCK();
        LOWORD(v20) = 31772;
        HIWORD(v20) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
        zlog(*v5, v20, 150, "get_response_1", 14, 418, 40, v25);
        v21 = 10 * v23;
        if ( 10 * v23 >= 0x989680 )
          v21 = 10000000;
        v23 = v21;
      }
      v9 = 64;
      v10 = memset(s, 0, v12);
    }
  }
  *(_BYTE *)(a1 + 913) = 0;
  return 0;
}
