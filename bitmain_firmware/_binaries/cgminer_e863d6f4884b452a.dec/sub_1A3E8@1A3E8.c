int __fastcall sub_1A3E8(int result)
{
  int v1; // r7
  int v2; // r12
  int *v3; // r2
  int v4; // r6
  int v5; // r1
  int v6; // t1
  int v7; // r3
  bool v8; // cc
  int v9; // r3
  int v10; // r3

  v1 = dword_72EF0;
  v2 = dword_72EF0 - 1;
  if ( dword_72EF0 > 0 )
  {
    v3 = (int *)dword_732EC;
    v4 = dword_732EC + 4 * dword_72EF0;
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
  if ( *(_DWORD *)result < v2 )
  {
    **(_DWORD **)(dword_732EC + 4 * v2) = *(_DWORD *)result;
    *(_DWORD *)(dword_732EC + 4 * *(_DWORD *)result) = *(_DWORD *)(dword_732EC + 4 * v2);
    v1 = dword_72EF0;
  }
  *(_DWORD *)result = v1;
  v10 = dword_72EF0;
  *(_BYTE *)(result + 105) = 1;
  dword_72EF0 = v10 - 1;
  return result;
}
