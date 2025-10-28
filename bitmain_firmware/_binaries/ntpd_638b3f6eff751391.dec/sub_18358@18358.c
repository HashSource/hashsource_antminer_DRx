int __fastcall sub_18358(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r1

  result = fgetc(*(FILE **)(a1 + 4));
  v3 = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(a1 + 12) = v3;
  if ( result == 10 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = v3;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 8) = v4 + 1;
  }
  return result;
}
