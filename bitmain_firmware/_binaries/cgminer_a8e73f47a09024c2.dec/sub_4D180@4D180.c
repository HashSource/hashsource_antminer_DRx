int __fastcall sub_4D180(int a1)
{
  int result; // r0
  int i; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%s ticket_mask = 0x%08x", "set_ticket_mask", a1);
    sub_3F178(5, s, 0);
  }
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
    result = sub_4D13C(i, a1);
  return result;
}
