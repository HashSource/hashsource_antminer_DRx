const char **__fastcall sub_35808(const char **result, int a2, const char *a3, const char *a4, int a5)
{
  const char *v6; // r1
  const char *v7; // r3
  const char *v8; // r3
  __int64 v9; // r2
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v6 = *(const char **)a2;
  if ( v6 != *result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      v6,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( !*((_BYTE *)result + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  *(_DWORD *)(a2 + 4) = result[4];
  *(_DWORD *)(a2 + 8) = 0;
  v7 = result[4];
  if ( v7 )
    *((_DWORD *)v7 + 2) = a2;
  v8 = result[3];
  result[4] = (const char *)a2;
  if ( !v8 )
    result[3] = (const char *)a2;
  v9 = *(_QWORD *)(result + 7);
  LODWORD(v9) = v9 + 1;
  ++HIDWORD(v9);
  *(_QWORD *)(result + 7) = v9;
  return result;
}
