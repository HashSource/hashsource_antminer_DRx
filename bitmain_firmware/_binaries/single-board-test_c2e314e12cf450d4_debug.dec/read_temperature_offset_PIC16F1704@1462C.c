int __fastcall read_temperature_offset_PIC16F1704(char a1, char a2, int a3)
{
  int v3; // r4
  int v9; // [sp+3Ch] [bp+14h]
  char v10[4]; // [sp+40h] [bp+18h]
  int v11; // [sp+44h] [bp+1Ch]
  int v12; // [sp+48h] [bp+20h]
  int v13; // [sp+4Ch] [bp+24h]
  __int16 v14; // [sp+50h] [bp+28h]
  unsigned __int16 v15; // [sp+54h] [bp+2Ch]
  char v16; // [sp+56h] [bp+2Eh]
  unsigned __int8 i; // [sp+57h] [bp+2Fh]

  v16 = 4;
  v14 = 9984;
  v11 = 255;
  v12 = 0;
  v13 = 0;
  v9 = 587508309;
  v15 = 39;
  v10[0] = 0;
  v10[1] = 39;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a1, a2, v10[i - 4]);
  usleep(0x30D40u);
  for ( i = 0; i <= 0xBu; ++i )
  {
    v3 = i;
    *((_BYTE *)&v11 + v3) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  printf(
    "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,     "
    "    read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
    "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x\n",
    "read_temperature_offset_PIC16F1704",
    (unsigned __int8)v11,
    BYTE1(v11),
    BYTE2(v11),
    HIBYTE(v11),
    (unsigned __int8)v12,
    BYTE1(v12),
    BYTE2(v12),
    HIBYTE(v12),
    (unsigned __int8)v13,
    BYTE1(v13),
    BYTE2(v13),
    HIBYTE(v13));
  if ( BYTE1(v11) == 35 && (unsigned __int8)v11 == 12 )
  {
    v15 = (unsigned __int8)v11
        + BYTE1(v11)
        + BYTE2(v11)
        + HIBYTE(v11)
        + (unsigned __int8)v12
        + BYTE1(v12)
        + BYTE2(v12)
        + HIBYTE(v12)
        + (unsigned __int8)v13
        + BYTE1(v13);
    if ( HIBYTE(v15) == BYTE2(v13) && (unsigned __int8)v15 == HIBYTE(v13) )
    {
      for ( i = 0; i <= 7u; ++i )
        *(_BYTE *)(a3 + i) = *((_BYTE *)&v11 + i + 2);
      printf("\n--- %s ok\n\n", "read_temperature_offset_PIC16F1704");
      return 1;
    }
    else
    {
      printf("\n--- %s failed! crc = 0x%04x\n\n", "read_temperature_offset_PIC16F1704", v15);
      return 0;
    }
  }
  else
  {
    printf("\n--- %s failed!\n\n", "read_temperature_offset_PIC16F1704");
    return 0;
  }
}
