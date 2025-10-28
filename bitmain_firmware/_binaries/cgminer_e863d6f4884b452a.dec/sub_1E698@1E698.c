const char *__fastcall sub_1E698(int a1)
{
  int v3; // r3

  if ( dword_6DD58 )
    return "Use only user + pass or userpass, but not both";
  v3 = dword_6DD50 + 1;
  dword_6DD50 = v3;
  if ( v3 > dword_72EF0 )
  {
    sub_1E3F0();
    v3 = dword_6DD50;
  }
  sub_48B74(a1, *(_DWORD *)(dword_732EC + 4 * (v3 + 0x3FFFFFFF)) + 180);
  return 0;
}
