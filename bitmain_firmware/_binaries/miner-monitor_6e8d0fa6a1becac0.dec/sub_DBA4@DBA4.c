_DWORD *__fastcall sub_DBA4(int a1, int a2)
{
  _DWORD *v2; // r2
  bool v3; // cc
  _DWORD *v4; // r3
  bool v5; // cc
  _DWORD *v6; // r1
  _DWORD *v7; // r12

  v2 = *(_DWORD **)(a1 + 8);
  v3 = (int)v2 <= 0;
  if ( v2 )
    v3 = a2 <= 0;
  v4 = *(_DWORD **)(a1 + 8);
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v4;
      --a2;
      v5 = (int)v4 <= 0;
      if ( v4 )
        v5 = a2 <= 0;
    }
    while ( !v5 );
  }
  if ( v4 )
  {
    v6 = (_DWORD *)v4[1];
    if ( v6 )
      *v6 = *v4;
    v7 = (_DWORD *)*v4;
    if ( *v4 )
      v7[1] = v6;
    if ( v4 == v2 )
      *(_DWORD *)(a1 + 8) = v7;
    *v4 = 0;
    v4[1] = 0;
  }
  return v4;
}
