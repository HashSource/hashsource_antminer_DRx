int __fastcall sub_54D88(_DWORD *a1, char *a2, int a3, int a4)
{
  int v8; // r2
  int v9; // r7
  int v10; // r0
  unsigned int v11; // r12
  _DWORD *v12; // r2
  _DWORD *v13; // r1
  int *v14; // r5
  int *v15; // r6
  int v16; // r1
  int v17; // r7
  int v18; // r1
  int *v19; // r6
  int v20; // r0
  int v21; // r5
  int v22; // r0
  int v23; // r3
  int v24; // r3
  size_t v26; // r0
  int v27; // r0
  int *v28; // r5

  if ( *a1 >= dword_696BC[a1[2]] )
  {
    sub_569A0(a1[1]);
    v8 = a1[2] + 1;
    a1[2] = v8;
    v9 = dword_696BC[v8];
    v10 = sub_56978(8 * v9);
    a1[1] = v10;
    if ( !v10 )
      return -1;
    if ( dword_696BC[a1[2]] )
    {
      v11 = 0;
      v12 = a1 + 3;
      do
      {
        v13 = (_DWORD *)(a1[1] + 8 * v11);
        v13[1] = v12;
        *v13 = v12;
        ++v11;
      }
      while ( v11 < dword_696BC[a1[2]] );
    }
    v14 = (int *)a1[4];
    a1[4] = a1 + 3;
    a1[3] = a1 + 3;
    if ( v14 != a1 + 3 )
    {
      do
      {
        v15 = (int *)v14[1];
        sub_59F90(*(v14 - 1), v9);
        sub_54BA4((int)a1, (int **)(a1[1] + 8 * v16), v14);
        v14 = v15;
      }
      while ( a1 + 3 != v15 );
    }
  }
  v17 = sub_54B70(a2);
  sub_59F90(v17, dword_696BC[a1[2]]);
  v19 = (int *)(a1[1] + 8 * v18);
  v20 = sub_54C04((int)a1, v19, a2, v17);
  v21 = v20;
  if ( v20 )
  {
    v22 = *(_DWORD *)(v20 + 12);
    if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 4);
      if ( v23 != -1 )
      {
        v24 = v23 - 1;
        *(_DWORD *)(v22 + 4) = v24;
        if ( !v24 )
          sub_57A64(v22);
      }
    }
    *(_DWORD *)(v21 + 12) = a4;
    return 0;
  }
  else
  {
    v26 = strlen(a2);
    v27 = sub_56978(v26 + 21);
    v28 = (int *)v27;
    if ( v27 )
    {
      *(_DWORD *)v27 = v17;
      *(_DWORD *)(v27 + 16) = a3;
      strcpy((char *)(v27 + 20), a2);
      v28[3] = a4;
      v28[2] = (int)(v28 + 1);
      v28[1] = (int)(v28 + 1);
      sub_54BA4((int)a1, (int **)v19, v28 + 1);
      ++*a1;
      return 0;
    }
    else
    {
      return -1;
    }
  }
}
