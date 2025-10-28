int __fastcall lex_init(int a1, int a2, int a3)
{
  stream_init(a1, a2, a3);
  if ( strbuffer_init((strbuffer_t *)(a1 + 40)) )
    return -1;
  *(_DWORD *)(a1 + 52) = -1;
  return 0;
}
