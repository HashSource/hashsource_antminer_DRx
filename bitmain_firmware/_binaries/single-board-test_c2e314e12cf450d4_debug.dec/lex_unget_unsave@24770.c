_DWORD *__fastcall lex_unget_unsave(_DWORD *result, int a2)
{
  _DWORD *v3; // [sp+4h] [bp+4h]

  v3 = result;
  if ( a2 != -1 && a2 != -2 )
  {
    stream_unget(result, a2);
    result = (_DWORD *)strbuffer_pop((strbuffer_t *)(v3 + 10));
    if ( (unsigned __int8)result != a2 )
      _assert_fail("c == d", "3rdparty/jansson-2.6/src/load.c", 0x10Cu, "lex_unget_unsave");
  }
  return result;
}
