int __fastcall iic_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int v11; // [sp+20h] [bp+18h]

  if ( pthread_mutex_lock(&iic_mutex) )
  {
    printf("%s:%d", "iic_write_reg", 145);
    puts("failed to i2c lock");
    return -4;
  }
  else
  {
    v11 = i2c_write_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&iic_mutex);
    return v11;
  }
}
