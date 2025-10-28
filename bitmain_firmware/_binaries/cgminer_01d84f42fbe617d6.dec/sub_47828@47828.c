char *__fastcall sub_47828(char *result, char *s)
{
  bool v2; // zf
  int v4; // r5
  size_t v5; // r0

  v2 = result == 0;
  if ( result )
    v2 = s == 0;
  v4 = (int)result;
  if ( !v2 )
  {
    v5 = strlen(s);
    if ( v5 <= 0x4F )
    {
      return (char *)memcpy((void *)(v4 + 12), s, v5 + 1);
    }
    else
    {
      strcpy((char *)(v4 + 12), "...");
      return strcpy((char *)(v4 + 15), &s[v5 - 76]);
    }
  }
  return result;
}
