char *__fastcall sub_47CE0(_BYTE *a1, const char **a2)
{
  size_t v4; // r0
  const char *v5; // r1
  bool v6; // cc
  size_t v7; // r5
  char *v8; // r0
  _BYTE *v9; // r4
  char *result; // r0

  v4 = strlen(*a2);
  *a1 = 34;
  v5 = *a2;
  v6 = v4 > 0x4E;
  v7 = v4;
  v8 = a1 + 1;
  if ( v6 )
  {
    result = strncpy(v8, v5, 0x4Eu);
    a1[79] = 34;
  }
  else
  {
    v9 = &a1[v7];
    result = strncpy(v8, v5, v7);
    v9[1] = 34;
    if ( v7 != 78 )
      v9[2] = 0;
  }
  return result;
}
