unsigned int __fastcall sub_58B3C(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r2
  int v8; // r1

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      313,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  v6 = a1[3];
  v7 = v6 + 2;
  if ( (unsigned int)(v6 + 2) > a1[2] )
  {
    off_7C9FC("./../lib/isc/buffer.c", 314, 0, "b->used + 2 <= b->length");
    v6 = a1[3];
    v7 = v6 + 2;
  }
  v8 = a1[1];
  a1[3] = v7;
  *(_BYTE *)(v8 + v6) = BYTE1(a2);
  *(_BYTE *)(v8 + v6 + 1) = a2;
  return a2 >> 8;
}
