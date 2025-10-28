int __fastcall sub_523C8(_DWORD *a1)
{
  FILE *v2; // r0
  int v3; // r3

  if ( !a1 || *a1 != 1229343060 )
    off_7C9FC(
      "./../lib/isc/unix/interfaceiter.c",
      307,
      0,
      "(((iter) != ((void *)0)) && (((const isc__magic_t *)(iter))->magic == ((('I') << 24 | ('F') << 16 | ('I') << 8 | ('T')))))");
  v2 = (FILE *)a1[9];
  a1[8] = 0;
  if ( v2 )
  {
    rewind(v2);
    sub_51728((int)a1);
  }
  else
  {
    a1[26] = 29;
  }
  do
  {
    v3 = sub_518E0((int)a1);
    if ( v3 != 36 )
      break;
    v3 = sub_51768((int)a1);
  }
  while ( !v3 );
  a1[62] = v3;
  return v3;
}
