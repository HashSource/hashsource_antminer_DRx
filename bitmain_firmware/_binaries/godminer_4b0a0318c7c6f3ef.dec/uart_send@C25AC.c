size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  int v6; // r6
  pthread_mutex_t *v7; // r6
  size_t v8; // r3
  size_t v9; // r8
  _DWORD *v10; // r4
  int v11; // r3
  size_t v12; // r3
  _DWORD *v13; // r8
  int v14; // r1
  const char *v15; // r2
  _DWORD *v16; // r3
  int v17; // r1
  int v19; // [sp+14h] [bp-1914h] BYREF
  int v20; // [sp+18h] [bp-1910h] BYREF
  int v21; // [sp+1Ch] [bp-190Ch] BYREF
  size_t v22; // [sp+20h] [bp-1908h] BYREF
  int v23; // [sp+24h] [bp-1904h] BYREF
  _DWORD s[64]; // [sp+28h] [bp-1900h] BYREF
  char v25[2040]; // [sp+128h] [bp-1800h] BYREF
  _DWORD v26[1024]; // [sp+928h] [bp-1000h] BYREF

  LOWORD(v6) = 16884;
  memset(s, 0, sizeof(s));
  HIWORD(v6) = (unsigned int)&unk_1B41FC >> 16;
  v7 = (pthread_mutex_t *)(v6 + 24 * a1);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  pthread_mutex_lock(v7);
  if ( sub_C1BB4(a1, &v23, &v19, &v20, &v21) )
  {
    LOWORD(v15) = 25336;
    HIWORD(v15) = (unsigned int)"s" >> 16;
    snprintf(v25, 0x800u, v15, a1);
    V_LOCK();
    logfmt_raw((char *)v26, 0x1000u, 0, v25);
    V_UNLOCK();
    LOWORD(v16) = 20532;
    HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v17) = 25124;
    HIWORD(v17) = (unsigned int)"unsuported gpio port" >> 16;
    zlog(*v16, v17, 172, "uart_send", 9, 410, 100, v26);
    pthread_mutex_unlock(v7);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v19, &v22);
      v8 = (unsigned __int8)(v22 >> v23);
      v22 = v8;
      if ( v8 >= a3 )
        break;
      usleep(0);
    }
    fpga_read(v20, &v22);
    v22 = (unsigned __int8)(v22 >> v23);
    memcpy(s, a2, a3);
    v9 = a3 >> 2;
    if ( a3 >> 2 )
    {
      v10 = s;
      do
      {
        v11 = *((unsigned __int8 *)v10++ + 1);
        fpga_write(
          v21,
          (v11 << 16)
        | (*((unsigned __int8 *)v10 - 4) << 24)
        | *((unsigned __int8 *)v10 - 1)
        | (*((unsigned __int8 *)v10 - 2) << 8));
      }
      while ( &s[v9] != v10 );
    }
    v12 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      v13 = &v26[v9];
      v14 = *((unsigned __int8 *)v13 - 2304) << 24;
      if ( v12 == 2 )
      {
        v14 |= *((unsigned __int8 *)v13 - 2303) << 16;
      }
      else if ( v12 == 3 )
      {
        v14 |= (*((unsigned __int8 *)v13 - 2302) << 8) | (*((unsigned __int8 *)v13 - 2303) << 16);
      }
      fpga_write(v21, v14);
    }
    fpga_write(v20, a3 | 0x80000000);
    pthread_mutex_unlock(v7);
    return a3;
  }
}
