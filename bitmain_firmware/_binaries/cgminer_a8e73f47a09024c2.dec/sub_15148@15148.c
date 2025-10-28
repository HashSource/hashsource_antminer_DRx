int __fastcall sub_15148(int result)
{
  int v1; // r4
  int v2; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = result;
  *(_DWORD *)(result + 28) = 0;
  if ( dword_7AA24 || (v2 = *(_DWORD *)(result + 4), result = sub_150B0(), v2 >= result) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *(_DWORD *)v1, *(const char **)(v1 + 172));
      return sub_3F178(7, s, 0);
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *(_DWORD *)v1, *(const char **)(v1 + 172));
    return sub_3F178(4, s, 0);
  }
  return result;
}
