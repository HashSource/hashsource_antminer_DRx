void *__fastcall sph_blake512_addbits_and_close(int a1, char a2, int a3, int a4)
{
  blake64_close(a1, a2, a3, a4, 8u);
  return sph_blake512_init(a1);
}
