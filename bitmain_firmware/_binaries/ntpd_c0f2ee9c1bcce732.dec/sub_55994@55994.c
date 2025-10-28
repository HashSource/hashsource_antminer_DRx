void *__fastcall sub_55994(int a1, char *a2, size_t n)
{
  size_t v3; // r3
  size_t v5; // r2
  bool v6; // cc
  unsigned int v7; // r8
  char *v9; // r4
  int v10; // r0
  unsigned int v11; // r7
  char *v12; // r8
  unsigned int v13; // r9
  char *v14; // r4
  char *v15; // r12
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r5
  int v20; // lr
  unsigned int v21; // r3
  void *v22; // r0
  size_t v23; // r2

  v3 = *(_DWORD *)(a1 + 16);
  v5 = n + v3;
  *(_DWORD *)(a1 + 16) = v5;
  v6 = v3 > v5;
  v7 = 64 - (v3 & 0x3F);
  if ( v3 > v5 )
    v5 = *(_DWORD *)(a1 + 20);
  v9 = a2;
  if ( v6 )
    *(_DWORD *)(a1 + 20) = v5 + 1;
  v10 = a1 + 88;
  if ( n < v7 )
  {
    v22 = (void *)(v10 - v7);
    v23 = n;
  }
  else
  {
    v11 = n - v7;
    memcpy((void *)(v10 - v7), a2, 64 - (v3 & 0x3F));
    v12 = &v9[v7];
    sub_54EFC((unsigned __int8 *)(a1 + 24), 16);
    sub_54F30((_DWORD *)a1, (int *)(a1 + 24));
    if ( v11 > 0x3F )
    {
      v13 = v11;
      v14 = v12;
      do
      {
        v15 = v14 + 64;
        v16 = (_DWORD *)(a1 + 24);
        do
        {
          v17 = *(_DWORD *)v14;
          v18 = *((_DWORD *)v14 + 1);
          v19 = *((_DWORD *)v14 + 2);
          v20 = *((_DWORD *)v14 + 3);
          v14 += 16;
          *v16 = v17;
          v16[1] = v18;
          v16[2] = v19;
          v16[3] = v20;
          v16 += 4;
        }
        while ( v14 != v15 );
        sub_54EFC((unsigned __int8 *)(a1 + 24), 16);
        v13 -= 64;
        sub_54F30((_DWORD *)a1, (int *)(a1 + 24));
      }
      while ( v13 > 0x3F );
      v21 = v11 - 64;
      v11 &= 0x3Fu;
      v12 += (v21 & 0xFFFFFFC0) + 64;
    }
    v22 = (void *)(a1 + 24);
    a2 = v12;
    v23 = v11;
  }
  return memcpy(v22, a2, v23);
}
