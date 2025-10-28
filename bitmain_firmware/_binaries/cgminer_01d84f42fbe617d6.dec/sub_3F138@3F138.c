void __noreturn sub_3F138()
{
  while ( 1 )
  {
    pthread_mutex_lock(&stru_631FC);
    sub_3EF84(0, 4, 1);
    byte_631E8 = 1;
    pthread_mutex_unlock(&stru_631FC);
    sub_2B21C();
  }
}
