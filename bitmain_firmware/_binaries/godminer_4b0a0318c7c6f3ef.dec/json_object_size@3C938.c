_DWORD *__fastcall json_object_size(_DWORD *result)
{
  if ( result )
  {
    if ( *result )
      return 0;
    else
      return (_DWORD *)result[2];
  }
  return result;
}
