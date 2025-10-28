int __fastcall get_PIC16F1704_freq(char a1, char a2, unsigned __int16 *a3)
{
  int v3; // r4
  int v9; // [sp+20h] [bp+10h]
  char v10[4]; // [sp+24h] [bp+14h]
  int v11; // [sp+28h] [bp+18h]
  __int16 v12; // [sp+2Ch] [bp+1Ch]
  __int16 v13; // [sp+30h] [bp+20h]
  unsigned __int16 v14; // [sp+34h] [bp+24h]
  char v15; // [sp+36h] [bp+26h]
  unsigned __int8 i; // [sp+37h] [bp+27h]

  v15 = 4;
  v13 = 10496;
  v11 = 255;
  v12 = 0;
  v9 = 621062741;
  v14 = 41;
  v10[0] = 0;
  v10[1] = 41;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a2, a1, v10[i - 4]);
  usleep((__useconds_t)&unk_493E0);
  for ( i = 0; i <= 5u; ++i )
  {
    v3 = i;
    *((_BYTE *)&v11 + v3) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  usleep(0x30D40u);
  printf(
    "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read"
    "_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
    "get_PIC16F1704_freq",
    (unsigned __int8)v11,
    BYTE1(v11),
    BYTE2(v11),
    HIBYTE(v11),
    (unsigned __int8)v12,
    HIBYTE(v12));
  if ( BYTE1(v11) == 37 && (unsigned __int8)v11 == 6 )
  {
    v14 = (unsigned __int8)v11 + BYTE1(v11) + BYTE2(v11) + HIBYTE(v11);
    if ( HIBYTE(v14) == (unsigned __int8)v12 && (unsigned __int8)v14 == HIBYTE(v12) )
    {
      *a3 = _byteswap_ushort(HIWORD(v11));
      printf("\n--- %s ok, freq = %d\n\n", "get_PIC16F1704_freq", *a3);
      return 1;
    }
    else
    {
      printf("\n--- %s failed! crc = 0x%04x\n\n", "get_PIC16F1704_freq", v14);
      return 0;
    }
  }
  else
  {
    printf("\n--- %s failed!\n\n", "get_PIC16F1704_freq");
    return 0;
  }
}
