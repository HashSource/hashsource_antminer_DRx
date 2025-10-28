int __fastcall sub_57794(int *a1, int *a2, int *a3)
{
  bool v3; // zf
  int v7; // r3
  int v8; // r2
  int v9; // r12
  int v10; // r1
  int v11; // r3
  unsigned int v12; // r1

  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  if ( v3 || !a3 )
    off_7C9FC("./../lib/isc/unix/time.c", 257, 0, "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
  if ( (unsigned int)a1[1] > 0x3B9AC9FF || (unsigned int)a2[1] > 0x3B9AC9FF )
  {
    off_7C9FC("./../lib/isc/unix/time.c", 258, 2, "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
    v7 = *a1;
    v8 = *a2;
    if ( *a1 >= 0 )
    {
LABEL_8:
      if ( v8 >= 0 )
        goto LABEL_9;
    }
  }
  else
  {
    v7 = *a1;
    v8 = *a2;
    if ( *a1 >= 0 )
      goto LABEL_8;
  }
  if ( (int)(((unsigned int)v8 + (unsigned __int64)(unsigned int)v7) >> 32) >= 1 )
    return 41;
LABEL_9:
  v9 = a2[1];
  v10 = a1[1];
  v11 = v8 + v7;
  *a3 = v11;
  v12 = v9 + v10;
  a3[1] = v12;
  if ( v12 > 0x3B9AC9FF )
  {
    *a3 = v11 + 1;
    a3[1] = v12 - 1000000000;
  }
  return 0;
}
