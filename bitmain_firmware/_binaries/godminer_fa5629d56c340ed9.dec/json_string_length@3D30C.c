_DWORD *__fastcall json_string_length(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 2 )
      return (_DWORD *)result[3];
    else
      return 0;
  }
  return result;
}
