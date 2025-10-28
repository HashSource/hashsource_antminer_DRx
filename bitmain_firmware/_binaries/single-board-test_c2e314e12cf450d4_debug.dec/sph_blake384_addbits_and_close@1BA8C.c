void *__fastcall sph_blake384_addbits_and_close(int a1, char a2, int a3, int a4)
{
  blake64_close(a1, a2, a3, a4, 6u);
  return sph_blake384_init(a1);
}
