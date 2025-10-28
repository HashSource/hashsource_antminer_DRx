int __fastcall sph_blake256_close(unsigned int *a1, int a2)
{
  return sph_blake256_addbits_and_close(a1, 0, 0, a2);
}
