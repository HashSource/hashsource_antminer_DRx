int __fastcall json_string_set(int a1, const char *a2)
{
  if ( a2 && utf8_check_string(a2, -1) )
    return json_string_set_nocheck(a1, a2);
  else
    return -1;
}
