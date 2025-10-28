int __fastcall json_string_setn(int a1, const void *a2, size_t a3)
{
  if ( a2 && utf8_check_string((int)a2, a3) )
    return json_string_setn_nocheck(a1, a2, a3);
  else
    return -1;
}
