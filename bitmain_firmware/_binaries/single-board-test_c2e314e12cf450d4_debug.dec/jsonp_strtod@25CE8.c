int __fastcall jsonp_strtod(int a1, double *a2)
{
  double v2; // d0
  char *endptr; // [sp+Ch] [bp+Ch] BYREF
  double v8; // [sp+10h] [bp+10h]

  to_locale((strbuffer_t *)a1);
  *_errno_location() = 0;
  strtod(*(const char **)a1, &endptr);
  v8 = v2;
  if ( (char *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) != endptr )
    _assert_fail(
      "end == strbuffer->value + strbuffer->length",
      "3rdparty/jansson-2.6/src/strconv.c",
      0x46u,
      "jsonp_strtod");
  if ( *_errno_location() == 34 && v8 != 0.0 )
    return -1;
  *a2 = v8;
  return 0;
}
