char *__fastcall sub_58CF0(_BYTE *a1, const char **a2)
{
  size_t v4; // r0
  size_t v5; // r4
  char *result; // r0

  v4 = strlen(*a2);
  *a1 = 34;
  if ( v4 >= 0x4E )
    v5 = 78;
  else
    v5 = v4;
  result = strncpy(a1 + 1, *a2, v5);
  a1[v5 + 1] = 34;
  if ( v5 <= 0x4D )
    a1[v5 + 2] = 0;
  return result;
}
