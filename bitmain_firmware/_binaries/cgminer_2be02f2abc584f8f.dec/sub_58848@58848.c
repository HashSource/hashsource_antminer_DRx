char *__fastcall sub_58848(char *result, char *s)
{
  int v3; // r5
  bool v4; // zf
  size_t v5; // r1
  char *v6; // r0
  const char *v7; // r1

  v3 = (int)result;
  v4 = result == 0;
  if ( result )
    v4 = s == 0;
  if ( !v4 )
  {
    v5 = strlen(s);
    if ( v5 > 0x4F )
    {
      strcpy((char *)(v3 + 12), "...");
      v6 = (char *)(v3 + 15);
      v7 = &s[v5 - 76];
    }
    else
    {
      v6 = (char *)(v3 + 12);
      v7 = s;
    }
    return strcpy(v6, v7);
  }
  return result;
}
