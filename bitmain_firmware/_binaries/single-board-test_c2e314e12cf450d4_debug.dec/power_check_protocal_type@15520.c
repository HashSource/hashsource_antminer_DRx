int power_check_protocal_type()
{
  unsigned __int8 v1; // [sp+Fh] [bp+7h]

  pthread_mutex_lock(&i2c_mutex_0);
  v1 = znyq_set_iic((unsigned __int8)power_iic_addr, (unsigned __int8)power_iic_no, 1, 1, 0, 0);
  if ( v1 == 245 )
  {
    printf("power protocal %02x, using package cmd\n", v1);
    power_protocal_type = 2;
  }
  else
  {
    printf("power protocal %02x, using simple cmd\n", v1);
    power_protocal_type = 1;
  }
  return pthread_mutex_unlock(&i2c_mutex_0);
}
