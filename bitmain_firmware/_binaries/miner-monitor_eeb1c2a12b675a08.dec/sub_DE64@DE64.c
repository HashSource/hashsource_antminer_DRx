_DWORD *__fastcall sub_DE64(int a1, int a2)
{
  _DWORD *v4; // r0
  bool v5; // cc
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r4
  double *v10; // r0
  bool v11; // zf

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
      v8 += 4;
      v10 = sub_DDD4();
      v11 = v9++ == 0;
      if ( !v11 )
      {
        *v7 = v10;
        *((_DWORD *)v10 + 1) = v7;
      }
      v7 = v10;
      if ( v11 )
        v6[2] = v10;
    }
    while ( a2 > v9 );
  }
  return v6;
}
