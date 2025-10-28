int __fastcall write_hash_ID_PIC16F1704(char a1, char a2, int a3)
{
  int v3; // r4
  _DWORD v8[4]; // [sp+10h] [bp+10h] BYREF
  __int16 v9; // [sp+20h] [bp+20h]
  unsigned __int8 v10[4]; // [sp+24h] [bp+24h]
  __int16 v11; // [sp+28h] [bp+28h]
  char v12; // [sp+2Ch] [bp+2Ch]
  unsigned __int8 i; // [sp+2Dh] [bp+2Dh]
  __int16 v14; // [sp+2Eh] [bp+2Eh]

  v12 = 16;
  v11 = 255;
  *(_WORD *)v10 = 255;
  memset(v8, 0, sizeof(v8));
  v9 = 0;
  v14 = 34;
  for ( i = 0; i <= 0xBu; ++i )
    v14 += *(unsigned __int8 *)(a3 + i);
  LOBYTE(v11) = HIBYTE(v14);
  HIBYTE(v11) = v14;
  LOWORD(v8[0]) = -21931;
  BYTE2(v8[0]) = v12;
  HIBYTE(v8[0]) = 18;
  for ( i = 0; i <= 0xBu; ++i )
    *((_BYTE *)&v8[1] + i) = *(_BYTE *)(a3 + i);
  v9 = v11;
  pthread_mutex_lock(&i2c_mutex_0);
  for ( i = 0; i <= 0x11u; ++i )
    write_pic(a2, a1, *((_BYTE *)v8 + i));
  usleep((__useconds_t)&unk_61A80);
  for ( i = 0; i <= 1u; ++i )
  {
    v3 = i;
    v10[v3] = read_pic();
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  usleep(0x30D40u);
  if ( v10[0] == 18 && v10[1] == 1 )
  {
    printf("\n--- %s ok\n\n", "write_hash_ID_PIC16F1704");
    return 1;
  }
  else
  {
    printf(
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "write_hash_ID_PIC16F1704",
      v10[0],
      v10[1]);
    return 0;
  }
}
