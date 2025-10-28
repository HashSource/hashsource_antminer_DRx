char *__fastcall sub_48D38(_BYTE *a1, const char **a2)
{
  size_t v4; // r5
  char *v5; // r0
  const char *v6; // r1
  _BYTE *v7; // r4
  char *result; // r0

  v4 = strlen(*a2);
  *a1 = 34;
  v5 = a1 + 1;
  v6 = *a2;
  if ( v4 > 0x4E )
  {
    result = strncpy(v5, v6, 0x4Eu);
    a1[79] = 34;
  }
  else
  {
    v7 = &a1[v4];
    result = strncpy(v5, v6, v4);
    v7[1] = 34;
    if ( v4 != 78 )
      v7[2] = 0;
  }
  return result;
}
