int __fastcall map_set_(void **a1, char *s2, const void *a3, size_t a4)
{
  const char *v4; // r4
  int v8; // r0
  size_t v10; // r0
  size_t v11; // r10
  int v12; // r5
  int *v13; // r0
  int *v14; // r7
  int v15; // r2
  int v16; // r3
  int v17; // t1
  char *v18; // r0
  char *v19; // r3
  int v20; // r12
  char *v21; // r0
  int v22; // r5
  size_t v23; // r9
  char *v24; // r12
  _DWORD *v25; // r4
  _DWORD *v26; // r3
  _DWORD *v27; // t1
  _DWORD *v28; // r1
  void *v29; // r0
  void *v30; // r8
  char *v31; // r2
  _DWORD *v32; // r1
  int v33; // r3
  int v34; // r12

  v4 = s2;
  v8 = sub_FFD9C(a1, a1 + 1, s2);
  if ( v8 )
  {
    memcpy(*(void **)(*(_DWORD *)v8 + 4), a3, a4);
    return 0;
  }
  v10 = strlen(v4);
  v11 = v10 + 1;
  v12 = (~(_BYTE)v10 & 3) + v10 + 1;
  v13 = (int *)malloc(a4 + 12 + v12);
  v14 = v13;
  if ( !v13 )
    return -1;
  memcpy(v13 + 3, v4, v11);
  v15 = *(unsigned __int8 *)v4;
  v16 = 5381;
  if ( *v4 )
  {
    do
    {
      v16 = (33 * v16) ^ v15;
      v17 = *(unsigned __int8 *)++v4;
      v15 = v17;
    }
    while ( v17 );
  }
  *v14 = v16;
  v18 = (char *)v14 + v12 + 12;
  v14[1] = (int)v18;
  memcpy(v18, a3, a4);
  v19 = (char *)a1[2];
  v20 = (int)a1[1];
  if ( (unsigned int)v19 < v20 )
  {
    v31 = (char *)*a1;
    goto LABEL_24;
  }
  v21 = (char *)*a1;
  if ( v20 )
  {
    v22 = 2 * v20;
    v23 = 8 * v20;
  }
  else
  {
    v23 = 4;
    v22 = 1;
  }
  v24 = &v21[4 * v20];
  v25 = 0;
  while ( v21 != v24 )
  {
    v27 = (_DWORD *)*((_DWORD *)v24 - 1);
    v24 -= 4;
    v26 = v27;
    if ( v27 )
    {
      while ( 1 )
      {
        v28 = (_DWORD *)v26[2];
        v26[2] = v25;
        v25 = v26;
        if ( !v28 )
          break;
        v26 = v28;
      }
      v25 = v26;
    }
  }
  v29 = realloc(v21, v23);
  v30 = v29;
  if ( v29 )
  {
    *a1 = v29;
    a1[1] = (void *)v22;
    memset(v29, 0, v23);
    if ( !v25 )
    {
      v31 = (char *)*a1;
      v20 = (int)a1[1];
LABEL_22:
      v19 = (char *)a1[2];
LABEL_24:
      v34 = (v20 - 1) & *v14;
      v14[2] = *(_DWORD *)&v31[4 * v34];
      *(_DWORD *)&v31[4 * v34] = v14;
      a1[2] = v19 + 1;
      return 0;
    }
    goto LABEL_19;
  }
  if ( *a1 )
  {
    memset(*a1, 0, 4 * (_DWORD)a1[1]);
    if ( v25 )
    {
LABEL_19:
      v31 = (char *)*a1;
      v20 = (int)a1[1];
      do
      {
        v32 = (_DWORD *)v25[2];
        v33 = *v25 & (v20 - 1);
        v25[2] = *(_DWORD *)&v31[4 * v33];
        *(_DWORD *)&v31[4 * v33] = v25;
        v25 = v32;
      }
      while ( v32 );
      if ( v30 )
        goto LABEL_22;
    }
  }
  free(v14);
  return -1;
}
