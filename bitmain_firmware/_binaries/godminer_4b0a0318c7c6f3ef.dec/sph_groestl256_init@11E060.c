int __fastcall sph_groestl256_init(int result)
{
  _QWORD *v1; // r3

  v1 = (_QWORD *)(result + 72);
  *(_DWORD *)(result + 64) = 0;
  do
    *v1++ = 0;
  while ( v1 != (_QWORD *)(result + 128) );
  *(_QWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 128) = 0x1000000000000LL;
  return result;
}
