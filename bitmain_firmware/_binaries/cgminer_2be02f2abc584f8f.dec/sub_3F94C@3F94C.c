_BYTE *__fastcall sub_3F94C(int a1)
{
  _BYTE *result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = calloc(1u, 0x40u);
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to calloc store for %s in %s %s():%d", *(const char **)a1, "klist.c", "k_new_store", 85);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result[4] = 1;
  *((_DWORD *)result + 2) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)result = *(_DWORD *)a1;
  result[44] = *(_BYTE *)(a1 + 44);
  return result;
}
