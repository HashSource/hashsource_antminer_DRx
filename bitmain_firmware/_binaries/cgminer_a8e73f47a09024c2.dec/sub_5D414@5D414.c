char *__fastcall sub_5D414(const char *a1, int *a2)
{
  int *v4; // r5
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v4 = _errno_location();
  *v4 = 0;
  *a2 = strtol(a1, &endptr, 0);
  if ( *endptr || !*a1 )
    return sub_5D274("'%s' is not a number", a1);
  if ( *v4 )
    return sub_5D274("'%s' is out of range", a1);
  return 0;
}
