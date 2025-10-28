int __fastcall sph_blake512_close(int a1, int a2)
{
  return sph_blake512_addbits_and_close(a1, 0, 0, a2);
}
