int __fastcall sub_12C84(int a1)
{
  int result; // r0

  result = fcntl(a1, 4, 2048);
  if ( result < 0 )
  {
    sub_4FE78(3, "fcntl(O_NONBLOCK) fails on fd #%d: %m", a1);
    exit(1);
  }
  return result;
}
