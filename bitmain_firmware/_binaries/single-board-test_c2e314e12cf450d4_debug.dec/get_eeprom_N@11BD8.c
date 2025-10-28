bool __fastcall get_eeprom_N(unsigned __int8 a1, int a2)
{
  unsigned __int8 v3[5]; // [sp+Fh] [bp+7h] BYREF
  int v4; // [sp+14h] [bp+Ch]

  v3[0] = a1;
  v4 = 0;
  return iic_read_reg(e2prom_fd, v3, 1, a2, 1u) == 1;
}
