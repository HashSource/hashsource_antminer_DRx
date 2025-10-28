int __fastcall sub_14AA4(const char *a1)
{
  int *v3; // r0

  if ( !a1 )
    off_21DCC("./../lib/isc/unix/dir.c", 161, 0, "dirname != ((void *)0)");
  if ( chdir(a1) >= 0 )
    return 0;
  v3 = _errno_location();
  return sub_14CC8(*v3);
}
