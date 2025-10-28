int __fastcall sub_16A64(char *a1, size_t a2, int a3)
{
  double v3; // d0
  double v7; // d10
  unsigned __int64 v8; // r4
  unsigned __int64 v9; // r0
  size_t v10; // r10
  char s[64]; // [sp+28h] [bp-864h] BYREF
  char v13[2040]; // [sp+68h] [bp-824h] BYREF
  char v14[8]; // [sp+868h] [bp-24h] BYREF
  char v15[20]; // [sp+878h] [bp-14h] BYREF

  sub_11FC4(a3);
  v7 = sub_5ED34(*(_DWORD *)(a3 + 192), *(_DWORD *)(a3 + 196)) / v3 * 60.0;
  v8 = sub_5EE18(
         COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0),
         HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0)));
  v9 = sub_5EE18(
         COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0),
         HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0)));
  sub_E144(v9, v15, 0x10u, 4);
  sub_E144(v8, v14, 0x10u, 4);
  snprintf(a1, a2, "%s%d ", *(const char **)(*(_DWORD *)(a3 + 4) + 8), *(_DWORD *)(a3 + 8));
  (*(void (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 20))(a1, a2, a3);
  v10 = strlen(a1);
  snprintf(
    s,
    0x40u,
    "(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",
    dword_79C48,
    v14,
    v15,
    *(double *)(a3 + 200),
    *(double *)(a3 + 208),
    *(_DWORD *)(a3 + 44),
    v7);
  if ( a2 <= strlen(s) + v10 )
  {
    snprintf(v13, 0x800u, "tailsprintf buffer overflow in %s %s line %d", "cgminer.c", "get_statline", 3421);
    sub_3F178(3, v13, 1);
    sub_134A4(1);
  }
  strcat(a1, s);
  return (*(int (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 24))(a1, a2, a3);
}
