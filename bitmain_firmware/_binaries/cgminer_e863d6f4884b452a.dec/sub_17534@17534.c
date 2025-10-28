int __fastcall sub_17534(_DWORD *a1, int a2)
{
  int result; // r0
  char s[2056]; // [sp+8h] [bp-808h] BYREF

  if ( a1[59] == a2 )
  {
    if ( byte_73320 || (result = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
    {
      snprintf(s, 0x800u, "%s %d duplicate share detected as HW error", *(const char **)(a1[1] + 8), a1[2]);
      sub_343C4(3, s, 0);
      return 0;
    }
  }
  else
  {
    a1[59] = a2;
    return 1;
  }
  return result;
}
