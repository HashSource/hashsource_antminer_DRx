int __fastcall sub_44A44(_BYTE *a1)
{
  int v1; // r1
  int i; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r1

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "load.c", 0x120u, "decode_unicode_escape");
  v1 = 0;
  for ( i = 1; i != 5; ++i )
  {
    v3 = (unsigned __int8)a1[i];
    v4 = 16 * v1;
    v5 = v3 - 48;
    if ( (unsigned __int8)(v3 - 48) <= 9u )
      goto LABEL_7;
    if ( (unsigned int)(v3 - 97) <= 0x19 )
    {
      v5 = v3 - 87;
LABEL_7:
      v1 = v5 + v4;
      continue;
    }
    if ( (unsigned int)(v3 - 65) > 0x19 )
      _assert_fail(word_50574, "load.c", 0x12Cu, "decode_unicode_escape");
    v1 = v3 - 55 + v4;
  }
  return v1;
}
