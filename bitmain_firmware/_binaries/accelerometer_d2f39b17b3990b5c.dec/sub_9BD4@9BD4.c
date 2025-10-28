int sub_9BD4()
{
  if ( dword_16008 >= 0 )
    return 0;
  dword_16008 = open64("/dev/kmsg", 524545);
  if ( dword_16008 >= 0 )
    return 0;
  else
    return -*_errno_location();
}
