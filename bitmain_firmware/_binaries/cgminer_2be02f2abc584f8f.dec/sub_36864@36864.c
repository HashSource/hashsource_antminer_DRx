int __fastcall sub_36864(int a1, char *s)
{
  size_t v4; // r5
  void *v5; // r0
  int v6; // r8
  unsigned int v7; // r3
  size_t v8; // r7
  char *v9; // r0

  v4 = strlen(s);
  v5 = *(void **)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 8) - (_DWORD)v5;
  v7 = v6 + 12 + v4;
  if ( v7 > *(_DWORD *)a1 )
  {
    v8 = *(_DWORD *)a1 + 0x20000;
    if ( v7 > v8 )
      v8 = ((unsigned int)vcvts_n_f32_u32(v7, 0x10u) + 2) << 16;
    v9 = (char *)realloc(v5, v8);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = &v9[v6];
    *(_DWORD *)a1 = v8;
  }
  memcpy(*(void **)(a1 + 8), s, v4 + 1);
  *(_DWORD *)(a1 + 8) += v4;
  return 1;
}
