void *__fastcall sub_34A9C(void *result, const void *a2, size_t a3, const char *a4, const char *a5, int a6)
{
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (int)(a3 - 1) >= 0 )
    return memcpy(result, a2, a3);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from %s %s():%d", a3, a4, a5, a6);
    return (void *)sub_3F1C0(3, s, 0);
  }
  return result;
}
