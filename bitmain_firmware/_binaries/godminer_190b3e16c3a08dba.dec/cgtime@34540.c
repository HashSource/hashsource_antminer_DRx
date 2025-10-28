int __fastcall cgtime(struct timeval *a1)
{
  return gettimeofday(a1, 0);
}
