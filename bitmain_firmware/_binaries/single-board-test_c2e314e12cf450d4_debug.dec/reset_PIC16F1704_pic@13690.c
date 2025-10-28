int __fastcall reset_PIC16F1704_pic(char a1, char a2)
{
  int v2; // r4
  int v7; // [sp+Ch] [bp+Ch]
  char v8[4]; // [sp+10h] [bp+10h]
  _WORD v9[5]; // [sp+14h] [bp+14h]
  char v10; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v10 = 4;
  v9[2] = 2816;
  v9[0] = 255;
  v7 = 117746261;
  v9[4] = 11;
  v8[0] = 0;
  v8[1] = 11;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a2, a1, v8[i - 4]);
  usleep(0x186A0u);
  for ( i = 0; i <= 1u; ++i )
  {
    v2 = i;
    *((_BYTE *)v9 + v2) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  usleep((__useconds_t)&unk_F4240);
  if ( LOBYTE(v9[0]) == 7 && HIBYTE(v9[0]) == 1 )
  {
    printf("\n--- %s ok\n\n", "reset_PIC16F1704_pic");
    return 1;
  }
  else
  {
    printf(
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "reset_PIC16F1704_pic",
      LOBYTE(v9[0]),
      HIBYTE(v9[0]));
    return 0;
  }
}
