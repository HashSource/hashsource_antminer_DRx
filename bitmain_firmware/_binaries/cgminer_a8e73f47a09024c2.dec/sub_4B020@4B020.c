size_t __fastcall sub_4B020(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v6; // r0
  char s[2040]; // [sp+18h] [bp-80Ch] BYREF
  unsigned __int8 v9; // [sp+818h] [bp-Ch] BYREF
  char v10; // [sp+819h] [bp-Bh]
  unsigned __int8 v11; // [sp+81Ah] [bp-Ah]
  char v12; // [sp+81Bh] [bp-9h]
  char v13; // [sp+81Ch] [bp-8h]

  v11 = 0;
  v13 = 0;
  if ( a2 )
  {
    v9 = 82;
    v10 = 5;
  }
  else
  {
    v9 = 66;
    v10 = 5;
    v11 = a3;
  }
  v12 = a4;
  v6 = sub_429CC(&v9, 32);
  v13 = v6;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s: reg_addr: 0x%02x : 0x%02x, 0x%02x, 0x%02x, 0x%02x, 0x%02x",
      "get_status",
      a4,
      v9,
      5,
      v11,
      a4,
      v6);
    sub_3F178(7, s, 0);
  }
  return sub_43CC0(a1, &v9, 5u);
}
