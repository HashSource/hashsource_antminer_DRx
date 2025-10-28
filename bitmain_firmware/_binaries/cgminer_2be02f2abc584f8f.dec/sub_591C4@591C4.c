_BYTE *__fastcall sub_591C4(unsigned int *a1, _DWORD *a2)
{
  _BYTE *result; // r0

  result = (_BYTE *)sub_58EA8(a1, a2);
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
        result = (_BYTE *)sub_58F48((int)result, a1, a2);
        if ( !result )
          break;
        if ( *result == 45 )
          goto LABEL_5;
      }
    }
  }
  return result;
}
