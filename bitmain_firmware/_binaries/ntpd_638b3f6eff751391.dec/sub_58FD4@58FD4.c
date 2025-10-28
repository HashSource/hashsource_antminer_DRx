void *__fastcall sub_58FD4(_DWORD *a1, void *src, size_t n)
{
  int v5; // r3
  void *result; // r0

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      401,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v5 = a1[3];
  if ( n + v5 > a1[2] )
    off_7C9FC("./../lib/isc/buffer.c", 402, 0, "b->used + length <= b->length");
  result = memcpy((void *)(a1[1] + v5), src, n);
  a1[3] += n;
  return result;
}
