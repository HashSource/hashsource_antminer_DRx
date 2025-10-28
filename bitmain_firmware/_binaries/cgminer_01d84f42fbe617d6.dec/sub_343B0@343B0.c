int __fastcall sub_343B0(unsigned int *a1, int a2, char *s, int a4)
{
  const char *v4; // r8
  _BYTE *v6; // r2
  _BYTE *v7; // r3
  int v8; // r5
  char *v9; // r10
  int v10; // r0
  int v11; // r1
  _BYTE *v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r12
  int v16; // t1
  bool v17; // zf
  int v18; // lr
  int v19; // r12
  int v20; // r3
  int v21; // r2
  int v22; // [sp+0h] [bp-3Ch] BYREF
  _BYTE v23[4]; // [sp+8h] [bp-34h] BYREF
  unsigned int *v24; // [sp+Ch] [bp-30h]
  int v25; // [sp+10h] [bp-2Ch]
  int *v26; // [sp+14h] [bp-28h]

  v4 = s;
  v25 = a4;
  v24 = a1;
  v26 = &v22;
  if ( !dword_63740 )
    return sub_32F3C(a1, 8, 0, 0, a4);
  if ( !s || !*s )
    return sub_32F3C(v24, 25, 0, 0, v25);
  if ( dword_63740 > 0 )
  {
    v6 = &v23[dword_63740];
    v7 = v23;
    do
      *v7++ = 0;
    while ( v7 != v6 );
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = strchr(v4, 44);
    if ( v9 )
      *v9++ = 0;
    v10 = strtol(v4, 0, 10);
    v4 = v9;
    if ( v10 < 0 )
      return sub_32F3C(v24, 26, v10, 0, v25);
    v11 = dword_63740;
    if ( dword_63740 <= v10 )
      return sub_32F3C(v24, 26, v10, 0, v25);
    if ( v23[v10] )
      return sub_32F3C(v24, 74, v10, 0, v25);
    *(_DWORD *)&v23[4 * v10] = v8;
    v23[v10] = 1;
    ++v8;
    if ( !v9 )
      break;
    if ( !*v9 )
    {
      if ( v11 <= 0 )
        goto LABEL_29;
      break;
    }
  }
  v12 = v23;
  v13 = 0;
  v14 = dword_639E0;
  do
  {
    v16 = (unsigned __int8)*v12++;
    v15 = v16;
    v17 = v16 == 0;
    if ( v16 )
    {
      v15 = *(_DWORD *)(v14 + v13);
      v4 = *(const char **)&v23[v13];
    }
    v13 += 4;
    if ( !v17 )
      *(_DWORD *)(v15 + 4) = v4;
  }
  while ( v12 != &v23[v11] );
  v18 = dword_639E0;
  v19 = 0;
LABEL_24:
  while ( 2 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( !v23[v20] )
      {
        v21 = *(_DWORD *)(v18 + 4 * v20);
        if ( *(_DWORD *)(v21 + 4) == v19 )
          break;
      }
      if ( ++v20 == v11 )
      {
        if ( ++v19 != v11 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
    ++v19;
    *(_DWORD *)(v21 + 4) = v8++;
    v23[v20] = 1;
    if ( v19 != v11 )
      continue;
    break;
  }
LABEL_29:
  if ( *(_DWORD *)(sub_1D644() + 4) )
    sub_195D4(0);
  return sub_32F3C(v24, 73, 0, 0, v25);
}
