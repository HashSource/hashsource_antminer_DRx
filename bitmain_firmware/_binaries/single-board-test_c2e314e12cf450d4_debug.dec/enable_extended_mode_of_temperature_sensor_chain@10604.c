size_t __fastcall enable_extended_mode_of_temperature_sensor_chain(unsigned __int8 a1)
{
  size_t result; // r0
  unsigned int v3; // [sp+20h] [bp+18h]
  int v4; // [sp+24h] [bp+1Ch]
  size_t v5; // [sp+28h] [bp+20h]
  unsigned int i; // [sp+2Ch] [bp+24h]

  v3 = 0;
  result = printf("\n--- %s\n", "enable_extended_mode_of_temperature_sensor_chain");
  for ( i = 0; i <= 2; ++i )
  {
    if ( !i )
      v4 = (unsigned __int8)byte_3368AC;
    if ( i == 1 )
      v4 = (unsigned __int8)byte_3368AD;
    if ( i == 2 )
      v4 = (unsigned __int8)byte_3368AE;
    if ( v4 )
    {
      result = enable_read_temperature_from_asic_chain(a1, gChain_Asic_Interval * (v4 - 1));
      do
      {
        if ( dword_336850 == 1722 )
        {
          result = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0);
          v5 = result;
        }
        else if ( dword_336850 == 1725 )
        {
          result = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0);
          v5 = result;
        }
        ++v3;
      }
      while ( (v5 & 0xC0000000) != 0 && v3 < 2 );
      v3 = 0;
      if ( (v5 & 0xC0000000) != 0 )
      {
        gNotReadOutTemp[a1] = 1;
        result = printf(
                   "%s: Can't read out GENERAL_I2C_COMMAND. ret = 0x%08x\n",
                   "enable_extended_mode_of_temperature_sensor_chain",
                   v5);
      }
      else
      {
        if ( dword_336850 == 1722 )
        {
          result = set_BM1722_asic_register(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0, 26806532);
        }
        else if ( dword_336850 == 1725 )
        {
          result = set_BM1725_asic_register(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0, 26806532);
        }
        do
        {
          if ( dword_336850 == 1722 )
          {
            result = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0);
            v5 = result;
          }
          else if ( dword_336850 == 1725 )
          {
            result = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v4 - 1), 0x20u, 0);
            v5 = result;
          }
          ++v3;
        }
        while ( (v5 & 0xC0000000) != 0 && v3 < 2 );
        v3 = 0;
        if ( (v5 & 0xC0000000) != 0 )
        {
          gNotReadOutTemp[a1] = 1;
          result = printf(
                     "%s: Can't set extended mode. ret = 0x%08x\n",
                     "enable_extended_mode_of_temperature_sensor_chain",
                     v5);
        }
      }
    }
  }
  return result;
}
