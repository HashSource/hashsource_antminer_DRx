int __fastcall hs_header_share_write(int a1, int *a2)
{
  _DWORD *v4; // lr
  __int64 v5; // r2
  int v6; // r12
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r6
  int v11; // lr
  int v12; // r12
  _DWORD *v13; // r6
  int v14; // r3
  _DWORD *v15; // r2
  int v16; // lr
  int v17; // r12
  int v18; // r1
  int v19; // lr
  int v20; // r12
  int v21; // r1
  _DWORD *v22; // r4
  int v23; // r3
  int v24; // r12
  int v25; // r0
  int v26; // r1
  int v27; // r12
  int v28; // r0
  int v29; // r1
  _DWORD *v30; // r4
  int v31; // lr
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r1
  int v36; // r2
  int v37; // r3
  unsigned __int64 *v39; // [sp+4h] [bp-1BCh] BYREF
  __int64 v40; // [sp+8h] [bp-1B8h]
  unsigned __int64 v41[4]; // [sp+10h] [bp-1B0h] BYREF
  _DWORD v42[8]; // [sp+30h] [bp-190h] BYREF
  unsigned __int64 v43[16]; // [sp+50h] [bp-170h] BYREF
  _DWORD v44[60]; // [sp+D0h] [bp-F0h] BYREF

  v39 = v43;
  hs_header_sub_write((_DWORD *)a1, (int *)&v39);
  hs_blake2b_init(v44, 32);
  hs_blake2b_update((int)v44, v43, 0x80u);
  hs_blake2b_final((int)v44, v41, 0x20u);
  hs_blake2b_init(v44, 32);
  hs_blake2b_update((int)v44, v41, 0x20u);
  hs_blake2b_update((int)v44, (unsigned __int64 *)(a1 + 100), 0x20u);
  hs_blake2b_final((int)v44, v42, 0x20u);
  if ( a2 )
  {
    if ( *a2 )
    {
      *(_DWORD *)*a2 = *(_DWORD *)a1;
      v4 = (_DWORD *)*a2;
      v5 = *(_QWORD *)(a1 + 8);
      v6 = *a2 + 4;
      *a2 = v6;
      v40 = v5;
      if ( v6 )
      {
        v7 = HIDWORD(v40);
        v4[1] = v40;
        v4[2] = v7;
        v8 = (_DWORD *)*a2;
        v9 = *a2 + 8;
        *a2 = v9;
        if ( v9 )
        {
          v10 = *(_DWORD *)(a1 + 20);
          v11 = *(_DWORD *)(a1 + 24);
          v12 = *(_DWORD *)(a1 + 28);
          v8[2] = *(_DWORD *)(a1 + 16);
          v8[3] = v10;
          v8[4] = v11;
          v8[5] = v12;
          v8[6] = *(_DWORD *)(a1 + 32);
          v13 = (_DWORD *)*a2;
          v14 = *a2 + 20;
          *a2 = v14;
          if ( v14 )
          {
            v15 = (_DWORD *)(a1 + 68);
            v16 = *(_DWORD *)(a1 + 40);
            v17 = *(_DWORD *)(a1 + 44);
            v18 = *(_DWORD *)(a1 + 48);
            v13[5] = *(_DWORD *)(a1 + 36);
            v13[6] = v16;
            v13[7] = v17;
            v13[8] = v18;
            v19 = *(_DWORD *)(a1 + 56);
            v20 = *(_DWORD *)(a1 + 60);
            v21 = *(_DWORD *)(a1 + 64);
            v13[9] = *(_DWORD *)(a1 + 52);
            v13[10] = v19;
            v13[11] = v20;
            v13[12] = v21;
            v22 = (_DWORD *)*a2;
            v23 = *a2 + 32;
            *a2 = v23;
            if ( v23 )
            {
              v24 = v15[1];
              v25 = v15[2];
              v26 = v15[3];
              v22[8] = *v15;
              v22[9] = v24;
              v22[10] = v25;
              v22[11] = v26;
              v27 = v15[5];
              v28 = v15[6];
              v29 = v15[7];
              v22[12] = v15[4];
              v22[13] = v27;
              v22[14] = v28;
              v22[15] = v29;
              v30 = (_DWORD *)*a2;
              v31 = *a2 + 32;
              *a2 = v31;
              if ( v31 )
              {
                v32 = v42[1];
                v33 = v42[2];
                v34 = v42[3];
                v30[8] = v42[0];
                v30[9] = v32;
                v30[10] = v33;
                v30[11] = v34;
                v35 = v42[5];
                v36 = v42[6];
                v37 = v42[7];
                v30[12] = v42[4];
                v30[13] = v35;
                v30[14] = v36;
                v30[15] = v37;
                *a2 += 32;
              }
            }
          }
        }
      }
    }
  }
  return 128;
}
