int __fastcall IsValidSolution(void *a1, int a2)
{
  char *v4; // r11
  char *v5; // r6
  _DWORD *v6; // r5
  unsigned int v7; // t1
  int v8; // r4
  bool v9; // nf
  int v10; // r4
  int v11; // r4
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r0
  void *v19; // r0
  int v20; // r8
  size_t v21; // r9
  int v22; // r10
  int v23; // r5
  int v24; // r6
  unsigned __int8 *v25; // r2
  unsigned __int8 *v26; // r3
  int v27; // r0
  int v28; // t1
  int v29; // t1
  char *v30; // r7
  int v31; // r12
  _BYTE *v32; // r0
  char v33; // r3
  char v34; // t1
  char v35; // t1
  int v36; // r4
  char *v37; // r0
  size_t v38; // r4
  _BYTE *v39; // r3
  int v41; // r4
  unsigned int v43; // [sp+8h] [bp-884h]
  void *v44; // [sp+Ch] [bp-880h]
  size_t n; // [sp+10h] [bp-87Ch]
  unsigned int v46; // [sp+18h] [bp-874h]
  int v47; // [sp+1Ch] [bp-870h]
  _BYTE *dest; // [sp+24h] [bp-868h]
  size_t v49; // [sp+28h] [bp-864h]
  _DWORD v50[7]; // [sp+34h] [bp-858h] BYREF
  __int16 v51; // [sp+50h] [bp-83Ch]
  _BYTE v52[48]; // [sp+54h] [bp-838h] BYREF
  char v53; // [sp+84h] [bp-808h] BYREF
  _BYTE s[2052]; // [sp+88h] [bp-804h] BYREF

  dest = malloc(0x4400u);
  v4 = (char *)malloc(0x4400u);
  memset(s, 0, 0x800u);
  v5 = &v53;
  v6 = dest + 30;
  expandArray(a2, 1344, (int)s, 2048, 0x15u, 1u);
  do
  {
    v7 = *((_DWORD *)v5 + 1);
    v5 += 4;
    v8 = bswap32(v7);
    sub_E180C(a1, v8 / 2, v52, 0x32u);
    v9 = v8 < 0;
    v10 = v8 & 1;
    if ( v9 )
      v10 = -v10;
    expandArray((int)&v52[25 * v10], 25, (int)v50, 30, 0x14u, 0);
    v11 = *(_DWORD *)v5;
    v12 = v50[1];
    v13 = v50[2];
    v14 = v50[3];
    *(_DWORD *)((char *)v6 - 30) = v50[0];
    *(_DWORD *)((char *)v6 - 26) = v12;
    *(_DWORD *)((char *)v6 - 22) = v13;
    v15 = v50[4];
    v16 = v50[5];
    v17 = v50[6];
    *(_DWORD *)((char *)v6 - 18) = v14;
    LOWORD(v14) = v51;
    *(_DWORD *)((char *)v6 - 14) = v15;
    v18 = (int)v6 - 30;
    *(_DWORD *)((char *)v6 - 10) = v16;
    *((_WORD *)v6 - 1) = v14;
    *(_DWORD *)((char *)v6 - 6) = v17;
    *v6 = v11;
    v6 = (_DWORD *)((char *)v6 + 34);
    v19 = abin2hex(v18, 34);
    free(v19);
  }
  while ( v5 != &s[2044] );
  v20 = 30;
  v21 = 4;
  v22 = 512;
  n = 27;
  while ( 1 )
  {
    v46 = v22;
    if ( v22 )
      break;
    v21 *= 2;
    v49 = n;
LABEL_17:
    v20 -= 3;
    memcpy(dest, v4, 0x4400u);
    n -= 3;
    memset(v4, 0, 0x4400u);
    if ( v20 == 3 )
    {
      if ( *dest )
      {
LABEL_27:
        v41 = 2;
      }
      else
      {
        v39 = dest;
        while ( &dest[v49 - 1] != v39 )
        {
          if ( *++v39 )
            goto LABEL_27;
        }
        v41 = 0;
      }
      goto LABEL_24;
    }
  }
  v23 = (int)dest;
  v47 = 2 * (v20 + v21);
  v24 = (int)&dest[v20 + v21];
  v22 = 0;
  v49 = n;
  while ( 1 )
  {
    v25 = (unsigned __int8 *)v24;
    v43 = 2 * v22;
    v26 = (unsigned __int8 *)v23;
    do
    {
      v28 = *v26++;
      v27 = v28;
      v29 = *v25++;
      if ( v27 != v29 )
      {
        v41 = 2;
        puts("Invalid solution: invalid collision length between StepRows");
        goto LABEL_24;
      }
    }
    while ( (unsigned __int8 *)(v23 + 3) != v26 );
    v44 = (void *)(v20 + v23);
    if ( memcmp((const void *)(v20 + v24), (const void *)(v20 + v23), v21) < 0 )
    {
      v41 = 2;
      puts("Invalid solution: Index tree incorrectly ordered");
      goto LABEL_24;
    }
    if ( !DistinctIndices(v23, v24, v20, v21) )
      break;
    v30 = (char *)v24;
    memset(v52, 0, 0x1Eu);
    v31 = v23 - 1;
    v32 = v52;
    do
    {
      v34 = *v30++;
      v33 = v34;
      v35 = *(_BYTE *)++v31;
      *v32++ = v33 ^ v35;
    }
    while ( v30 != (char *)(v20 + v24) );
    ++v22;
    v36 = (n + 2 * v21) * (v43 >> 1);
    v23 += v47;
    v24 += v47;
    v37 = &v4[v36];
    v38 = n + v36;
    memcpy(v37, &v52[3], n);
    memcpy(&v4[v38], v44, v21);
    memcpy(&v4[v38 + v21], v30, v21);
    if ( v46 <= v43 + 2 )
    {
      v21 *= 2;
      goto LABEL_17;
    }
  }
  v41 = 1;
  puts("Invalid solution: duplicate indices");
LABEL_24:
  free(dest);
  free(v4);
  return v41;
}
