void __fastcall sub_592E8(_DWORD **a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r4

  if ( !a1 )
    off_7C9FC("./../lib/isc/buffer.c", 476, 0, "dynbuffer != ((void *)0)");
  v5 = *a1;
  if ( !*a1 || *v5 != 1114990113 )
  {
    off_7C9FC(
      "./../lib/isc/buffer.c",
      477,
      0,
      "(((*dynbuffer) != ((void *)0)) && (((const isc__magic_t *)(*dynbuffer))->magic == (0x42756621U)))",
      a4);
    v5 = *a1;
  }
  if ( !v5[8] )
  {
    off_7C9FC("./../lib/isc/buffer.c", 478, 0, "(*dynbuffer)->mctx != ((void *)0)");
    v5 = *a1;
  }
  *a1 = 0;
  v5[8] = 0;
  sub_58130(v5);
  free(v5);
}
