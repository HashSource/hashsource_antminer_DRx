const char *__fastcall sub_1B6B8(int a1)
{
  if ( dword_75364 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_75360 > dword_791E8 )
    sub_1B088();
  sub_58A4C(a1, *(_DWORD *)(dword_79488 + 4 * (dword_75360 - 1)) + 184);
  return 0;
}
