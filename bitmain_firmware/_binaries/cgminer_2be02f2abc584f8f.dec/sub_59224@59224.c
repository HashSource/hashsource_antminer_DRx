_BYTE *__fastcall sub_59224(int a1, unsigned int *a2, _DWORD *a3)
{
  _BYTE *result; // r0

  result = (_BYTE *)sub_58F48(a1, a2, a3);
  if ( result )
  {
    if ( *result == 45 )
    {
LABEL_5:
      --*a3;
      ++result;
    }
    else
    {
      while ( 1 )
      {
        result = (_BYTE *)sub_58F48((int)result, a2, a3);
        if ( !result )
          break;
        if ( *result == 45 )
          goto LABEL_5;
      }
    }
  }
  return result;
}
