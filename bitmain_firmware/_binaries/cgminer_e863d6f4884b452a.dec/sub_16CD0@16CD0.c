_BYTE *__fastcall sub_16CD0(const char *a1)
{
  const char *v1; // r4
  size_t v2; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r1
  _BYTE *v7; // r1
  _BYTE *v8; // r2
  bool v9; // zf
  _BYTE *v10; // r0
  int v11; // t1

  v1 = a1;
  v2 = strlen(a1);
  v3 = malloc(2 * v2 + 1);
  v4 = malloc(8u);
  v5 = *(unsigned __int8 *)v1;
  *v4 = v3;
  v6 = dword_6D850;
  dword_6D850 = (int)v4;
  v4[1] = v6;
  v7 = v3;
  if ( v5 )
  {
    do
    {
      v8 = v7 + 1;
      v9 = v5 == 34;
      if ( v5 != 34 )
        v9 = v5 == 92;
      v10 = v7 + 1;
      if ( v9 )
      {
        *v7 = 92;
        v7 += 2;
      }
      else
      {
        v8 = v7;
      }
      if ( !v9 )
        v7 = v10;
      *v8 = v5;
      v11 = *(unsigned __int8 *)++v1;
      v5 = v11;
    }
    while ( v11 );
  }
  *v7 = 0;
  return v3;
}
