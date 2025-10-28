__int64 __fastcall sph_dec64be_aligned(unsigned int *a1)
{
  return sph_bswap64(*a1, a1[1]);
}
