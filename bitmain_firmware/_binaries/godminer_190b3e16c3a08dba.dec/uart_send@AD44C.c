size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  pthread_mutex_t *v6; // r6
  size_t v7; // r3
  size_t v8; // r8
  _DWORD *v9; // r4
  int v10; // r3
  size_t v11; // r3
  _DWORD *v12; // r8
  int v13; // r1
  int v15; // [sp+14h] [bp-1914h] BYREF
  int v16; // [sp+18h] [bp-1910h] BYREF
  int v17; // [sp+1Ch] [bp-190Ch] BYREF
  size_t v18; // [sp+20h] [bp-1908h] BYREF
  int v19; // [sp+24h] [bp-1904h] BYREF
  _DWORD s[64]; // [sp+28h] [bp-1900h] BYREF
  char v21[2040]; // [sp+128h] [bp-1800h] BYREF
  _DWORD v22[1024]; // [sp+928h] [bp-1000h] BYREF

  memset(s, 0, sizeof(s));
  v6 = (pthread_mutex_t *)(24 * a1 + 1622476);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  pthread_mutex_lock(v6);
  if ( sub_ACA54(a1, &v19, &v15, &v16, &v17) )
  {
    snprintf(v21, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw((char *)v22, 0x1000u, 0, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
      172,
      "uart_send",
      9,
      408,
      100,
      v22);
    pthread_mutex_unlock(v6);
    return 0;
  }
  else
  {
    while ( 1 )
    {
      fpga_read(v15, &v18);
      v7 = (unsigned __int8)(v18 >> v19);
      v18 = v7;
      if ( v7 >= a3 )
        break;
      usleep(0);
    }
    fpga_read(v16, &v18);
    v18 = (unsigned __int8)(v18 >> v19);
    memcpy(s, a2, a3);
    v8 = a3 >> 2;
    if ( a3 >> 2 )
    {
      v9 = s;
      do
      {
        v10 = *((unsigned __int8 *)v9++ + 1);
        fpga_write(
          v17,
          (v10 << 16)
        | (*((unsigned __int8 *)v9 - 4) << 24)
        | *((unsigned __int8 *)v9 - 1)
        | (*((unsigned __int8 *)v9 - 2) << 8));
      }
      while ( &s[v8] != v9 );
    }
    v11 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      v12 = &v22[v8];
      v13 = *((unsigned __int8 *)v12 - 2304) << 24;
      if ( v11 == 2 )
      {
        v13 |= *((unsigned __int8 *)v12 - 2303) << 16;
      }
      else if ( v11 == 3 )
      {
        v13 |= (*((unsigned __int8 *)v12 - 2302) << 8) | (*((unsigned __int8 *)v12 - 2303) << 16);
      }
      fpga_write(v17, v13);
    }
    fpga_write(v16, a3 | 0x80000000);
    pthread_mutex_unlock(v6);
    return a3;
  }
}
