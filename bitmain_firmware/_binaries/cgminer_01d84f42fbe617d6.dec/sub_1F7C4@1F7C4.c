int __fastcall sub_1F7C4(int result)
{
  int v1; // r3
  _DWORD *v2; // r4
  int v3; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = dword_611AC;
  v2 = (_DWORD *)result;
  *(_DWORD *)(result + 28) = 0;
  if ( v1 || (v3 = *(_DWORD *)(result + 4), result = sub_1F70C(), v3 >= result) )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *v2, (const char *)v2[41]);
      return sub_38438(7, s, 0);
    }
  }
  else if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *v2, (const char *)v2[41]);
    return sub_38438(4, s, 0);
  }
  return result;
}
