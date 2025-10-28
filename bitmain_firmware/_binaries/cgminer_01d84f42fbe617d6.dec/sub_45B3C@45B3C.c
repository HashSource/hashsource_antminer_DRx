int __fastcall sub_45B3C(int a1, int a2, int a3, int a4)
{
  _DWORD v9[3]; // [sp+4h] [bp-50h] BYREF
  _DWORD v10[17]; // [sp+10h] [bp-44h] BYREF

  sub_4788C(a4, "<buffer>");
  if ( a1 )
  {
    v9[0] = a1;
    v9[1] = a2;
    a1 = 0;
    v9[2] = 0;
    if ( !sub_449CC((int)v10, (int)sub_4482C, (int)v9) )
    {
      a1 = sub_459CC(v10, a3, a4);
      sub_44A18((int)v10);
    }
  }
  else
  {
    sub_448AC(a4, 0, "wrong arguments");
  }
  return a1;
}
