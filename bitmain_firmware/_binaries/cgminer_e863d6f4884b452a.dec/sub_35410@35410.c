_DWORD *__fastcall sub_35410(int a1)
{
  _DWORD *result; // r0
  const char *v3; // r3
  int v4; // r6
  char v5; // r1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  result = calloc(1u, 0x40u);
  v3 = *(const char **)a1;
  if ( !result )
  {
    snprintf(s, 0x800u, "Failed to calloc store for %s in %s %s():%d", v3, "klist.c", "k_new_store", 85);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_BYTE *)(a1 + 44);
  *result = v3;
  result[2] = v4;
  *((_BYTE *)result + 44) = v5;
  *((_BYTE *)result + 4) = 1;
  return result;
}
