int __fastcall sub_ACE4(__time_t a1, __time_t a2)
{
  struct itimerval v3; // [sp+0h] [bp-14h] BYREF

  v3.it_interval.tv_sec = a1;
  v3.it_value.tv_sec = a2;
  v3.it_interval.tv_usec = 0;
  v3.it_value.tv_usec = 0;
  return setitimer(0, &v3, 0);
}
