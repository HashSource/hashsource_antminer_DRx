void __fastcall sub_4C5E8(int a1, int a2)
{
  int v3; // r5

  sub_4C548(a1, a2);
  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 != -1 )
    *(_DWORD *)(a2 + 24) = time(0) + v3;
}
