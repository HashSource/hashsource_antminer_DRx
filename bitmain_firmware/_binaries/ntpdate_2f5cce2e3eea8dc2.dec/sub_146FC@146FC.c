size_t __fastcall sub_146FC(time_t *a1, char *a2, size_t a3)
{
  struct tm *v6; // r0
  size_t result; // r0
  struct tm *v8; // r0
  time_t v9; // [sp+4h] [bp-8h] BYREF

  if ( !a3 )
  {
    off_21DCC("./../lib/isc/unix/time.c", 433, 0, "len > 0");
    v9 = *a1;
    v8 = gmtime(&v9);
    strftime(a2, 0, "%Y-%m-%dT%H:%M:%SZ", v8);
    return off_21DCC("./../lib/isc/unix/time.c", 437, 2, "flen < len");
  }
  v9 = *a1;
  v6 = gmtime(&v9);
  result = strftime(a2, a3, "%Y-%m-%dT%H:%M:%SZ", v6);
  if ( a3 <= result )
    return off_21DCC("./../lib/isc/unix/time.c", 437, 2, "flen < len");
  return result;
}
