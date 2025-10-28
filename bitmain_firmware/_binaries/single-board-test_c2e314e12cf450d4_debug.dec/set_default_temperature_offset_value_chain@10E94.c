size_t __fastcall set_default_temperature_offset_value_chain(unsigned __int8 a1)
{
  size_t result; // r0
  unsigned __int8 v3; // [sp+13h] [bp+Bh]
  size_t v4; // [sp+14h] [bp+Ch]
  int v5; // [sp+18h] [bp+10h]
  unsigned int v6; // [sp+1Ch] [bp+14h]
  unsigned int v7; // [sp+1Ch] [bp+14h]
  unsigned int v8; // [sp+1Ch] [bp+14h]
  int v9; // [sp+20h] [bp+18h]
  unsigned int i; // [sp+24h] [bp+1Ch]

  v9 = 0;
  v6 = 0;
  v4 = 0;
  v3 = 0;
  result = printf("\n--- %s\n", "set_default_temperature_offset_value_chain");
  for ( i = 0; i <= 2; ++i )
  {
    v5 = 0;
    if ( !i )
    {
      v9 = (unsigned __int8)byte_3368AC;
      v3 = gT1_offset_value[a1];
      v5 = v3 | 0x1991100;
    }
    if ( i == 1 )
    {
      v9 = (unsigned __int8)byte_3368AD;
      v3 = gT2_offset_value[a1];
      v5 = v3 | 0x1991100;
    }
    if ( i == 2 )
    {
      v9 = (unsigned __int8)byte_3368AE;
      v3 = gT3_offset_value[a1];
      v5 = v3 | 0x1991100;
    }
    if ( v9 )
    {
      result = enable_read_temperature_from_asic_chain(a1, gChain_Asic_Interval * (v9 - 1));
      do
      {
        if ( dword_336850 == 1722 )
        {
          result = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        else if ( dword_336850 == 1725 )
        {
          result = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        ++v6;
      }
      while ( (v4 & 0xC0000000) != 0 && v6 < 2 );
      v7 = 0;
      if ( dword_336850 == 1722 )
      {
        result = set_BM1722_asic_register(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0, v5);
      }
      else if ( dword_336850 == 1725 )
      {
        result = set_BM1725_asic_register(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0, v5);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          result = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        else if ( dword_336850 == 1725 )
        {
          result = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        ++v7;
      }
      while ( (v4 & 0xC0000000) != 0 && v7 < 2 );
      v8 = 0;
      if ( dword_336850 == 1722 )
      {
        result = set_BM1722_asic_register(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0, 26743040);
      }
      else if ( dword_336850 == 1725 )
      {
        result = set_BM1725_asic_register(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0, 26743040);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          result = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        else if ( dword_336850 == 1725 )
        {
          result = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v9 - 1), 0x20u, 0);
          v4 = result;
        }
        ++v8;
      }
      while ( (v4 & 0xC0000000) != 0 && v8 < 2 );
      v6 = 0;
      if ( (char)v4 != (char)v3 )
      {
        if ( !i )
        {
          Sensor1_OK[a1] = 0;
          result = puts("!!! sensor1 is error!\n");
        }
        if ( i == 1 )
        {
          Sensor2_OK[a1] = 0;
          result = puts("!!! sensor2 is error!\n");
        }
        if ( i == 2 )
        {
          Sensor3_OK[a1] = 0;
          result = puts("!!! sensor3 is error!\n");
        }
      }
    }
  }
  return result;
}
