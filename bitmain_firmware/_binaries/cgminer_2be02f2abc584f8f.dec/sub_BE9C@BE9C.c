int __fastcall sub_BE9C(int a1)
{
  int v1; // r8
  int v2; // r7
  int *v3; // r4
  int v4; // r6
  int v5; // r5
  int v6; // t1

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 164);
  if ( dword_791E8 > 0 )
  {
    v3 = (int *)dword_79488;
    v4 = dword_79488 + 4 * dword_791E8;
    do
    {
      v6 = *v3++;
      v5 = v6;
      if ( !sub_BE54(v6) && *(_DWORD *)(v5 + 164) < v2 )
      {
        v1 = v5;
        v2 = *(_DWORD *)(v5 + 164);
      }
    }
    while ( v3 != (int *)v4 );
  }
  ++*(_DWORD *)(v1 + 164);
  return v1;
}
