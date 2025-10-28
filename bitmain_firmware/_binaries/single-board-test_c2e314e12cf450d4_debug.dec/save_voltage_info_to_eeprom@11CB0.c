int __fastcall save_voltage_info_to_eeprom(unsigned int a1, unsigned int a2)
{
  int v3; // [sp+8h] [bp+8h] BYREF
  __int16 v4; // [sp+Ch] [bp+Ch]
  char v5; // [sp+Eh] [bp+Eh]
  char v6; // [sp+Fh] [bp+Fh]
  int i; // [sp+10h] [bp+10h]
  unsigned __int8 v8; // [sp+17h] [bp+17h]

  v8 = 0;
  v6 = 0;
  v5 = 0;
  v3 = 43605;
  HIBYTE(v3) = a1 / 0xA;
  v4 = (unsigned __int8)(a2 / 0xA);
  HIBYTE(v4) = CRC5((unsigned __int8 *)&v3, 0x28u);
  if ( test_eeprom() )
  {
    for ( i = 0; i <= 5; ++i )
    {
      v8 = save_byte_to_eeprom(i - 102, *((_BYTE *)&v3 + i));
      if ( v8 != 1 )
      {
        puts("save_voltage_info_to_eeprom failed!");
        return v8;
      }
    }
  }
  return v8;
}
