int __fastcall sub_2F090(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( !*(_BYTE *)(result + 13) )
  {
    if ( !a2 )
      return result;
LABEL_5:
    sub_2E530((unsigned int *)v2, ",\"id\":1}");
    return sub_2E530((unsigned int *)v2, (char *)&word_4EAF0);
  }
  result = sub_2E530((unsigned int *)result, (char *)&word_4EAF0);
  *(_BYTE *)(v2 + 13) = 0;
  if ( a2 )
    goto LABEL_5;
  return result;
}
