size_t __fastcall sub_453F4(int a1, int a2)
{
  int v3; // r2
  size_t result; // r0

  if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
    return fputs((const char *)dword_C9A8C, (FILE *)dword_C9A98);
  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( (unsigned __int8)v3 <= 0x7Fu && (dword_69A0C[(unsigned __int8)v3] & 0x2000) != 0 )
  {
    result = fprintf((FILE *)dword_C9A98, "   -%c", v3);
    if ( (*(_DWORD *)(a1 + 12) & 0x1001) == 0x1001 )
      return fwrite(", ", 1u, 2u, (FILE *)dword_C9A98);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 12) & 0x1001) == 0x1001 )
      fputc(32, (FILE *)dword_C9A98);
    return fputs((const char *)dword_C9A88, (FILE *)dword_C9A98);
  }
  return result;
}
