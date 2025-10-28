int __fastcall sub_383D8(int a1)
{
  bool v2; // cc
  int v3; // r2
  int v4; // r0
  int v5; // r0
  int result; // r0
  int *v7; // r0
  char *v8; // r0
  int *v9; // r0
  char *v10; // r0

  v2 = a1 <= 1;
  v3 = 950;
  v4 = a1 + 1314148400;
  if ( v2 )
    v3 = 896;
  v5 = shmget(v4, 80, v3);
  if ( v5 == -1 )
  {
    v9 = _errno_location();
    v10 = strerror(*v9);
    sub_4FE78(3, "SHM shmget (unit %d): %s", a1, v10);
    return 0;
  }
  else
  {
    result = shmat(v5, 0, 0);
    if ( result == -1 )
    {
      v7 = _errno_location();
      v8 = strerror(*v7);
      sub_4FE78(3, "SHM shmat (unit %d): %s", a1, v8);
      return 0;
    }
  }
  return result;
}
