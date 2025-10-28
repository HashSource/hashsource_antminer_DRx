int __fastcall sub_18E8C(const char *a1, int a2)
{
  const char *v3; // r4
  char *v4; // r0
  int result; // r0

  v3 = a1;
  v4 = strrchr(a1, 47);
  if ( v4 )
    v3 = v4 + 1;
  openlog(v3, 9, 24);
  result = setlogmask(255);
  if ( a2 )
  {
    if ( (dword_7BE6C & 1) != 0 )
      return sub_4FE78(5, "%s", off_79E4C);
  }
  return result;
}
