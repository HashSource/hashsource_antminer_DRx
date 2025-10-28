int *__fastcall sub_349B0(sem_t *sem)
{
  int *result; // r0
  int *v3; // r4

  do
  {
    do
    {
      result = (int *)sem_trywait(sem);
      v3 = result;
      if ( (int)result >= 0 )
        break;
      result = _errno_location();
    }
    while ( *result == 4 );
  }
  while ( !v3 );
  return result;
}
