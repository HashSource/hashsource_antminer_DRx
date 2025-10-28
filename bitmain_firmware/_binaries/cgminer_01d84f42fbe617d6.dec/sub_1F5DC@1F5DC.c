int __fastcall sub_1F5DC(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = sub_17E64(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_2B13C(a1 + 136, v3, v4, v5);
    result = sub_1D644();
    if ( result == a1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(s, 0x800u, "Pool %d %s not responding!", *(_DWORD *)result, *(const char **)(result + 164));
        sub_38438(4, s, 0);
      }
      return sub_195D4(0);
    }
    else if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s failed to return work", *(_DWORD *)a1, *(const char **)(a1 + 164));
      return sub_38438(7, s, 0);
    }
  }
  return result;
}
