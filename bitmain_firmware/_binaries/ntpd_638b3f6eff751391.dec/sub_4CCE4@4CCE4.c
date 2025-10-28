int sub_4CCE4()
{
  double v0; // d0
  double v1; // d0
  int v2; // r1
  __time_t v3; // r3
  double v4; // d0
  __suseconds_t v5; // s15
  double v6; // d0
  struct timeval v8; // [sp+0h] [bp-14h] BYREF
  struct timeval olddelta; // [sp+8h] [bp-Ch] BYREF

  v1 = v0 + dbl_C9AE0;
  if ( v1 >= 0.0 )
  {
    v2 = 0;
  }
  else
  {
    v1 = -v1;
    v2 = 1;
  }
  v8.tv_sec = (int)v1;
  v3 = (int)v1;
  v4 = v1 - (double)(int)v1;
  v5 = (int)(dbl_C9AD8 * (double)(int)(v4 / dbl_C9AD8 + 0.5) * 1000000.0);
  v8.tv_usec = v5;
  v6 = v4 - (double)v5 / 1000000.0;
  dbl_C9AE0 = v6;
  if ( v2 )
  {
    v3 = -v3;
    v8.tv_sec = v3;
    dbl_C9AE0 = -v6;
    v8.tv_usec = -v5;
  }
  if ( !v3 && !v8.tv_usec || adjtime(&v8, &olddelta) >= 0 )
    return 1;
  sub_4FE78(3, "adj_systime: %m");
  return 0;
}
