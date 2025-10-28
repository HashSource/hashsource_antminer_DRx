int __fastcall sub_59AE8(int a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r2

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    v5 = *(_DWORD *)(result + 4);
    if ( v5 != -1 )
    {
      v6 = v5 - 1;
      *(_DWORD *)(result + 4) = v6;
      if ( !v6 )
        result = sub_5C394(result);
    }
  }
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
