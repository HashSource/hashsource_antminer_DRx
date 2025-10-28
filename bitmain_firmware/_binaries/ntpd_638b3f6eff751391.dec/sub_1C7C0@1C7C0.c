unsigned __int16 *sub_1C7C0()
{
  unsigned int v0; // r0
  int v2; // r0
  unsigned int v3; // r0

  if ( !word_7D3AC )
  {
    v0 = sub_1C21C();
    word_7CF78 = ((_WORD)v0 << 8) | (v0 >> 8);
    return sub_19AF8(0);
  }
  v2 = sub_21604((unsigned __int16)word_7D3AC);
  if ( v2 )
  {
    v3 = sub_1C1BC(v2);
    word_7CF78 = ((_WORD)v3 << 8) | (v3 >> 8);
    return sub_19AF8(0);
  }
  return sub_1B684(4);
}
