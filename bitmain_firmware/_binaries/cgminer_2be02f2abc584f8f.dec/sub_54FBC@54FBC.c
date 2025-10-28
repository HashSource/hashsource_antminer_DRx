int __fastcall sub_54FBC(_DWORD *a1, char *a2)
{
  int v4; // r10
  int v5; // r1
  int v6; // r7
  int v7; // r6
  int *v8; // r8
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r3
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // r3
  int v15; // r3

  v4 = sub_54B70(a2);
  sub_59F90(v4, dword_696BC[a1[2]]);
  v6 = v5;
  v7 = a1[1];
  v8 = (int *)(v7 + 8 * v5);
  v9 = (_DWORD *)sub_54C04((int)a1, v8, a2, v4);
  v10 = v9;
  if ( !v9 )
    return -1;
  v11 = v9 + 1;
  if ( v9 + 1 == *(_DWORD **)(v7 + 8 * v6) )
  {
    if ( v11 == (_DWORD *)v8[1] )
    {
      v12 = a1 + 3;
      v8[1] = (int)(a1 + 3);
    }
    else
    {
      v12 = (_DWORD *)v9[2];
    }
    *(_DWORD *)(v7 + 8 * v6) = v12;
  }
  else if ( v11 == (_DWORD *)v8[1] )
  {
    v8[1] = v9[1];
  }
  *(_DWORD *)(v9[1] + 4) = v9[2];
  *(_DWORD *)v9[2] = v9[1];
  v13 = v9[3];
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 4);
    if ( v14 != -1 )
    {
      v15 = v14 - 1;
      *(_DWORD *)(v13 + 4) = v15;
      if ( !v15 )
        sub_57A64(v13);
    }
  }
  sub_569A0(v10);
  --*a1;
  return 0;
}
