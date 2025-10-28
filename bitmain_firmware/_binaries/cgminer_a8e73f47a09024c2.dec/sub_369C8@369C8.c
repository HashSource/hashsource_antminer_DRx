int __fastcall sub_369C8(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( *(_BYTE *)(result + 13) )
  {
    result = sub_3681C(result, (char *)&word_642BC);
    *(_BYTE *)(v2 + 13) = 0;
  }
  if ( a2 )
  {
    sub_3681C(v2, ",\"id\":1}");
    return sub_3681C(v2, (char *)&word_642BC);
  }
  return result;
}
