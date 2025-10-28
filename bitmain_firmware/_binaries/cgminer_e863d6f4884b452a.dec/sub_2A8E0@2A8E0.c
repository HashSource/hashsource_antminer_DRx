const char *__fastcall sub_2A8E0(int a1, char *s)
{
  const char *result; // r0
  const char *v4; // r4
  char v5[16]; // [sp+0h] [bp-810h] BYREF
  char sa[2048]; // [sp+10h] [bp-800h] BYREF

  result = strchr(s, 35);
  if ( result )
  {
    if ( !*(_BYTE *)(a1 + 580) )
    {
      v4 = result;
      strcpy(v5, result);
      *v4 = 0;
      result = (const char *)strcmp(v5, "#xnsub");
      if ( !result )
      {
        *(_BYTE *)(a1 + 580) = 1;
        if ( byte_6FA71 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
          {
            snprintf(sa, 0x800u, "Pool %d extranonce subscribing enabled.", *(_DWORD *)a1);
            return (const char *)sub_343C4(7, sa, 0);
          }
        }
      }
    }
  }
  return result;
}
