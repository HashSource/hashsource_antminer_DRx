void *__fastcall sub_59080(_DWORD *a1, char *s)
{
  size_t v4; // r0
  int v5; // r3
  size_t v6; // r6
  void *result; // r0

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      412,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( !s )
    off_7C9FC("./../lib/isc/buffer.c", 413, 0, "source != ((void *)0)");
  v4 = strlen(s);
  v5 = a1[3];
  v6 = v4;
  if ( v4 > a1[2] - v5 )
  {
    off_7C9FC("./../lib/isc/buffer.c", 420, 0, "l <= ((b)->length - (b)->used)");
    v5 = a1[3];
  }
  result = memcpy((void *)(a1[1] + v5), s, v6);
  a1[3] += v6;
  return result;
}
