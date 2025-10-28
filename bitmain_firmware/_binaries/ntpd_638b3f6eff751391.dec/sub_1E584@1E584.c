__pid_t sub_1E584()
{
  __pid_t result; // r0

  result = getppid();
  if ( result == 1 )
  {
    sub_4FE78(6, "parent died before we finished, exiting");
    exit(0);
  }
  return result;
}
