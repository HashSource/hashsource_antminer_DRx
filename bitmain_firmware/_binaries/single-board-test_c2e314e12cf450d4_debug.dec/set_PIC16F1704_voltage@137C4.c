int __fastcall set_PIC16F1704_voltage(char a1, char a2, unsigned __int8 a3)
{
  int v3; // r4
  _BYTE v9[8]; // [sp+Ch] [bp+Ch]
  unsigned __int8 v10[4]; // [sp+14h] [bp+14h]
  char v11; // [sp+18h] [bp+18h]
  char v12; // [sp+19h] [bp+19h]
  __int16 v13; // [sp+1Ch] [bp+1Ch]
  char v14; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v14 = 5;
  *(_WORD *)v10 = 255;
  printf("\n--- %s\n", "set_PIC16F1704_voltage");
  v13 = a3 + 21;
  v11 = HIBYTE(v13);
  v12 = a3 + 21;
  v9[0] = 85;
  v9[1] = -86;
  v9[2] = 5;
  v9[3] = 16;
  v9[4] = a3;
  v9[5] = HIBYTE(v13);
  v9[6] = a3 + 21;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 6u; ++i )
    write_pic(a2, a1, v9[i]);
  usleep(0x30D40u);
  for ( i = 0; i <= 1u; ++i )
  {
    v3 = i;
    v10[v3] = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  usleep(0x30D40u);
  if ( v10[0] == 16 && v10[1] == 1 )
  {
    printf("\n--- %s ok\n\n", "set_PIC16F1704_voltage");
    return 1;
  }
  else
  {
    printf(
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "set_PIC16F1704_voltage",
      v10[0],
      v10[1]);
    return 0;
  }
}
