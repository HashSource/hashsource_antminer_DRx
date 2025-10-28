int __fastcall jsonp_strtod(const char **a1, double *a2)
{
  double v2; // d0
  struct lconv *v5; // r0
  const char *v6; // r4
  int v7; // r6
  char *v8; // r0
  int *v9; // r5
  int result; // r0
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v5 = localeconv();
  v6 = *a1;
  v7 = *(unsigned __int8 *)v5->decimal_point;
  if ( v7 != 46 )
  {
    v8 = strchr(*a1, 46);
    if ( v8 )
    {
      *v8 = v7;
      v6 = *a1;
    }
  }
  v9 = _errno_location();
  *v9 = 0;
  strtod(v6, &endptr);
  if ( (v2 > 1.79769313e308 || v2 < -1.79769313e308) && *v9 == 34 )
    return -1;
  result = 0;
  *a2 = v2;
  return result;
}
