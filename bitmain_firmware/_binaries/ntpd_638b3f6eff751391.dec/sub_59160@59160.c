int __fastcall sub_59160(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r3
  size_t v7; // r2

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      432,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  if ( !a2 )
    off_7C9FC("./../lib/isc/buffer.c", 433, 0, "r != ((void *)0)");
  v6 = a1[3];
  v7 = *(_DWORD *)(a2 + 4);
  if ( a1[2] - v6 < v7 )
    return 19;
  memcpy((void *)(a1[1] + v6), *(const void **)a2, v7);
  a1[3] += *(_DWORD *)(a2 + 4);
  return 0;
}
