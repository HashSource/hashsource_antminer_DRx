int __fastcall sub_1442C(int *a1, int *a2)
{
  if ( !a1 )
    off_21DCC("./../lib/isc/unix/time.c", 340, 0, "t != ((void *)0)");
  if ( (unsigned int)a1[1] > 0x3B9AC9FF )
    off_21DCC("./../lib/isc/unix/time.c", 341, 2, "t->nanoseconds < 1000000000");
  if ( *a1 < 0 )
    return 41;
  *a2 = *a1;
  return 0;
}
