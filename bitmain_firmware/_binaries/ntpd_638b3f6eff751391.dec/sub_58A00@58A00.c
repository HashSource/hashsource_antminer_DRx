_DWORD *__fastcall sub_58A00(_DWORD *result, char a2, int a3, int a4)
{
  int v5; // r3
  int v6; // r1

  if ( !result || *result != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      284,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  v5 = result[3];
  if ( (unsigned int)(v5 + 1) > result[2] )
    off_7C9FC("./../lib/isc/buffer.c", 285, 0, "b->used + 1 <= b->length");
  v6 = result[1];
  result[3] = v5 + 1;
  *(_BYTE *)(v6 + v5) = a2;
  return result;
}
