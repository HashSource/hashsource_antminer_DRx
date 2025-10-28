int read_pic()
{
  unsigned __int8 v1; // [sp+Fh] [bp+Fh] BYREF

  v1 = 0;
  iic_i2c_read((int)&v1, 1u);
  return v1;
}
