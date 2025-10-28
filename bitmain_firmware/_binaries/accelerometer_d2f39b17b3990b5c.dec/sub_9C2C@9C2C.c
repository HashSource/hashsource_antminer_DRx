int sub_9C2C()
{
  if ( dword_16014 >= 0 )
    return 0;
  if ( getpid() == 1 )
  {
    dword_16014 = sub_98BC((int)"/dev/console", 524545);
    return dword_16014 & (dword_16014 >> 31);
  }
  else
  {
    dword_16014 = 2;
    return 0;
  }
}
