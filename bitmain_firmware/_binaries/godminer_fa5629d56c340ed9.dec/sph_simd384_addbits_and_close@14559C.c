void *__fastcall sph_simd384_addbits_and_close(_DWORD *a1, char a2, int a3, int a4)
{
  void *result; // r0

  sub_1452C4(a1, a2, a3, a4, 12);
  result = memcpy(a1 + 33, &unk_1837C8, 0x80u);
  a1[66] = 0;
  a1[65] = 0;
  a1[32] = 0;
  return result;
}
