int power_get_da_value_simple()
{
  unsigned __int8 v1; // [sp+Fh] [bp+7h]

  pthread_mutex_lock(&i2c_mutex_0);
  v1 = znyq_set_iic((unsigned __int8)power_iic_addr, (unsigned __int8)power_iic_no, 1, 1, 2u, 0);
  printf("power da value is %d\n", v1);
  pthread_mutex_unlock(&i2c_mutex_0);
  return v1;
}
