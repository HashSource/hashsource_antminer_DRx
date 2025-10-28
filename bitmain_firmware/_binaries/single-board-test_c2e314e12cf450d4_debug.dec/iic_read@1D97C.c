int __fastcall iic_read(int a1, int a2, unsigned int a3)
{
  int v6; // [sp+4h] [bp+4h]

  if ( pthread_mutex_lock(&iic_mutex) )
  {
    printf("%s:%d", "iic_read", 82);
    puts("failed to i2c lock");
    return -4;
  }
  else
  {
    v6 = i2c_read(a1, a2, a3);
    pthread_mutex_unlock(&iic_mutex);
    return v6;
  }
}
