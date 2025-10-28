int __fastcall sub_1E240(int result)
{
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = (_DWORD *)result;
  v2 = dword_6DB74;
  *(_DWORD *)(result + 28) = 0;
  if ( v2 || (v3 = *(_DWORD *)(result + 4), result = sub_1E1C4(), v3 >= result) )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *v1, (const char *)v1[43]);
      return sub_343C4(7, s, 0);
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *v1, (const char *)v1[43]);
    return sub_343C4(4, s, 0);
  }
  return result;
}
