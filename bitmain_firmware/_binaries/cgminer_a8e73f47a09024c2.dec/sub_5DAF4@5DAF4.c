_BYTE *__fastcall sub_5DAF4(unsigned int *a1, _DWORD *a2)
{
  _BYTE *result; // r0

  result = (_BYTE *)sub_5D7D8(a1, a2);
  if ( result )
  {
    if ( *result == 45 )
    {
LABEL_5:
      --*a2;
      ++result;
    }
    else
    {
      while ( 1 )
      {
        result = (_BYTE *)sub_5D878((int)result, a1, a2);
        if ( !result )
          break;
        if ( *result == 45 )
          goto LABEL_5;
      }
    }
  }
  return result;
}
