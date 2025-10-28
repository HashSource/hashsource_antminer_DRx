int sub_2A7F4()
{
  struct timespec v1; // [sp+0h] [bp-8h] BYREF

  clock_gettime(1, &v1);
  return sub_2A700(&v1);
}
