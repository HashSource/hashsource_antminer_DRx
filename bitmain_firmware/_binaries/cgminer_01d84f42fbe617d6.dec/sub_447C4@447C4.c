int __fastcall sub_447C4(int a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r2

  result = *(_DWORD *)(a1 + 8);
  if ( !result || (v5 = *(_DWORD *)(result + 4), v5 == -1) || (v6 = v5 - 1, (*(_DWORD *)(result + 4) = v6) != 0) )
  {
    *(_DWORD *)(a1 + 8) = a2;
  }
  else
  {
    result = sub_46C5C(result);
    *(_DWORD *)(a1 + 8) = a2;
  }
  return result;
}
