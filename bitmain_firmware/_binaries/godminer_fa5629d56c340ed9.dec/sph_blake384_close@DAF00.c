int __fastcall sph_blake384_close(int a1, int a2)
{
  return sph_blake384_addbits_and_close(a1, 0, 0, a2);
}
