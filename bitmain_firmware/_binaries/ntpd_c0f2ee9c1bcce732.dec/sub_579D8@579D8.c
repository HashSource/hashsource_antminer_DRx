__int64 __fastcall sub_579D8(unsigned int *a1, unsigned int *a2)
{
  bool v2; // zf
  int v3; // r2
  unsigned int v6; // r0
  unsigned int v7; // r2
  unsigned __int64 v8; // r0
  __int64 v9; // d16
  unsigned __int64 v10; // r2

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = !v2;
  if ( v2 )
    off_7C9FC("./../lib/isc/unix/time.c", 308, v3, "t1 != ((void *)0) && t2 != ((void *)0)");
  v6 = a1[1];
  if ( v6 > 0x3B9AC9FF || (v7 = a2[1], v7 > 0x3B9AC9FF) )
  {
    off_7C9FC("./../lib/isc/unix/time.c", 309, 2, "t1->nanoseconds < 1000000000 && t2->nanoseconds < 1000000000");
    v6 = a1[1];
    v7 = a2[1];
  }
  v8 = 1000000000LL * *a1 + v6;
  v9 = 0;
  v10 = 1000000000LL * *a2 + v7;
  if ( v10 < v8 )
    return sub_5AA24((int)v8 - (int)v10, (v8 - v10) >> 32, 1000, 0);
  return v9;
}
