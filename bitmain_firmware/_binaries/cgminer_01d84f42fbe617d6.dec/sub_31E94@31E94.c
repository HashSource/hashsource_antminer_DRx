int __fastcall sub_31E94(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( !*(_BYTE *)(result + 13) )
  {
    if ( !a2 )
      return result;
    goto LABEL_3;
  }
  result = sub_30708((unsigned int *)result, (char *)word_56150);
  *(_BYTE *)(v2 + 13) = 0;
  if ( a2 )
  {
LABEL_3:
    sub_30708((unsigned int *)v2, ",\"id\":1}");
    return sub_30708((unsigned int *)v2, (char *)word_56150);
  }
  return result;
}
