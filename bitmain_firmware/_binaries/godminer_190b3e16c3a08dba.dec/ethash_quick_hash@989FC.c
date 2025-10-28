int __fastcall ethash_quick_hash(_DWORD *a1, int a2, int a3, int a4, int *a5)
{
  int v6; // r1
  char *v7; // r0
  char v8; // t1
  unsigned __int8 v9; // r0
  unsigned int v10; // r6
  int v11; // lr
  _BYTE *v12; // r7
  int v13; // r12
  unsigned __int8 v14; // t1
  int v15; // r3
  int v16; // r9
  char *v17; // r12
  int *v18; // r7
  int v19; // lr
  int v20; // t1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int result; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  _BYTE v34[6]; // [sp+5h] [bp-8Bh] BYREF
  char v35; // [sp+Bh] [bp-85h] BYREF
  int v36; // [sp+Ch] [bp-84h]
  int v37; // [sp+10h] [bp-80h]
  int v38; // [sp+14h] [bp-7Ch]
  int v39; // [sp+18h] [bp-78h]
  int v40; // [sp+1Ch] [bp-74h]
  int v41; // [sp+20h] [bp-70h]
  int v42; // [sp+24h] [bp-6Ch]
  int v43; // [sp+28h] [bp-68h] BYREF
  int v44; // [sp+2Ch] [bp-64h] BYREF
  int v45; // [sp+30h] [bp-60h]
  int v46; // [sp+34h] [bp-5Ch]
  int v47; // [sp+38h] [bp-58h]
  int v48; // [sp+3Ch] [bp-54h]
  int v49; // [sp+40h] [bp-50h]
  int v50; // [sp+44h] [bp-4Ch]
  int v51; // [sp+48h] [bp-48h]
  int v52; // [sp+4Ch] [bp-44h]
  unsigned int v53; // [sp+50h] [bp-40h]
  _DWORD s[15]; // [sp+54h] [bp-3Ch] BYREF
  char vars0; // [sp+90h] [bp+0h] BYREF

  v6 = a2 - 1;
  v7 = &v35;
  do
  {
    v8 = *(_BYTE *)++v6;
    *++v7 = v8;
  }
  while ( (char *)&v43 + 3 != v7 );
  v34[1] = BYTE1(a4);
  v9 = BYTE2(a4);
  v34[3] = HIBYTE(a3);
  v34[4] = BYTE2(a3);
  v10 = a4 & 0xFF000000;
  v34[2] = a4;
  v11 = 0;
  v35 = a3;
  v12 = v34;
  v13 = 48;
  v34[5] = BYTE1(a3);
  v34[0] = BYTE2(a4);
  while ( 1 )
  {
    v11 |= v9 << v13;
    v15 = (v9 << (v13 - 32)) | (v9 >> (32 - v13));
    v13 -= 8;
    v10 |= v15;
    if ( !v13 )
      break;
    v14 = *++v12;
    v9 = v14;
  }
  v16 = (unsigned __int8)a3 | v11;
  memset(s, 0, sizeof(s));
  v17 = (char *)s;
  v18 = (int *)&unk_158628;
  v44 = v36;
  v45 = v37;
  v46 = v38;
  v47 = v39;
  v19 = 114;
  v48 = v40;
  v49 = v41;
  v50 = v42;
  v51 = v43;
  v52 = v16;
  v53 = v10;
  while ( 1 )
  {
    *(_DWORD *)v17 = v19;
    v17 += 4;
    if ( v17 == &vars0 )
      break;
    v20 = *v18++;
    v19 = v20;
  }
  ethash_keccakf800(&v44);
  v21 = a5[1];
  v22 = a5[2];
  v23 = a5[3];
  v52 = *a5;
  v53 = v21;
  s[0] = v22;
  s[1] = v23;
  v24 = a5[5];
  v25 = a5[6];
  v26 = a5[7];
  s[2] = a5[4];
  s[3] = v24;
  s[4] = v25;
  s[5] = v26;
  s[10] = 78;
  s[14] = 78;
  s[11] = 67;
  s[12] = 79;
  s[13] = 73;
  s[6] = 114;
  s[7] = 65;
  s[8] = 86;
  s[9] = 69;
  ethash_keccakf800(&v44);
  v27 = v45;
  v28 = v46;
  v29 = v47;
  *a1 = v44;
  a1[1] = v27;
  a1[2] = v28;
  a1[3] = v29;
  result = v48;
  v31 = v49;
  v32 = v50;
  v33 = v51;
  a1[4] = v48;
  a1[5] = v31;
  a1[6] = v32;
  a1[7] = v33;
  return result;
}
