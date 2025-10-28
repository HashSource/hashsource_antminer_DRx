int __fastcall read_PIC16F1704_flash_point32_ter(char a1, char a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  int v4; // r4
  int v11; // [sp+20h] [bp+10h]
  char v12[4]; // [sp+24h] [bp+14h]
  int v13; // [sp+28h] [bp+18h]
  __int16 v14; // [sp+2Ch] [bp+1Ch]
  __int16 v15; // [sp+30h] [bp+20h]
  __int16 v16; // [sp+34h] [bp+24h]
  char v17; // [sp+36h] [bp+26h]
  unsigned __int8 i; // [sp+37h] [bp+27h]

  v17 = 4;
  v15 = 3072;
  v13 = 255;
  v14 = 0;
  v11 = 134523477;
  v16 = 12;
  v12[0] = 0;
  v12[1] = 12;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a1, a2, v12[i - 4]);
  usleep(0x186A0u);
  for ( i = 0; i <= 5u; ++i )
  {
    v4 = i;
    *((_BYTE *)&v13 + v4) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  if ( BYTE1(v13) == 8
    && (unsigned __int8)v13 == 6
    && (v16 = (unsigned __int8)v13 + BYTE1(v13) + BYTE2(v13) + HIBYTE(v13), HIBYTE(v16) == (unsigned __int8)v14)
    && (unsigned __int8)v16 == HIBYTE(v14) )
  {
    *a3 = BYTE2(v13);
    *a4 = HIBYTE(v13);
    printf(
      "\n--- %s ok! flash_addr_h = 0x%02x, flash_addr_l = 0x%02x\n\n",
      "read_PIC16F1704_flash_point32_ter",
      *a3,
      *a4);
    return 1;
  }
  else
  {
    printf(
      "\n"
      "--- %s failed! read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0"
      "x%x, read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n"
      "\n",
      "read_PIC16F1704_flash_point32_ter",
      (unsigned __int8)v13,
      BYTE1(v13),
      BYTE2(v13),
      HIBYTE(v13),
      (unsigned __int8)v14,
      HIBYTE(v14));
    return 0;
  }
}
