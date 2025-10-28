int __fastcall read_PIC16F1704_flash_data(char a1, char a2, int a3)
{
  int v3; // r4
  int v9; // [sp+74h] [bp+2Ch]
  char v10[4]; // [sp+78h] [bp+30h]
  int v11; // [sp+7Ch] [bp+34h]
  int v12; // [sp+80h] [bp+38h]
  int v13; // [sp+84h] [bp+3Ch]
  int v14; // [sp+88h] [bp+40h]
  int v15; // [sp+8Ch] [bp+44h]
  __int16 v16; // [sp+90h] [bp+48h]
  unsigned __int16 v17; // [sp+94h] [bp+4Ch]
  char v18; // [sp+96h] [bp+4Eh]
  unsigned __int8 i; // [sp+97h] [bp+4Fh]

  v18 = 4;
  v16 = 1792;
  v11 = 255;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v9 = 50637397;
  v17 = 7;
  v10[0] = 0;
  v10[1] = 7;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a1, a2, v10[i - 4]);
  usleep((__useconds_t)&unk_493E0);
  for ( i = 0; i <= 0x13u; ++i )
  {
    v3 = i;
    *((_BYTE *)&v11 + v3) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  printf(
    "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,     "
    "    read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
    "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,         re"
    "ad_back_data[12] = 0x%x, read_back_data[13] = 0x%x, read_back_data[14] = 0x%x, read_back_data[15] = 0x%x,         re"
    "ad_back_data[16] = 0x%x, read_back_data[17] = 0x%x, read_back_data[18] = 0x%x, read_back_data[19] = 0x%x\n",
    "read_PIC16F1704_flash_data",
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
    HIBYTE(v13),
    (unsigned __int8)v14,
    BYTE1(v14),
    BYTE2(v14),
    HIBYTE(v14),
    (unsigned __int8)v15,
    BYTE1(v15),
    BYTE2(v15),
    HIBYTE(v15));
  usleep(0x186A0u);
  if ( BYTE1(v11) == 3 && (unsigned __int8)v11 == 20 )
  {
    v17 = (unsigned __int8)v11
        + BYTE1(v11)
        + BYTE2(v11)
        + HIBYTE(v11)
        + (unsigned __int8)v12
        + BYTE1(v12)
        + BYTE2(v12)
        + HIBYTE(v12)
        + (unsigned __int8)v13
        + BYTE1(v13)
        + BYTE2(v13)
        + HIBYTE(v13)
        + (unsigned __int8)v14
        + BYTE1(v14)
        + BYTE2(v14)
        + HIBYTE(v14)
        + (unsigned __int8)v15
        + BYTE1(v15);
    if ( HIBYTE(v17) == BYTE2(v15) && (unsigned __int8)v17 == HIBYTE(v15) )
    {
      for ( i = 0; i <= 0xFu; ++i )
        *(_BYTE *)(a3 + i) = *((_BYTE *)&v11 + i + 2);
      printf("\n--- %s ok\n\n", "read_PIC16F1704_flash_data");
      return 1;
    }
    else
    {
      printf("\n--- %s failed! crc = 0x%04x\n\n", "read_PIC16F1704_flash_data", v17);
      return 0;
    }
  }
  else
  {
    printf("\n--- %s failed!\n\n", "read_PIC16F1704_flash_data");
    return 0;
  }
}
