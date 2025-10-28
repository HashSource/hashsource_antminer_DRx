int __fastcall sub_CD8C(int *a1)
{
  int **v1; // r3
  int result; // r0

  if ( a1 == (int *)dword_240A0 )
    return word_2409C & 1;
  v1 = (int **)dword_240BC[(unsigned __int8)a1 & 0x3F];
  ++dword_241BC;
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
      ++dword_240A4;
  }
  else
  {
LABEL_8:
    ++dword_240A4;
    return 0;
  }
  return result;
}
