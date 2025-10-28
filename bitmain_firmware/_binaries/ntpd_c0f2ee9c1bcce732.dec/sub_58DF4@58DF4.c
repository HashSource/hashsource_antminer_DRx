__int64 __fastcall sub_58DF4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r2

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      368,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[4];
  if ( (unsigned int)(a1[3] - v2) <= 5 )
  {
    off_7C9FC("./../lib/isc/buffer.c", 369, 0, "b->used - b->current >= 6");
    v2 = a1[4];
  }
  v3 = a1[1];
  a1[4] = v2 + 6;
  return vshld_n_s64(*(unsigned __int8 *)(v3 + v2 + 4), 8u)
       | vshld_n_s64(*(unsigned __int8 *)(v3 + v2 + 3), 0x10u)
       | vshld_n_s64(*(unsigned __int8 *)(v3 + v2 + 2), 0x18u)
       | vshld_n_s64(*(unsigned __int8 *)(v3 + v2), 0x28u)
       | vshld_n_s64(*(unsigned __int8 *)(v3 + v2 + 1), 0x20u)
       | *(unsigned __int8 *)(v3 + v2 + 5);
}
