_DWORD *__fastcall json_string_value(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 2 )
      return (_DWORD *)result[2];
    else
      return 0;
  }
  return result;
}
