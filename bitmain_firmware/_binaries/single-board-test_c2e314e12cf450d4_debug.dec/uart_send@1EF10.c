size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  int v8; // [sp+18h] [bp+10h] BYREF
  size_t v9; // [sp+1Ch] [bp+14h] BYREF
  int v10; // [sp+20h] [bp+18h] BYREF
  int v11; // [sp+24h] [bp+1Ch] BYREF
  int v12; // [sp+28h] [bp+20h] BYREF
  _BYTE s[256]; // [sp+2Ch] [bp+24h] BYREF
  size_t v14; // [sp+12Ch] [bp+124h]
  signed int v15; // [sp+130h] [bp+128h]
  int v16; // [sp+134h] [bp+12Ch]
  int v17; // [sp+138h] [bp+130h]
  signed int i; // [sp+13Ch] [bp+134h]

  v16 = 0;
  v15 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  v14 = a3;
  v17 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  pthread_mutex_lock(&uart_send_mutex[a1]);
  if ( get_send_address_info(a1, &v8, &v12, &v11, &v10) )
  {
    printf("%s:%d", "uart_send", 584);
    printf("get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_unlock(&uart_send_mutex[a1]);
    return 0;
  }
  else
  {
    v16 = 0;
    do
    {
      fpga_read(v12, &v9);
      v9 = (unsigned __int8)(v9 >> v8);
    }
    while ( v9 < a3 );
    v16 = 0;
    do
      fpga_read(v11, &v9);
    while ( v9 >> 31 == 1 );
    memcpy(s, a2, a3);
    v15 = v14 >> 2;
    for ( i = 0; i < v15; ++i )
    {
      v17 = (unsigned __int8)s[4 * i + 3]
          | ((unsigned __int8)s[4 * i] << 24)
          | ((unsigned __int8)s[4 * i + 1] << 16)
          | ((unsigned __int8)s[4 * i + 2] << 8);
      fpga_write(v10, v17);
    }
    v15 = v14 & 3;
    if ( (v14 & 3) != 0 )
    {
      switch ( v15 )
      {
        case 2:
          v17 = ((unsigned __int8)s[4 * i + 1] << 16) | ((unsigned __int8)s[4 * i] << 24);
          break;
        case 3:
          v17 = ((unsigned __int8)s[4 * i + 2] << 8)
              | ((unsigned __int8)s[4 * i] << 24)
              | ((unsigned __int8)s[4 * i + 1] << 16);
          break;
        case 1:
          v17 = (unsigned __int8)s[4 * i] << 24;
          break;
        default:
          printf("%s: the uart%d send left data is 4*N length, error!!!\n", "uart_send", a1);
          break;
      }
      fpga_write(v10, v17);
    }
    fpga_write(v11, v14 | 0x80000000);
    pthread_mutex_unlock(&uart_send_mutex[a1]);
    return v14;
  }
}
