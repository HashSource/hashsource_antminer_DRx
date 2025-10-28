unsigned int __fastcall ethash_get_expected_difficulty(_BYTE *a1, unsigned int a2)
{
  unsigned int v4; // r1
  _BYTE *v5; // r3
  unsigned int result; // r0
  int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2

  memset(a1, 255, 0x20u);
  v4 = a2 >> 3;
  if ( a2 >> 3 )
  {
    v5 = a1 - 1;
    do
      *++v5 = 0;
    while ( &a1[v4 - 1] != v5 );
  }
  result = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    v7 = 0;
    do
    {
      ++v7;
      if ( a2 <= 7 )
        v8 = (unsigned __int8)*a1;
      else
        v8 = (unsigned __int8)a1[v4];
      v9 = v8 >> 1;
      if ( a2 <= 7 )
        *a1 = v9;
      else
        a1[v4] = v9;
    }
    while ( v7 != result );
  }
  return result;
}
