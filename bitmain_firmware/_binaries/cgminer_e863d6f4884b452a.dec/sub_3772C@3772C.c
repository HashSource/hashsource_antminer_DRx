int __fastcall sub_3772C(int a1)
{
  int result; // r0
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      result = HIWORD(*(_DWORD *)(dword_6FAEC + 496)) & 0x3FF;
      break;
    case 1:
      result = *(_DWORD *)(dword_6FAEC + 496) & 0x3FF;
      break;
    case 2:
      result = HIWORD(*(_DWORD *)(dword_6FAEC + 500)) & 0x3FF;
      break;
    case 3:
      result = *(_DWORD *)(dword_6FAEC + 500) & 0x3FF;
      break;
    case 4:
      result = HIWORD(*(_DWORD *)(dword_6FAEC + 504)) & 0x3FF;
      break;
    case 5:
      result = *(_DWORD *)(dword_6FAEC + 504) & 0x3FF;
      break;
    case 6:
      result = HIWORD(*(_DWORD *)(dword_6FAEC + 508)) & 0x3FF;
      break;
    case 7:
      result = *(_DWORD *)(dword_6FAEC + 508) & 0x3FF;
      break;
    case 8:
      result = HIWORD(*(_DWORD *)(dword_6FAEC + 512)) & 0x3FF;
      break;
    case 9:
      *(_DWORD *)s = -1;
      result = *(_DWORD *)(dword_6FAEC + 512) & 0x3FF;
      break;
    default:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "check_how_many_uart_data_in_fpga", a1);
        sub_343C4(3, s, 0);
        result = 0;
      }
      else
      {
        result = (unsigned __int8)byte_6FA70;
      }
      break;
  }
  return result;
}
