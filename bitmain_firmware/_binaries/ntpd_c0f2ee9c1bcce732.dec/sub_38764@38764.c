unsigned int __fastcall sub_38764(int a1, size_t a2)
{
  _DWORD *v3; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  int v7; // r1

  v3 = *(_DWORD **)(a2 + 60);
  if ( v3[50] == v3[51] )
  {
    sub_27040(a2, 1);
  }
  else
  {
    v5 = v3 + 54;
    v6 = v3 + 52;
    v7 = v5[1];
    *v6 = *v5;
    v6[1] = v7;
    sub_276A0(a2);
  }
  return sub_386E0(a1, a2);
}
