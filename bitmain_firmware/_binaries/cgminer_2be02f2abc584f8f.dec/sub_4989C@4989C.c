int __fastcall sub_4989C(int a1)
{
  int i; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "%s: frequency = %d", "set_frequency", a1);
    sub_3F1C0(5, s, 0);
  }
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
    sub_493AC(i);
  return sub_2FF20();
}
