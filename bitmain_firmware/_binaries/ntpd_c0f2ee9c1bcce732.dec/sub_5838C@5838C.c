_DWORD *__fastcall sub_5838C(_DWORD *result, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  unsigned int v6; // r3

  v4 = result;
  if ( !result || *result != 1114990113 )
    result = (_DWORD *)off_7C9FC(
                         "./../lib/isc/buffer.c",
                         126,
                         0,
                         "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
                         a4);
  v6 = a2 + v4[3];
  if ( v6 > v4[2] )
  {
    result = (_DWORD *)off_7C9FC("./../lib/isc/buffer.c", 127, 0, "b->used + n <= b->length");
    v6 = a2 + v4[3];
  }
  v4[3] = v6;
  return result;
}
