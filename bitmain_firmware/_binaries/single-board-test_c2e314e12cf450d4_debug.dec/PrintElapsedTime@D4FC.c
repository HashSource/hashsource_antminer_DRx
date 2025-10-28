int __fastcall PrintElapsedTime(const char *a1)
{
  gettimeofday((struct timeval *)&end_time, 0);
  diff_time = end_time - start_time;
  dword_235C38 = dword_235C30 - dword_235C28;
  if ( dword_235C30 - dword_235C28 < 0 )
  {
    --diff_time;
    dword_235C38 += 1000000;
  }
  return printf("Timestamp %s : %d sec\n", a1, diff_time);
}
