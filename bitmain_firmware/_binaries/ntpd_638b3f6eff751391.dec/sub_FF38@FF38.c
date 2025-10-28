int __fastcall sub_FF38(int a1)
{
  void **v2; // r0
  void **v3; // r0
  void *v4; // r0

  v2 = *(void ***)a1;
  if ( v2 )
    sub_FC04(v2);
  v3 = *(void ***)(a1 + 4);
  if ( v3 )
    sub_FC04(v3);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    sub_10D2C(v4);
    *(_DWORD *)(a1 + 8) = 0;
  }
  return sub_10D7C(a1);
}
