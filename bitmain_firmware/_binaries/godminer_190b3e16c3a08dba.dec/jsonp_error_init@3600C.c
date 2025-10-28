char *__fastcall jsonp_error_init(char *result, char *a2)
{
  if ( result )
  {
    result[92] = 0;
    *((_DWORD *)result + 2) = 0;
    *(_DWORD *)result = -1;
    *((_DWORD *)result + 1) = -1;
    if ( a2 )
      return sub_35FA8(result, a2);
    else
      result[12] = 0;
  }
  return result;
}
