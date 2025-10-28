int __fastcall sub_58EFC(_DWORD *a1, int a2, int a3, int a4)
{
  __int16 v6; // r6
  int v7; // r1
  int v8; // r3
  int v10; // r2
  int v11; // r1
  _BYTE *v12; // r3

  v6 = a4;
  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      388,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  v7 = a1[3];
  if ( (unsigned int)(v7 + 6) > a1[2] )
  {
    off_7C9FC("./../lib/isc/buffer.c", 389, 0, "b->used + 6 <= b->length");
    v7 = a1[3];
  }
  v8 = a1[1];
  a1[3] = v7 + 2;
  *(_BYTE *)(v8 + v7) = HIBYTE(v6);
  *(_BYTE *)(v8 + v7 + 1) = v6;
  v10 = a1[3];
  v11 = a1[1];
  a1[3] = v10 + 4;
  v12 = (_BYTE *)(v11 + v10);
  *(_BYTE *)(v11 + v10) = HIBYTE(a3);
  v12[3] = a3;
  v12[1] = BYTE2(a3);
  v12[2] = BYTE1(a3);
  return BYTE1(a3);
}
