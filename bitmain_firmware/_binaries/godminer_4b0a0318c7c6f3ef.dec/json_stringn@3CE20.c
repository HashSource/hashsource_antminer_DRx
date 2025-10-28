_DWORD *__fastcall json_stringn(_BYTE *a1, size_t a2)
{
  if ( !a1 )
    return 0;
  if ( utf8_check_string((int)a1, a2) )
    return sub_3C864(a1, a2, 0);
  return 0;
}
