int __fastcall sub_3FDFC(int result, int a2, const char *a3, const char *a4, int a5)
{
  const char *v6; // r1
  int v7; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v6 = *(const char **)a2;
  if ( v6 != *(const char **)result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)result,
      "_k_add_head",
      v6,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_head",
      205);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(result + 12);
  v7 = *(_DWORD *)(result + 12);
  if ( v7 )
    *(_DWORD *)(v7 + 4) = a2;
  *(_DWORD *)(result + 12) = a2;
  if ( *(_BYTE *)(result + 44) && !*(_DWORD *)(result + 16) )
    *(_DWORD *)(result + 16) = a2;
  ++*(_DWORD *)(result + 28);
  ++*(_DWORD *)(result + 32);
  return result;
}
