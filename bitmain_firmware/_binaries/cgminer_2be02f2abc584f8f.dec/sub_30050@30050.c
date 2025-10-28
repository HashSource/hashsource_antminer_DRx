const char *__fastcall sub_30050(int a1, char *s)
{
  const char *result; // r0
  const char *v4; // r5
  char v5[2048]; // [sp+0h] [bp-814h] BYREF
  char dest[20]; // [sp+800h] [bp-14h] BYREF

  result = strchr(s, 35);
  v4 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(a1 + 580) )
    {
      strcpy(dest, result);
      *v4 = 0;
      result = (const char *)strcmp(dest, "#xnsub");
      if ( !result )
      {
        *(_BYTE *)(a1 + 580) = 1;
        if ( byte_75C09 )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
          {
            snprintf(v5, 0x800u, "Pool %d extranonce subscribing enabled.", *(_DWORD *)a1);
            return (const char *)sub_3F1C0(7, v5, 0);
          }
        }
      }
    }
  }
  return result;
}
