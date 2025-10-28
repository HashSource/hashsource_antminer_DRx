unsigned int __fastcall sub_57BBC(int a1)
{
  unsigned int result; // r0

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/time.c", 392, 0, "t != ((void *)0)");
  result = *(_DWORD *)(a1 + 4);
  if ( result > 0x3B9AC9FF )
  {
    off_7C9FC("./../lib/isc/unix/time.c", 394, 1, "t->nanoseconds < 1000000000");
    return *(_DWORD *)(a1 + 4);
  }
  return result;
}
