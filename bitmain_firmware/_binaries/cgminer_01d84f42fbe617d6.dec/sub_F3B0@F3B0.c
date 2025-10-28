int __fastcall sub_F3B0(int a1, int a2)
{
  _DWORD *v2; // r3
  int result; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2[59] == a2 )
  {
    result = (unsigned __int8)byte_630C1;
    if ( byte_630C1 )
    {
      if ( byte_632F0 || (result = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
      {
        snprintf(s, 0x800u, "%s %d duplicate share detected as HW error", *(const char **)(v2[1] + 8), v2[2]);
        sub_38438(7, s, 0);
        return 0;
      }
    }
  }
  else
  {
    v2[59] = a2;
    return 1;
  }
  return result;
}
