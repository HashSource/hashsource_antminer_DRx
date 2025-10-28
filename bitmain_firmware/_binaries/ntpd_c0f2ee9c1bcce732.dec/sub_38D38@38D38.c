int __fastcall sub_38D38(int a1, int a2, const char *a3)
{
  int v4; // r4
  _DWORD *v5; // r5
  int result; // r0
  int v7; // r3

  v4 = *(_DWORD *)(a2 + 60);
  v5 = *(_DWORD **)(v4 + 28);
  if ( *v5 )
  {
    --*v5;
  }
  else
  {
    sub_38920(a2, 0, a3);
    result = sub_27040(a2, 1);
  }
  v7 = *(_DWORD *)(v4 + 760);
  v5[2] = 1;
  *(_DWORD *)(v4 + 760) = v7 + 1;
  return result;
}
