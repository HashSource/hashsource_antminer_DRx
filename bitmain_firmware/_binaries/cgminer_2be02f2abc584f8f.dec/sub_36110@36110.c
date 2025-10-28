int __fastcall sub_36110(int result, int a2, int a3)
{
  int v3; // r0
  int *v4; // r1
  int j; // r3
  _DWORD *v6; // r3
  int k; // r2
  int v8; // r3
  int *v9; // r2
  int v10; // r3
  int v11; // r5
  int v12; // r4
  int v13; // r2
  int v14; // r12
  int v15; // r0
  int v16; // r6
  int v17; // r1
  int v18; // r9
  int v19; // r7
  int v20; // r10
  int v21; // r8
  int v22; // r3
  int *v23; // r2
  int v24; // t1
  int i; // [sp+8h] [bp-138h]
  int v26; // [sp+Ch] [bp-134h]
  int v28; // [sp+1Ch] [bp-124h] BYREF
  int v29; // [sp+20h] [bp-120h]
  int v30; // [sp+24h] [bp-11Ch]
  int v31; // [sp+28h] [bp-118h]
  int v32; // [sp+2Ch] [bp-114h]
  int v33; // [sp+30h] [bp-110h]
  int v34; // [sp+34h] [bp-10Ch]
  int v35; // [sp+38h] [bp-108h]
  int v36; // [sp+3Ch] [bp-104h] BYREF
  _BYTE v37[256]; // [sp+40h] [bp-100h] BYREF

  v26 = result;
  v28 = a2;
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v3 = v28 + (i << 6);
      v4 = &v36;
      for ( j = 0; j != 16; ++j )
      {
        v4[1] = _byteswap_ulong(*(_DWORD *)(v3 + 4 * j));
        ++v4;
      }
      v6 = v37;
      for ( k = 0; k != 192; k += 4 )
      {
        v6[16] = v6[9]
               + *(_DWORD *)&v37[k]
               + (__ROR4__(v6[14], 17) ^ __ROR4__(v6[14], 19) ^ (v6[14] >> 10))
               + (__ROR4__(v6[1], 7) ^ __ROR4__(v6[1], 18) ^ (v6[1] >> 3));
        ++v6;
      }
      v8 = v26;
      v9 = &v28;
      do
      {
        v9[1] = *(_DWORD *)(v8 + 136);
        ++v9;
        v8 += 4;
      }
      while ( v9 != &v36 );
      v10 = v33;
      v11 = v34;
      v12 = v35;
      v13 = v29;
      v14 = v30;
      v15 = v31;
      v16 = v32;
      v17 = 0;
      v18 = v36;
      while ( 1 )
      {
        v19 = *(_DWORD *)&v37[v17]
            + *(_DWORD *)((char *)&unk_72E04 + v17)
            + (__ROR4__(v10, 6) ^ __ROR4__(v10, 11) ^ __ROR4__(v10, 25))
            + (v12 & ~v10 ^ v11 & v10)
            + v18;
        v20 = v16 + v19;
        v21 = ((v14 ^ v15) & v13 ^ v15 & v14) + (__ROR4__(v13, 2) ^ __ROR4__(v13, 13) ^ __ROR4__(v13, 22)) + v19;
        v17 += 4;
        v18 = v12;
        v16 = v15;
        if ( v17 == 256 )
          break;
        v15 = v14;
        v14 = v13;
        v13 = v21;
        v12 = v11;
        v11 = v10;
        v10 = v20;
      }
      v36 = v12;
      v33 = v20;
      v34 = v10;
      v35 = v11;
      v29 = v21;
      v30 = v13;
      v31 = v14;
      v32 = v15;
      v22 = v26;
      v23 = &v28;
      do
      {
        result = *(_DWORD *)(v22 + 136);
        v24 = v23[1];
        ++v23;
        *(_DWORD *)(v22 + 136) = result + v24;
        v22 += 4;
      }
      while ( v23 != &v36 );
    }
  }
  return result;
}
