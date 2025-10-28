int __fastcall sub_C9C40(unsigned __int8 *a1)
{
  _BYTE *v1; // r4
  unsigned __int8 *v2; // lr
  int v3; // r3
  unsigned __int8 *v4; // r10
  unsigned __int8 *v5; // r11
  _DWORD *v6; // r3
  int v7; // t1
  int v8; // r1
  int v9; // r9
  _DWORD *i; // r11
  _DWORD *v11; // r8
  int v12; // r6
  int v13; // t1
  int v14; // r5
  int v15; // r4
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r5
  unsigned int v19; // r4
  int v20; // r4
  _BYTE *v21; // r12
  _BYTE *v22; // r2
  _BYTE *v23; // lr
  int v24; // r1
  _BYTE *v25; // r3
  _BYTE *v26; // r0
  int v27; // r1
  int v28; // lr
  int v29; // r3
  int result; // r0
  int v31; // t1
  unsigned __int8 *v32; // r11
  _DWORD *v33; // r2
  int v34; // r3
  int v35; // t1
  int v36; // t1
  _DWORD v37[8]; // [sp+Ch] [bp-A8h] BYREF
  _BYTE v38[64]; // [sp+2Ch] [bp-88h] BYREF
  _BYTE v39[72]; // [sp+6Ch] [bp-48h] BYREF

  v1 = v38;
  v2 = a1;
  do
  {
    v3 = v2[41];
    v2 += 4;
    *((_DWORD *)v1 + 1) = (v3 << 16) + (v2[36] << 24) + v2[39] + (v2[38] << 8);
    v1 += 4;
  }
  while ( v39 != v1 );
  v4 = a1 - 4;
  v5 = a1 - 4;
  v6 = v37;
  do
  {
    v7 = *((_DWORD *)v5 + 1);
    v5 += 4;
    v6[1] = v7;
    ++v6;
  }
  while ( a1 + 28 != v5 );
  v8 = 1116352408;
  v37[0] = v5;
  v9 = 0;
  for ( i = &unk_15EE88; ; i += 16 )
  {
    v11 = i;
    v12 = 0;
    while ( 1 )
    {
      v14 = v37[((4 - (_BYTE)v12) & 7) + 1];
      v15 = v37[((6 - (_BYTE)v12) & 7) + 1];
      v16 = __ROR4__(v14, 11) ^ __ROR4__(v14, 6) ^ __ROR4__(v14, 25);
      v17 = (v37[((5 - (_BYTE)v12) & 7) + 1] ^ v15) & v14 ^ v15;
      if ( v9 )
      {
        v18 = *(_DWORD *)&v39[4 * (((_BYTE)v12 - 2) & 0xF) + 4];
        v19 = *(_DWORD *)&v39[4 * (((_BYTE)v12 - 15) & 0xF) + 4];
        v20 = (__ROR4__(v18, 19) ^ __ROR4__(v18, 17) ^ (v18 >> 10))
            + *(_DWORD *)&v39[4 * (((_BYTE)v12 - 7) & 0xF) + 4]
            + *(_DWORD *)&v39[4 * v12 + 4]
            + (__ROR4__(v19, 18) ^ __ROR4__(v19, 7) ^ (v19 >> 3));
      }
      else
      {
        v20 = *(_DWORD *)&v38[4 * v12 + 4];
      }
      *(_DWORD *)&v39[4 * v12 + 4] = v20;
      v21 = &v39[4 * ((7 - (_BYTE)v12) & 7) + 68];
      v22 = &v39[4 * ((3 - (_BYTE)v12) & 7) + 68];
      v23 = &v39[4 * (-v12 & 7) + 68];
      v24 = v16 + v17 + *((_DWORD *)v21 - 40) + v20 + v8;
      *((_DWORD *)v21 - 40) = v24;
      v25 = &v39[4 * ((1 - (_BYTE)v12) & 7) + 68];
      v26 = &v39[4 * ((2 - (_BYTE)v12++) & 7) + 68];
      *((_DWORD *)v22 - 40) += v24;
      v27 = *((_DWORD *)v23 - 40);
      v28 = *((_DWORD *)v25 - 40);
      v29 = (v27 | v28) & *((_DWORD *)v26 - 40);
      result = *((_DWORD *)v21 - 40);
      *((_DWORD *)v21 - 40) = (v29 | v28 & v27) + (__ROR4__(v27, 13) ^ __ROR4__(v27, 2) ^ __ROR4__(v27, 22)) + result;
      if ( v12 == 16 )
        break;
      v13 = v11[1];
      ++v11;
      v8 = v13;
    }
    v9 += 16;
    if ( v9 == 64 )
      break;
    v31 = i[16];
    v8 = v31;
  }
  v32 = (unsigned __int8 *)v37[0];
  v33 = v37;
  do
  {
    v35 = *((_DWORD *)v4 + 1);
    v4 += 4;
    v34 = v35;
    v36 = v33[1];
    ++v33;
    *(_DWORD *)v4 = v34 + v36;
  }
  while ( v32 != v4 );
  return result;
}
