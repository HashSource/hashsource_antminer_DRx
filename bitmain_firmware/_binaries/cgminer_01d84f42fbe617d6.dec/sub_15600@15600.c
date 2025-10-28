int __fastcall sub_15600(int result)
{
  int v1; // r5
  int v2; // r7
  int *v3; // r3
  int v4; // r4
  int v5; // r1
  int v6; // t1
  int v7; // r2
  bool v8; // cc
  int v9; // r2
  int v10; // r3

  v1 = dword_63740;
  v2 = dword_63740 - 1;
  if ( dword_63740 > 0 )
  {
    v3 = (int *)dword_639E0;
    v4 = dword_639E0 + 4 * dword_63740;
    do
    {
      v6 = *v3++;
      v5 = v6;
      v7 = *(_DWORD *)(v6 + 4);
      v8 = v7 <= *(_DWORD *)(result + 4);
      v9 = v7 - 1;
      if ( !v8 )
        *(_DWORD *)(v5 + 4) = v9;
    }
    while ( v3 != (int *)v4 );
  }
  if ( v2 > *(_DWORD *)result )
  {
    **(_DWORD **)(dword_639E0 + 4 * v2) = *(_DWORD *)result;
    *(_DWORD *)(dword_639E0 + 4 * *(_DWORD *)result) = *(_DWORD *)(dword_639E0 + 4 * v2);
    v1 = dword_63740;
  }
  *(_DWORD *)result = v1;
  v10 = dword_63740;
  *(_BYTE *)(result + 105) = 1;
  dword_63740 = v10 - 1;
  return result;
}
