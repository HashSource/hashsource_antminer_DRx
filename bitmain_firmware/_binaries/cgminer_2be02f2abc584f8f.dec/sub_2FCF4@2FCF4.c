char *__fastcall sub_2FCF4(const char *a1, const char *a2)
{
  bool v4; // zf
  signed int v5; // r9
  size_t v6; // r0
  size_t v7; // r8
  bool v8; // zf
  char *result; // r0
  const __int32_t **v10; // r0
  int i; // r3
  const __int32_t **v12; // r0
  int v13; // r3
  char v14[4]; // [sp+0h] [bp-2Ch] BYREF
  int v15; // [sp+4h] [bp-28h]

  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 )
    return 0;
  v5 = strlen(a1);
  v6 = strlen(a2);
  v15 = v6;
  v7 = v6;
  v8 = v5 == 0;
  if ( v5 )
    v8 = v6 == 0;
  if ( v8 )
    return 0;
  if ( v5 > 0 )
  {
    v10 = _ctype_tolower_loc();
    for ( i = 0; i != v5; ++i )
      v14[i] = (*v10)[(unsigned __int8)a1[i]];
  }
  if ( v15 > 0 )
  {
    v12 = _ctype_tolower_loc();
    v13 = 0;
    do
    {
      v14[v13] = (*v12)[(unsigned __int8)a2[v13]];
      ++v13;
    }
    while ( v7 != v13 );
  }
  result = strstr(v14, v14);
  if ( result )
    return (char *)&a1[result - v14];
  return result;
}
