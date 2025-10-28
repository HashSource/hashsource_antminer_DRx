int __fastcall sub_4D05C(int a1)
{
  int i; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "%s: frequency = %d", "set_frequency", a1);
    sub_3F178(7, s, 0);
  }
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
    sub_4CA98(i);
  return sub_30140();
}
