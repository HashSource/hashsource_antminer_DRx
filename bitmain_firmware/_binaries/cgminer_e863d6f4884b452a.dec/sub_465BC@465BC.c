int __fastcall sub_465BC(unsigned int *a1, char *a2, int a3, int a4)
{
  unsigned int v6; // r1
  _DWORD *v8; // r10
  int v9; // r3
  int v10; // r4
  char *v11; // r2
  int v12; // r0
  int v13; // t1
  int v14; // r1
  int *v15; // r10
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r3
  size_t v22; // r0
  int *v23; // r0
  int *v24; // r6
  char *v25; // r0
  int v26; // r2
  _DWORD *v27; // r3
  int v28; // r3
  int v29; // r11
  int v30; // r0
  _DWORD *v31; // r9
  _DWORD *v32; // r0
  _DWORD *v33; // r2
  _DWORD *v34; // r4
  int v35; // r1
  __int64 v36; // r2
  _DWORD *v37; // r1
  _DWORD *v38; // r0
  unsigned int v40; // [sp+4h] [bp-8h]

  v6 = dword_5A8CC[a1[2]];
  v8 = (_DWORD *)a1[1];
  if ( *a1 >= v6 )
  {
    sub_47860(a1[1]);
    v28 = a1[2] + 1;
    v29 = dword_5A8CC[v28];
    a1[2] = v28;
    v30 = sub_47850(8 * v29);
    v8 = (_DWORD *)v30;
    a1[1] = v30;
    if ( !v30 )
      return -1;
    v31 = a1 + 3;
    v6 = dword_5A8CC[a1[2]];
    v40 = a1[2];
    if ( v6 )
    {
      v32 = (_DWORD *)(v30 + 8 * v6);
      v33 = v8;
      do
      {
        v33[1] = v31;
        *v33 = v31;
        v33 += 2;
      }
      while ( v32 != v33 );
    }
    v34 = (_DWORD *)a1[4];
    a1[3] = (unsigned int)v31;
    a1[4] = (unsigned int)v31;
    if ( v34 != v31 )
    {
      do
      {
        while ( 1 )
        {
          sub_49AD4(*(v34 - 1), v29);
          HIDWORD(v36) = v8[2 * v35];
          v37 = &v8[2 * v35];
          v38 = (_DWORD *)v34[1];
          if ( (_DWORD *)HIDWORD(v36) == v31 && v31 == (_DWORD *)v37[1] )
            break;
          LODWORD(v36) = *(_DWORD *)HIDWORD(v36);
          *(_QWORD *)v34 = v36;
          *(_DWORD *)(*(_DWORD *)HIDWORD(v36) + 4) = v34;
          *(_DWORD *)HIDWORD(v36) = v34;
          *v37 = v34;
          v34 = v38;
          if ( v38 == v31 )
            goto LABEL_25;
        }
        *v34 = a1[3];
        v34[1] = v31;
        *(_DWORD *)(a1[3] + 4) = v34;
        a1[3] = (unsigned int)v34;
        *v37 = v34;
        v37[1] = v34;
        v34 = v38;
      }
      while ( v38 != v31 );
LABEL_25:
      v8 = (_DWORD *)a1[1];
      v6 = dword_5A8CC[v40];
    }
  }
  v9 = (unsigned __int8)*a2;
  v10 = 5381;
  if ( *a2 )
  {
    v11 = a2;
    v10 = 5381;
    do
    {
      v12 = v9 + 32 * v10;
      v13 = (unsigned __int8)*++v11;
      v9 = v13;
      v10 += v12;
    }
    while ( v13 );
  }
  sub_49AD4(v10, v6);
  v15 = &v8[2 * v14];
  v16 = sub_464E8((int)a1, v15, a2, v10);
  v17 = v16;
  if ( v16 )
  {
    v18 = *(_DWORD *)(v16 + 12);
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
    *(_DWORD *)(v17 + 12) = a4;
    return 0;
  }
  v22 = strlen(a2);
  v23 = (int *)sub_47850(v22 + 21);
  v24 = v23;
  if ( !v23 )
    return -1;
  *v23 = v10;
  v25 = (char *)(v23 + 5);
  *((_DWORD *)v25 - 1) = a3;
  strcpy(v25, a2);
  v26 = *v15;
  v27 = v24 + 1;
  v24[2] = (int)(v24 + 1);
  v24[3] = a4;
  v24[1] = (int)(v24 + 1);
  if ( (unsigned int *)v26 == a1 + 3 && v26 == v15[1] )
  {
    v24[1] = a1[3];
    v24[2] = v26;
    *(_DWORD *)(a1[3] + 4) = v27;
    a1[3] = (unsigned int)v27;
    *v15 = (int)v27;
    v15[1] = (int)v27;
  }
  else
  {
    v24[1] = *(_DWORD *)v26;
    v24[2] = v26;
    *(_DWORD *)(*(_DWORD *)v26 + 4) = v27;
    *(_DWORD *)v26 = v27;
    *v15 = (int)v27;
  }
  ++*a1;
  return 0;
}
