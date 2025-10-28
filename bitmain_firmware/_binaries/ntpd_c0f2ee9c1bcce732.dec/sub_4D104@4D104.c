int __fastcall sub_4D104(unsigned __int8 *a1, int *a2)
{
  unsigned __int8 *v2; // r5
  int v3; // r4
  int v5; // r10
  int v6; // r6
  const unsigned __int16 **v7; // r0
  unsigned __int8 *v8; // r1
  int v9; // r3
  int result; // r0
  int v11; // t1
  bool v12; // zf
  bool v13; // cc

  v2 = a1;
  v3 = *a1;
  if ( v3 == 45 )
  {
    v2 = a1 + 1;
    v3 = a1[1];
    v5 = 56;
    v6 = 1;
  }
  else
  {
    v5 = 55;
    v6 = 0;
  }
  if ( v3 )
  {
    v7 = _ctype_b_loc();
    v8 = v2;
    v9 = 0;
    result = (int)*v7;
    while ( (*(_WORD *)(result + 2 * v3) & 0x800) != 0 )
    {
      v12 = v9 == 214748364;
      v13 = v9 <= 214748364;
      v9 = v3 - 48 + 10 * v9;
      if ( !v13 || v12 && v5 < v3 )
        break;
      v11 = *++v8;
      v3 = v11;
      if ( !v11 )
      {
        if ( v6 )
        {
          *a2 = -v9;
          result = 1;
        }
        else
        {
          *a2 = v9;
        }
        if ( !v6 )
          return 1;
        return result;
      }
    }
  }
  return 0;
}
