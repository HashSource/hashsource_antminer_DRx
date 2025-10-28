unsigned int __fastcall sph_enc32be_aligned(unsigned int *a1, int a2)
{
  unsigned int result; // r0

  result = sph_bswap32(a2);
  *a1 = result;
  return result;
}
