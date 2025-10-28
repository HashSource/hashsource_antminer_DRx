int __fastcall sub_24EFC(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r4
  _DWORD *v7; // r6

  sub_1EC3C(a1, (int)a2);
  v4 = sub_2A0C0(a2 + 61, a2 + 53);
  if ( v4 )
  {
    v5 = v4;
    v7 = sub_1B0EC();
    sub_19F60((int)v7, a2, 0);
    sub_24A24((int)v7);
  }
  else
  {
    v5 = (unsigned __int8)byte_6FA71;
    if ( byte_6FA71 )
    {
      if ( byte_73320 )
        return sub_17B38(a1);
      v5 = (unsigned __int8)byte_6FA70;
      if ( byte_6FA70 || dword_6D35C > 6 )
        return sub_17B38(a1);
    }
  }
  return v5;
}
