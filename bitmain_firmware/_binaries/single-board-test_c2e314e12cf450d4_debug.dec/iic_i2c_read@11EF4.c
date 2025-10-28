int __fastcall iic_i2c_read(int a1, unsigned int a2)
{
  return iic_read(i2c_fd, a1, a2);
}
