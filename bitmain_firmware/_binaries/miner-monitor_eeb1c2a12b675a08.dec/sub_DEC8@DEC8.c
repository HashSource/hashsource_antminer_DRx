_DWORD *__fastcall sub_DEC8(int a1, int a2)
{
  _DWORD *v4; // r0
  bool v5; // cc
  _DWORD *v6; // r8
  _DWORD *v7; // r5
  int v8; // r4
  double *v9; // r0
  bool v10; // zf

  v4 = sub_DE34();
  v5 = (int)v4 <= 0;
  if ( v4 )
    v5 = a2 <= 0;
  v6 = v4;
  if ( !v5 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      a1 += 4;
      v9 = sub_DDD4();
      v10 = v8++ == 0;
      if ( !v10 )
      {
        *v7 = v9;
        *((_DWORD *)v9 + 1) = v7;
      }
      v7 = v9;
      if ( v10 )
        v6[2] = v9;
    }
    while ( a2 > v8 );
  }
  return v6;
}
