int __fastcall power_set_da_value_simple(unsigned __int8 a1)
{
  unsigned __int8 v3; // [sp+15h] [bp+Dh]

  pthread_mutex_lock(&i2c_mutex_0);
  usleep(0x186A0u);
  v3 = znyq_set_iic((unsigned __int8)power_iic_addr, (unsigned __int8)power_iic_no, 0, 1, 2u, a1);
  pthread_mutex_unlock(&i2c_mutex_0);
  return v3;
}
