int __fastcall sub_574DC(_DWORD *a1, int *a2)
{
  int tv_usec; // r3
  int v5; // r12
  __time_t v6; // r2
  int result; // r0
  int v8; // r2
  int v9; // r12
  __suseconds_t v10; // r1
  int v11; // r3
  unsigned int v12; // r1
  int *v13; // r0
  int v14; // r3
  int v15; // r2
  __time_t v16; // r1
  struct timeval v17; // [sp+0h] [bp-8Ch] BYREF
  char v18[132]; // [sp+8h] [bp-84h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/time.c", 192, 0, "t != ((void *)0)");
  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/time.c", 193, 0, "i != ((void *)0)");
  if ( (unsigned int)a2[1] > 0x3B9AC9FF )
    off_7C9FC("./../lib/isc/unix/time.c", 194, 2, "i->nanoseconds < 1000000000");
  if ( gettimeofday(&v17, 0) == -1 )
  {
    v13 = _errno_location();
    sub_57070((char *)*v13, v18, 0x80u, v14);
    sub_5166C("./../lib/isc/unix/time.c", 198, "%s", v18);
    return 34;
  }
  tv_usec = v17.tv_usec;
  if ( v17.tv_usec < 0 )
  {
    v15 = v17.tv_sec - 1;
    do
    {
      v16 = v15;
      tv_usec += 1000000;
      --v15;
    }
    while ( tv_usec < 0 );
    v17.tv_sec = v16;
    v17.tv_usec = tv_usec;
  }
  else
  {
    if ( v17.tv_usec <= 999999 )
      goto LABEL_14;
    v5 = v17.tv_sec + 1;
    do
    {
      v6 = v5;
      tv_usec -= 1000000;
      ++v5;
    }
    while ( tv_usec > 999999 );
    v17.tv_sec = v6;
    v17.tv_usec = tv_usec;
  }
  syslog(3, "gettimeofday returned bad tv_usec: corrected");
LABEL_14:
  if ( v17.tv_sec < 0 )
    return 34;
  v8 = *a2;
  if ( *a2 < 0 && (int)(((unsigned __int64)(unsigned int)v8 + v17.tv_sec) >> 32) >= 1 )
    return 41;
  v9 = a2[1];
  v10 = v17.tv_usec;
  v11 = v17.tv_sec + v8;
  *a1 = v17.tv_sec + v8;
  v12 = v9 + 1000 * v10;
  if ( v12 > 0x3B9AC9FF )
  {
    *a1 = v11 + 1;
    v9 = -1000000000;
  }
  result = 0;
  a1[1] = v12;
  if ( v12 > 0x3B9AC9FF )
    a1[1] = v12 + v9;
  return result;
}
