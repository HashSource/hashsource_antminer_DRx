int __fastcall read_asic_temperature(unsigned __int8 a1)
{
  int result; // r0
  int v3; // [sp+14h] [bp+Ch]
  unsigned int v4; // [sp+28h] [bp+20h]
  unsigned int v5; // [sp+28h] [bp+20h]
  unsigned int v6; // [sp+28h] [bp+20h]
  int v7; // [sp+2Ch] [bp+24h]
  unsigned int v8; // [sp+30h] [bp+28h]
  unsigned int i; // [sp+34h] [bp+2Ch]

  v8 = -1;
  v4 = 0;
  gNotReadOutTemp[a1] = 0;
  for ( i = 0; i <= 2; ++i )
  {
    if ( !i )
      v7 = (unsigned __int8)byte_3368AC;
    if ( i == 1 )
      v7 = (unsigned __int8)byte_3368AD;
    if ( i == 2 )
      v7 = (unsigned __int8)byte_3368AE;
    if ( v7 )
    {
      enable_read_temperature_from_asic_chain(a1, gChain_Asic_Interval * (v7 - 1));
      do
      {
        if ( dword_336850 == 1722 )
        {
          v8 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v8 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        ++v4;
      }
      while ( (v8 & 0xC0000000) != 0 && v4 < 2 );
      v5 = 0;
      if ( dword_336850 == 1722 )
      {
        set_BM1722_asic_register(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0, 26738944);
      }
      else if ( dword_336850 == 1725 )
      {
        set_BM1725_asic_register(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0, 26738944);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          v8 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v8 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        ++v5;
      }
      while ( (v8 & 0xC0000000) != 0 && v5 < 2 );
      v6 = 0;
      if ( (v8 & 0xC0000000) != 0 )
      {
        printf("%s: do not read out ASIC %d temperature\n\n", "read_asic_temperature", v7);
        gNotReadOutTemp[a1] = 1;
      }
      else
      {
        printf("\n\nASIC %d TEMP is : %d\n", v7, (unsigned __int8)v8);
        if ( !i )
          Sensor1_temp[a1] = (unsigned __int8)v8;
        if ( i == 1 )
          Sensor2_temp[a1] = (unsigned __int8)v8;
        if ( i == 2 )
          Sensor3_temp[a1] = (unsigned __int8)v8;
        if ( (unsigned __int8)byte_3368AF == v7 )
        {
          if ( (unsigned __int8)byte_3368B0 > (int)(unsigned __int8)v8 )
          {
            if ( gStartTest[a1] != 1 )
              printf(
                "\nASIC %d temperature is %d, waiting it raise to start temperature %d\n\n",
                v7,
                (unsigned __int8)v8,
                (unsigned __int8)byte_3368B0);
          }
          else
          {
            if ( gStartTest[a1] != 1 )
              printf("\nBegin test!!! Start sensor is %d, ASIC temperature is %d\n\n", v7, (unsigned __int8)v8);
            gStartTest[a1] = 1;
          }
        }
      }
      if ( dword_336850 == 1722 )
      {
        set_BM1722_asic_register(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0, 26738688);
      }
      else if ( dword_336850 == 1725 )
      {
        set_BM1725_asic_register(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0, 26738688);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          v8 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v8 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v7 - 1), 0x20u, 0);
        }
        ++v6;
      }
      while ( (v8 & 0xC0000000) != 0 && v6 < 2 );
      v4 = 0;
      if ( (v8 & 0xC0000000) != 0 )
      {
        printf("%s: do not read out ASIC %d Hash Board temperature\n\n", "read_asic_temperature", v7);
        gNotReadOutTemp[a1] = 1;
      }
      else
      {
        printf("ASIC %d Hash Board temperature is %d\n\n", v7, (unsigned __int8)v8);
      }
    }
  }
  temp_change[a1] = (Sensor1_temp[a1]
                   + Sensor2_temp[a1]
                   + Sensor3_temp[a1]
                   - last_Sensor1_temp[a1]
                   - last_Sensor2_temp[a1]
                   - last_Sensor3_temp[a1])
                  / (unsigned int)gSensor_number;
  if ( temp_change[a1] )
  {
    last_Sensor1_temp[a1] = Sensor1_temp[a1];
    last_Sensor2_temp[a1] = Sensor2_temp[a1];
    last_Sensor3_temp[a1] = Sensor3_temp[a1];
  }
  highest_temp[a1] = Sensor1_temp[a1];
  if ( Sensor2_temp[a1] > highest_temp[a1] )
    highest_temp[a1] = Sensor2_temp[a1];
  if ( Sensor3_temp[a1] > highest_temp[a1] )
    highest_temp[a1] = Sensor3_temp[a1];
  lowest_temp[a1] = Sensor1_temp[a1];
  if ( Sensor2_temp[a1] < lowest_temp[a1] && Sensor2_temp[a1] )
    lowest_temp[a1] = Sensor2_temp[a1];
  if ( Sensor3_temp[a1] < lowest_temp[a1] && Sensor3_temp[a1] )
    lowest_temp[a1] = Sensor3_temp[a1];
  if ( highest_temp[a1] > gGlobalHighestTemp[a1] )
    gGlobalHighestTemp[a1] = highest_temp[a1];
  result = printf("\ngGlobalHighestTemp is %d\n\n", gGlobalHighestTemp[a1]);
  if ( highest_temp[a1] > (int)(unsigned __int8)byte_3368B2 )
    gHigherThanAlarmTemp[a1] = 1;
  v3 = highest_temp[a1] - lowest_temp[a1];
  if ( v3 > (unsigned int)dword_3368B8 )
  {
    gHigherThanMaxTempGap[a1] = 1;
    if ( gMaxTempGap_value[a1] < v3 )
    {
      gMaxTempGap_value[a1] = v3;
      return printf("gMaxTempGap_value is %d\n\n", gMaxTempGap_value[a1]);
    }
  }
  return result;
}
