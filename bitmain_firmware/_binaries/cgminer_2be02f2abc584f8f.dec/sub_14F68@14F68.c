int __fastcall sub_14F68(int result)
{
  int v1; // r4
  int v2; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = result;
  *(_DWORD *)(result + 28) = 0;
  if ( dword_739C4 || (v2 = *(_DWORD *)(result + 4), result = sub_14ED0(), v2 >= result) )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *(_DWORD *)v1, *(const char **)(v1 + 172));
      return sub_3F1C0(7, s, 0);
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *(_DWORD *)v1, *(const char **)(v1 + 172));
    return sub_3F1C0(4, s, 0);
  }
  return result;
}
