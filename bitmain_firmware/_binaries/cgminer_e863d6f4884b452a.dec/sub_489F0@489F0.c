char *__fastcall sub_489F0(int a1, char *s)
{
  size_t v4; // r0

  v4 = strlen(s);
  if ( v4 <= 0x4F )
    return (char *)j_memcpy((void *)(a1 + 12), s, v4 + 1);
  *(_DWORD *)(a1 + 12) = 3026478;
  return j_strcpy((char *)(a1 + 15), &s[v4 - 76]);
}
