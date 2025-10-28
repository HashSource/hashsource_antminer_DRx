int __fastcall sub_19CE8(int a1)
{
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_147D0(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_2FE30(a1 + 140);
    result = sub_14838();
    if ( result == a1 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)result, *(const char **)(result + 172));
        sub_3F1C0(4, s, 0);
      }
      return sub_197F4(0);
    }
    else if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 172));
      return sub_3F1C0(7, s, 0);
    }
  }
  return result;
}
