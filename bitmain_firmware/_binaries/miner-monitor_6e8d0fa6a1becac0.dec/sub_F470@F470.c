int sub_F470(int a1, int a2, ...)
{
  int v2; // r4
  int v3; // r0
  int v4; // r0
  va_list va; // [sp+10h] [bp-8h] BYREF

  va_start(va, a2);
  v2 = sub_FEB0((char *)va, &unk_258C4);
  v3 = sub_10710(&unk_26AE0);
  v4 = sub_108B4(v2, v3);
  sub_10A34(v4);
  return 1;
}
