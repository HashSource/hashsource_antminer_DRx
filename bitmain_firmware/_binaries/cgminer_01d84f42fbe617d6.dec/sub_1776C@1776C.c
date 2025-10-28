const char *__fastcall sub_1776C(int a1)
{
  int v3; // r3

  if ( dword_612C0 )
    return "Use only user + pass or userpass, but not both";
  v3 = dword_612B8 + 1;
  dword_612B8 = v3;
  if ( v3 > dword_63740 )
  {
    sub_1746C();
    v3 = dword_612B8;
  }
  sub_47A4C(a1, *(_DWORD *)(dword_639E0 + 4 * (v3 - 1)) + 172);
  return 0;
}
