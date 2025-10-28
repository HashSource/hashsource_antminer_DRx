void __fastcall sub_3F458(int a1)
{
  int v2; // r4
  int v3; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = a1 << 16;
  sub_382C4((a1 << 16) | 0x1A090A5);
  v3 = sub_3832C(v2 | 0x1A09000);
  if ( v3 == 165 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "chain %d eeprom test pass\n", a1);
      goto LABEL_6;
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "chain %d eeprom test fail w %d r %d\n", a1, 165, v3);
LABEL_6:
    sub_343C4(5, s, 0);
  }
}
