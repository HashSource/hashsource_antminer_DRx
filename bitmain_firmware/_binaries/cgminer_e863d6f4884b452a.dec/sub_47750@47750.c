int __fastcall sub_47750(const char *a1, int a2, int a3)
{
  FILE *v6; // r0
  FILE *v7; // r7
  int v8; // r6
  int *v10; // r0
  char *v11; // r0

  sub_48A30(a3, a1);
  if ( a1 )
  {
    v6 = fopen(a1, "rb");
    v7 = v6;
    if ( v6 )
    {
      v8 = sub_476C0((int)v6, a2, a3);
      fclose(v7);
    }
    else
    {
      v10 = _errno_location();
      v8 = 0;
      v11 = strerror(*v10);
      sub_469A4(a3, 0, "unable to open %s: %s", a1, v11);
    }
  }
  else
  {
    sub_469A4(a3, 0, "wrong arguments");
    return 0;
  }
  return v8;
}
