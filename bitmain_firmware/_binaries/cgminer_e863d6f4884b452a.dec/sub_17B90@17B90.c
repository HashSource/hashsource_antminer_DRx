int __fastcall sub_17B90(int a1)
{
  int v1; // r5
  int v2; // r4
  int *v3; // r2
  int v4; // r3
  int v5; // t1

  v1 = *(_DWORD *)(a1 + 164);
  if ( dword_72EF0 > 0 )
  {
    v2 = a1;
    v3 = (int *)dword_732EC;
    do
    {
      v5 = *v3++;
      v4 = v5;
      if ( !*(_BYTE *)(v5 + 97)
        && *(_DWORD *)(v4 + 100) == 1
        && (!*(_BYTE *)(v4 + 640) || *(_BYTE *)(v4 + 641))
        && *(_DWORD *)(v4 + 164) < v1 )
      {
        v2 = v4;
        v1 = *(_DWORD *)(v4 + 164);
      }
    }
    while ( v3 != (int *)(dword_732EC + 4 * dword_72EF0) );
    v1 = *(_DWORD *)(v2 + 164);
  }
  else
  {
    v2 = a1;
  }
  *(_DWORD *)(v2 + 164) = v1 + 1;
  return v2;
}
