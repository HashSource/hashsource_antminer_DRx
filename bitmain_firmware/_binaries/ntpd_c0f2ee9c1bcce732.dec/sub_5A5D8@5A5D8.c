int __fastcall sub_5A5D8(const char *a1, int a2, size_t size)
{
  size_t v6; // r6
  size_t v7; // r2
  int result; // r0
  char *v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3

  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/file.c", 405, 0, "dirname != ((void *)0)");
  if ( !size )
    off_7C9FC("./../lib/isc/unix/file.c", 406, 0, "length > 0U");
  if ( getcwd((char *)a2, size) )
  {
    v6 = strlen((const char *)a2);
    if ( size == v6 + 1 )
      return 19;
    if ( *(_BYTE *)(a2 + 1) )
    {
      strcpy((char *)(a2 + v6), "/");
      v6 = strlen((const char *)a2);
    }
  }
  else
  {
    v9 = (char *)*_errno_location();
    if ( v9 == (char *)34 )
      return 19;
    result = sub_598C0(v9, v10, v11, v12);
    if ( result )
      return result;
    v6 = strlen((const char *)a2);
  }
  v7 = strlen(a1);
  if ( size < v7 + v6 + 1 )
    return 19;
  memcpy((void *)(a2 + v6), a1, v7 + 1);
  return 0;
}
