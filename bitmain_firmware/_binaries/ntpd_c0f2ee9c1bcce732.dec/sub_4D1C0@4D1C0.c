int __fastcall sub_4D1C0(_BYTE *a1, unsigned int *a2)
{
  unsigned int v3; // r4
  const unsigned __int16 **v5; // r0
  _BYTE *v6; // r1
  unsigned int v7; // r3
  const unsigned __int16 *v8; // r0
  unsigned int v9; // t1
  bool v10; // zf
  bool v11; // cc

  v3 = (unsigned __int8)*a1;
  if ( *a1 )
  {
    v5 = _ctype_b_loc();
    v6 = a1;
    v7 = 0;
    v8 = *v5;
    while ( (v8[v3] & 0x800) != 0 )
    {
      v10 = v7 == 429496729;
      v11 = v7 > 0x19999999;
      v7 = v3 + 8 * v7 - 48 + 2 * v7;
      if ( v11 || v10 && v3 > 0x35 )
        break;
      v9 = (unsigned __int8)*++v6;
      v3 = v9;
      if ( !v9 )
      {
        *a2 = v7;
        return 1;
      }
    }
  }
  return 0;
}
