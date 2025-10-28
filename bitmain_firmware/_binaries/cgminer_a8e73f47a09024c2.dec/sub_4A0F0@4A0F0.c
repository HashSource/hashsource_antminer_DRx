bool __fastcall sub_4A0F0(int a1)
{
  char s[2048]; // [sp+20h] [bp-82Ch] BYREF
  _DWORD v3[8]; // [sp+820h] [bp-2Ch] BYREF
  int v4; // [sp+840h] [bp-Ch] BYREF
  char v5; // [sp+844h] [bp-8h]
  unsigned __int8 v6; // [sp+845h] [bp-7h]
  __int16 v7; // [sp+846h] [bp-6h]

  v4 = -2096715179;
  v6 = 0;
  memset(v3, 0, sizeof(v3));
  v5 = a1;
  v7 = a1 + 137;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x",
      "power_set_da_value",
      (unsigned __int8)v4,
      BYTE1(v4),
      BYTE2(v4),
      HIBYTE(v4),
      a1,
      v6,
      (unsigned __int8)(a1 - 119),
      (unsigned int)(a1 + 137) >> 8);
    sub_3F178(5, s, 0);
  }
  return sub_49A5C((unsigned __int8 *)&v4, 8, (unsigned __int8 *)v3, 8u);
}
