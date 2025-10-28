int __fastcall save_byte_to_eeprom(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v5; // [sp+Eh] [bp+Eh] BYREF
  unsigned __int8 v6; // [sp+Fh] [bp+Fh]

  v6 = 1;
  save_eeprom_N(a1, a2);
  usleep((__useconds_t)&unk_7A120);
  if ( get_eeprom_N(a1, (int)&v5) )
  {
    printf("The value write to eeprom : 0x%02X\n", a2);
    printf("The value get from eeprom : 0x%02X\n", v5);
    if ( a2 != v5 )
    {
      puts("Save eeprom Error");
      return 0;
    }
  }
  else
  {
    puts("Get value from eeprom Error");
    return 0;
  }
  return v6;
}
