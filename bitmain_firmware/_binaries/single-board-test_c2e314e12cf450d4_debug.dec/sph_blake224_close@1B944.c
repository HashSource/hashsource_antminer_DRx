void *__fastcall sph_blake224_close(_DWORD *a1, int a2)
{
  return sph_blake224_addbits_and_close(a1, 0, 0, a2);
}
