int call_gmon_start()
{
  int result; // r0

  if ( &__gmon_start__ )
    return j___gmon_start__();
  return result;
}
