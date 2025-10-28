int __fastcall sub_4EF04(int a1)
{
  unsigned __int8 *v2; // r6
  int v3; // r7
  int i; // r4
  unsigned __int8 *v5; // r3
  int v6; // r0
  int v7; // r2
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = &byte_9A5D4[6 * a1];
  v3 = (a1 << 16) | 0x1A00000;
  for ( i = 0; i != 6; ++i )
    v2[i] = sub_449AC(v3 | ((i + 154) << 8));
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    v5 = &byte_9A5D4[6 * a1];
    snprintf(
      s,
      0x800u,
      "chain %d eeprom mh(0x%02x 0x%02x) lp vol %d freq %d vol %d crc5 0x%02x",
      a1,
      *v5,
      v5[1],
      v5[2],
      v5[3],
      v5[4],
      v5[5]);
    sub_3F178(5, s, 0);
  }
  v6 = sub_429CC(v2, 40);
  v7 = byte_9A5D4[6 * a1 + 5];
  if ( v7 == v6 )
  {
    if ( byte_9A5D4[6 * a1] == 85 && byte_9A5D4[6 * a1 + 1] == 170 )
    {
      return 0;
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "chain %d EE magic header error %d %d", a1, byte_9A5D4[6 * a1], byte_9A5D4[6 * a1 + 1]);
      sub_3F178(5, s, 0);
      return 255;
    }
    else
    {
      return 255;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "chain %d EE crc check error %d %d", a1, v6, v7);
    sub_3F178(5, s, 0);
    return 255;
  }
  else
  {
    return 255;
  }
}
