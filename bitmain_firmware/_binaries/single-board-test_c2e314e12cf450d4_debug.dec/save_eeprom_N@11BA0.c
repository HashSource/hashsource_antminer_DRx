int __fastcall save_eeprom_N(unsigned __int8 a1, char a2)
{
  unsigned __int8 v3[8]; // [sp+Fh] [bp+7h] BYREF
  char v4; // [sp+17h] [bp+Fh] BYREF

  v3[0] = a1;
  v4 = a2;
  return iic_write_reg(e2prom_fd, v3, 1, (int)&v4, 1u);
}
