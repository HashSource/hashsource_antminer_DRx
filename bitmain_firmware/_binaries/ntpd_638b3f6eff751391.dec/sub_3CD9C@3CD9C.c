int __fastcall sub_3CD9C(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r3
  int result; // r0

  v2 = *(_DWORD *)(a2 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  v4 = *(_DWORD *)(v3 + 32);
  if ( v4 )
    *(_DWORD *)(v3 + 32) = v4 - 1;
  else
    result = sub_27040(a2, 1);
  ++*(_DWORD *)(v2 + 760);
  *(_BYTE *)(v3 + 30) = 1;
  return result;
}
