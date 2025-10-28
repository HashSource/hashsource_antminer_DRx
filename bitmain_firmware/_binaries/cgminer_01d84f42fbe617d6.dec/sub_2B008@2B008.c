const char *__fastcall sub_2B008(const char *a1, const char *a2, int a3, int a4)
{
  bool v4; // zf
  signed int v7; // r10
  size_t v8; // r0
  bool v9; // zf
  int v10; // r4
  const __int32_t **v11; // r0
  int v12; // r3
  const __int32_t *v13; // r1
  const __int32_t **v14; // r0
  int v15; // r3
  const __int32_t *v16; // r1
  char *v17; // r0
  int v19; // [sp+0h] [bp-24h] BYREF

  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  v19 = a4;
  if ( v4 )
    return 0;
  v7 = strlen(a1);
  v8 = strlen(a2);
  v9 = v7 == 0;
  if ( v7 )
    v9 = v8 == 0;
  v10 = v8;
  if ( v9 )
    return 0;
  if ( v7 > 0 )
  {
    v11 = _ctype_tolower_loc();
    v12 = 0;
    v13 = *v11;
    do
    {
      *((_BYTE *)&v19 + v12) = v13[(unsigned __int8)a1[v12]];
      ++v12;
    }
    while ( v7 != v12 );
  }
  if ( v10 > 0 )
  {
    v14 = _ctype_tolower_loc();
    v15 = 0;
    v16 = *v14;
    do
    {
      *((_BYTE *)&v19 + v15) = v16[(unsigned __int8)a2[v15]];
      ++v15;
    }
    while ( v10 != v15 );
  }
  v17 = strstr((const char *)&v19, (const char *)&v19);
  if ( !v17 )
    return 0;
  else
    return &a1[v17 - (char *)&v19];
}
