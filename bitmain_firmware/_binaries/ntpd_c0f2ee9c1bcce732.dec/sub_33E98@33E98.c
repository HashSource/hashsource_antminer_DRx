int __fastcall sub_33E98(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0

  v2 = *(_DWORD *)(a2 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = *(_DWORD *)(v2 + 760) + 1;
  *(_DWORD *)(v2 + 760) = result;
  *(_DWORD *)(v3 + 20) = 1;
  return result;
}
