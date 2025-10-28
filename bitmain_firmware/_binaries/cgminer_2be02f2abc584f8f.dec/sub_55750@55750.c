_DWORD *__fastcall sub_55750(_DWORD *result, int a2)
{
  _DWORD *v2; // r5

  v2 = result;
  if ( (unsigned int)(a2 + 2) > 1 )
  {
    sub_554C4(result, a2);
    result = (_DWORD *)sub_56BDC(v2 + 10);
    if ( result != (_DWORD *)a2 )
      _assert_fail("c == d", "load.c", 0x10Cu, "lex_unget_unsave");
  }
  return result;
}
