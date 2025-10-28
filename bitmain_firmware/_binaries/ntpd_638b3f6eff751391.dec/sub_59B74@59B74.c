int __fastcall sub_59B74(const char *a1, struct stat *stat_buf, int a3, int a4)
{
  int result; // r0
  int *v7; // r0
  int v8; // r1
  int v9; // r2

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 90, 0, "file != ((void *)0)");
  if ( !stat_buf )
    off_7C9FC("./../lib/isc/unix/file.c", 91, 0, "stats != ((void *)0)");
  result = _xstat(3, a1, stat_buf);
  if ( result )
  {
    v7 = _errno_location();
    return sub_598C0((char *)*v7, v8, v9, a4);
  }
  return result;
}
