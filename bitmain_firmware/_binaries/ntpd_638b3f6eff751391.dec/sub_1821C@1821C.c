char *__fastcall sub_1821C(unsigned int a1, int a2, int a3)
{
  bool v3; // cc

  v3 = a1 > 0x1A4;
  if ( a1 > 0x1A4 )
    a3 = 2;
  else
    a1 += (unsigned int)&off_5DE80;
  if ( !v3 )
    a3 = *(unsigned __int8 *)(a1 + 1820);
  return (&off_5DE80)[a3];
}
