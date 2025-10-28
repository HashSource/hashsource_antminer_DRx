int __fastcall save_freq_PIC16F1704(char a1, char a2, unsigned __int16 a3)
{
  __int16 v3; // r2
  int v4; // r4
  int v10; // [sp+Ch] [bp+Ch]
  char v11; // [sp+10h] [bp+10h]
  char v12; // [sp+11h] [bp+11h]
  char v13; // [sp+12h] [bp+12h]
  char v14; // [sp+13h] [bp+13h]
  unsigned __int8 v15[4]; // [sp+14h] [bp+14h]
  char v16; // [sp+18h] [bp+18h]
  char v17; // [sp+19h] [bp+19h]
  __int16 v18; // [sp+1Ch] [bp+1Ch]
  char v19; // [sp+1Eh] [bp+1Eh]
  unsigned __int8 i; // [sp+1Fh] [bp+1Fh]

  v19 = 6;
  *(_WORD *)v15 = 255;
  v10 = 604416597;
  v3 = HIBYTE(a3) + 6;
  v18 = v3 + (unsigned __int8)a3 + 36;
  v16 = HIBYTE(v18);
  v17 = v3 + a3 + 36;
  v11 = HIBYTE(a3);
  v12 = a3;
  v13 = HIBYTE(v18);
  v14 = v17;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 7u; ++i )
    write_pic(a2, a1, *((_BYTE *)&v10 + i));
  usleep((__useconds_t)&unk_493E0);
  for ( i = 0; i <= 1u; ++i )
  {
    v4 = i;
    v15[v4] = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  usleep(0x30D40u);
  if ( v15[0] == 36 && v15[1] == 1 )
  {
    printf("\n--- %s ok\n\n", "save_freq_PIC16F1704");
    return 1;
  }
  else
  {
    printf(
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "save_freq_PIC16F1704",
      v15[0],
      v15[1]);
    return 0;
  }
}
