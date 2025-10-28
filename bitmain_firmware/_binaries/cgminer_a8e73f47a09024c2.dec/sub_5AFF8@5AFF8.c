int __fastcall sub_5AFF8(int a1, int a2, int a3, int a4)
{
  _DWORD v9[3]; // [sp+4h] [bp-50h] BYREF
  _DWORD v10[17]; // [sp+10h] [bp-44h] BYREF

  sub_5D1CC(a4, "<buffer>");
  if ( a1 )
  {
    v9[0] = a1;
    v9[2] = 0;
    v9[1] = a2;
    if ( sub_59CF4((int)v10, 367436, (int)v9) )
    {
      return 0;
    }
    else
    {
      a1 = sub_5AE7C(v10, a3, a4);
      sub_5A994((int)v10);
    }
  }
  else
  {
    sub_59BD0(a4, 0, "wrong arguments");
  }
  return a1;
}
