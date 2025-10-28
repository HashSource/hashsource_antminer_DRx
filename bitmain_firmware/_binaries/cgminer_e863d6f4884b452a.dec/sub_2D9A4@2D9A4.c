int *__fastcall sub_2D9A4(sem_t *sem)
{
  int *result; // r0

  do
  {
    while ( 1 )
    {
      result = (int *)sem_trywait(sem);
      if ( (int)result < 0 )
        break;
      if ( result )
        return result;
    }
    result = _errno_location();
  }
  while ( *result == 4 );
  return result;
}
