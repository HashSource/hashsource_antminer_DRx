const char *__fastcall sub_2B358(int a1, char *s)
{
  const char *result; // r0
  const char *v4; // r6
  char v5[16]; // [sp+0h] [bp-810h] BYREF
  char sa[2048]; // [sp+10h] [bp-800h] BYREF

  result = strchr(s, 35);
  v4 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(a1 + 572) )
    {
      strcpy(v5, result);
      *v4 = 0;
      result = (const char *)strcmp(v5, "#xnsub");
      if ( !result )
      {
        *(_BYTE *)(a1 + 572) = 1;
        if ( byte_630C1 )
        {
          if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
          {
            snprintf(sa, 0x800u, "Pool %d extranonce subscribing enabled.", *(_DWORD *)a1);
            return (const char *)sub_38438(7, sa, 0);
          }
        }
      }
    }
  }
  return result;
}
