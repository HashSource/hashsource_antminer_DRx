ssize_t __fastcall sub_3F864(int a1, int a2, int a3, int a4, int a5)
{
  char v8; // r3
  int v9; // r2
  _BYTE v11[4]; // [sp+34h] [bp-80Ch] BYREF
  int v12; // [sp+38h] [bp-808h]
  char v13; // [sp+3Ch] [bp-804h]
  char s[2048]; // [sp+40h] [bp-800h] BYREF

  v12 = 0;
  v13 = 0;
  if ( a2 )
    v8 = 81;
  else
    v8 = 65;
  v11[0] = v8;
  v11[2] = a3;
  v11[3] = a4;
  v11[1] = 8;
  if ( a4 == 24 || a4 == 28 || a4 == 32 || a4 == 52 || a4 == 60 || a4 == 20 || a4 == 16 || a4 == 12 || a4 == 8 )
    v12 = a5;
  v9 = sub_3B360(v11, 64);
  v13 = v9;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(
      s,
      0x800u,
      "Set config reg %02x : %02x%02x%02x%02x%02x%02x%02x%02x%02x",
      a4,
      v11[0],
      8,
      a3,
      a4,
      (unsigned __int8)v12,
      BYTE1(v12),
      BYTE2(v12),
      HIBYTE(v12),
      v9);
    sub_38438(7, s, 0);
  }
  return sub_3BBBC(a1, v11, 9u);
}
