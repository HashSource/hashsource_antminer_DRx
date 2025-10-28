_DWORD *__fastcall sub_5841C(_DWORD *result, unsigned int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  unsigned int v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3

  v4 = result;
  if ( !result || *result != 1114990113 )
    result = (_DWORD *)off_7C9FC(
                         "./../lib/isc/buffer.c",
                         138,
                         0,
                         "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
                         a4);
  v6 = v4[3];
  if ( v6 < a2 )
  {
    result = (_DWORD *)off_7C9FC("./../lib/isc/buffer.c", 139, 0, "b->used >= n");
    v6 = v4[3];
  }
  v7 = v6 - a2;
  v8 = v4[4];
  v9 = v4[5];
  v4[3] = v7;
  if ( v7 < v8 )
    v4[4] = v7;
  if ( v7 < v9 )
    v4[5] = v7;
  return result;
}
