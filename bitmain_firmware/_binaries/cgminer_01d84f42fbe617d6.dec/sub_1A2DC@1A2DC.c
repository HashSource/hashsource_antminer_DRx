int __fastcall sub_1A2DC(int a1, int a2, int a3, _DWORD *a4)
{
  bool v4; // zf
  _DWORD *v5; // r5
  int result; // r0
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v5 = a4;
  v4 = a4 == 0;
  if ( a4 )
    a4 = 0;
  if ( !v4 )
    *v5 = a4;
  if ( sub_15FDC(a2, a3) )
  {
    sub_1A0F8(a1, a2);
    if ( sub_2A898(a2 + 192, a2 + 160) )
    {
      return 1;
    }
    else
    {
      if ( v5 )
        *v5 = 1;
      result = (unsigned __int8)byte_630C1;
      if ( byte_630C1 )
      {
        if ( byte_632F0 || (result = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
        {
          strcpy(v9, "Share above target");
          sub_38438(7, v9, 0);
          return 0;
        }
      }
    }
  }
  else
  {
    sub_189B4(a1);
    return 0;
  }
  return result;
}
