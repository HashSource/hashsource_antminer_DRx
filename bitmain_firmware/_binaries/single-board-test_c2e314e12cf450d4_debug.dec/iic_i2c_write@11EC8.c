int __fastcall iic_i2c_write(int a1, unsigned int a2)
{
  return iic_write(i2c_fd, a1, a2);
}
