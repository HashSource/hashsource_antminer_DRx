const char *__fastcall sub_18CF0(const char *result, int a2, const char *a3, void *a4)
{
  char v6[256]; // [sp+0h] [bp-100h] BYREF

  if ( dword_7CF50 <= 99 )
  {
    sub_4FE78(3, "%s:%d: unexpected error:", result, a2);
    vsnprintf(v6, 0x100u, a3, a4);
    result = (const char *)sub_4FE78(3, v6);
    if ( ++dword_7CF50 == 100 )
      return (const char *)sub_4FE78(3, "Too many errors.  Shutting up.");
  }
  return result;
}
