int sub_AF98()
{
  int result; // r0

  if ( sem_init(&sem, 0, 0) || (result = sem_init(&stru_1D424, 0, 0)) != 0 )
  {
    perror("Semaphore initialization failed");
    exit(1);
  }
  return result;
}
