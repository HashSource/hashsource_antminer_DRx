int __fastcall sub_3991C(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int result; // r0
  int v5; // r3

  v2 = *(_DWORD *)(a2 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  if ( *(_DWORD *)(v3 + 52) )
    result = sub_27040(a2, *(_DWORD *)(v3 + 52));
  v5 = *(_DWORD *)(v2 + 760);
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v2 + 760) = v5 + 1;
  return result;
}
