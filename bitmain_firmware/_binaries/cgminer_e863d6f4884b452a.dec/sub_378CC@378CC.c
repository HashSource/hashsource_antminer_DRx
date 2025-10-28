unsigned int __fastcall sub_378CC(int a1, int a2, unsigned int a3)
{
  int v3; // r0
  int v4; // r9
  unsigned int v5; // r8
  int v6; // r3
  int v7; // r0
  unsigned int result; // r0
  int v9; // r2
  int v10; // r5
  char v11; // r2
  int v12; // r3
  char v13; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  switch ( a1 )
  {
    case 0:
      v3 = 528;
      v4 = 133;
      goto LABEL_3;
    case 1:
      v3 = 536;
      v4 = 135;
      goto LABEL_3;
    case 2:
      v3 = 544;
      v4 = 137;
      goto LABEL_3;
    case 3:
      v3 = 552;
      v4 = 139;
      goto LABEL_3;
    case 4:
      v3 = 560;
      v4 = 141;
      goto LABEL_3;
    case 5:
      v3 = 568;
      v4 = 143;
      goto LABEL_3;
    case 6:
      v3 = 576;
      v4 = 145;
      goto LABEL_3;
    case 7:
      v3 = 584;
      v4 = 147;
      goto LABEL_3;
    case 8:
      v3 = 592;
      v4 = 149;
      goto LABEL_3;
    case 9:
      v3 = 600;
      v4 = 151;
LABEL_3:
      v5 = a3 >> 2;
      *(_DWORD *)(dword_6FAEC + v3) = a3 & 0x3FF | 0x80000000;
      if ( a3 >> 2 )
      {
        v6 = a2;
        do
        {
          v6 += 4;
          v7 = *(_DWORD *)(dword_6FAEC + 4 * v4);
          *(_BYTE *)(v6 - 1) = v7;
          *(_BYTE *)(v6 - 4) = HIBYTE(v7);
          *(_BYTE *)(v6 - 3) = BYTE2(v7);
          *(_BYTE *)(v6 - 2) = BYTE1(v7);
        }
        while ( a2 + 4 * v5 != v6 );
      }
      result = a3 & 0xFFFFFFFC;
      v9 = a3 & 3;
      if ( v9 )
      {
        *(_DWORD *)s = -1;
        v10 = a2 + 4 * v5;
        *(_DWORD *)s = *(_DWORD *)(dword_6FAEC + 4 * v4);
        if ( v9 == 2 )
        {
          v13 = s[2];
          *(_BYTE *)(a2 + 4 * v5) = s[3];
          *(_BYTE *)(v10 + 1) = v13;
          result += 2;
        }
        else if ( v9 == 3 )
        {
          v11 = s[2];
          v12 = *(_DWORD *)s >> 8;
          result += 3;
          *(_BYTE *)(a2 + 4 * v5) = s[3];
          *(_BYTE *)(v10 + 1) = v11;
          *(_BYTE *)(v10 + 2) = v12;
        }
        else
        {
          *(_BYTE *)(a2 + 4 * v5) = s[3];
          ++result;
        }
      }
      break;
    default:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "read_uart_data_in_fpga", a1);
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
