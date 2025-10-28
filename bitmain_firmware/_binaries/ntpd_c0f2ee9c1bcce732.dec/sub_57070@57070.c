int __fastcall sub_57070(char *errnum, char *a2, size_t a3, int a4)
{
  bool v7; // zf
  const char *v8; // r2
  char *v9; // r3
  int result; // r0

  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/strerror.c", 55, 0, "buf != ((void *)0)");
  if ( dword_C9C7C )
  {
    v7 = dword_C9C80++ == 0;
    if ( !v7 )
      sub_516D8("./../lib/isc/unix/strerror.c", 59, "((*((&isc_strerror_lock)))++ == 0 ? 0 : 34) == 0");
  }
  else
  {
    dword_C9C7C = 1;
    dword_C9C80 = 1;
  }
  v9 = strerror((int)errnum);
  v7 = v9 == 0;
  if ( v9 )
    v8 = "%s";
  else
    v9 = errnum;
  if ( v7 )
    v8 = "Unknown error: %u";
  result = snprintf(a2, a3, v8, v9, a4);
  if ( --dword_C9C80 )
    sub_516D8("./../lib/isc/unix/strerror.c", 65, "(--(*((&isc_strerror_lock))) == 0 ? 0 : 34) == 0");
  return result;
}
