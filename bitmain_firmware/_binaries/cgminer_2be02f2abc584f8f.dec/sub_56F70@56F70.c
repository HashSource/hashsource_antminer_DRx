int __fastcall sub_56F70(char *a1, int a2, int *a3)
{
  char v3; // r4
  int v4; // r4
  int v5; // r12
  int v6; // r3
  bool v7; // zf
  _BOOL4 v8; // r3
  _BOOL4 v9; // r3

  v3 = *a1;
  switch ( a2 )
  {
    case 2:
      v4 = v3 & 0x1F;
      break;
    case 3:
      v4 = v3 & 0xF;
      break;
    case 4:
      v4 = v3 & 7;
      break;
    default:
      return 0;
  }
  v5 = (unsigned __int8)a1[1];
  if ( (v5 ^ 0x80u) > 0x3F )
    return 0;
  v6 = 1;
  while ( 1 )
  {
    v4 = (v5 & 0x3F) + (v4 << 6);
    if ( a2 <= ++v6 )
      break;
    v5 = (unsigned __int8)a1[v6];
    if ( (v5 ^ 0x80u) > 0x3F )
      return 0;
  }
  if ( v4 >= 1114112 )
    return 0;
  if ( (unsigned int)(v4 - 55296) < 0x800 )
    return 0;
  v7 = v4 == 127;
  if ( v4 <= 127 )
    v7 = a2 == 2;
  if ( v7 )
    return 0;
  v8 = v4 < 2048;
  if ( a2 != 3 )
    v8 = 0;
  if ( v8 )
    return 0;
  v9 = v4 < 0x10000;
  if ( a2 != 4 )
    v9 = 0;
  if ( v9 )
    return 0;
  if ( a3 )
    *a3 = v4;
  return 1;
}
