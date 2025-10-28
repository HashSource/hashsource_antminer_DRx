int __fastcall power_save_eeprom_data(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v8; // [sp+Ch] [bp+Ch] BYREF
  int v9; // [sp+10h] [bp+10h]
  int v10; // [sp+14h] [bp+14h]
  int v11; // [sp+18h] [bp+18h]
  int v12; // [sp+1Ch] [bp+1Ch]
  int v13; // [sp+20h] [bp+20h]
  int v14; // [sp+24h] [bp+24h]
  int v15; // [sp+28h] [bp+28h]
  unsigned __int8 s[259]; // [sp+2Ch] [bp+2Ch] BYREF
  int v18; // [sp+130h] [bp+130h]
  unsigned __int16 i; // [sp+134h] [bp+134h]
  __int16 v20; // [sp+136h] [bp+136h]

  memset(s, 0, 0x100u);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v20 = 0;
  v18 = a3 + 7;
  if ( (a1 & 0x80u) == 0 && a3 <= 0x20u )
  {
    s[0] = 85;
    s[1] = -86;
    s[2] = a3 + 5;
    s[3] = -122;
    s[4] = a1;
    for ( i = 0; i < (unsigned int)a3; ++i )
      s[i + 5] = *(_BYTE *)(a2 + i);
    for ( i = 2; i < a3 + 5; ++i )
      v20 += s[i];
    s[v18 - 2] = v20;
    s[v18 - 1] = HIBYTE(v20);
    if ( !power_send_cmd(s, v18, (unsigned __int8 *)&v8, 8u) )
    {
      return 0;
    }
    else if ( BYTE1(v9) == 1 )
    {
      puts("save eeprom data success ");
      return 1;
    }
    else
    {
      puts("save eeprom data failed ");
      return 0;
    }
  }
  else
  {
    printf("invalid param addr 0x%02x, len %d\n", a1, a3);
    return 0;
  }
}
