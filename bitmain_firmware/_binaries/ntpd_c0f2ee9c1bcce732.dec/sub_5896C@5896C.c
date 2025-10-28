int __fastcall sub_5896C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r2

  if ( !a1 || *a1 != 1114990113 )
    off_7C9FC(
      "./../lib/isc/buffer.c",
      272,
      0,
      "(((b) != ((void *)0)) && (((const isc__magic_t *)(b))->magic == (0x42756621U)))");
  v2 = a1[4];
  if ( a1[3] == v2 )
  {
    off_7C9FC("./../lib/isc/buffer.c", 273, 0, "b->used - b->current >= 1");
    v2 = a1[4];
  }
  v3 = a1[1];
  a1[4] = v2 + 1;
  return *(unsigned __int8 *)(v3 + v2);
}
