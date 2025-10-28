_DWORD *__fastcall sub_58130(_DWORD *result)
{
  _DWORD *v1; // r4

  v1 = result;
  if ( !result || *result != 1114990113 )
    result = (_DWORD *)off_7C9FC(
                         "./../lib/isc/buffer.c",
                         77,
                         0,
                         "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  if ( v1[6] != -1 )
    result = (_DWORD *)off_7C9FC("./../lib/isc/buffer.c", 78, 0, "!((void *)((b)->link.prev) != (void *)(-1))");
  if ( v1[8] )
    result = (_DWORD *)off_7C9FC("./../lib/isc/buffer.c", 79, 0, "b->mctx == ((void *)0)");
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  return result;
}
