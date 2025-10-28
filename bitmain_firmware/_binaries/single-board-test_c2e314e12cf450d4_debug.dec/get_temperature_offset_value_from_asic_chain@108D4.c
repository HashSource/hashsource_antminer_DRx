int __fastcall get_temperature_offset_value_from_asic_chain(unsigned __int8 a1)
{
  int result; // r0
  char v3; // [sp+14h] [bp+Ch]
  char v4; // [sp+15h] [bp+Dh]
  char v5; // [sp+16h] [bp+Eh]
  char v6; // [sp+17h] [bp+Fh]
  char v7; // [sp+18h] [bp+10h]
  char v8; // [sp+19h] [bp+11h]
  char v9; // [sp+1Ah] [bp+12h]
  char v10; // [sp+1Bh] [bp+13h]
  int v11; // [sp+1Ch] [bp+14h]
  int v12; // [sp+20h] [bp+18h]
  char v13; // [sp+27h] [bp+1Fh]
  unsigned int v14; // [sp+28h] [bp+20h]
  int v15; // [sp+2Ch] [bp+24h]
  unsigned int v16; // [sp+30h] [bp+28h]
  unsigned int i; // [sp+34h] [bp+2Ch]

  v16 = -1;
  v14 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  result = printf("\n--- %s\n", "get_temperature_offset_value_from_asic_chain");
  for ( i = 0; i <= 2; ++i )
  {
    if ( !i )
      v15 = (unsigned __int8)byte_3368AC;
    if ( i == 1 )
      v15 = (unsigned __int8)byte_3368AD;
    if ( i == 2 )
      v15 = (unsigned __int8)byte_3368AE;
    if ( v15 )
    {
      enable_read_temperature_from_asic_chain(a1, gChain_Asic_Interval * (v15 - 1));
      do
      {
        if ( dword_336850 == 1722 )
        {
          v16 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v16 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        ++v14;
      }
      while ( (v16 & 0xC0000000) != 0 && v14 < 2 );
      v14 = 0;
      if ( dword_336850 == 1722 )
      {
        set_BM1722_asic_register(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0, 26738944);
      }
      else if ( dword_336850 == 1725 )
      {
        set_BM1725_asic_register(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0, 26738944);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          v16 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v16 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        ++v14;
      }
      while ( (v16 & 0xC0000000) != 0 && v14 < 2 );
      v14 = 0;
      if ( (v16 & 0xC0000000) != 0 )
      {
        gNotReadOutTemp[a1] = 1;
        printf("%s: Can't read out ASIC TEMP. ret = 0x%08x\n", "get_temperature_offset_value_from_asic_chain", v16);
      }
      else
      {
        v11 = (unsigned __int8)v16;
        printf("ASIC temperature is %d\n", (unsigned __int8)v16);
      }
      v16 = -1;
      if ( dword_336850 == 1722 )
      {
        set_BM1722_asic_register(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0, 26738688);
      }
      else if ( dword_336850 == 1725 )
      {
        set_BM1725_asic_register(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0, 26738688);
      }
      do
      {
        if ( dword_336850 == 1722 )
        {
          v16 = check_BM1722_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        else if ( dword_336850 == 1725 )
        {
          v16 = check_BM1725_asic_reg(a1, gChain_Asic_Interval * (v15 - 1), 0x20u, 0);
        }
        ++v14;
      }
      while ( (v16 & 0xC0000000) != 0 && v14 < 2 );
      v14 = 0;
      if ( (v16 & 0xC0000000) != 0 )
      {
        gNotReadOutTemp[a1] = 1;
        printf(
          "%s: Can't read out HASH BOARD TEMP. ret = 0x%08x\n",
          "get_temperature_offset_value_from_asic_chain",
          v16);
      }
      else
      {
        v12 = (unsigned __int8)v16;
        printf("local_temp is %d\n", (unsigned __int8)v16);
      }
      if ( gNotReadOutTemp[a1] )
        v13 = 0;
      else
        v13 = v12 - v11;
      if ( !i )
      {
        byte_3367CC = v13;
        v3 = v15;
        v4 = v13;
        gT1_offset_value[a1] = v13;
      }
      if ( i == 1 )
      {
        byte_3367CD = v13;
        v5 = v15;
        v6 = v13;
        gT2_offset_value[a1] = v13;
      }
      if ( i == 2 )
      {
        byte_3367CE = v13;
        v7 = v15;
        v8 = v13;
        gT3_offset_value[a1] = v13;
      }
      result = printf("temp_offset_value = %d\n", v13);
    }
  }
  v9 = byte_3368D8 | 0x20;
  v10 = dword_3368DC;
  if ( (unsigned int)dword_336848 > 1 )
  {
    result = putchar(10);
    for ( i = 0; i <= 7; ++i )
      result = printf("offset_value[%d] = %d\n", i, *(&v3 + i));
  }
  return result;
}
