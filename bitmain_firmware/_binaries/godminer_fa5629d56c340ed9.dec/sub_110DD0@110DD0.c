void *__fastcall sub_110DD0(int a1, char a2, int a3, void *a4, int a5)
{
  int v5; // r12
  int v7; // r0
  int v9; // r3
  int v10; // r6
  bool v11; // cf
  int v12; // r0
  int v13; // r8
  int v14; // lr
  bool v15; // zf
  int v16; // lr
  unsigned int v17; // r6
  int v18; // r6
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r3
  int *v24; // r1
  int v25; // t1
  void *result; // r0
  int v27; // [sp+0h] [bp-20h] BYREF
  int v28; // [sp+4h] [bp-1Ch]
  int v29; // [sp+8h] [bp-18h]
  int v30; // [sp+Ch] [bp-14h]

  v5 = *(_DWORD *)(a1 + 192);
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
    v27 = v12;
    v28 = v16;
    v29 = v10;
    v30 = v13;
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
    v27 = v12;
    v28 = v16 + 1;
    v29 = v10;
    v30 = v13;
  }
  v17 = v5 + 1;
  *(_BYTE *)(a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(a1 + v5 + 1), 0, 191 - v5);
  if ( v17 > 0xAE )
  {
    sub_10A284((unsigned int *)a1);
    *(_DWORD *)(a1 + 276) = 0;
    *(_DWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 268) = 0;
    *(_DWORD *)(a1 + 264) = 0;
    memset((void *)a1, 0, 0xC0u);
  }
  v18 = 32 * a5;
  v19 = v27;
  v20 = v28;
  v21 = v29;
  v22 = v30;
  *(_WORD *)(a1 + 174) = 32 * a5;
  *(_DWORD *)(a1 + 176) = v19;
  *(_DWORD *)(a1 + 180) = v20;
  *(_DWORD *)(a1 + 184) = v21;
  *(_DWORD *)(a1 + 188) = v22;
  sub_10A284((unsigned int *)a1);
  v23 = a1 + 196;
  v24 = &v27 - 1;
  do
  {
    v25 = *(_DWORD *)(v23 + 4);
    v23 += 4;
    v24[1] = v25;
    ++v24;
  }
  while ( a1 + 4 * a5 + 196 != v23 );
  result = memcpy(a4, &v27, 4 * a5);
  *(_DWORD *)(a1 + 200) = v18;
  *(_DWORD *)(a1 + 216) = v18;
  *(_DWORD *)(a1 + 232) = v18;
  *(_DWORD *)(a1 + 248) = v18;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  return result;
}
