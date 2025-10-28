unsigned __int8 **__fastcall sub_3ABF8(int a1, int a2, const char *a3, int a4)
{
  const char *v4; // r6
  _BYTE *v6; // r3
  _BYTE *v7; // r2
  char *v8; // r0
  char *v9; // r5
  int v10; // r0
  int v11; // r7
  int v12; // r1
  int v13; // lr
  int v14; // r2
  int v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // [sp+0h] [bp-3Ch] BYREF
  _BYTE v21[4]; // [sp+8h] [bp-34h] BYREF
  int v22; // [sp+Ch] [bp-30h]
  int v23; // [sp+10h] [bp-2Ch]
  int *v24; // [sp+14h] [bp-28h]

  v23 = a1;
  v4 = a3;
  v22 = a4;
  v24 = &v20;
  if ( !dword_791E8 )
    return sub_39590(v23, 8, 0, 0, v22);
  if ( !a3 || !*a3 )
    return sub_39590(v23, 25, 0, 0, v22);
  if ( dword_791E8 > 0 )
  {
    v6 = v21;
    v7 = &v21[dword_791E8];
    do
      *v6++ = 0;
    while ( v6 != v7 );
  }
  if ( *v4 )
  {
    v11 = 0;
    while ( 1 )
    {
      v8 = strchr(v4, 44);
      v9 = v8;
      if ( v8 )
      {
        *v8 = 0;
        v9 = v8 + 1;
      }
      v10 = strtol(v4, 0, 10);
      if ( v10 < 0 || dword_791E8 <= v10 )
        return sub_39590(v23, 26, v10, 0, v22);
      if ( v21[v10] )
        return sub_39590(v23, 74, v10, 0, v22);
      v21[v10] = 1;
      *(_DWORD *)&v21[4 * v10] = v11++;
      if ( !v9 || !*v9 )
        goto LABEL_19;
      v4 = v9;
    }
  }
  else
  {
    v11 = 0;
LABEL_19:
    v12 = dword_791E8;
    if ( dword_791E8 > 0 )
    {
      v13 = dword_79488;
      v14 = 0;
      v15 = 0;
      do
      {
        if ( v21[v15] )
          *(_DWORD *)(*(_DWORD *)(v13 + v14) + 4) = *(_DWORD *)&v21[v14];
        ++v15;
        v14 += 4;
      }
      while ( v15 < v12 );
      v16 = dword_79488;
      v17 = 0;
      do
      {
        v19 = 0;
        while ( 1 )
        {
          if ( !v21[v19] )
          {
            v18 = *(_DWORD *)(v16 + 4 * v19);
            if ( *(_DWORD *)(v18 + 4) == v17 )
              break;
          }
          if ( ++v19 == v12 )
            goto LABEL_32;
        }
        *(_DWORD *)(v18 + 4) = v11++;
        v21[v19] = 1;
LABEL_32:
        ++v17;
      }
      while ( v17 != v12 );
    }
    if ( *(_DWORD *)(sub_14838() + 4) )
      sub_197F4(0);
    return sub_39590(v23, 73, 0, 0, v22);
  }
}
