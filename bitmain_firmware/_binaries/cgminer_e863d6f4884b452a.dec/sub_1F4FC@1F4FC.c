int __fastcall sub_1F4FC(int a1)
{
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_1C040(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_2A69C(a1 + 140);
    result = sub_1E098();
    if ( a1 == result )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)a1, *(const char **)(a1 + 172));
        sub_343C4(4, s, 0);
      }
      return sub_1F158(0);
    }
    else if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 172));
      return sub_343C4(7, s, 0);
    }
  }
  return result;
}
