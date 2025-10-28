int __fastcall sub_52534(int a1, int *a2, int a3)
{
  size_t *v3; // r7
  size_t v4; // r8
  size_t v7; // r6
  size_t v8; // r3
  size_t v9; // r10
  int v11; // lr
  int v12; // r12
  int v13; // r1
  int v14; // lr
  int v15; // r12
  int v16; // r1
  size_t v17; // r2
  int v18; // r0
  struct timeval v19; // [sp+0h] [bp-10h] BYREF
  __int64 seed; // [sp+8h] [bp-8h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v4 = *v3;
    v7 = *v3 - 6;
    v8 = *v3;
    if ( v7 >= 4 )
      v7 = 4;
    v9 = v4 - v7;
    if ( a3 && *((_BYTE *)a2 + 444) )
    {
      dword_17B050 = 0;
      gettimeofday(&v19, 0);
      LODWORD(seed) = v19.tv_usec + (_DWORD)&loc_F4240 * v19.tv_sec;
      seed = (int)seed;
      v18 = rand_r((unsigned int *)&seed);
      v8 = *v3;
      dword_17B054 = v18;
    }
    memset(v3 + 1, 0, v8);
    if ( v4 == 6 )
    {
      if ( v9 == 6 )
      {
LABEL_9:
        memcpy((void *)(a1 + 40), (const void *)a2[20], a2[19]);
        memcpy((void *)(a1 + a2[19] + 40), v3 + 1, *v3);
        v11 = a2[373];
        v12 = a2[374];
        v13 = a2[375];
        *(_DWORD *)(a1 + 1032) = a2[372];
        *(_DWORD *)(a1 + 1036) = v11;
        *(_DWORD *)(a1 + 1040) = v12;
        *(_DWORD *)(a1 + 1044) = v13;
        v14 = a2[377];
        v15 = a2[378];
        v16 = a2[379];
        *(_DWORD *)(a1 + 1048) = a2[376];
        *(_DWORD *)(a1 + 1052) = v14;
        *(_DWORD *)(a1 + 1056) = v15;
        *(_DWORD *)(a1 + 1060) = v16;
        *(_QWORD *)a1 = *a2;
        return 0;
      }
    }
    else
    {
      memcpy(v3 + 1, &dword_17B050, v7);
      ++dword_17B050;
      if ( v9 == 6 )
        goto LABEL_9;
    }
    v17 = v9 - 6;
    if ( v9 - 6 >= 4 )
      v17 = 4;
    memcpy((char *)v3 + v7 + 4, &dword_17B054, v17);
    ++dword_17B054;
    goto LABEL_9;
  }
  printf("invalid pointer(%s)!\n", "private");
  return 3;
}
