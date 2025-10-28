int __fastcall power_read_eeprom_data(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 s[256]; // [sp+8h] [bp+8h] BYREF
  int v9; // [sp+108h] [bp+108h] BYREF
  int v10; // [sp+10Ch] [bp+10Ch]
  unsigned __int16 i; // [sp+114h] [bp+114h]
  __int16 v13; // [sp+116h] [bp+116h]

  v9 = 101100117;
  v10 = 0;
  memset(s, 0, sizeof(s));
  v13 = 0;
  if ( (a1 & 0x80u) == 0 && a3 <= 0x20u )
  {
    LOBYTE(v10) = a1;
    BYTE1(v10) = a3;
    for ( i = 2; i <= 5u; ++i )
      v13 += *((unsigned __int8 *)&v9 + i);
    HIWORD(v10) = v13;
    if ( !power_send_cmd((unsigned __int8 *)&v9, 8u, s, a3 + 7) )
    {
      return 0;
    }
    else
    {
      printf("read eeprom data:");
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        *(_BYTE *)(a2 + i) = s[i + 5];
        printf("%02x ", *(unsigned __int8 *)(a2 + i));
      }
      putchar(10);
      return 1;
    }
  }
  else
  {
    printf("invalid param addr 0x%02x, len %d\n", a1, a3);
    return 0;
  }
}
