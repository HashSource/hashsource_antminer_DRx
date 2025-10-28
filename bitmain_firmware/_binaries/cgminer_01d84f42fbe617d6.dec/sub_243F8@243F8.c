int __fastcall sub_243F8(int a1)
{
  int v2; // r4
  int v4; // r0

  v2 = *(_DWORD *)(a1 + 356);
  if ( v2 )
  {
    if ( sub_2282C(*(_DWORD *)(a1 + 356), 0) )
    {
      v4 = v2;
      v2 = 0;
      sub_154EC(v4);
      sub_17ED8();
    }
    else
    {
      sub_160B4(a1, v2);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v2;
}
