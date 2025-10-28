char *__fastcall sub_28D98(char *a1, int *a2)
{
  double v2; // d0
  char *result; // r0
  int v6; // r3
  __int64 v7; // r0
  const char *v8; // r0
  _DWORD s[65]; // [sp+8h] [bp-104h] BYREF

  result = (char *)memset(s, 0, 0x100u);
  if ( a2 )
  {
    v6 = *a2;
    if ( *a2 == 6 )
    {
      strcpy((char *)s, "false");
    }
    else
    {
      switch ( v6 )
      {
        case 5:
          strcpy((char *)s, "true");
          break;
        case 3:
          v7 = json_integer_value((int)a2);
          snprintf((char *)s, 0x100u, "%lld", v7);
          break;
        case 4:
          json_real_value();
          snprintf((char *)s, 0x100u, "%.2lf", v2);
          break;
        case 2:
          v8 = (const char *)json_string_value(a2);
          snprintf((char *)s, 0x100u, "%s", v8);
          break;
      }
    }
    return strcat(a1, (const char *)s);
  }
  return result;
}
