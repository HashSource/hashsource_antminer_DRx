const char *__fastcall sub_3913C(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  const char *v8; // r1
  const char *v9; // r3
  const char *v10; // r3
  bool v11; // zf
  const char *v12; // r3
  int v13; // r2
  const char *v14; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *a1;
  v8 = *(const char **)a2;
  if ( v8 != result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      result,
      "_k_add_tail",
      v8,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v9 = a1[4];
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = v9;
  v10 = a1[4];
  if ( v10 )
    *((_DWORD *)v10 + 2) = a2;
  v11 = a1[3] == 0;
  v12 = a1[8];
  v13 = (int)(a1[7] + 1);
  a1[4] = (const char *)a2;
  v14 = v12 + 1;
  if ( v11 )
    a1[3] = (const char *)a2;
  a1[7] = (const char *)v13;
  a1[8] = v14;
  return result;
}
