const char *__fastcall sub_16814(char *s)
{
  if ( !dword_611D4 )
    dword_611D4 = (int)_strdup(s);
  if ( ++dword_611D8 <= 10 )
    return (const char *)sub_1672C(s);
  else
    return "Too many levels of JSON includes (limit 10) or a loop";
}
