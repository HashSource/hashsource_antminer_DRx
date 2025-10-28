double *__fastcall json_load_file(char *a1, int a2, char *a3)
{
  int v6; // r0
  FILE *v7; // r7
  double *v8; // r6
  const char *v10; // r3
  int *v11; // r0
  char *v12; // r0
  const char *v13; // r3

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
      v11 = _errno_location();
      v8 = 0;
      v12 = strerror(*v11);
      LOWORD(v13) = 9112;
      HIWORD(v13) = (unsigned int)"protocol" >> 16;
      sub_36F4C((int)a3, 0, 3, v13, a1, v12);
    }
  }
  else
  {
    LOWORD(v10) = 9064;
    HIWORD(v10) = (unsigned int)" exiting." >> 16;
    v8 = 0;
    sub_36F4C((int)a3, 0, 4, v10);
  }
  return v8;
}
