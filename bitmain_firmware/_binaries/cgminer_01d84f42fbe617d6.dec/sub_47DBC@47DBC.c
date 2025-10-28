unsigned __int8 *__fastcall sub_47DBC(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r3
  bool v4; // zf
  int v5; // r2
  int v6; // r12
  unsigned __int8 *v7; // r12
  int v8; // r3
  int v9; // t1
  unsigned __int8 *result; // r0

  v2 = (unsigned __int8 *)(a1 + *a2);
  v3 = *v2;
  v4 = v3 == 32;
  if ( v3 != 32 )
    v4 = v3 == 61;
  if ( v4 )
    return 0;
  v5 = 0;
  if ( !*(_BYTE *)(a1 + *a2) )
    return 0;
  v6 = v2[2];
  result = v2 + 2;
  if ( v2[2] )
  {
    if ( v6 != 124 && v6 != 61 && v6 != 32 )
    {
      v7 = v2 + 2;
      do
      {
        v9 = *++v7;
        v8 = v9;
        ++v5;
      }
      while ( v9 && v8 != 124 && v8 != 61 && v8 != 32 );
    }
  }
  else
  {
    v5 = v2[2];
  }
  *a2 = v5;
  return result;
}
