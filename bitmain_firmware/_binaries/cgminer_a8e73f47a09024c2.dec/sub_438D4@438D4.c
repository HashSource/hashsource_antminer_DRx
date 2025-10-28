unsigned int __fastcall sub_438D4(int a1)
{
  unsigned int result; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      result = ((unsigned int)sub_437FC(124) >> 16) & 0x3FF;
      break;
    case 1:
      result = sub_437FC(124) & 0x3FF;
      break;
    case 2:
      result = ((unsigned int)sub_437FC(125) >> 16) & 0x3FF;
      break;
    case 3:
      result = sub_437FC(125) & 0x3FF;
      break;
    case 4:
      result = ((unsigned int)sub_437FC(126) >> 16) & 0x3FF;
      break;
    case 5:
      result = sub_437FC(126) & 0x3FF;
      break;
    case 6:
      result = ((unsigned int)sub_437FC(127) >> 16) & 0x3FF;
      break;
    case 7:
      result = sub_437FC(127) & 0x3FF;
      break;
    case 8:
      result = ((unsigned int)sub_437FC(128) >> 16) & 0x3FF;
      break;
    case 9:
      result = sub_437FC(128) & 0x3FF;
      break;
    default:
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
        sub_3F178(3, s, 0);
        result = 0;
      }
      else
      {
        result = 0;
      }
      break;
  }
  return result;
}
