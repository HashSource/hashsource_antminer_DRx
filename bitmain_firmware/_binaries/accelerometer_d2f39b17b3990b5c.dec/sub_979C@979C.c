int __fastcall sub_979C(int a1, int a2, int a3, int a4, const char *a5, int a6, int a7)
{
  if ( !dword_16030 )
    return _vsyslog_chk(a2, 1, a6, a7);
  _fprintf_chk(stderr, 1, "%s: ", a5);
  return _vfprintf_chk(stderr, 1, a6, a7);
}
