int __fastcall DistinctIndices(int a1, int a2, int a3, unsigned int a4)
{
  unsigned __int8 *v4; // r0
  int v5; // r1
  unsigned __int8 *v6; // r4
  unsigned int i; // r12
  int v8; // r2
  unsigned __int8 *v9; // lr

  if ( !a4 )
    return 1;
  v4 = (unsigned __int8 *)(a1 + a3);
  v5 = a2 + a3;
  v6 = v4;
  do
  {
    for ( i = 0; i < a4; i += 4 )
    {
      v8 = *(unsigned __int8 *)(v5 + i);
      v9 = (unsigned __int8 *)(v5 + i);
      if ( *v6 == v8 && v6[1] == v9[1] && v6[2] == v9[2] && v6[3] == v9[3] )
        return 0;
    }
    v6 += 4;
  }
  while ( v6 - v4 < a4 );
  return 1;
}
