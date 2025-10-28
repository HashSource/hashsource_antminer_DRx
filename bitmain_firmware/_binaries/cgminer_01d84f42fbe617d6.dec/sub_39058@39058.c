const char *__fastcall sub_39058(int a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  const char *v8; // r1
  int v9; // r3
  int v10; // r3
  int v11; // r3
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
      "_k_add_head",
      v8,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_head",
      205);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 12);
  v9 = *(_DWORD *)(a1 + 12);
  if ( v9 )
    *(_DWORD *)(v9 + 4) = a2;
  v10 = *(unsigned __int8 *)(a1 + 44);
  *(_DWORD *)(a1 + 12) = a2;
  if ( v10 && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 16) = a2;
  v11 = *(_DWORD *)(a1 + 32);
  ++*(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 32) = v11 + 1;
  return result;
}
