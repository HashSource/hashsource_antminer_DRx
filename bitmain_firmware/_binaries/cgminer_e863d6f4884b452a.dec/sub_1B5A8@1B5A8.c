int __fastcall sub_1B5A8(char *a1, size_t a2, int a3)
{
  double v3; // d0
  double v7; // d8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r0
  char v11[16]; // [sp+28h] [bp-864h] BYREF
  char v12[16]; // [sp+38h] [bp-854h] BYREF
  char s[64]; // [sp+48h] [bp-844h] BYREF
  char v14[2052]; // [sp+88h] [bp-804h] BYREF

  sub_1A024(a3);
  v7 = sub_4A0BC(*(_DWORD *)(a3 + 192), *(_DWORD *)(a3 + 196)) / v3;
  v8 = sub_4A178(
         COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0),
         HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 48) * 1000000.0)));
  v9 = sub_4A178(
         COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0),
         HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(a3 + 80) / v3 * 1000000.0)));
  sub_16DA4(v9, v11, 0x10u, 4);
  sub_16DA4(v8, v12, 0x10u, 4);
  snprintf(a1, a2, "%s%d ", *(const char **)(*(_DWORD *)(a3 + 4) + 8), *(_DWORD *)(a3 + 8));
  (*(void (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 20))(a1, a2, a3);
  LODWORD(v8) = strlen(a1);
  snprintf(
    s,
    0x40u,
    "(%ds):%s (avg):%sh/s | A:%.0f R:%.0f HW:%d WU:%.1f/m",
    dword_6CA7C,
    v12,
    v11,
    *(double *)(a3 + 200),
    *(double *)(a3 + 208),
    *(_DWORD *)(a3 + 44),
    v7 * 60.0);
  if ( strlen(s) + (unsigned int)v8 >= a2 )
  {
    snprintf(v14, 0x800u, "tailsprintf buffer overflow in %s %s line %d", "cgminer.c", "get_statline", 3421);
    sub_343C4(3, v14, 1);
    sub_1B070(1, 1);
  }
  strcat(a1, s);
  return (*(int (__fastcall **)(char *, size_t, int))(*(_DWORD *)(a3 + 4) + 24))(a1, a2, a3);
}
