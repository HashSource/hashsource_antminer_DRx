_DWORD *__fastcall sub_57154(_DWORD *result, int a2, unsigned int a3)
{
  if ( !result )
    off_7C9FC("./../lib/isc/unix/time.c", 90, 0, "i != ((void *)0)");
  if ( a3 > 0x3B9AC9FF )
    off_7C9FC("./../lib/isc/unix/time.c", 91, 0, "nanoseconds < 1000000000");
  *result = a2;
  result[1] = a3;
  return result;
}
