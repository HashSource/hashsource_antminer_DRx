int __fastcall sub_58BE0(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int v10; // r2

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      321,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))",
      a4);
  v6 = a1[3];
  v7 = v6 + 3;
  if ( (unsigned int)(v6 + 3) > a1[2] )
  {
    off_7C9FC("./../lib/isc/buffer.c", 322, 0, "b->used + 3 <= b->length");
    v6 = a1[3];
    v7 = v6 + 3;
  }
  v8 = a1[1];
  a1[3] = v7;
  v10 = v8 + v6;
  *(_BYTE *)(v8 + v6) = BYTE2(a2);
  *(_BYTE *)(v10 + 2) = a2;
  *(_BYTE *)(v10 + 1) = BYTE1(a2);
  return BYTE1(a2);
}
