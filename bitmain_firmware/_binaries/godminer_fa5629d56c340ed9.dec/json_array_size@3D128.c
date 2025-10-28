_DWORD *__fastcall json_array_size(_DWORD *result)
{
  if ( result )
  {
    if ( *result == 1 )
      return (_DWORD *)result[3];
    else
      return 0;
  }
  return result;
}
