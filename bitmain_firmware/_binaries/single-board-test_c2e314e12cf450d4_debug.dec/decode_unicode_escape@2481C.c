int __fastcall decode_unicode_escape(_BYTE *a1)
{
  unsigned __int8 v2; // [sp+Fh] [bp+Fh]
  int v3; // [sp+10h] [bp+10h]
  int v4; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  v3 = 0;
  if ( *a1 != 117 )
    _assert_fail("str[0] == 'u'", "3rdparty/jansson-2.6/src/load.c", 0x120u, "decode_unicode_escape");
  for ( i = 1; i <= 4; ++i )
  {
    v2 = a1[i];
    v4 = 16 * v3;
    if ( v2 <= 0x2Fu || v2 > 0x39u )
    {
      if ( v2 <= 0x60u || v2 > 0x7Au )
      {
        if ( v2 <= 0x40u || v2 > 0x5Au )
          _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x12Cu, "decode_unicode_escape");
        v3 = v4 + v2 - 55;
      }
      else
      {
        v3 = v4 + v2 - 87;
      }
    }
    else
    {
      v3 = v4 + v2 - 48;
    }
  }
  return v3;
}
