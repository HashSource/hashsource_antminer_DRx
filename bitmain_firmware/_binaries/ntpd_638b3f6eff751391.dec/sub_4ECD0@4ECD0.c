int __fastcall sub_4ECD0(unsigned __int16 *a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // kr00_4
  unsigned int v5; // r0

  if ( !a1 )
    off_7C9FC("caltontp.c", 41, 2, "jt != ((void *)0)");
  if ( *((unsigned __int8 *)a1 + 4) > 0xDu )
    off_7C9FC("caltontp.c", 43, 0, "jt->month <= 13");
  if ( *((unsigned __int8 *)a1 + 5) > 0x20u )
    off_7C9FC("caltontp.c", 44, 0, "jt->monthday <= 32");
  if ( a1[1] > 0x16Eu )
    off_7C9FC("caltontp.c", 45, 0, "jt->yearday <= 366");
  if ( *((unsigned __int8 *)a1 + 6) > 0x18u )
    off_7C9FC("caltontp.c", 46, 0, "jt->hour <= 24");
  if ( *((unsigned __int8 *)a1 + 7) > 0x3Cu )
    off_7C9FC("caltontp.c", 47, 0, "jt->minute <= (60)");
  v2 = *((unsigned __int8 *)a1 + 8);
  if ( v2 > 0x3C )
    off_7C9FC("caltontp.c", 48, 0, "jt->second <= (60)");
  if ( a1[1] )
  {
    v5 = a1[1]
       - 693596
       + 365 * (*a1 - 1)
       + (((unsigned int)*a1 - 1) >> 2)
       + ((unsigned int)*a1 - 1) / 0x190
       - ((unsigned int)*a1 - 1) / 0x64;
  }
  else
  {
    v3 = *((unsigned __int8 *)a1 + 4) + 9;
    v4 = *a1 - 1 + v3 / 0xC;
    v5 = *((unsigned __int8 *)a1 + 5)
       - 693902
       + 365 * v4
       + (v4 >> 2)
       + v4 / 0x190
       + (153 * (v3 % 0xC) + 2) / 5
       - v4 / 0x64;
  }
  return 3600 * *((unsigned __int8 *)a1 + 6) + 60 * *((unsigned __int8 *)a1 + 7) + v2 + 86400 * v5;
}
