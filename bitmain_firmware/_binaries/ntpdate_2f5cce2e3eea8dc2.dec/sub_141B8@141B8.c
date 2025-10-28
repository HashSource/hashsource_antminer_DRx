int __fastcall sub_141B8(int *a1, int *a2, _DWORD *a3)
{
  bool v3; // zf
  int v6; // r2
  int v7; // r3
  bool v8; // zf
  unsigned int v10; // r1
  unsigned int v11; // r0
  int v12; // r3
  unsigned int v13; // r1

  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  if ( v3 || !a3 )
    off_21DCC("./../lib/isc/unix/time.c", 284, 0, "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
  if ( (unsigned int)a1[1] > 0x3B9AC9FF || (unsigned int)a2[1] > 0x3B9AC9FF )
    off_21DCC("./../lib/isc/unix/time.c", 285, 2, "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
  v6 = *a1;
  v7 = *a2;
  v8 = *a1 == *a2;
  if ( *a1 < (unsigned int)*a2 )
    return 41;
  v10 = a1[1];
  if ( v8 )
  {
    v11 = a2[1];
    if ( v10 < v11 )
      return 41;
    *a3 = 0;
  }
  else
  {
    v11 = a2[1];
    v12 = v6 - v7;
    *a3 = v12;
    if ( v10 < v11 )
    {
      *a3 = v12 - 1;
      a3[1] = v10 + 1000000000 - v11;
      return 0;
    }
  }
  v13 = v10 - v11;
  a3[1] = v13;
  return 0;
}
