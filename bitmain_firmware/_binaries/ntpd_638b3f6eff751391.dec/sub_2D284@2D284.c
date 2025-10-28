int sub_2D284()
{
  __time_t tv_sec; // r3

  getitimer(0, &new);
  tv_sec = new.it_value.tv_sec;
  if ( new.it_value.tv_sec > 1u )
  {
    tv_sec = 1;
    new.it_value.tv_sec = 1;
  }
  if ( new.it_value.tv_usec < 0 )
    new.it_value.tv_usec = 0;
  if ( !tv_sec && !new.it_value.tv_usec )
  {
    new.it_value.tv_usec = 0;
    new.it_value.tv_sec = 1;
  }
  new.it_interval.tv_usec = 0;
  new.it_interval.tv_sec = 1;
  return setitimer(0, &new, 0);
}
