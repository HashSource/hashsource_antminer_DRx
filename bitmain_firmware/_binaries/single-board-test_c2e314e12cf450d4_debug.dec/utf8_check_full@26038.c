int __fastcall utf8_check_full(char *a1, int a2, int *a3)
{
  char v5; // [sp+17h] [bp+17h]
  char v6; // [sp+17h] [bp+17h]
  int v7; // [sp+18h] [bp+18h]
  int i; // [sp+1Ch] [bp+1Ch]

  v5 = *a1;
  switch ( a2 )
  {
    case 2:
      v7 = v5 & 0x1F;
      break;
    case 3:
      v7 = v5 & 0xF;
      break;
    case 4:
      v7 = v5 & 7;
      break;
    default:
      return 0;
  }
  for ( i = 1; i < a2; ++i )
  {
    v6 = a1[i];
    if ( v6 >= 0 || (unsigned __int8)v6 > 0xBFu )
      return 0;
    v7 = (v7 << 6) + (v6 & 0x3F);
  }
  if ( v7 > 1114111 )
    return 0;
  if ( v7 > 55295 && v7 <= 57343 )
    return 0;
  if ( a2 == 2 && v7 <= 127 || a2 == 3 && v7 <= 2047 || a2 == 4 && v7 <= 0xFFFF )
    return 0;
  if ( a3 )
    *a3 = v7;
  return 1;
}
