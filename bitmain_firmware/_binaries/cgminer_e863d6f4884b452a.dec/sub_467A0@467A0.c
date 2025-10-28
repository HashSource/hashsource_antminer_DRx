int __fastcall sub_467A0(_DWORD *a1, char *a2)
{
  char *v2; // r6
  int v3; // r3
  int v5; // r4
  int v6; // r0
  int v7; // t1
  int v8; // r7
  char *v9; // r2
  int v10; // r1
  int v11; // r8
  int *v12; // r6
  int v13; // r0
  int v14; // r4
  _DWORD *v15; // r2
  __int64 v16; // kr00_8
  int v17; // r12
  int v18; // r0
  int v19; // r3
  int v20; // r3
  bool v22; // zf

  v2 = a2;
  v3 = (unsigned __int8)*a2;
  v5 = 5381;
  if ( *a2 )
  {
    v5 = 5381;
    do
    {
      v6 = v3 + 32 * v5;
      v7 = (unsigned __int8)*++a2;
      v3 = v7;
      v5 += v6;
    }
    while ( v7 );
  }
  sub_49AD4(v5, dword_5A8CC[a1[2]]);
  v8 = a1[1];
  v9 = v2;
  v11 = v10;
  v12 = (int *)(v8 + 8 * v10);
  v13 = sub_464E8((int)a1, v12, v9, v5);
  v14 = v13;
  if ( !v13 )
    return -1;
  v15 = (_DWORD *)(v13 + 4);
  v16 = *(_QWORD *)(v13 + 4);
  v17 = v12[1];
  if ( v13 + 4 == *(_DWORD *)(v8 + 8 * v11) )
  {
    v22 = v15 == (_DWORD *)v17;
    if ( v15 == (_DWORD *)v17 )
      v15 = a1 + 3;
    else
      *(_DWORD *)(v8 + 8 * v11) = HIDWORD(v16);
    if ( v22 )
    {
      v12[1] = (int)v15;
      *(_DWORD *)(v8 + 8 * v11) = v15;
    }
  }
  else if ( v15 == (_DWORD *)v17 )
  {
    v12[1] = v16;
  }
  v18 = *(_DWORD *)(v13 + 12);
  *(_DWORD *)(v16 + 4) = HIDWORD(v16);
  **(_DWORD **)(v14 + 8) = v16;
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 4);
    if ( v19 != -1 )
    {
      v20 = v19 - 1;
      *(_DWORD *)(v18 + 4) = v20;
      if ( !v20 )
        sub_482FC(v18);
    }
  }
  sub_47860(v14);
  --*a1;
  return 0;
}
