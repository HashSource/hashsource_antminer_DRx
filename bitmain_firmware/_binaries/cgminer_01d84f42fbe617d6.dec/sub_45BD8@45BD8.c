int __fastcall sub_45BD8(int a1, int a2, int a3)
{
  int v5; // r4
  const char *v6; // r1
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  v5 = a1;
  if ( a1 == stdin )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  sub_4788C(a3, v6);
  if ( v5 )
  {
    if ( sub_449CC((int)v8, (int)fgetc, v5) )
    {
      return 0;
    }
    else
    {
      v5 = sub_459CC(v8, a2, a3);
      sub_44A18((int)v8);
    }
  }
  else
  {
    sub_448AC(a3, 0, "wrong arguments");
  }
  return v5;
}
