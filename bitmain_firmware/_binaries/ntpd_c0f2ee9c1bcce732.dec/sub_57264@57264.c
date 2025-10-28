_DWORD *__fastcall sub_57264(_DWORD *result, int a2, unsigned int a3)
{
  _DWORD *v3; // r4

  v3 = result;
  if ( !result )
    result = (_DWORD *)off_7C9FC("./../lib/isc/unix/time.c", 118, 0, "t != ((void *)0)");
  if ( a3 > 0x3B9AC9FF )
    result = (_DWORD *)off_7C9FC("./../lib/isc/unix/time.c", 119, 0, "nanoseconds < 1000000000");
  *v3 = a2;
  v3[1] = a3;
  return result;
}
