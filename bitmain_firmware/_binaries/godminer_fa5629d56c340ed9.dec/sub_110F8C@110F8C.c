_DWORD *__fastcall sub_110F8C(int a1, char a2, int a3, void *a4, int a5)
{
  int v5; // r12
  int v7; // r0
  int v9; // r3
  int v10; // r7
  bool v11; // cf
  int v12; // r0
  int v13; // r8
  int v14; // lr
  bool v15; // zf
  int v16; // lr
  unsigned int v17; // r8
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int *v22; // r3
  int *v23; // r1
  int v24; // t1
  int v26; // [sp+0h] [bp-40h] BYREF
  int v27; // [sp+4h] [bp-3Ch]
  int v28; // [sp+8h] [bp-38h]
  int v29; // [sp+Ch] [bp-34h]

  v5 = *(_DWORD *)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 264);
  v9 = a3 + 8 * v5;
  v10 = *(_DWORD *)(a1 + 272);
  v11 = __CFADD__(v7, v9);
  v12 = v7 + v9;
  v13 = *(_DWORD *)(a1 + 276);
  v14 = v11;
  v15 = v14 == 0;
  *(_DWORD *)(a1 + 264) = v12;
  v16 = *(_DWORD *)(a1 + 268);
  if ( v15 )
  {
    v26 = v12;
    v27 = v16;
    v28 = v10;
    v29 = v13;
    if ( !v9 )
    {
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 268) = 0;
      *(_DWORD *)(a1 + 264) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 268) = v16 + 1;
    if ( v16 == -1 )
    {
      *(_DWORD *)(a1 + 272) = ++v10;
      if ( !v10 )
        *(_DWORD *)(a1 + 276) = ++v13;
    }
    v26 = v12;
    v27 = v16 + 1;
    v28 = v10;
    v29 = v13;
  }
  v17 = v5 + 1;
  *(_BYTE *)(a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v5 + 1), 0, 127 - v5);
  if ( v17 > 0x6E )
  {
    sub_10D854((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    memset((void *)a1, 0, 0x80u);
  }
  v18 = v26;
  v19 = v27;
  v20 = v28;
  v21 = v29;
  *(_WORD *)(a1 + 110) = 32 * a5;
  *(_DWORD *)(a1 + 112) = v18;
  *(_DWORD *)(a1 + 116) = v19;
  *(_DWORD *)(a1 + 120) = v20;
  *(_DWORD *)(a1 + 124) = v21;
  sub_10D854((unsigned int *)a1);
  v22 = (int *)(a1 + 136);
  v23 = &v26;
  do
  {
    v24 = *v22++;
    *v23++ = v24;
  }
  while ( (int *)(4 * a5 + a1 + 136) != v22 );
  memcpy(a4, &v26, 4 * a5);
  return sub_10A1E8((_DWORD *)a1, 32 * a5);
}
