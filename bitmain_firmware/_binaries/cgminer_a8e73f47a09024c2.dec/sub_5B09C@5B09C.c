int __fastcall sub_5B09C(int a1, int a2, int a3)
{
  int v3; // r4
  const char *v6; // r1
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  v3 = a1;
  if ( a1 == stdin )
    v6 = "<stdin>";
  else
    v6 = "<stream>";
  sub_5D1CC(a3, v6);
  if ( v3 )
  {
    if ( sub_59CF4((int)v8, (int)fgetc, v3) )
    {
      return 0;
    }
    else
    {
      v3 = sub_5AE7C(v8, a2, a3);
      sub_5A994((int)v8);
    }
  }
  else
  {
    sub_59BD0(a3, 0, "wrong arguments");
  }
  return v3;
}
