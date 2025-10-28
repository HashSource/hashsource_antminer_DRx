unsigned int __fastcall sub_2FFF0(unsigned int result, int a2, int a3)
{
  int *v3; // r1
  int v4; // r0
  int i; // r3
  unsigned int *v6; // r2
  _DWORD *v7; // r3
  int j; // r2
  int v9; // r12
  int *v10; // r2
  unsigned int v11; // r3
  int v12; // r1
  int *v13; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r5
  int v17; // r4
  int v18; // r9
  unsigned int v19; // r2
  unsigned int v20; // r12
  unsigned int v21; // r6
  int v22; // r11
  int v23; // r8
  int v24; // r7
  int v25; // r8
  unsigned int v26; // r10
  int v27; // r1
  unsigned int v28; // r3
  int *v29; // [sp+0h] [bp-138h] BYREF
  int v30; // [sp+4h] [bp-134h]
  unsigned int v31; // [sp+8h] [bp-130h]
  unsigned int v32; // [sp+Ch] [bp-12Ch]
  int v33; // [sp+10h] [bp-128h]
  int v34; // [sp+14h] [bp-124h] BYREF
  _DWORD *v35; // [sp+18h] [bp-120h]
  _DWORD *v36; // [sp+1Ch] [bp-11Ch]
  _DWORD *v37; // [sp+20h] [bp-118h]
  unsigned int v38; // [sp+24h] [bp-114h]
  int v39; // [sp+28h] [bp-110h]
  int v40; // [sp+2Ch] [bp-10Ch]
  int v41; // [sp+30h] [bp-108h]
  int v42; // [sp+34h] [bp-104h] BYREF
  _BYTE v43[256]; // [sp+38h] [bp-100h] BYREF

  v33 = a3;
  v31 = result;
  v34 = a2;
  if ( a3 > 0 )
  {
    v29 = &v42;
    v30 = 0;
    do
    {
      v3 = &v42;
      v4 = v34 + (v30 << 6);
      for ( i = 0; i != 16; ++i )
      {
        v6 = (unsigned int *)(v4 + 4 * i);
        v3[1] = _byteswap_ulong(*v6);
        ++v3;
      }
      v7 = v43;
      for ( j = 0; j != 192; j += 4 )
      {
        v9 = *(_DWORD *)&v43[j];
        v7[16] = v7[9]
               + v9
               + (__ROR4__(v7[14], 17) ^ __ROR4__(v7[14], 19) ^ (v7[14] >> 10))
               + (__ROR4__(v7[1], 7) ^ __ROR4__(v7[1], 18) ^ (v7[1] >> 3));
        ++v7;
      }
      v10 = &v34;
      v11 = v31;
      v32 = v31;
      do
      {
        v12 = *(_DWORD *)(v11 + 136);
        v11 += 4;
        v13 = v29;
        v10[1] = v12;
        ++v10;
      }
      while ( v10 != v13 );
      v14 = 0;
      v15 = v39;
      v16 = v40;
      v17 = v41;
      v18 = v42;
      v19 = (unsigned int)v35;
      v20 = (unsigned int)v36;
      result = (unsigned int)v37;
      v21 = v38;
      while ( 1 )
      {
        v22 = *(_DWORD *)&v43[v14];
        v23 = *(_DWORD *)((char *)&unk_6027C + v14);
        v14 += 4;
        v24 = v22 + v23 + (__ROR4__(v15, 6) ^ __ROR4__(v15, 11) ^ __ROR4__(v15, 25)) + (v17 & ~v15 ^ v16 & v15) + v18;
        v18 = v17;
        v25 = v21 + v24;
        v26 = ((v20 ^ result) & v19 ^ result & v20) + (__ROR4__(v19, 2) ^ __ROR4__(v19, 13) ^ __ROR4__(v19, 22)) + v24;
        v21 = result;
        if ( v14 == 256 )
          break;
        result = v20;
        v17 = v16;
        v20 = v19;
        v16 = v15;
        v19 = v26;
        v15 = v25;
      }
      v40 = v15;
      v27 = 0;
      v42 = v17;
      v39 = v25;
      v41 = v16;
      v35 = (_DWORD *)v26;
      v36 = (_DWORD *)v19;
      v37 = (_DWORD *)v20;
      v38 = result;
      v28 = v32;
      while ( 1 )
      {
        ++v27;
        *(_DWORD *)(v28 + 136) += v26;
        v28 += 4;
        if ( v27 == 8 )
          break;
        result = (unsigned int)&v29;
        v26 = (unsigned int)(&v29)[v27 + 6];
      }
      ++v30;
    }
    while ( v33 != v30 );
  }
  return result;
}
