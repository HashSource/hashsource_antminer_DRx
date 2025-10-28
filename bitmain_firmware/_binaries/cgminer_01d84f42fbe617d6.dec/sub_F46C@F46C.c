_BYTE *__fastcall sub_F46C(const char *a1)
{
  size_t v2; // r0
  _BYTE *v3; // r4
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r1
  const char *v7; // r1
  _BYTE *v8; // r2
  bool v9; // zf
  char v10; // t1

  v2 = strlen(a1);
  v3 = malloc(2 * v2 + 1);
  v4 = malloc(8u);
  v5 = *(unsigned __int8 *)a1;
  v6 = dword_60E88;
  *v4 = v3;
  dword_60E88 = (int)v4;
  v4[1] = v6;
  if ( v5 )
  {
    v7 = a1 - 1;
    v8 = v3;
    do
    {
      v9 = v5 == 92;
      if ( v5 != 92 )
        v9 = v5 == 34;
      if ( v9 )
        *v8++ = 92;
      v10 = *++v7;
      *v8++ = v10;
      v5 = *((unsigned __int8 *)v7 + 1);
    }
    while ( v7[1] );
  }
  else
  {
    v8 = v3;
  }
  *v8 = 0;
  return v3;
}
