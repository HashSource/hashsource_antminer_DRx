int __fastcall set_PIC16F1704_flash_point32_ter(char a1, char a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int16 v4; // r3
  int v5; // r4
  int v11; // [sp+Ch] [bp+Ch]
  unsigned __int8 v12; // [sp+10h] [bp+10h]
  unsigned __int8 v13; // [sp+11h] [bp+11h]
  char v14; // [sp+12h] [bp+12h]
  char v15; // [sp+13h] [bp+13h]
  unsigned __int8 v16[4]; // [sp+14h] [bp+14h]
  char v17; // [sp+18h] [bp+18h]
  char v18; // [sp+19h] [bp+19h]
  __int16 v19; // [sp+1Ch] [bp+1Ch]
  char v20; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v20 = 6;
  *(_WORD *)v16 = 255;
  v11 = 17214037;
  v4 = a3 + 6 + a4;
  v19 = v4 + 1;
  v17 = (unsigned __int16)(v4 + 1) >> 8;
  v18 = v4 + 1;
  v12 = a3;
  v13 = a4;
  v14 = v17;
  v15 = v4 + 1;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 7u; ++i )
    write_pic(a1, a2, *((_BYTE *)&v11 + i));
  usleep(0x186A0u);
  for ( i = 0; i <= 1u; ++i )
  {
    v5 = i;
    v16[v5] = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  if ( v16[0] == 1 && v16[1] == 1 )
  {
    printf("\n--- %s ok\n\n", "set_PIC16F1704_flash_point32_ter");
    return 1;
  }
  else
  {
    printf(
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "set_PIC16F1704_flash_point32_ter",
      v16[0],
      v16[1]);
    return 0;
  }
}
