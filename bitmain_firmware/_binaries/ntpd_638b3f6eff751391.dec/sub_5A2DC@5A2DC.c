int __fastcall sub_5A2DC(const char *a1, char *a2, int a3, int a4)
{
  int result; // r0
  int *v5; // r0
  int v6; // r1
  int v7; // r2

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 322, 0, "oldname != ((void *)0)");
  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/file.c", 323, 0, "newname != ((void *)0)");
  result = rename(a1, a2);
  if ( result )
  {
    v5 = _errno_location();
    return sub_598C0((char *)*v5, v6, v7, a4);
  }
  return result;
}
