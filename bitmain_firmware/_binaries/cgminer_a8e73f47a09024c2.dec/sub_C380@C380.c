_BYTE *__fastcall sub_C380(const char *a1)
{
  size_t v2; // r0
  _BYTE *v3; // r4
  _DWORD *v4; // r0
  int v5; // r3
  const char *v6; // r1
  _BYTE *v7; // r2
  bool v8; // zf
  char v9; // t1

  v2 = strlen(a1);
  v3 = malloc(2 * v2 + 1);
  v4 = malloc(8u);
  *v4 = v3;
  v4[1] = dword_7AA28;
  dword_7AA28 = (int)v4;
  v5 = *(unsigned __int8 *)a1;
  if ( *a1 )
  {
    v6 = a1 - 1;
    v7 = v3;
    do
    {
      v8 = v5 == 92;
      if ( v5 != 92 )
        v8 = v5 == 34;
      if ( v8 )
        *v7++ = 92;
      v9 = *++v6;
      *v7++ = v9;
      v5 = *((unsigned __int8 *)v6 + 1);
    }
    while ( v6[1] );
  }
  else
  {
    v7 = v3;
  }
  *v7 = 0;
  return v3;
}
