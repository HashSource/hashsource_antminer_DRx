int __fastcall hs_header_pre_write(int a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  char *v6; // r2
  char v7; // r3
  char v8; // t1
  char v9; // t1
  _DWORD *v10; // lr
  __int64 v11; // r2
  int v12; // r12
  _DWORD *v13; // r6
  int v14; // lr
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  _DWORD *v19; // r7
  int v20; // r3
  int v21; // lr
  int v22; // r12
  int v23; // r0
  int v24; // lr
  int v25; // r12
  int v26; // r0
  _DWORD *v27; // r6
  int v28; // r3
  int v29; // r12
  int v30; // r0
  int v31; // r2
  int v32; // r12
  int v33; // r0
  int v34; // r2
  _DWORD *v35; // lr
  int v36; // r3
  _DWORD *v37; // r4
  int v38; // t1
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r0
  int v43; // r1
  int v44; // r2
  char v46; // [sp+Bh] [bp-19h] BYREF
  int v47; // [sp+Ch] [bp-18h]
  int v48; // [sp+10h] [bp-14h]
  int v49; // [sp+14h] [bp-10h]
  int v50; // [sp+18h] [bp-Ch]
  int v51; // [sp+1Ch] [bp-8h] BYREF

  v4 = a1 + 35;
  v5 = a1 + 67;
  v6 = &v46;
  do
  {
    v8 = *(_BYTE *)++v4;
    v7 = v8;
    v9 = *(_BYTE *)++v5;
    *++v6 = v7 ^ v9;
  }
  while ( v6 != (char *)&v51 + 3 );
  if ( a2 )
  {
    if ( *a2 )
    {
      *(_DWORD *)*a2 = *(_DWORD *)a1;
      v10 = (_DWORD *)*a2;
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *a2 + 4;
      *a2 = v12;
      if ( v12 )
      {
        *(_QWORD *)(v10 + 1) = v11;
        v13 = (_DWORD *)*a2;
        v14 = *a2 + 8;
        *a2 = v14;
        if ( v14 )
        {
          v15 = v48;
          v16 = v49;
          v17 = v50;
          v13[2] = v47;
          v18 = v51;
          v13[5] = v17;
          v13[3] = v15;
          v13[4] = v16;
          v13[6] = v18;
          v19 = (_DWORD *)*a2;
          v20 = *a2 + 20;
          *a2 = v20;
          if ( v20 )
          {
            v21 = *(_DWORD *)(a1 + 40);
            v22 = *(_DWORD *)(a1 + 44);
            v23 = *(_DWORD *)(a1 + 48);
            v19[5] = *(_DWORD *)(a1 + 36);
            v19[6] = v21;
            v19[7] = v22;
            v19[8] = v23;
            v24 = *(_DWORD *)(a1 + 56);
            v25 = *(_DWORD *)(a1 + 60);
            v26 = *(_DWORD *)(a1 + 64);
            v19[9] = *(_DWORD *)(a1 + 52);
            v19[10] = v24;
            v19[11] = v25;
            v19[12] = v26;
            v27 = (_DWORD *)*a2;
            v28 = *a2 + 32;
            *a2 = v28;
            if ( v28 )
            {
              v29 = *(_DWORD *)(a1 + 72);
              v30 = *(_DWORD *)(a1 + 76);
              v31 = *(_DWORD *)(a1 + 80);
              v27[8] = *(_DWORD *)(a1 + 68);
              v27[9] = v29;
              v27[10] = v30;
              v27[11] = v31;
              v32 = *(_DWORD *)(a1 + 88);
              v33 = *(_DWORD *)(a1 + 92);
              v34 = *(_DWORD *)(a1 + 96);
              v27[12] = *(_DWORD *)(a1 + 84);
              v27[13] = v32;
              v27[14] = v33;
              v27[15] = v34;
              v35 = (_DWORD *)*a2;
              v36 = *a2 + 32;
              *a2 = v36;
              if ( v36 )
              {
                v38 = *(_DWORD *)(a1 + 100);
                v37 = (_DWORD *)(a1 + 100);
                v39 = v37[1];
                v40 = v37[2];
                v41 = v37[3];
                v35[8] = v38;
                v35[9] = v39;
                v35[10] = v40;
                v35[11] = v41;
                v42 = v37[5];
                v43 = v37[6];
                v44 = v37[7];
                v35[12] = v37[4];
                v35[13] = v42;
                v35[14] = v43;
                v35[15] = v44;
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
