int __fastcall sub_14F84(int a1)
{
  int v2; // r4

  v2 = *(_DWORD *)(a1 + 356);
  if ( v2 )
  {
    if ( sub_14AAC(*(_DWORD *)(a1 + 356), 0) )
    {
      sub_12260(v2);
      sub_14840();
      v2 = 0;
    }
    else
    {
      sub_12DC0(a1, v2);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v2;
}
