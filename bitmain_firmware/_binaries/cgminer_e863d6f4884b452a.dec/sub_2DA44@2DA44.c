void *__fastcall sub_2DA44(void *result, const void *a2, size_t a3, const char *a4, const char *a5, int a6)
{
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (int)(a3 - 1) >= 0 )
    return j_memcpy(result, a2, a3);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from %s %s():%d", a3, a4, a5, a6);
    return (void *)sub_343C4(3, s, 0);
  }
  return result;
}
