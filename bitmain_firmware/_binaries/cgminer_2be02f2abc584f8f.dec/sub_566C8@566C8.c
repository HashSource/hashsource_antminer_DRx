int __fastcall sub_566C8(int a1, int a2, int a3, int a4)
{
  _DWORD v9[3]; // [sp+4h] [bp-50h] BYREF
  _DWORD v10[17]; // [sp+10h] [bp-44h] BYREF

  sub_5889C(a4, "<buffer>");
  if ( a1 )
  {
    v9[0] = a1;
    v9[2] = 0;
    v9[1] = a2;
    if ( sub_553C4((int)v10, 348700, (int)v9) )
    {
      return 0;
    }
    else
    {
      a1 = sub_5654C(v10, a3, a4);
      sub_56064((int)v10);
    }
  }
  else
  {
    sub_552A0(a4, 0, "wrong arguments");
  }
  return a1;
}
