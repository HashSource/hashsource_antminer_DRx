int __fastcall heart_beat_PIC16F1704(char a1, char a2)
{
  int v2; // r4
  int v7; // [sp+8h] [bp+8h]
  char v8[4]; // [sp+Ch] [bp+Ch]
  int v9; // [sp+10h] [bp+10h]
  __int16 v10; // [sp+14h] [bp+14h]
  __int16 v11; // [sp+18h] [bp+18h]
  __int16 v12; // [sp+1Ch] [bp+1Ch]
  char v13; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v13 = 4;
  v11 = 6656;
  v9 = 255;
  v10 = 0;
  v7 = 369404501;
  v12 = 26;
  v8[0] = 0;
  v8[1] = 26;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 5u; ++i )
    write_pic(a2, a1, v8[i - 4]);
  usleep(0x186A0u);
  for ( i = 0; i <= 5u; ++i )
  {
    v2 = i;
    *((_BYTE *)&v9 + v2) = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  if ( BYTE1(v9) == 22 && BYTE2(v9) == 1 )
  {
    printf("\n--- %s ok\n\n", "heart_beat_PIC16F1704");
    return 1;
  }
  else
  {
    printf("\n--- %s failed!\n\n", "heart_beat_PIC16F1704");
    return 0;
  }
}
