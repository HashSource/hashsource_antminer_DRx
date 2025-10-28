int __fastcall sub_36A10(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( *(_BYTE *)(result + 13) )
  {
    result = sub_36864(result, (char *)&word_5F990);
    *(_BYTE *)(v2 + 13) = 0;
  }
  if ( a2 )
  {
    sub_36864(v2, ",\"id\":1}");
    return sub_36864(v2, (char *)&word_5F990);
  }
  return result;
}
