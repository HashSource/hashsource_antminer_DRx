int __fastcall sph_shavite512_addbits_and_close(_DWORD *a1, char a2, int a3, int a4)
{
  int *v4; // r4
  _DWORD *v6; // lr
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3

  v4 = (int *)&unk_182D08;
  sub_1370E0((int)a1, a2, a3, a4, 0x10u);
  v6 = a1 + 33;
  do
  {
    v6 += 4;
    result = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = v4[3];
    v4 += 4;
    *(v6 - 4) = result;
    *(v6 - 3) = v8;
    *(v6 - 2) = v9;
    *(v6 - 1) = v10;
  }
  while ( v4 != (int *)&unk_182D48 );
  a1[32] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  return result;
}
