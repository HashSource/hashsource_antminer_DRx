int __fastcall sub_3BE34(unsigned int a1, int a2, unsigned int a3)
{
  int v7; // r6
  unsigned __int8 *v8; // r8
  int v9; // r7
  unsigned __int8 *v10; // r5
  int v11; // t1
  int v12; // [sp+8h] [bp-90Ch] BYREF
  int v13; // [sp+Ch] [bp-908h]
  unsigned __int8 s[256]; // [sp+10h] [bp-904h] BYREF
  char v15[2052]; // [sp+110h] [bp-804h] BYREF

  v12 = 101100117;
  v13 = 0;
  memset(s, 0, sizeof(s));
  if ( (a3 > 0x20) | (a1 >> 7) )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
      return 0;
    snprintf(v15, 0x800u, "invalid param addr 0x%02x, len %d\n", a1, a3);
    sub_343C4(5, v15, 0);
    return 0;
  }
  else
  {
    LOBYTE(v13) = a1;
    BYTE1(v13) = a3;
    BYTE2(v13) = a1 + a3 + 12;
    v7 = sub_3B798((unsigned __int8 *)&v12, 8, s, (unsigned __int8)(a3 + 7));
    if ( !v7 )
      return 0;
    printf("read eeprom data:");
    if ( a3 )
    {
      v8 = &s[(unsigned __int16)(a3 - 1) + 5];
      v9 = a2 - 1;
      v10 = &s[4];
      do
      {
        v11 = *++v10;
        *(_BYTE *)++v9 = v11;
        printf("%02x ", v11);
      }
      while ( v10 != v8 );
    }
    putchar(10);
    return v7;
  }
}
