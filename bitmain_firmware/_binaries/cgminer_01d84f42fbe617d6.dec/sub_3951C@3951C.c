const char *__fastcall sub_3951C(int a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  const char *v8; // r1
  int v9; // r3
  int v10; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *(const char **)a1;
  v8 = *(const char **)a2;
  if ( v8 != result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      result,
      "_k_unlink_item",
      v8,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_unlink_item",
      312);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a2 + 8);
  if ( v10 )
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 12) == a2 )
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 44) && *(_DWORD *)(a1 + 16) == a2 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = 0;
  --*(_DWORD *)(a1 + 28);
  return result;
}
