_DWORD *__fastcall json_string(const char *a1)
{
  if ( a1 && utf8_check_string(a1, -1) )
    return json_string_nocheck(a1);
  else
    return 0;
}
