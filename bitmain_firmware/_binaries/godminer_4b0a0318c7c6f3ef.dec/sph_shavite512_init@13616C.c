int __fastcall sph_shavite512_init(_DWORD *a1)
{
  int *v2; // r4
  _DWORD *v3; // lr
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v2 = (int *)&unk_1813E0;
  v3 = a1 + 33;
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
  while ( v2 != (int *)&unk_181420 );
  a1[32] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  return result;
}
