int __fastcall sub_2CC50(struct timespec *req)
{
  int result; // r0

  do
    result = clock_nanosleep(1, 1, req, 0);
  while ( result == 4 );
  return result;
}
