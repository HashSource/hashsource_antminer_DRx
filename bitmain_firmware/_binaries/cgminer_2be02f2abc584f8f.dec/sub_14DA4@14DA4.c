int __fastcall sub_14DA4(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 356);
  if ( v2 )
  {
    if ( sub_148CC(*(_DWORD *)(a1 + 356), 0) )
    {
      sub_12020(v2);
      sub_14660();
      v2 = 0;
    }
    else
    {
      sub_12BE0(a1, v2);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v2;
}
