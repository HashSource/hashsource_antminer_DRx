bool __fastcall sub_57328(_DWORD *a1)
{
  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/time.c", 135, 0, "t != ((void *)0)");
  if ( a1[1] > 0x3B9AC9FFu )
    off_7C9FC("./../lib/isc/unix/time.c", 136, 2, "t->nanoseconds < 1000000000");
  return !*a1 && a1[1] == 0;
}
