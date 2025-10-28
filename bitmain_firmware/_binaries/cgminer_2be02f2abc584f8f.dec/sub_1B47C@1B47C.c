const char *__fastcall sub_1B47C(int a1)
{
  if ( dword_75364 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_7535C > dword_791E8 )
    sub_1B088();
  sub_58A4C(a1, *(_DWORD *)(dword_79488 + 4 * (dword_7535C - 1)) + 180);
  return 0;
}
