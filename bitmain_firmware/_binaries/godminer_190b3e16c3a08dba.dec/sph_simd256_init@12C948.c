int __fastcall sph_simd256_init(_DWORD *a1)
{
  int *v2; // r4
  _DWORD *v3; // lr
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v2 = (int *)&unk_167978;
  v3 = a1 + 17;
  do
  {
    v3 += 4;
    result = *v2;
    v5 = v2[1];
    v6 = v2[2];
    v7 = v2[3];
    v2 += 4;
    *(v3 - 4) = result;
    *(v3 - 3) = v5;
    *(v3 - 2) = v6;
    *(v3 - 1) = v7;
  }
  while ( v2 != (int *)&unk_1679B8 );
  a1[34] = 0;
  a1[33] = 0;
  a1[16] = 0;
  return result;
}
