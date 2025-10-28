int __fastcall iic_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int reg; // [sp+20h] [bp+18h]

  if ( pthread_mutex_lock(&iic_mutex) )
  {
    printf("%s:%d", "iic_read_reg", 123);
    puts("failed to i2c lock");
    return -4;
  }
  else
  {
    reg = i2c_read_reg(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&iic_mutex);
    return reg;
  }
}
