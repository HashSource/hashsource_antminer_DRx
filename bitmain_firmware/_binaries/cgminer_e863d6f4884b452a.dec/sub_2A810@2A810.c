int sub_2A810()
{
  struct timespec v1; // [sp+0h] [bp-Ch] BYREF

  clock_gettime(1, &v1);
  return sub_2A77C(&v1);
}
