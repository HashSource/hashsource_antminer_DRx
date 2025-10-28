int __fastcall sub_5A284(const char *a1)
{
  int result; // r0
  int *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/file.c", 309, 0, "filename != ((void *)0)");
  result = unlink(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_598C0((char *)*v2, v3, v4, v5);
  }
  return result;
}
