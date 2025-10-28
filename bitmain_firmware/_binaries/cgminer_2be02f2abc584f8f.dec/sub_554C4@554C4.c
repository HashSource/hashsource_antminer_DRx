_DWORD *__fastcall sub_554C4(_DWORD *result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r3
  int v5; // r3

  v2 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    --result[9];
    if ( a2 == 10 )
    {
      --result[6];
      result[7] = result[8];
    }
    else
    {
      result = (_DWORD *)sub_56EEC((unsigned __int8)a2);
      if ( result )
        --v2[7];
    }
    v4 = v2[4];
    if ( !v4 )
      _assert_fail("stream->buffer_pos > 0", "load.c", 0xE0u, "stream_unget");
    v5 = v4 - 1;
    v2[4] = v5;
    if ( *((unsigned __int8 *)v2 + v5 + 8) != a2 )
      _assert_fail("stream->buffer[stream->buffer_pos] == c", "load.c", 0xE2u, "stream_unget");
  }
  return result;
}
