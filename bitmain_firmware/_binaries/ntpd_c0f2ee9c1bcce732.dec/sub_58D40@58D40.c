int __fastcall sub_58D40(_DWORD *a1, int a2)
{
  int v4; // r3
  int v5; // r2
  int v6; // r1
  _BYTE *v7; // r2

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      352,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v4 = a1[3];
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > a1[2] )
  {
    off_7C9FC("./../lib/isc/buffer.c", 353, 0, "b->used + 4 <= b->length");
    v4 = a1[3];
    v5 = v4 + 4;
  }
  v6 = a1[1];
  a1[3] = v5;
  v7 = (_BYTE *)(v6 + v4);
  *(_BYTE *)(v6 + v4) = HIBYTE(a2);
  v7[3] = a2;
  v7[1] = BYTE2(a2);
  v7[2] = BYTE1(a2);
  return BYTE1(a2);
}
