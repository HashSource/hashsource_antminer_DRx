char *__fastcall sub_48C64(const char *a1, _DWORD *a2)
{
  char *result; // r0
  bool v5; // nf
  int v6; // [sp+4h] [bp-8h] BYREF

  result = sub_48BCC(a1, &v6);
  if ( !result )
  {
    v5 = v6 < 0;
    *a2 = v6;
    if ( v5 )
      return sub_48AC4("'%s' is negative", a1);
  }
  return result;
}
