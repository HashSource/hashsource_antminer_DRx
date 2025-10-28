int __fastcall sub_3BB98(int a1)
{
  int v3; // [sp+20h] [bp-82Ch] BYREF
  char v4; // [sp+24h] [bp-828h]
  char v5; // [sp+25h] [bp-827h]
  __int16 v6; // [sp+26h] [bp-826h]
  unsigned __int8 s[32]; // [sp+28h] [bp-824h] BYREF
  char v8[2052]; // [sp+48h] [bp-804h] BYREF

  v3 = -2096715179;
  v5 = 0;
  memset(s, 0, sizeof(s));
  v4 = a1;
  v6 = a1 + 137;
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(
      v8,
      0x800u,
      "%s, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x",
      "power_set_da_value",
      85,
      170,
      6,
      131,
      a1,
      0,
      (unsigned __int8)(a1 - 119),
      (unsigned int)(a1 + 137) >> 8);
    sub_343C4(5, v8, 0);
  }
  return sub_3B798((unsigned __int8 *)&v3, 8, s, 8);
}
