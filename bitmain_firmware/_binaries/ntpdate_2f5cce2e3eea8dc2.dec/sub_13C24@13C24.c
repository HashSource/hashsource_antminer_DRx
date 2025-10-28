bool __fastcall sub_13C24(_DWORD *a1)
{
  if ( !a1 )
    off_21DCC("./../lib/isc/unix/time.c", 135, 0, "t != ((void *)0)");
  if ( a1[1] > 0x3B9AC9FFu )
    off_21DCC("./../lib/isc/unix/time.c", 136, 2, "t->nanoseconds < 1000000000");
  return !*a1 && a1[1] == 0;
}
