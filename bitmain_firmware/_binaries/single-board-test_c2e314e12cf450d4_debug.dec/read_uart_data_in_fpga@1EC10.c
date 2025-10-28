int __fastcall read_uart_data_in_fpga(int a1, int a2, unsigned int a3)
{
  int v8; // [sp+14h] [bp+14h] BYREF
  int v9; // [sp+18h] [bp+18h] BYREF
  int v10; // [sp+1Ch] [bp+1Ch] BYREF
  unsigned int v11; // [sp+20h] [bp+20h]
  unsigned int v12; // [sp+24h] [bp+24h]
  int v13; // [sp+28h] [bp+28h]
  unsigned int i; // [sp+2Ch] [bp+2Ch]

  v10 = 0;
  v9 = 0;
  v12 = 0;
  v11 = 0;
  i = 0;
  v8 = 0;
  v13 = 0;
  if ( get_read_address_info(a1, &v10, &v9) )
  {
    printf("%s:%d", "read_uart_data_in_fpga", 461);
    printf("get_read_address_info error, chain_id = %d\n", a1);
    return 0;
  }
  else
  {
    v12 = a3 & 0x3FF | 0x80000000;
    fpga_write(v10, v12);
    v11 = a3 >> 2;
    for ( i = 0; i < v11; ++i )
    {
      fpga_read(v9, &v8);
      *(_BYTE *)(a2 + 4 * i) = HIBYTE(v8);
      *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v8);
      *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v8);
      *(_BYTE *)(a2 + 4 * i + 3) = v8;
    }
    v13 = 4 * v11;
    v11 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      fpga_read(v9, &v8);
      switch ( v11 )
      {
        case 2u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v8);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v8);
          v13 += 2;
          break;
        case 3u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v8);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v8);
          *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v8);
          v13 += 3;
          break;
        case 1u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v8);
          ++v13;
          break;
        default:
          printf("%s:%d", "read_uart_data_in_fpga", 507);
          printf("%s: the uart%d left data is 4*N length, error!!!\n", "read_uart_data_in_fpga", a1);
          break;
      }
    }
    return v13;
  }
}
