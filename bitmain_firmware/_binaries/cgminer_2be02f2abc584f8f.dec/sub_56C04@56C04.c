int __fastcall sub_56C04(int a1, double *a2)
{
  double v2; // d0
  int v5; // r5
  char *v6; // r0
  int *v7; // r5
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v5 = *(unsigned __int8 *)localeconv()->decimal_point;
  if ( v5 != 46 )
  {
    v6 = strchr(*(const char **)a1, 46);
    if ( v6 )
      *v6 = v5;
  }
  v7 = _errno_location();
  *v7 = 0;
  strtod(*(const char **)a1, &endptr);
  if ( endptr != (char *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) )
    _assert_fail("end == strbuffer->value + strbuffer->length", "strconv.c", 0x46u, "jsonp_strtod");
  if ( *v7 == 34 && v2 != 0.0 )
    return -1;
  *a2 = v2;
  return 0;
}
