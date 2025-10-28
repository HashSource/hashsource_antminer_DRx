int __fastcall sub_45FE4(int a1, int a2)
{
  const char *v2; // r0
  const char *v3; // r1

  v2 = *(const char **)(a1 + 1124);
  if ( !v2 )
    return 2;
  v3 = *(const char **)(a2 + 1580);
  if ( !v3 )
    return 2;
  if ( !strcmp(v2, v3) )
    return 0;
  return 2;
}
