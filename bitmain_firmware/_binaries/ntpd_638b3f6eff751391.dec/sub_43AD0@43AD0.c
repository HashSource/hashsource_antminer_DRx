int __fastcall sub_43AD0(const char *a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r6
  int i; // r7
  const __int32_t **v8; // r0
  int v9; // r3
  const __int32_t *v10; // r2
  unsigned __int8 *v11; // r0
  const char *v12; // r1
  int v13; // r3
  int v14; // lr
  int v15; // t1
  int v16; // t1
  int v17; // r3
  int v18; // r6
  const char *v19; // r4
  char *v20; // r5
  char v21; // t1
  int v22; // r3
  char v24[260]; // [sp+0h] [bp-104h] BYREF

  v5 = *(_DWORD *)(a3 + 68) + 64;
  v6 = 1;
  for ( i = *(_DWORD *)(a3 + 100) - 1; ; --i )
  {
    if ( a2 != v5 - 64 && (*(_DWORD *)(v5 - 48) & 0x280000) == 0 )
    {
      v8 = _ctype_toupper_loc();
      v9 = 0;
      v10 = *v8;
      while ( v10[*(unsigned __int8 *)(*(_DWORD *)(v5 - 12) + v9)] == v10[(unsigned __int8)a1[v9]] )
        ++v9;
      v11 = *(unsigned __int8 **)(v5 - 8);
      if ( v6 < v9 )
        v6 = v9;
      if ( v11 )
      {
        if ( v10[*v11] == v10[*(unsigned __int8 *)a1] )
        {
          v12 = a1;
          v13 = 0;
          do
          {
            v15 = *++v11;
            v14 = v15;
            ++v13;
            v16 = *(unsigned __int8 *)++v12;
          }
          while ( v10[v14] == v10[v16] );
        }
        else
        {
          v13 = 0;
        }
        if ( v6 < v13 )
          v6 = v13;
      }
    }
    if ( i <= 0 )
      break;
    v5 += 64;
  }
  if ( !a1[v6] || !a1[v6 + 1] )
    return printf("        '%s' )\n", a1);
  v17 = 0;
  do
  {
    v24[v17] = a1[v17];
    ++v17;
  }
  while ( v6 >= v17 );
  v18 = v6 & ~(v6 >> 31);
  v19 = &a1[v18];
  v20 = &v24[v18 + 1];
  do
  {
    *v20 = 0;
    printf("        '%s' | \\\n", v24);
    v21 = *++v19;
    v22 = *((unsigned __int8 *)v19 + 1);
    *v20++ = v21;
  }
  while ( v22 );
  *v20 = 0;
  return printf("        '%s' )\n", v24);
}
