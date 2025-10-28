const char *__fastcall sub_1B65C(int a1)
{
  if ( dword_7C3C4 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_7C3BC > dword_802C8 )
    sub_1B268();
  sub_5D37C(a1, *(_DWORD *)(dword_80568 + 4 * (dword_7C3BC - 1)) + 180);
  return 0;
}
