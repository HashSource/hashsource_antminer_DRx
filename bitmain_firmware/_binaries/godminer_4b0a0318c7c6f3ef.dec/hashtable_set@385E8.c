int __fastcall hashtable_set(unsigned int *a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r8
  unsigned int v7; // r8
  unsigned int **v8; // r5
  unsigned int *v9; // r1
  unsigned int **v10; // r3
  unsigned int *v11; // r3
  int v12; // r8
  unsigned int v13; // lr
  unsigned int *v14; // r12
  int v15; // r0
  unsigned int *v16; // r2
  unsigned int **v17; // r0
  unsigned int v18; // r2
  size_t v19; // r10
  int v20; // r9
  int *v21; // r5
  int v22; // r0
  int v23; // r8
  _DWORD *v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  void *v29; // r0
  unsigned int *v30; // r8
  unsigned int *v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r1
  int v34; // r3

  v4 = a1[2];
  if ( *a1 >> v4 )
  {
    v7 = v4 + 1;
    v8 = (unsigned int **)jsonp_malloc((void *)(8 << v7));
    if ( !v8 )
      return -1;
    jsonp_free((void *)a1[1]);
    a1[1] = (unsigned int)v8;
    a1[2] = v7;
    v9 = a1 + 3;
    if ( 1 << v7 )
    {
      v10 = v8;
      do
      {
        v10[1] = v9;
        *v10 = v9;
        v10 += 2;
      }
      while ( (unsigned int **)((char *)v8 + (8 << v7)) != v10 );
    }
    v11 = (unsigned int *)a1[4];
    a1[3] = (unsigned int)v9;
    v12 = ~(-1 << v7);
    a1[4] = (unsigned int)v9;
    if ( v11 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v14 = (unsigned int *)v11[1];
          v15 = v11[4] & v12;
          v16 = v8[2 * v15];
          v17 = &v8[2 * v15];
          if ( v16 == v9 && v9 == v17[1] )
            break;
          v13 = *v16;
          v11[1] = (unsigned int)v16;
          *v11 = v13;
          *(_DWORD *)(*v16 + 4) = v11;
          *v16 = (unsigned int)v11;
          *v17 = v11;
          v11 = v14;
          if ( v14 == v9 )
            goto LABEL_12;
        }
        v18 = a1[3];
        v11[1] = (unsigned int)v9;
        *v11 = v18;
        *(_DWORD *)(a1[3] + 4) = v11;
        a1[3] = (unsigned int)v11;
        v17[1] = v11;
        *v17 = v11;
        v11 = v14;
      }
      while ( v14 != v9 );
LABEL_12:
      v8 = (unsigned int **)a1[1];
      v12 = ~(-1 << a1[2]);
    }
  }
  else
  {
    v8 = (unsigned int **)a1[1];
    v12 = ~(-1 << v4);
  }
  v19 = strlen(a2);
  v20 = sub_37F2C((unsigned __int16 *)a2, v19, hashtable_seed);
  v21 = (int *)&v8[2 * (v12 & v20)];
  v22 = sub_38470((int)a1, v21, a2, v20);
  v23 = v22;
  if ( v22 )
  {
    v24 = *(_DWORD **)(v22 + 20);
    if ( v24 && v24[1] != -1 )
    {
      v25 = v24 + 1;
      __dmb(0xBu);
      do
      {
        v26 = __ldrex(v25);
        v27 = v26 - 1;
      }
      while ( __strex(v27, v25) );
      if ( !v27 )
        json_delete(v24);
    }
    *(_DWORD *)(v23 + 20) = a3;
    return 0;
  }
  v29 = jsonp_malloc((void *)(v19 + 25));
  v30 = (unsigned int *)v29;
  if ( !v29 )
    return -1;
  *((_DWORD *)v29 + 4) = v20;
  strncpy((char *)v29 + 24, a2, v19 + 1);
  v31 = (unsigned int *)*v21;
  v32 = (unsigned int)(v30 + 2);
  v30[5] = a3;
  v30[1] = (unsigned int)v30;
  *v30 = (unsigned int)v30;
  v30[3] = (unsigned int)(v30 + 2);
  v30[2] = (unsigned int)(v30 + 2);
  if ( v31 == a1 + 3 && v31 == (unsigned int *)v21[1] )
  {
    *v30 = a1[3];
    v30[1] = (unsigned int)v31;
    *(_DWORD *)(a1[3] + 4) = v30;
    a1[3] = (unsigned int)v30;
    v21[1] = (int)v30;
    *v21 = (int)v30;
  }
  else
  {
    *v30 = *v31;
    v30[1] = (unsigned int)v31;
    *(_DWORD *)(*v31 + 4) = v30;
    *v31 = (unsigned int)v30;
    *v21 = (int)v30;
  }
  v33 = a1[5];
  v34 = *a1;
  v30[3] = (unsigned int)(a1 + 5);
  v30[2] = v33;
  *(_DWORD *)(a1[5] + 4) = v32;
  a1[5] = v32;
  *a1 = v34 + 1;
  return 0;
}
