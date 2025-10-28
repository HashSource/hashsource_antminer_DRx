int __fastcall sub_2E530(unsigned int *a1, char *s)
{
  size_t v4; // r7
  _BYTE *v5; // r0
  char *v6; // r2
  int v7; // r8
  unsigned int v8; // r3
  size_t v9; // r5
  char *v10; // r0

  v4 = strlen(s);
  v6 = (char *)a1[2];
  v5 = (_BYTE *)a1[1];
  v7 = v6 - v5;
  v8 = v6 - v5 + 12 + v4;
  if ( *a1 < v8 )
  {
    v9 = *a1 + 0x20000;
    if ( v8 > v9 )
      v9 = ((unsigned int)vcvts_n_f32_u32(v8, 0x10u) + 2) << 16;
    v10 = (char *)realloc(v5, v9);
    v6 = &v10[v7];
    *a1 = v9;
    a1[1] = (unsigned int)v10;
    a1[2] = (unsigned int)&v10[v7];
  }
  memcpy(v6, s, v4 + 1);
  a1[2] += v4;
  return 1;
}
