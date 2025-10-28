int __fastcall iic_uninit(int a1)
{
  if ( pthread_mutex_lock(&iic_mutex) )
  {
    printf("%s:%d", "iic_uninit", 63);
    return puts("failed to i2c lock");
  }
  else
  {
    i2c_uninit(a1);
    return pthread_mutex_unlock(&iic_mutex);
  }
}
