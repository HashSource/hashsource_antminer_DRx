int __fastcall sub_576C8(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r2
  unsigned int v6; // r2
  unsigned int v7; // r3

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  v5 = !v4;
  if ( v4 )
    off_7C9FC("./../lib/isc/unix/time.c", 240, v5, "t1 != ((void *)0) && t2 != ((void *)0)");
  if ( a1[1] > 0x3B9AC9FFu || a2[1] > 0x3B9AC9FFu )
    off_7C9FC("./../lib/isc/unix/time.c", 241, 2, "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000", a4);
  if ( *a1 >= *a2 )
  {
    if ( *a1 > *a2 )
      return 1;
    v6 = a1[1];
    v7 = a2[1];
    if ( v6 >= v7 )
      return v6 > v7;
  }
  return -1;
}
