bool test_eeprom()
{
  unsigned __int8 v2; // [sp+9h] [bp+1h] BYREF
  char v3; // [sp+Ah] [bp+2h] BYREF
  unsigned __int8 v4; // [sp+Bh] [bp+3h] BYREF
  int v5; // [sp+Ch] [bp+4h]

  v4 = -112;
  v3 = 90;
  v2 = -91;
  v5 = 0;
  printf("test_set_eeprom_val = %x\n", 90);
  iic_write_reg(e2prom_fd, &v4, 1, (int)&v3, 1u);
  usleep(0x186A0u);
  v5 = iic_read_reg(e2prom_fd, &v4, 1, (int)&v2, 1u);
  if ( v5 != 1 )
    return 0;
  printf("test_get_eeprom_val = %x\n", v2);
  return v2 == (unsigned __int8)v3;
}
