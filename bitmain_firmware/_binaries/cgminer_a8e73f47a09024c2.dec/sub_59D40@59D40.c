int __fastcall sub_59D40(_BYTE *a1)
{
  int result; // r0
  int i; // r3
  int v4; // r2
  int v5; // r12

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "load.c", 0x120u, "decode_unicode_escape");
  result = 0;
  for ( i = 1; i != 5; ++i )
  {
    v4 = (unsigned __int8)a1[i];
    v5 = 16 * result;
    if ( (unsigned __int8)(v4 - 48) > 9u )
    {
      if ( (unsigned __int8)(v4 - 97) > 0x19u )
      {
        if ( (unsigned __int8)(v4 - 65) > 0x19u )
          _assert_fail(word_661D0, "load.c", 0x12Cu, "decode_unicode_escape");
        result = v4 - 55 + v5;
      }
      else
      {
        result = v4 - 87 + v5;
      }
    }
    else
    {
      result = v4 - 48 + v5;
    }
  }
  return result;
}
