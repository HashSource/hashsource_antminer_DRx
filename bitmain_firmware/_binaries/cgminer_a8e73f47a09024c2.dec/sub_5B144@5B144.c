const char *__fastcall sub_5B144(const char *a1, int a2, int a3)
{
  const char *v3; // r4
  FILE *v6; // r0
  FILE *v7; // r6
  int *v8; // r0
  char *v9; // r0

  v3 = a1;
  sub_5D1CC(a3, a1);
  if ( v3 )
  {
    v6 = fopen(v3, "rb");
    v7 = v6;
    if ( v6 )
    {
      v3 = (const char *)sub_5B09C((int)v6, a2, a3);
      fclose(v7);
    }
    else
    {
      v8 = _errno_location();
      v9 = strerror(*v8);
      sub_59BD0(a3, 0, "unable to open %s: %s", v3, v9);
      return 0;
    }
  }
  else
  {
    sub_59BD0(a3, 0, "wrong arguments");
  }
  return v3;
}
