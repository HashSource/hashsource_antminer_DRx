int __fastcall sub_52468(_DWORD *a1)
{
  int v2; // r3

  if ( !a1 || *a1 != 1229343060 )
    off_7C9FC(
      "./../lib/isc/unix/interfaceiter.c",
      326,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('T')))))");
  if ( a1[62] )
    off_7C9FC("./../lib/isc/unix/interfaceiter.c", 327, 0, "iter->result == 0");
  do
  {
    v2 = sub_51768((int)a1);
    if ( v2 )
      break;
    v2 = sub_518E0((int)a1);
  }
  while ( v2 == 36 );
  a1[62] = v2;
  return v2;
}
