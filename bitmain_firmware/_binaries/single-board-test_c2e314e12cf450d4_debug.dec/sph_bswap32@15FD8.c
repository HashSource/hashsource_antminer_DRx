unsigned int __fastcall sph_bswap32(int a1)
{
  int v1; // t2

  v1 = __ROR4__(a1, 16);
  return ((v1 & 0xFF00FF) << 8) | ((v1 & 0xFF00FF00) >> 8);
}
