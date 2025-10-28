int __fastcall sub_46A84(_BYTE *a1)
{
  _BYTE *v1; // r3
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r2
  int v5; // t1
  int v6; // r0
  int v7; // r1

  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "load.c", 0x120u, "decode_unicode_escape");
  v1 = a1;
  result = 0;
  v3 = v1 + 4;
  do
  {
    v5 = (unsigned __int8)*++v1;
    v4 = v5;
    v6 = 16 * result;
    v7 = v5 - 48;
    if ( (unsigned __int8)(v5 - 48) > 9u )
    {
      if ( (unsigned int)(v4 - 97) > 0x19 )
      {
        if ( (unsigned int)(v4 - 65) > 0x19 )
          _assert_fail((const char *)&word_513BC, "load.c", 0x12Cu, "decode_unicode_escape");
        result = v6 + v4 - 55;
      }
      else
      {
        result = v6 + v4 - 87;
      }
    }
    else
    {
      result = v6 + v7;
    }
  }
  while ( v1 != v3 );
  return result;
}
