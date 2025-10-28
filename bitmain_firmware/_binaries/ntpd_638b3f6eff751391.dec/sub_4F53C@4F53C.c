int __fastcall sub_4F53C(_BYTE *a1, int *a2)
{
  int v3; // r4
  const unsigned __int16 **v5; // r0
  unsigned __int8 *v6; // r1
  int v7; // r3
  const unsigned __int16 *v8; // r8
  int v9; // r2
  unsigned int v10; // r7
  int result; // r0
  bool v12; // zf
  unsigned int v13; // r12
  int v14; // r4
  int v15; // t1

  v3 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 0;
  v5 = _ctype_b_loc();
  v6 = a1 + 1;
  v7 = 0;
  v8 = *v5;
  while ( 1 )
  {
    v9 = 16 * v7;
    v10 = v3 - 97;
    result = v8[v3] & 0x1000;
    if ( (v8[v3] & 0x1000) == 0 )
      break;
    result = v7 & 0xF0000000;
    v12 = (v7 & 0xF0000000) == 0;
    v7 = v3 + 16 * v7 - 48;
    if ( !v12 )
      return 0;
    if ( (unsigned int)(v3 - 48) > 9 )
    {
      v13 = v3 - 65;
      v14 = v3 + v9;
      v7 = v14 - 87;
      if ( v10 > 5 )
      {
        v7 = v14 - 55;
        if ( v13 > 5 )
          break;
      }
    }
    v15 = *v6++;
    v3 = v15;
    if ( !v15 )
    {
      *a2 = v7;
      return 1;
    }
  }
  return result;
}
