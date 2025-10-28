int __fastcall sub_491A8(unsigned int a1, char a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r2
  int v7; // r4
  char v9[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a3 )
    v6 = 0x2000000;
  else
    v6 = 0;
  if ( a4 )
    v6 |= (a5 << 8) | 0x1000000;
  v7 = (((a1 >> 3) & 0xF) << 20) | ((a2 & 3) << 26) | ((a1 & 7) << 16) | a6 | v6;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v9, 0x800u, "value = 0x%08x\n", v7);
    sub_3F178(7, v9, 0);
  }
  return sub_48FF0(v7);
}
