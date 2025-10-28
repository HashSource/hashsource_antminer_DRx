int znyq_set_iic(int a1, int a2, char a3, int a4, unsigned __int8 a5, ...)
{
  unsigned __int8 v7; // [sp+Fh] [bp+Fh] BYREF
  va_list va; // [sp+1Ch] [bp+1Ch] BYREF

  va_start(va, a5);
  if ( !a3 )
    return (unsigned __int8)iic_i2c_write_reg(a5, (int)va, 1u);
  iic_i2c_read_reg(a5, (int)&v7, 1u);
  return v7;
}
