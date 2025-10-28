int __fastcall set_voltage(char a1, char a2, char a3)
{
  unsigned __int8 v7; // [sp+1Bh] [bp+Bh]
  unsigned int v8; // [sp+1Ch] [bp+Ch]
  double v9; // [sp+20h] [bp+10h]

  v9 = 0.0;
  switch ( pattern_test_time )
  {
    case 0:
      v8 = dword_33687C;
      break;
    case 1:
      v8 = dword_336880;
      break;
    case 2:
      v8 = dword_336884;
      break;
    case 3:
      v8 = dword_336888;
      break;
    case 4:
      v8 = dword_33688C;
      break;
    case 5:
      v8 = dword_336890;
      break;
    case 6:
      v8 = dword_336894;
      break;
    case 7:
      v8 = dword_336898;
      break;
    case 8:
      v8 = dword_33689C;
      break;
    default:
      v8 = dword_33687C;
      printf("\n--- %s: Can't find voltage%d\n", (const char *)(unsigned __int8)pattern_test_time, 0);
      break;
  }
  dword_336878 = v8;
  if ( a3 )
    v8 += unk_3368C0;
  if ( dword_336850 == 1722 )
  {
    v9 = 1438.749 - (double)v8 * 129.4922 / 100.0;
  }
  else if ( dword_336850 == 1725 )
  {
    v9 = 1582.35294 - (double)v8 * 166.666667 / 100.0;
  }
  if ( v9 > 255.0 )
    v9 = 255.0;
  if ( v9 < 0.0 )
    v9 = 0.0;
  v7 = (unsigned int)v9;
  printf("\n--- %s: real voltage = %d, temp_voltage = %.6f, Pic_Voltage = %d\n", "set_voltage", v8, v9, v7);
  if ( dword_336850 == 1722 )
  {
    set_PIC16F1704_voltage(a1, a2, v7);
  }
  else if ( dword_336850 == 1725 )
  {
    power_set_voltage(v7);
  }
  return usleep(0x186A0u);
}
