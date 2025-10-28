void __fastcall sub_4F17C(int a1)
{
  int v2; // r4
  int v3; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = a1 << 16;
  sub_448E0((a1 << 16) | 0x1A090A5);
  v3 = sub_449AC(v2 | 0x1A09000);
  if ( v3 == 165 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "chain %d eeprom test pass\n", a1);
      sub_3F178(5, s, 0);
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "chain %d eeprom test fail w %d r %d\n", a1, 165, v3);
    sub_3F178(5, s, 0);
  }
}
