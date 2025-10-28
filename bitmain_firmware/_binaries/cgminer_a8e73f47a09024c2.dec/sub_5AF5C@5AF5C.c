int __fastcall sub_5AF5C(int a1, int a2, int a3)
{
  _DWORD v7[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v8[16]; // [sp+8h] [bp-40h] BYREF

  sub_5D1CC(a3, "<string>");
  if ( a1 )
  {
    v7[0] = a1;
    v7[1] = 0;
    if ( sub_59CF4((int)v8, 367400, (int)v7) )
    {
      return 0;
    }
    else
    {
      a1 = sub_5AE7C(v8, a2, a3);
      sub_5A994((int)v8);
    }
  }
  else
  {
    sub_59BD0(a3, 0, "wrong arguments");
  }
  return a1;
}
