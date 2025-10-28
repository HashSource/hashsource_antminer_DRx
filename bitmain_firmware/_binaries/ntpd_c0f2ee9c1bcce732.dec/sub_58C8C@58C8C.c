unsigned int __fastcall sub_58C8C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r1

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      337,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[4];
  if ( (unsigned int)(a1[3] - v2) <= 3 )
  {
    off_7C9FC("./../lib/isc/buffer.c", 338, 0, "b->used - b->current >= 4");
    v2 = a1[4];
  }
  v3 = a1[1];
  a1[4] = v2 + 4;
  return _byteswap_ulong(*(_DWORD *)(v3 + v2));
}
