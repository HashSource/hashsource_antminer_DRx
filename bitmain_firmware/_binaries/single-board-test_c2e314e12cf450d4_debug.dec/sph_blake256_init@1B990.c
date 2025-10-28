void *__fastcall sph_blake256_init(_DWORD *a1)
{
  return blake32_init(a1, &IV256, &salt_zero_small);
}
