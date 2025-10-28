int __fastcall sph_enc64be_aligned(__int64 *a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r0

  v4 = sph_bswap64(a3, a4);
  *a1 = v4;
  return v4;
}
