int __fastcall sub_19EC8(int a1)
{
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_149B0(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_30050(a1 + 140);
    result = sub_14A18();
    if ( result == a1 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)result, *(const char **)(result + 172));
        sub_3F178(4, s, 0);
      }
      return sub_199D4(0);
    }
    else if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 172));
      return sub_3F178(7, s, 0);
    }
  }
  return result;
}
