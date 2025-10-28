_DWORD *__fastcall sub_35E4C(int a1, int a2)
{
  _DWORD *v4; // r4
  _BYTE *v5; // r0
  _DWORD *result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = calloc(1u, 0x20u);
  if ( !v4 )
  {
    snprintf(s, 0x800u, "Failed to calloc dupdata in %s %s():%d", "noncedup.c", "dupalloc", 36);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  *v4 = a2;
  v5 = sub_3547C("Nonces", 16, 1024, 0, 1, "noncedup.c", "dupalloc", 39);
  v4[1] = v5;
  result = sub_35410((int)v5);
  *(_DWORD *)(a1 + 24) = v4;
  v4[2] = result;
  return result;
}
