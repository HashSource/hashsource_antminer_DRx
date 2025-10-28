size_t __fastcall sub_2E1E8(const char *a1)
{
  size_t result; // r0
  size_t v3; // r6
  void *v4; // r7

  result = strlen(a1);
  if ( result )
  {
    v3 = result + 1;
    v4 = (void *)sub_4F478(dword_7FFF4, result + 1, 0, 0);
    dword_7FFF4 = (int)v4;
    memmove(v4, a1, v3);
    return sub_4E624(v4);
  }
  return result;
}
