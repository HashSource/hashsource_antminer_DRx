bool __fastcall sub_571D0(_DWORD *a1)
{
  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/time.c", 99, 0, "i != ((void *)0)");
  if ( a1[1] > 0x3B9AC9FFu )
    off_7C9FC("./../lib/isc/unix/time.c", 100, 2, "i->nanoseconds < 1000000000");
  return !*a1 && a1[1] == 0;
}
