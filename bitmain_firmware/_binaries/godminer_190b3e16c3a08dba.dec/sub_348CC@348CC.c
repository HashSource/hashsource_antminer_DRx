int __fastcall sub_348CC(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v5; // r7
  signed int v10; // r1
  signed int v11; // r8
  int v12; // r0
  signed int v13; // r1
  int result; // r0
  int *v15; // r3
  int v16; // r8
  int v17; // r9
  int v18; // r2
  int v19; // lr
  int v20; // r1
  int v21; // r12

  v4 = a3 - a2;
  v5 = a2 - a1;
  sub_12DDD4(a2 - a1, a3 - a2);
  v11 = v10;
  if ( v10 )
  {
    v12 = v4;
    while ( 1 )
    {
      sub_12DDD4(v12, v11);
      v12 = v11;
      if ( !v13 )
        break;
      v11 = v13;
    }
  }
  else
  {
    v11 = v4;
  }
  result = sub_12DB40(a3 - a1, v11);
  if ( v11 > 0 )
  {
    v15 = (int *)(a4 + 4 * a2);
    v16 = v11 + a2;
    v17 = a2;
    do
    {
      v18 = v17;
      if ( result > 0 )
      {
        v19 = *v15;
        v20 = 0;
        do
        {
          ++v20;
          if ( a2 > v18 )
            v18 += v4;
          else
            v18 -= v5;
          v21 = *(_DWORD *)(a4 + 4 * v18);
          *(_DWORD *)(a4 + 4 * v18) = v19;
          *v15 = v21;
          v19 = v21;
        }
        while ( result != v20 );
      }
      ++v17;
      ++v15;
    }
    while ( v16 != v17 );
  }
  return result;
}
