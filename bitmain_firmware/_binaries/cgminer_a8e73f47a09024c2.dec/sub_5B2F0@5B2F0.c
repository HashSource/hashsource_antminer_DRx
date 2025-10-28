void *__fastcall sub_5B2F0(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r5
  void *v4; // r0
  void *v5; // r4

  v2 = strlen(a1);
  if ( v2 == -1 )
    return 0;
  v3 = v2 + 1;
  v4 = sub_5B2A8(v2 + 1);
  v5 = v4;
  if ( v4 )
    memcpy(v4, a1, v3);
  return v5;
}
