int __fastcall write_pic(char a1, char a2, char a3)
{
  _BYTE v4[3]; // [sp+5h] [bp+5h] BYREF

  v4[2] = a1;
  v4[1] = a2;
  v4[0] = a3;
  return iic_i2c_write((int)v4, 1u);
}
