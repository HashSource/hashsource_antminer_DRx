int __fastcall sub_20B00(int a1)
{
  int v1; // r5
  int v4; // r0

  v1 = *(_DWORD *)(a1 + 356);
  if ( v1 )
  {
    if ( sub_201D4(*(_DWORD *)(a1 + 356), 0) )
    {
      v4 = v1;
      v1 = 0;
      sub_1A328(v4);
      sub_1C590();
    }
    else
    {
      sub_1ABA4(a1, v1);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v1;
}
