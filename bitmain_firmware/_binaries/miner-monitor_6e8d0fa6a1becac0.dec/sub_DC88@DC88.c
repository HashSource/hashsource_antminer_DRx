void __fastcall sub_DC88(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r12
  bool v4; // cc
  _DWORD *v5; // r3
  bool v6; // cc
  _DWORD *v7; // r1
  int v8; // r4
  bool v9; // zf

  v3 = *(_DWORD **)(a1 + 8);
  v4 = (int)v3 <= 0;
  if ( v3 )
    v4 = a2 <= 0;
  v5 = *(_DWORD **)(a1 + 8);
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*v5;
      --a2;
      v6 = (int)v5 <= 0;
      if ( v5 )
        v6 = a2 <= 0;
    }
    while ( !v6 );
  }
  if ( v5 )
  {
    v7 = (_DWORD *)*v5;
    v8 = v5[1];
    v9 = *v5 == 0;
    *a3 = *v5;
    a3[1] = v8;
    if ( !v9 )
      v7[1] = a3;
    if ( v5 == v3 )
      *(_DWORD *)(a1 + 8) = a3;
    else
      *(_DWORD *)a3[1] = a3;
    v5[1] = 0;
    *v5 = 0;
    sub_D864(v5);
  }
}
