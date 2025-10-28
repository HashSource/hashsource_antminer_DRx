_DWORD *__fastcall sub_44D28(_DWORD *result, int a2)
{
  _DWORD *v3; // r5

  v3 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    sub_44AEC(result, a2);
    result = (_DWORD *)sub_46038(v3 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "load.c", 0x10Cu, "lex_unget_unsave");
  }
  return result;
}
