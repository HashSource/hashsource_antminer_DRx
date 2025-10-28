void *__fastcall sph_simd384_init(_DWORD *a1)
{
  void *result; // r0

  result = memcpy(a1 + 33, &unk_1679B8, 0x80u);
  a1[66] = 0;
  a1[65] = 0;
  a1[32] = 0;
  return result;
}
