_DWORD *__fastcall sub_58274(_DWORD *result, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r5
  int v6; // r3

  v4 = result;
  if ( !result || *result != 1114990113 )
    result = (_DWORD *)off_7C9FC(
                         "./../lib/isc/buffer.c",
                         102,
                         0,
                         "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
                         a4);
  if ( !a2 )
    result = (_DWORD *)off_7C9FC("./../lib/isc/buffer.c", 103, 0, "r != ((void *)0)");
  v6 = v4[3];
  *a2 = v4[1];
  a2[1] = v6;
  return result;
}
