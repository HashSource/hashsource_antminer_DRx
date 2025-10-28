void *__fastcall sph_blake256_addbits_and_close(_DWORD *a1, char a2, int a3, int a4)
{
  blake32_close(a1, a2, a3, a4, 8u);
  return sph_blake256_init(a1);
}
