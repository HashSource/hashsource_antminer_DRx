char *__fastcall sub_5D388(const char *a1, _DWORD *a2)
{
  int v2; // s0
  int *v5; // r5
  _BYTE *v7; // [sp+4h] [bp-4h] BYREF

  v5 = _errno_location();
  *v5 = 0;
  strtof(a1, &v7);
  *a2 = v2;
  if ( *v7 || !*a1 )
    return sub_5D274("'%s' is not a number", a1);
  if ( *v5 )
    return sub_5D274("'%s' is out of range", a1);
  return 0;
}
