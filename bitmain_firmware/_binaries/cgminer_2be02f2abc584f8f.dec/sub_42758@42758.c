int __fastcall sub_42758(int a1, _BYTE *a2, unsigned int a3)
{
  int v5; // r7
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r6
  _BYTE *v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r8
  int v13; // r0
  _BYTE *v14; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  switch ( a1 )
  {
    case 0:
      v5 = 133;
      v6 = 132;
      goto LABEL_17;
    case 1:
      v5 = 135;
      v6 = 134;
      goto LABEL_17;
    case 2:
      v5 = 137;
      v6 = 136;
      goto LABEL_17;
    case 3:
      v5 = 139;
      v6 = 138;
      goto LABEL_17;
    case 4:
      v5 = 141;
      v6 = 140;
      goto LABEL_17;
    case 5:
      v5 = 143;
      v6 = 142;
      goto LABEL_17;
    case 6:
      v5 = 145;
      v6 = 144;
      goto LABEL_17;
    case 7:
      v5 = 147;
      v6 = 146;
      goto LABEL_17;
    case 8:
      v5 = 149;
      v6 = 148;
      goto LABEL_17;
    case 9:
      v5 = 151;
      v6 = 150;
LABEL_17:
      sub_42570(v6, a3 & 0x3FF | 0x80000000);
      v8 = a3 >> 2;
      if ( a3 >> 2 )
      {
        v9 = a2;
        v10 = 0;
        do
        {
          v11 = sub_42544(v5);
          *v9 = HIBYTE(v11);
          v9[1] = BYTE2(v11);
          v9[2] = BYTE1(v11);
          v9[3] = v11;
          ++v10;
          v9 += 4;
        }
        while ( v10 != v8 );
      }
      else
      {
        v10 = 0;
      }
      v7 = 4 * v8;
      v12 = a3 & 3;
      if ( v12 )
      {
        v13 = sub_42544(v5);
        if ( v12 == 2 )
        {
          a2[4 * v10] = HIBYTE(v13);
          a2[4 * v10 + 1] = BYTE2(v13);
          v7 += 2;
        }
        else
        {
          a2[4 * v10] = HIBYTE(v13);
          if ( v12 == 3 )
          {
            v14 = &a2[4 * v10];
            v14[1] = BYTE2(v13);
            v14[2] = BYTE1(v13);
            v7 += 3;
          }
          else
          {
            ++v7;
          }
        }
      }
      break;
    default:
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(s, 0x800u, "%s: The uart%d is not supported!!!\n", "read_uart_data_in_fpga", a1);
        sub_3F1C0(3, s, 0);
        v7 = 0;
      }
      else
      {
        v7 = 0;
      }
      break;
  }
  return v7;
}
