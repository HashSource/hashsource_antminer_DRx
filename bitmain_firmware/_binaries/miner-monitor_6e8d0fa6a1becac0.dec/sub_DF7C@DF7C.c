_DWORD *__fastcall sub_DF7C(int a1, int a2)
{
  _DWORD *v4; // r0
  bool v5; // cc
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r4
  const char *v10; // t1
  _DWORD *v11; // r0
  bool v12; // zf

  v4 = sub_DE34();
  v5 = (int)v4 <= 0;
  if ( v4 )
    v5 = a2 <= 0;
  v6 = v4;
  if ( !v5 )
  {
    v7 = 0;
    v8 = a1 - 4;
    v9 = 0;
    do
    {
      v10 = *(const char **)(v8 + 4);
      v8 += 4;
      v11 = sub_DE04(v10);
      v12 = v9++ == 0;
      if ( !v12 )
      {
        *v7 = v11;
        v11[1] = v7;
      }
      v7 = v11;
      if ( v12 )
        v6[2] = v11;
    }
    while ( a2 > v9 );
  }
  return v6;
}
