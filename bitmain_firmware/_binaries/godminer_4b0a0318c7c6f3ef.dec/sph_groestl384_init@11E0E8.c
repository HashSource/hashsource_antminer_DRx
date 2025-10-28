int __fastcall sph_groestl384_init(int a1)
{
  int v1; // r3
  _QWORD *v2; // r3
  int result; // r0

  *(_DWORD *)(a1 + 128) = 0;
  v1 = a1 + 128;
  do
  {
    *(_QWORD *)(v1 + 8) = 0;
    v1 += 8;
  }
  while ( v1 != a1 + 248 );
  v2 = (_QWORD *)(a1 + 256);
  result = a1 + 272;
  *v2 = 0x8001000000000000LL;
  *(_QWORD *)(result - 8) = 0;
  return result;
}
