void *__fastcall sph_blake384_init(int a1)
{
  return blake64_init(a1, &IV384, &salt_zero_big);
}
