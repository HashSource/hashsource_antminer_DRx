void __fastcall sub_30AB8(unsigned int *a1, int a2, char *s, int a4)
{
  char *v5; // r2
  char *v6; // r3
  unsigned int *v7; // r6
  const char *v8; // r10
  char *v9; // r0
  char *v10; // r4
  const char *v11; // r0
  int v12; // r0
  char *v13; // r12
  int v14; // r1
  int v15; // r4
  char *v16; // r2
  int v17; // r0
  int v19; // lr
  char *v20; // r2
  int v21; // r3
  int v23; // r0
  char v24; // [sp+7h] [bp-1h] BYREF
  unsigned int *v25; // [sp+8h] [bp+0h] BYREF
  int v26; // [sp+Ch] [bp+4h]

  v26 = a4;
  v25 = a1;
  if ( !dword_72EF0 )
  {
    sub_30214(a1, 8, 0, 0, v26);
    goto LABEL_29;
  }
  if ( !s || !*s )
  {
    sub_30214(v25, 25, 0, 0, v26);
    goto LABEL_29;
  }
  if ( dword_72EF0 > 0 )
  {
    v5 = &v24;
    v6 = (char *)&v25 + dword_72EF0 - 1;
    do
      *++v5 = 0;
    while ( v5 != v6 );
  }
  v7 = 0;
  v8 = s;
  while ( 1 )
  {
    v9 = strchr(v8, 44);
    v10 = v9;
    if ( v9 )
    {
      v10 = v9 + 1;
      *v9 = 0;
    }
    v11 = v8;
    v8 = v10;
    v12 = strtol(v11, 0, 10);
    v13 = (char *)v7 + 1;
    if ( v12 < 0 )
      break;
    v14 = dword_72EF0;
    if ( dword_72EF0 <= v12 )
      break;
    if ( *((_BYTE *)&v25 + v12) )
    {
      sub_30214(v25, 74, v12, 0, v26);
LABEL_29:
      __asm { POP.W           {R4-R11,PC} }
    }
    (&v25)[v12] = v7;
    v7 = (unsigned int *)((char *)v7 + 1);
    *((_BYTE *)&v25 + v12) = 1;
    if ( !v10 || !*v10 )
    {
      v15 = dword_732EC;
      v16 = &v24;
      v17 = 0;
      do
      {
        if ( *++v16 )
          *(_DWORD *)(*(_DWORD *)(v15 + 4 * v17) + 4) = (&v25)[v17];
        ++v17;
      }
      while ( v16 != &v24 + v14 );
      v19 = 0;
      while ( 1 )
      {
        v20 = &v24;
        v21 = 0;
        while ( 1 )
        {
          if ( !*++v20 )
          {
            v23 = *(_DWORD *)(v15 + 4 * v21);
            if ( *(_DWORD *)(v23 + 4) == v19 )
              break;
          }
          if ( v14 == ++v21 )
            goto LABEL_24;
        }
        *(_DWORD *)(v23 + 4) = v13++;
        *((_BYTE *)&v25 + v21) = 1;
LABEL_24:
        if ( v14 == ++v19 )
        {
          if ( *(_DWORD *)(sub_1E098() + 4) )
            sub_1F158(0);
          sub_30214(v25, 73, 0, 0, v26);
          __asm { POP.W           {R4-R11,PC} }
        }
      }
    }
  }
  sub_30214(v25, 26, v12, 0, v26);
  goto LABEL_29;
}
