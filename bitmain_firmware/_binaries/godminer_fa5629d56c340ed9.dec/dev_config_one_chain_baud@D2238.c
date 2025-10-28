int __fastcall dev_config_one_chain_baud(int a1, char *a2)
{
  const char *v4; // r0
  char v5; // r6
  int v6; // r5
  const char *v7; // r0
  const char *v8; // r0
  int v10; // [sp+0h] [bp-8h] BYREF
  _BYTE v11[4]; // [sp+4h] [bp-4h] BYREF

  uart_get_config(0, 0, &v10, (int)v11);
  LOWORD(v4) = -24884;
  HIWORD(v4) = (unsigned int)"Decode SN OOM" >> 16;
  printf(v4, "dev_config_one_chain_baud", v10);
  v5 = 8 * a1;
  if ( a2 == (char *)3000000 )
    goto LABEL_22;
  if ( (int)a2 <= 3000000 )
  {
    if ( a2 == (char *)&loc_E1000 )
    {
      v6 = 2 << v5;
      goto LABEL_13;
    }
    if ( (int)a2 > 921600 )
    {
      if ( a2 == "t cnt: %08x" || a2 == byte_17D784 )
      {
        v6 = 1 << v5;
        goto LABEL_13;
      }
    }
    else if ( a2 == (char *)&loc_70800 )
    {
      v6 = 6 << v5;
      goto LABEL_13;
    }
LABEL_19:
    v6 = 26 << v5;
    goto LABEL_13;
  }
  if ( a2 == (char *)6250000 )
  {
    v6 = 3 << v5;
    goto LABEL_13;
  }
  if ( (int)a2 <= 6250000 )
  {
    if ( a2 != (char *)3125000 )
      goto LABEL_19;
LABEL_22:
    v6 = 0;
    goto LABEL_13;
  }
  if ( a2 == (char *)12500000 )
  {
    v6 = 4 << v5;
    goto LABEL_13;
  }
  if ( a2 != (char *)25000000 )
    goto LABEL_19;
  v6 = 5 << v5;
LABEL_13:
  LOWORD(v7) = -25340;
  HIWORD(v7) = (unsigned int)"rom_encryption_algorithm error! eeprom_key_version:%d, eeprom_encryption_algorithm:%d" >> 16;
  printf(v7, "dev_config_one_chain_baud");
  v10 = v10 & ~(63 << v5) | v6;
  uart_set_config(a1, 0, &v10);
  usleep((__useconds_t)&stru_18698.st_size);
  uart_get_config(0, 0, &v10, (int)v11);
  LOWORD(v8) = -24860;
  HIWORD(v8) = (unsigned int)"hip Die OOM" >> 16;
  printf(v8, "dev_config_one_chain_baud", v10);
  return 0;
}
