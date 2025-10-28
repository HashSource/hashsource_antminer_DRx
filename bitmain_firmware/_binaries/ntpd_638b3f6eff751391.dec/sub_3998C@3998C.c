int __fastcall sub_3998C(int a1, int a2)
{
  int *v3; // r4
  int result; // r0
  int v5; // r3

  v3 = *(int **)(*(_DWORD *)(a1 + 60) + 28);
  if ( v3[12] <= 0 )
    return 0;
  v3[54 * v3[823] + 550] = v3[529];
  result = sub_4F5E8();
  v5 = v3[54 * a2 + 550];
  v3[823] = a2;
  v3[529] = v5;
  return result;
}
