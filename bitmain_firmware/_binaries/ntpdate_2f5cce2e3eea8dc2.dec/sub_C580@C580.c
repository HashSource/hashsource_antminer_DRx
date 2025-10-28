int sub_C580()
{
  double v0; // d0
  double v1; // d16
  int v2; // r6
  int v3; // s18
  unsigned int v4; // s19
  __time_t tv_sec; // r4
  int v6; // r2
  int v7; // r3
  int v8; // r3
  __time_t v9; // r2
  int v11; // r3
  __time_t v12; // r2
  __time_t v13; // [sp+8h] [bp-310h] BYREF
  int v14; // [sp+Ch] [bp-30Ch]
  struct timespec tp; // [sp+10h] [bp-308h] BYREF
  _BYTE s[768]; // [sp+18h] [bp-300h] BYREF

  v1 = v0 + dbl_23FC0;
  if ( v0 + dbl_23FC0 >= 0.0 )
  {
    v2 = 0;
  }
  else
  {
    v1 = -v1;
    v2 = 1;
  }
  v3 = (int)v1;
  clock_gettime(0, &tp);
  tv_sec = tp.tv_sec;
  v6 = tp.tv_nsec >> 31;
  v13 = tp.tv_sec;
  v7 = tp.tv_nsec / 1000;
  if ( !dword_21F80 )
    v6 = tp.tv_sec;
  v14 = tp.tv_nsec / 1000;
  if ( dword_21F80 )
  {
    printf("step_systime: step %.6f residual %.6f\n", v0, dbl_23FC0);
    v6 = v13;
    v7 = v14;
  }
  v4 = (unsigned int)((v1 - (double)(int)v1) * 1000000.0 + 0.5);
  if ( v2 )
  {
    v8 = v7 - v4;
    v14 = v8;
    v9 = v6 - v3;
    v13 = v9;
    if ( v8 < 0 )
    {
      v13 = v9 - 1;
      v14 = v8 + 1000000;
    }
  }
  else
  {
    v11 = v4 + v7;
    v14 = v11;
    if ( v11 > 999999 )
      v14 = v11 - 1000000;
    v12 = v3 + v6;
    v13 = v12;
    if ( v11 > 999999 )
      v13 = v12 + 1;
  }
  if ( sub_DB3C(&v13, 0) )
  {
    sub_E15C(3, "step-systime: %m");
    return 0;
  }
  else
  {
    dbl_23FC0 = 0.0;
    if ( tv_sec != v13 )
      memset(s, 0, sizeof(s));
    return 1;
  }
}
