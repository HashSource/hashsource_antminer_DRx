int __fastcall sub_5662C(int a1, int a2, int a3)
{
  _DWORD v7[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v8[16]; // [sp+8h] [bp-40h] BYREF

  sub_5889C(a3, "<string>");
  if ( a1 )
  {
    v7[0] = a1;
    v7[1] = 0;
    if ( sub_553C4((int)v8, 348664, (int)v7) )
    {
      return 0;
    }
    else
    {
      a1 = sub_5654C(v8, a2, a3);
      sub_56064((int)v8);
    }
  }
  else
  {
    sub_552A0(a3, 0, "wrong arguments");
  }
  return a1;
}
