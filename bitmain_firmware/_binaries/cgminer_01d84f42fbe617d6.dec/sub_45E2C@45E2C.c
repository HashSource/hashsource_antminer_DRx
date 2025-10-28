void *__fastcall sub_45E2C(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r4
  void *v5; // r0
  void *v6; // r5

  v2 = strlen(a1);
  if ( v2 == -1 )
    return 0;
  v3 = v2 + 1;
  v5 = off_60E50(v2 + 1);
  v6 = v5;
  if ( !v5 )
    return 0;
  memcpy(v5, a1, v3);
  return v6;
}
