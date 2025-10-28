int __fastcall sub_4E030(int *a1)
{
  int **v1; // r3
  int result; // r0

  if ( a1 == (int *)dword_CB738 )
    return word_CB734 & 1;
  v1 = (int **)dword_CB754[(unsigned __int8)a1 & 0x3F];
  ++dword_CB854;
  if ( v1 )
  {
    while ( v1[17] != a1 )
    {
      v1 = (int **)*v1;
      if ( !v1 )
        goto LABEL_8;
    }
    result = (_WORD)v1[19] & 1;
    if ( result )
      return 1;
    else
      ++dword_CB73C;
  }
  else
  {
LABEL_8:
    ++dword_CB73C;
    return 0;
  }
  return result;
}
