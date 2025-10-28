int __fastcall read_hash_id_PIC16F1704(char a1, char a2, int a3)
{
  int v3; // r4
  int v9; // [sp+50h] [bp+18h]
  char v10[4]; // [sp+54h] [bp+1Ch]
  int v11; // [sp+58h] [bp+20h]
  int v12; // [sp+5Ch] [bp+24h]
  int v13; // [sp+60h] [bp+28h]
  int v14; // [sp+64h] [bp+2Ch]
  __int16 v15; // [sp+68h] [bp+30h]
  unsigned __int16 v16; // [sp+6Ch] [bp+34h]
  char v17; // [sp+6Eh] [bp+36h]
  unsigned __int8 i; // [sp+6Fh] [bp+37h]

  v17 = 4;
  v15 = 5888;
  v11 = 255;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 319072853;
  v16 = 23;
  v10[0] = 0;
  v10[1] = 23;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a1, a2, v10[i - 4]);
  usleep(0x30D40u);
  for ( i = 0; i <= 0xFu; ++i )
  {
    v3 = i;
    *((_BYTE *)&v11 + v3) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  printf(
    "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,     "
    "   read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,        re"
    "ad_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,        read_"
    "back_data[12] = 0x%x, read_back_data[13] = 0x%x, read_back_data[14] = 0x%x, read_back_data[15] = 0x%x\n",
    "read_hash_id_PIC16F1704",
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
    HIBYTE(v14));
  if ( BYTE1(v11) == 19 && (unsigned __int8)v11 == 16 )
  {
    v16 = (unsigned __int8)v11
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
        + BYTE1(v14);
    if ( HIBYTE(v16) == BYTE2(v14) && (unsigned __int8)v16 == HIBYTE(v14) )
    {
      for ( i = 0; i <= 0xBu; ++i )
        *(_BYTE *)(a3 + i) = *((_BYTE *)&v11 + i + 2);
      printf("\n--- %s ok\n\n", "read_hash_id_PIC16F1704");
      return 1;
    }
    else
    {
      printf("\n--- %s failed! crc = 0x%04x\n\n", "read_hash_id_PIC16F1704", v16);
      return 0;
    }
  }
  else
  {
    printf("\n--- %s failed!\n\n", "read_hash_id_PIC16F1704");
    return 0;
  }
}
