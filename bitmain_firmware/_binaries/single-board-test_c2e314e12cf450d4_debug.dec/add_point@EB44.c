_DWORD *__fastcall add_point(_DWORD *result, unsigned int a2)
{
  if ( ++*result >= a2 )
    *result = 0;
  return result;
}
