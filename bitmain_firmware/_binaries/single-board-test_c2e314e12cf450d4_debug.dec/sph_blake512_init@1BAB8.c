void *__fastcall sph_blake512_init(int a1)
{
  return blake64_init(a1, &IV512, &salt_zero_big);
}
