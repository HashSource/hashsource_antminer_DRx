int __fastcall sub_59B40(int a1, int *a2, int a3)
{
  size_t *v4; // r1
  size_t v6; // r6
  void *v7; // r0
  void *v8; // r3
  int v9; // r6
  int v10; // r6
  _DWORD *v11; // lr
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r7
  char *v19; // r2
  int *v20; // r1
  unsigned int v21; // t1
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r12
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int v34; // r3
  size_t v36; // r2
  int v37; // [sp+0h] [bp-84h] BYREF
  int v38; // [sp+4h] [bp-80h]
  int v39; // [sp+8h] [bp-7Ch]
  int v40; // [sp+Ch] [bp-78h]
  int v41; // [sp+10h] [bp-74h]
  int v42; // [sp+14h] [bp-70h]
  int v43; // [sp+18h] [bp-6Ch]
  int v44; // [sp+1Ch] [bp-68h]
  char v45[28]; // [sp+20h] [bp-64h] BYREF
  char v46; // [sp+3Ch] [bp-48h] BYREF
  int v47; // [sp+40h] [bp-44h] BYREF
  int v48; // [sp+44h] [bp-40h]
  int v49; // [sp+48h] [bp-3Ch]
  int v50; // [sp+4Ch] [bp-38h]
  int v51; // [sp+50h] [bp-34h]
  int v52; // [sp+54h] [bp-30h]
  int v53; // [sp+58h] [bp-2Ch]
  _DWORD v54[10]; // [sp+5Ch] [bp-28h] BYREF

  v4 = *(size_t **)(a1 + 1132);
  if ( v4 )
  {
    v6 = *v4;
    if ( a3 && *((_BYTE *)a2 + 444) )
      *(_QWORD *)&dword_197A28 = 0;
    v7 = memset(v4 + 1, 0, v6);
    v8 = v7;
    if ( v6 )
    {
      if ( v6 >= 8 )
        v36 = 8;
      else
        v36 = v6;
      v8 = memcpy(v7, &dword_197A28, v36);
      ++*(_QWORD *)&dword_197A28;
    }
    memcpy((void *)(a2[75] + a2[22]), v8, v6);
    sha256((char *)a2[75], a2[74], &v47);
    sha256((char *)&v47, 0x20u, &v37);
    v9 = a2[81];
    v47 = v37;
    v48 = v38;
    v49 = v39;
    v50 = v40;
    v51 = v41;
    v52 = v42;
    v53 = v43;
    v54[0] = v44;
    if ( v9 > 0 )
    {
      v10 = 0;
      do
      {
        v11 = *(_DWORD **)(a2[82] + 4 * v10++);
        v12 = v11[1];
        v13 = v11[2];
        v14 = v11[3];
        v54[1] = *v11;
        v54[2] = v12;
        v54[3] = v13;
        v54[4] = v14;
        v15 = v11[5];
        v16 = v11[6];
        v17 = v11[7];
        v54[5] = v11[4];
        v54[6] = v15;
        v54[7] = v16;
        v54[8] = v17;
        sha256((char *)&v47, 0x40u, v45);
        sha256(v45, 0x20u, &v37);
        v18 = a2[81];
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v50 = v40;
        v51 = v41;
        v52 = v42;
        v53 = v43;
        v54[0] = v44;
      }
      while ( v18 > v10 );
    }
    v19 = &v46;
    v20 = &v37 - 1;
    do
    {
      v21 = *((_DWORD *)v19 + 1);
      v19 += 4;
      v20[1] = bswap32(v21);
      ++v20;
    }
    while ( v54 != (_DWORD *)v19 );
    memcpy((void *)(a1 + 8), a2 + 116, 0x50u);
    v22 = v38;
    v23 = v39;
    v24 = v40;
    *(_DWORD *)(a1 + 44) = v37;
    *(_DWORD *)(a1 + 48) = v22;
    *(_DWORD *)(a1 + 52) = v23;
    *(_DWORD *)(a1 + 56) = v24;
    v25 = v42;
    v26 = v43;
    v27 = v44;
    v28 = 0;
    *(_DWORD *)(a1 + 60) = v41;
    *(_DWORD *)(a1 + 64) = v25;
    *(_DWORD *)(a1 + 68) = v26;
    *(_DWORD *)(a1 + 72) = v27;
    v29 = a2[373];
    v30 = a2[374];
    v31 = a2[375];
    *(_DWORD *)(a1 + 1032) = a2[372];
    *(_DWORD *)(a1 + 1036) = v29;
    *(_DWORD *)(a1 + 1040) = v30;
    *(_DWORD *)(a1 + 1044) = v31;
    v32 = a2[376];
    v33 = a2[377];
    v34 = a2[379];
    *(_DWORD *)(a1 + 1056) = a2[378];
    *(_DWORD *)(a1 + 1048) = v32;
    *(_DWORD *)(a1 + 1052) = v33;
    *(_DWORD *)(a1 + 1060) = v34;
    *(_DWORD *)(a1 + 1100) = a2[89];
    *(_QWORD *)a1 = *a2;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
  return v28;
}
