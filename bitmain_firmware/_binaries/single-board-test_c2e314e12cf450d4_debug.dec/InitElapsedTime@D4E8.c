int InitElapsedTime()
{
  return gettimeofday((struct timeval *)&start_time, 0);
}
