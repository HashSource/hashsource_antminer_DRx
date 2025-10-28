int __fastcall iic_i2c_read_reg(unsigned __int8 a1, int a2, unsigned int a3)
{
  unsigned __int8 v4; // [sp+17h] [bp+Fh] BYREF

  v4 = a1;
  return iic_read_reg(power_fd, &v4, 1, a2, a3);
}
