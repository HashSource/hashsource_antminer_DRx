const char *__fastcall sub_1B7FC(char *s)
{
  bool v2; // nf

  if ( !dword_6DBB4 )
    dword_6DBB4 = (int)_strdup(s);
  v2 = dword_6DBB8 - 9 < 0;
  ++dword_6DBB8;
  if ( v2 ^ __OFSUB__(dword_6DBB8, 10) | (dword_6DBB8 == 10) )
    return (const char *)sub_1B768(s);
  else
    return "Too many levels of JSON includes (limit 10) or a loop";
}
