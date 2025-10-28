int __fastcall sub_2A77C(_DWORD *a1)
{
  int v2; // r3
  __time_t v3; // r2
  __time_t v4; // r4
  int v5; // r1
  int result; // r0
  struct timespec v7; // [sp+0h] [bp-Ch] BYREF

  sub_2A4E8(&v7);
  v2 = v7.tv_nsec + a1[1];
  v3 = v7.tv_sec + *a1;
  v7.tv_sec = v3;
  v7.tv_nsec = v2;
  if ( v2 <= 999999999 )
  {
    if ( v2 < 0 )
    {
      do
      {
        v2 += 1000000000;
        --v3;
      }
      while ( v2 < 0 );
      v7.tv_sec = v3;
      v7.tv_nsec = v2;
    }
  }
  else
  {
    v4 = v3 + 1;
    v5 = v2 - 1000000000;
    if ( v2 - 1000000000 > 999999999 )
    {
      v4 = v3 + 2;
      v5 = v2 - 2000000000;
    }
    v7.tv_sec = v4;
    v7.tv_nsec = v5;
  }
  do
    result = clock_nanosleep(1, 1, &v7, 0);
  while ( result == 4 );
  return result;
}
