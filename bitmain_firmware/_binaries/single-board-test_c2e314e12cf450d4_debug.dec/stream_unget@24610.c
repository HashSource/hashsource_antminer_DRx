_DWORD *__fastcall stream_unget(_DWORD *result, int a2)
{
  _DWORD *v3; // [sp+4h] [bp+4h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    --result[9];
    if ( a2 == 10 )
    {
      --result[6];
      result[7] = result[8];
    }
    else
    {
      result = (_DWORD *)utf8_check_first(a2);
      if ( result )
        --v3[7];
    }
    if ( !v3[4] )
      _assert_fail("stream->buffer_pos > 0", "3rdparty/jansson-2.6/src/load.c", 0xE0u, "stream_unget");
    if ( *((unsigned __int8 *)v3 + --v3[4] + 8) != a2 )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "3rdparty/jansson-2.6/src/load.c", 0xE2u, "stream_unget");
  }
  return result;
}
