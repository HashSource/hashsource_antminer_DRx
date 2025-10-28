int __fastcall check_how_many_uart_data_in_fpga(unsigned __int8 a1)
{
  int v1; // r3
  unsigned int v4; // [sp+Ch] [bp+Ch] BYREF

  v4 = 0;
  if ( platform_is_t9 )
  {
    switch ( a1 )
    {
      case 0u:
        fpga_read(dword_3565C, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 1u:
        fpga_read(dword_3565C, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 2u:
        fpga_read(dword_35660, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 3u:
        fpga_read(dword_35660, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 4u:
        fpga_read(dword_35664, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 5u:
        fpga_read(dword_35664, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 6u:
        fpga_read(dword_35668, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 7u:
        fpga_read(dword_35668, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 8u:
        fpga_read(dword_3566C, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 9u:
        fpga_read(dword_3566C, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 0xAu:
        fpga_read(dword_35670, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 0xBu:
        fpga_read(dword_35670, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 0xCu:
        fpga_read(dword_35674, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 0xDu:
        fpga_read(dword_35674, &v4);
        v1 = v4 & 0x3FF;
        break;
      default:
        printf("%s:%d", "check_how_many_uart_data_in_fpga", 394);
        printf("%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
        v1 = 0;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0u:
        fpga_read(dword_358F0, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 1u:
        fpga_read(dword_358F0, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 2u:
        fpga_read(dword_358F4, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 3u:
        fpga_read(dword_358F4, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 4u:
        fpga_read(dword_358F8, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 5u:
        fpga_read(dword_358F8, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 6u:
        fpga_read(dword_358FC, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 7u:
        fpga_read(dword_358FC, &v4);
        v1 = v4 & 0x3FF;
        break;
      case 8u:
        fpga_read(dword_35900, &v4);
        v1 = HIWORD(v4) & 0x3FF;
        break;
      case 9u:
        fpga_read(dword_35900, &v4);
        v1 = v4 & 0x3FF;
        break;
      default:
        printf("%s:%d", "check_how_many_uart_data_in_fpga", 449);
        printf("%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
        v1 = 0;
        break;
    }
  }
  return v1;
}
