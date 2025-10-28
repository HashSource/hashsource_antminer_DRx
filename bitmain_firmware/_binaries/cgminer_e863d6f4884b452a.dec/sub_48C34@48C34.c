char *__fastcall sub_48C34(const char *a1, _DWORD *a2)
{
  char *result; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  result = sub_48BCC(a1, &v5);
  if ( !result )
  {
    if ( v5 < 0 )
      return sub_48AC4("'%s' is negative", a1);
    else
      *a2 = v5;
  }
  return result;
}
