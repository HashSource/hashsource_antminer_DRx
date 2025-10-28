int __fastcall sub_41D18(int a1, size_t *a2)
{
  const char *v2; // r3
  const char *v3; // r2

  v2 = *(const char **)(a1 + 1124);
  if ( !v2 )
    return 2;
  v3 = (const char *)a2[395];
  if ( !v3 )
    return 2;
  if ( strcmp(v2, v3) )
    return 2;
  if ( !memcmp((const void *)(a1 + 152), a2 + 152, a2[19]) )
    return 0;
  return 2;
}
