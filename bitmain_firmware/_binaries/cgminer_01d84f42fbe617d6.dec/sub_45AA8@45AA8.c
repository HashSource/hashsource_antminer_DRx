int __fastcall sub_45AA8(int a1, int a2, int a3)
{
  _DWORD v7[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v8[16]; // [sp+8h] [bp-40h] BYREF

  sub_4788C(a3, "<string>");
  if ( a1 )
  {
    v7[0] = a1;
    a1 = 0;
    v7[1] = 0;
    if ( !sub_449CC((int)v8, (int)sub_4480C, (int)v7) )
    {
      a1 = sub_459CC(v8, a2, a3);
      sub_44A18((int)v8);
    }
  }
  else
  {
    sub_448AC(a3, 0, "wrong arguments");
  }
  return a1;
}
