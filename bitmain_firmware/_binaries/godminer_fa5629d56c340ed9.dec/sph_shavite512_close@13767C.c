int __fastcall sph_shavite512_close(_DWORD *a1, int a2)
{
  int *v2; // r4
  _DWORD *v4; // lr
  int result; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3

  v2 = (int *)&unk_182D08;
  sub_1370E0((int)a1, 0, 0, a2, 0x10u);
  v4 = a1 + 33;
  do
  {
    v4 += 4;
    result = *v2;
    v6 = v2[1];
    v7 = v2[2];
    v8 = v2[3];
    v2 += 4;
    *(v4 - 4) = result;
    *(v4 - 3) = v6;
    *(v4 - 2) = v7;
    *(v4 - 1) = v8;
  }
  while ( v2 != (int *)&unk_182D48 );
  a1[32] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  return result;
}
