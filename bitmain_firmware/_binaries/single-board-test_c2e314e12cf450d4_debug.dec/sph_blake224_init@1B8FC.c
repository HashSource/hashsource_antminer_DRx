void *__fastcall sph_blake224_init(_DWORD *a1)
{
  return blake32_init(a1, &IV224, &salt_zero_small);
}
