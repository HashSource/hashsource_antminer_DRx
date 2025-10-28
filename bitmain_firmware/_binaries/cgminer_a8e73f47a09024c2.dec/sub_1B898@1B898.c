const char *__fastcall sub_1B898(int a1)
{
  if ( dword_7C3C4 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_7C3C0 > dword_802C8 )
    sub_1B268();
  sub_5D37C(a1, *(_DWORD *)(dword_80568 + 4 * (dword_7C3C0 - 1)) + 184);
  return 0;
}
