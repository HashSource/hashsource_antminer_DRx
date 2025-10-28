int __fastcall sub_44304(unsigned int *a1, char *a2, int a3, int a4)
{
  unsigned int v6; // r1
  int v7; // r9
  int v8; // r12
  char *v9; // lr
  int v10; // r4
  int v11; // r5
  int v12; // t1
  int v13; // r1
  int *v14; // r9
  int v15; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r3
  int v19; // r3
  int v21; // r3
  int v22; // r4
  _DWORD *v23; // r11
  int v24; // r3
  _DWORD *v25; // r10
  _DWORD *v26; // r2
  int v27; // r1
  size_t v28; // r0
  int v29; // r0
  _DWORD *v30; // r11

  v6 = dword_56E0C[a1[2]];
  if ( *a1 >= v6 )
  {
    sub_45E0C(a1[1]);
    v21 = a1[2] + 1;
    a1[2] = v21;
    v22 = dword_56E0C[v21];
    v7 = sub_45DE4(8 * v22);
    a1[1] = v7;
    if ( !v7 )
      return -1;
    v6 = dword_56E0C[a1[2]];
    if ( v6 )
    {
      v23 = a1 + 3;
      v24 = 0;
      do
      {
        *(_DWORD *)(v7 + v24 + 4) = v23;
        *(_DWORD *)(v7 + v24) = v23;
        v24 += 8;
      }
      while ( v24 != 8 * v6 );
    }
    else
    {
      v23 = a1 + 3;
    }
    v25 = (_DWORD *)a1[4];
    a1[3] = (unsigned int)v23;
    a1[4] = (unsigned int)v23;
    if ( v25 != v23 )
    {
      while ( 1 )
      {
        sub_48F68(*(v25 - 1), v22);
        v26 = v25;
        v25 = (_DWORD *)v25[1];
        sub_44138((int)a1, v7 + 8 * v27, v26);
        if ( v23 == v25 )
          break;
        v7 = a1[1];
      }
      v7 = a1[1];
      v6 = dword_56E0C[a1[2]];
    }
  }
  else
  {
    v7 = a1[1];
  }
  v8 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v9 = a2;
    v10 = 5381;
    do
    {
      v11 = v8 + 32 * v10;
      v12 = (unsigned __int8)*++v9;
      v8 = v12;
      v10 += v11;
    }
    while ( v12 );
  }
  else
  {
    v10 = 5381;
  }
  sub_48F68(v10, v6);
  v14 = (int *)(v7 + 8 * v13);
  v15 = sub_44194((int)a1, v14, a2, v10);
  v16 = v15;
  if ( !v15 )
  {
    v28 = strlen(a2);
    v29 = sub_45DE4(v28 + 21);
    v30 = (_DWORD *)v29;
    if ( v29 )
    {
      *(_DWORD *)v29 = v10;
      *(_DWORD *)(v29 + 16) = a3;
      strcpy((char *)(v29 + 20), a2);
      v30[2] = v30 + 1;
      v30[3] = a4;
      v30[1] = v30 + 1;
      sub_44138((int)a1, (int)v14, v30 + 1);
      ++*a1;
      return 0;
    }
    return -1;
  }
  v17 = *(_DWORD *)(v15 + 12);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 4);
    if ( v18 != -1 )
    {
      v19 = v18 - 1;
      *(_DWORD *)(v17 + 4) = v19;
      if ( !v19 )
        sub_46C5C(v17);
    }
  }
  *(_DWORD *)(v16 + 12) = a4;
  return 0;
}
