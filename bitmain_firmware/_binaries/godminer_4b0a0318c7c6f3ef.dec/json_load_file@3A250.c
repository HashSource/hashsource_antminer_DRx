double *__fastcall json_load_file(char *a1, int a2, char *a3)
{
  int v6; // r0
  FILE *v7; // r7
  double *v8; // r6
  int *v10; // r0
  char *v11; // r0

  jsonp_error_init(a3, a1);
  if ( a1 )
  {
    v6 = fopen64(a1, "rb");
    v7 = (FILE *)v6;
    if ( v6 )
    {
      v8 = json_loadf(v6, a2, a3);
      fclose(v7);
    }
    else
    {
      v10 = _errno_location();
      v8 = 0;
      v11 = strerror(*v10);
      sub_38D6C((int)a3, 0, 3, "unable to open %s: %s", a1, v11);
    }
  }
  else
  {
    v8 = 0;
    sub_38D6C((int)a3, 0, 4, "wrong arguments");
  }
  return v8;
}
