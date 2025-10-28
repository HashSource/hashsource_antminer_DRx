int __fastcall sub_573BC(__time_t *a1)
{
  int v2; // r1
  __suseconds_t v3; // r2
  int tv_usec; // r3
  int v5; // r1
  __time_t v6; // r2
  bool v7; // nf
  int result; // r0
  int *v9; // r0
  int v10; // r3
  int v11; // r1
  struct timeval v12; // [sp+0h] [bp-88h] BYREF
  char v13[128]; // [sp+8h] [bp-80h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/time.c", 150, 0, "t != ((void *)0)");
  if ( gettimeofday(&v12, 0) == -1 )
  {
    v9 = _errno_location();
    sub_57070((char *)*v9, v13, 0x80u, v10);
    sub_5166C("./../lib/isc/unix/time.c", 154, "%s", v13);
    return 34;
  }
  tv_usec = v12.tv_usec;
  if ( v12.tv_usec < 0 )
  {
    v11 = v12.tv_sec - 1;
    do
    {
      v6 = v11;
      tv_usec += 1000000;
      --v11;
    }
    while ( tv_usec < 0 );
    goto LABEL_7;
  }
  if ( v12.tv_usec > 999999 )
  {
    v5 = v12.tv_sec + 1;
    do
    {
      v6 = v5;
      tv_usec -= 1000000;
      ++v5;
    }
    while ( tv_usec > 999999 );
LABEL_7:
    v12.tv_sec = v6;
    v12.tv_usec = tv_usec;
    syslog(3, "gettimeofday returned bad tv_usec: corrected");
  }
  v7 = v12.tv_sec < 0;
  if ( v12.tv_sec < 0 )
  {
    result = 34;
  }
  else
  {
    *a1 = v12.tv_sec;
    v3 = v12.tv_usec;
    v2 = 1000;
    result = 0;
  }
  if ( !v7 )
    a1[1] = v2 * v3;
  return result;
}
