size_t __fastcall sub_57D40(time_t *a1, char *a2, size_t a3)
{
  struct tm *v6; // r0
  size_t result; // r0
  struct tm *v8; // r0
  time_t v9; // [sp+4h] [bp-8h] BYREF

  if ( !a3 )
  {
    off_7C9FC("./../lib/isc/unix/time.c", 421, 0, "len > 0");
    v9 = *a1;
    v8 = gmtime(&v9);
    strftime(a2, 0, "%a, %d %b %Y %H:%M:%S GMT", v8);
    return off_7C9FC("./../lib/isc/unix/time.c", 425, 2, "flen < len");
  }
  v9 = *a1;
  v6 = gmtime(&v9);
  result = strftime(a2, a3, "%a, %d %b %Y %H:%M:%S GMT", v6);
  if ( a3 <= result )
    return off_7C9FC("./../lib/isc/unix/time.c", 425, 2, "flen < len");
  return result;
}
