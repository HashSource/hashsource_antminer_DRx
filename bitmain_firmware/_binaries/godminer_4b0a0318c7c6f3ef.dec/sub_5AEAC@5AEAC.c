int __fastcall sub_5AEAC(int a1, int *a2)
{
  int *v2; // r10
  pthread_mutex_t *v4; // r6
  size_t v6; // r2
  void *v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r12
  size_t v11; // r1
  int v12; // r7
  int v13; // r7
  _DWORD *v14; // lr
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r8
  char *v22; // r2
  unsigned int *v23; // r1
  unsigned int v24; // t1
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  void *v31; // r0
  int v32; // r3
  unsigned int v34; // [sp+4h] [bp-84h] BYREF
  int v35; // [sp+8h] [bp-80h] BYREF
  int v36; // [sp+Ch] [bp-7Ch]
  int v37; // [sp+10h] [bp-78h]
  int v38; // [sp+14h] [bp-74h]
  int v39; // [sp+18h] [bp-70h]
  int v40; // [sp+1Ch] [bp-6Ch]
  int v41; // [sp+20h] [bp-68h]
  int v42; // [sp+24h] [bp-64h]
  char v43[28]; // [sp+28h] [bp-60h] BYREF
  char v44; // [sp+44h] [bp-44h] BYREF
  int v45; // [sp+48h] [bp-40h] BYREF
  int v46; // [sp+4Ch] [bp-3Ch]
  int v47; // [sp+50h] [bp-38h]
  int v48; // [sp+54h] [bp-34h]
  int v49; // [sp+58h] [bp-30h]
  int v50; // [sp+5Ch] [bp-2Ch]
  int v51; // [sp+60h] [bp-28h]
  _DWORD v52[9]; // [sp+64h] [bp-24h] BYREF

  v2 = *(int **)(a1 + 1132);
  if ( v2 )
  {
    v4 = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v6 = a2[21];
    v7 = (void *)(a2[75] + a2[80]);
    v34 = bswap32(a2[78]);
    memcpy(v7, a2 + 78, v6);
    v8 = a2[78];
    v9 = a2[79];
    v10 = a2[21];
    a2[78] = v8 + 1;
    a2[79] = __CFADD__(v8, 1) + v9;
    v11 = a2[74];
    v2[2] = v8;
    *v2 = v10;
    v2[3] = v9;
    sha256((char *)a2[75], v11, &v45);
    sha256((char *)&v45, 0x20u, &v35);
    v12 = a2[81];
    v45 = v35;
    v46 = v36;
    v47 = v37;
    v48 = v38;
    v49 = v39;
    v50 = v40;
    v51 = v41;
    v52[0] = v42;
    if ( v12 > 0 )
    {
      v13 = 0;
      do
      {
        v14 = *(_DWORD **)(a2[82] + 4 * v13++);
        v15 = v14[1];
        v16 = v14[2];
        v17 = v14[3];
        v52[1] = *v14;
        v52[2] = v15;
        v52[3] = v16;
        v52[4] = v17;
        v18 = v14[5];
        v19 = v14[6];
        v20 = v14[7];
        v52[5] = v14[4];
        v52[6] = v18;
        v52[7] = v19;
        v52[8] = v20;
        sha256((char *)&v45, 0x40u, v43);
        sha256(v43, 0x20u, &v35);
        v21 = a2[81];
        v45 = v35;
        v46 = v36;
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v50 = v40;
        v51 = v41;
        v52[0] = v42;
      }
      while ( v21 > v13 );
    }
    v22 = &v44;
    v23 = &v34;
    do
    {
      v24 = *((_DWORD *)v22 + 1);
      v22 += 4;
      v23[1] = bswap32(v24);
      ++v23;
    }
    while ( v22 != (char *)v52 );
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    v25 = v36;
    v26 = v37;
    v27 = v38;
    *(_DWORD *)(a1 + 44) = v35;
    *(_DWORD *)(a1 + 48) = v25;
    *(_DWORD *)(a1 + 52) = v26;
    *(_DWORD *)(a1 + 56) = v27;
    v28 = v40;
    v29 = v41;
    v30 = v42;
    *(_DWORD *)(a1 + 60) = v39;
    v31 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 64) = v28;
    *(_DWORD *)(a1 + 68) = v29;
    *(_DWORD *)(a1 + 72) = v30;
    *(_QWORD *)(a1 + 1088) = *((_QWORD *)a2 + 56);
    if ( v31 )
    {
      free(v31);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    *(_DWORD *)(a1 + 1124) = _strdup((const char *)a2[395]);
    v32 = a2[90];
    *(_DWORD *)(a1 + 1100) = a2[89];
    *(_DWORD *)(a1 + 1104) = v32;
    *(_QWORD *)a1 = *a2;
    pthread_mutex_unlock(v4);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private");
    return 3;
  }
}
