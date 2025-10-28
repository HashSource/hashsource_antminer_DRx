int __fastcall sub_44584(_DWORD *a1, char *a2)
{
  int v3; // r3
  char *v5; // r12
  int v6; // r4
  int v7; // lr
  int v8; // t1
  int v9; // r7
  char *v10; // r2
  int v11; // r1
  int *v12; // r6
  int v13; // r8
  _DWORD *v14; // r0
  _DWORD *v15; // r4
  _DWORD *v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r3
  _DWORD *v23; // r3

  v3 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v5 = a2;
    v6 = 5381;
    do
    {
      v7 = v3 + 32 * v6;
      v8 = (unsigned __int8)*++v5;
      v3 = v8;
      v6 += v7;
    }
    while ( v8 );
  }
  else
  {
    v6 = 5381;
  }
  sub_48F68(v6, dword_56E0C[a1[2]]);
  v9 = a1[1];
  v10 = a2;
  v12 = (int *)(v9 + 8 * v11);
  v13 = v11;
  v14 = (_DWORD *)sub_44194((int)a1, v12, v10, v6);
  v15 = v14;
  if ( !v14 )
    return -1;
  v16 = v14 + 1;
  v17 = v12[1];
  if ( v14 + 1 == *(_DWORD **)(v9 + 8 * v13) )
  {
    if ( v16 == (_DWORD *)v17 )
    {
      v23 = a1 + 3;
      v12[1] = (int)(a1 + 3);
    }
    else
    {
      v23 = (_DWORD *)v14[2];
    }
    *(_DWORD *)(v9 + 8 * v13) = v23;
  }
  else if ( v16 == (_DWORD *)v17 )
  {
    v12[1] = v14[1];
  }
  v18 = v14[1];
  v19 = v14[3];
  *(_DWORD *)(v18 + 4) = v15[2];
  *(_DWORD *)v15[2] = v18;
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 4);
    if ( v20 != -1 )
    {
      v21 = v20 - 1;
      *(_DWORD *)(v19 + 4) = v21;
      if ( !v21 )
        sub_46C5C(v19);
    }
  }
  sub_45E0C(v15);
  --*a1;
  return 0;
}
