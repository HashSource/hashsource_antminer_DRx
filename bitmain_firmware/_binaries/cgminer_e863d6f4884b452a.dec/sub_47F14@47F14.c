_DWORD *__fastcall sub_47F14(_DWORD *result)
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
