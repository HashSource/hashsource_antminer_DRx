int __fastcall sub_18E44(int a1)
{
  int result; // r0

  result = sub_4FE78(5, "ntpd exiting on signal %d", a1);
  if ( a1 )
  {
    if ( a1 != 7 )
      exit(0);
    puts("\nfinish(SIGBUS)");
    exit(0);
  }
  return result;
}
