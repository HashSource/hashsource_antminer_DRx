_DWORD *__fastcall json_array_get(_DWORD *result, unsigned int a2)
{
  if ( result )
  {
    if ( *result == 1 && result[3] > a2 )
      return *(_DWORD **)(result[4] + 4 * a2);
    else
      return 0;
  }
  return result;
}
