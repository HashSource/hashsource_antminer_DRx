int __fastcall sub_3F298(int a1)
{
  unsigned __int8 *v1; // r9
  int v3; // r4
  int v4; // r6
  unsigned __int8 *v5; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v10; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v1 = &byte_8DCC0[6 * a1];
  v3 = 39424;
  v4 = (a1 << 16) | 0x1A00000;
  v5 = v1 - 1;
  do
  {
    v6 = v3 | v4;
    v3 += 256;
    *++v5 = sub_3832C(v6);
  }
  while ( v3 != 40960 );
  v7 = byte_8DCC0[6 * a1 + 5];
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
  {
    v8 = sub_36D08(v1, 0x28u);
    if ( v8 == v7 )
    {
      v10 = byte_8DCC0[6 * a1];
      if ( v10 != 85 )
        goto LABEL_17;
LABEL_13:
      if ( byte_8DCC0[6 * a1 + 1] == 170 )
        return 0;
      v10 = 85;
LABEL_16:
      if ( byte_73320 )
      {
LABEL_19:
        snprintf(s, 0x800u, "chain %d EE magic header error %d %d", a1, v10, byte_8DCC0[6 * a1 + 1]);
        sub_343C4(5, s, 0);
        return 255;
      }
LABEL_17:
      if ( !byte_6FA70 && dword_6D35C <= 4 )
        return 255;
      goto LABEL_19;
    }
LABEL_8:
    if ( dword_6D35C <= 4 )
      return 255;
    goto LABEL_20;
  }
  snprintf(
    s,
    0x800u,
    "chain %d eeprom mh(0x%02x 0x%02x) lp vol %d freq %d vol %d crc5 0x%02x",
    a1,
    byte_8DCC0[6 * a1],
    byte_8DCC0[6 * a1 + 1],
    byte_8DCC0[6 * a1 + 2],
    byte_8DCC0[6 * a1 + 3],
    byte_8DCC0[6 * a1 + 4],
    byte_8DCC0[6 * a1 + 5]);
  sub_343C4(5, s, 0);
  v8 = sub_36D08(v1, 0x28u);
  v7 = byte_8DCC0[6 * a1 + 5];
  if ( v7 == v8 )
  {
    v10 = byte_8DCC0[6 * a1];
    if ( v10 != 85 )
      goto LABEL_16;
    goto LABEL_13;
  }
  if ( !byte_73320 && !byte_6FA70 )
    goto LABEL_8;
LABEL_20:
  snprintf(s, 0x800u, "chain %d EE crc check error %d %d", a1, v8, v7);
  sub_343C4(5, s, 0);
  return 255;
}
