int __fastcall hns_hash(int a1, void *a2)
{
  int v4; // r2
  _BYTE *v5; // r3
  unsigned int v6; // r1
  char v7; // t1
  int v8; // r2
  _BYTE *v9; // r3
  char v10; // t1
  char *v11; // r3
  int v12; // r2
  char v13; // t1
  int v14; // r8
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r12
  __int16 v18; // r9
  int v19; // r3
  _BYTE *v20; // lr
  char v21; // r10
  char v22; // t1
  int v23; // r2
  _BYTE *v24; // r3
  char v25; // t1
  int v26; // r2
  _BYTE *v27; // r3
  char v28; // t1
  int v29; // r2
  _BYTE *v30; // r3
  char v31; // t1
  int v32; // r2
  _BYTE *v33; // r3
  char v34; // t1
  unsigned int v35; // r2
  unsigned int v36; // r3
  _DWORD v38[4]; // [sp+0h] [bp-120h] BYREF
  char v39; // [sp+10h] [bp-110h]
  char v40; // [sp+11h] [bp-10Fh]
  int v41; // [sp+12h] [bp-10Eh]
  __int16 v42; // [sp+16h] [bp-10Ah]
  _DWORD v43[3]; // [sp+18h] [bp-108h] BYREF
  int v44; // [sp+24h] [bp-FCh] BYREF
  _BYTE v45[32]; // [sp+3Bh] [bp-E5h] BYREF
  _BYTE v46[32]; // [sp+5Bh] [bp-C5h] BYREF
  _BYTE v47[32]; // [sp+7Bh] [bp-A5h] BYREF
  _BYTE v48[24]; // [sp+9Bh] [bp-85h] BYREF
  char v49; // [sp+B3h] [bp-6Dh] BYREF
  _BYTE v50[32]; // [sp+D3h] [bp-4Dh] BYREF
  _BYTE v51[29]; // [sp+F3h] [bp-2Dh] BYREF
  _BYTE v52[5]; // [sp+113h] [bp-Dh] BYREF
  unsigned int v53; // [sp+118h] [bp-8h]

  hs_header_init((int)v43);
  v4 = a1 + 40;
  v5 = v51;
  v6 = bswap32(*(_DWORD *)(a1 + 4));
  v53 = bswap32(*(_DWORD *)a1);
  *(_DWORD *)&v52[1] = v6;
  do
  {
    v7 = *(_BYTE *)--v4;
    *++v5 = v7;
  }
  while ( v52 != v5 );
  v8 = a1 + 72;
  v9 = v50;
  do
  {
    v10 = *(_BYTE *)--v8;
    *++v9 = v10;
  }
  while ( v9 != v51 );
  v11 = &v49;
  v12 = a1 + 104;
  do
  {
    v13 = *(_BYTE *)--v12;
    *++v11 = v13;
  }
  while ( v50 != v11 );
  v14 = *(_DWORD *)(a1 + 120);
  v15 = *(_DWORD *)(a1 + 108);
  v16 = *(_DWORD *)(a1 + 112);
  v17 = v43;
  v18 = *(_WORD *)(a1 + 124);
  v19 = *(_DWORD *)(a1 + 116);
  v20 = v48;
  v21 = *(_BYTE *)(a1 + 250);
  v38[0] = *(_DWORD *)(a1 + 104);
  v38[1] = v15;
  v38[2] = v16;
  v38[3] = v19;
  LOBYTE(v19) = *(_BYTE *)(a1 + 251);
  v42 = v18;
  v41 = v14;
  v39 = v21;
  v40 = v19;
  do
  {
    v22 = *((_BYTE *)v17 - 1);
    v17 = (_DWORD *)((char *)v17 - 1);
    *++v20 = v22;
  }
  while ( v38 != v17 );
  v23 = a1 + 158;
  v24 = v47;
  do
  {
    v25 = *(_BYTE *)--v23;
    *++v24 = v25;
  }
  while ( v48 != v24 );
  v26 = a1 + 190;
  v27 = v46;
  do
  {
    v28 = *(_BYTE *)--v26;
    *++v27 = v28;
  }
  while ( v27 != v47 );
  v29 = a1 + 222;
  v30 = v45;
  do
  {
    v31 = *(_BYTE *)--v29;
    *++v30 = v31;
  }
  while ( v30 != v46 );
  v32 = a1 + 242;
  v33 = (char *)&v44 + 3;
  do
  {
    v34 = *(_BYTE *)--v32;
    *++v33 = v34;
  }
  while ( v45 != v33 );
  v35 = *(_DWORD *)(a1 + 246);
  v36 = *(_DWORD *)(a1 + 252);
  v44 = 0;
  v43[2] = bswap32(v35);
  v43[0] = bswap32(v36);
  return hs_header_pow(v43, a2);
}
