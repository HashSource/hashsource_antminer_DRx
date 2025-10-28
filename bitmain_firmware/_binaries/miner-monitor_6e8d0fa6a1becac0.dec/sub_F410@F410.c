int sub_F410(int a1, int a2, ...)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  va_list va; // [sp+18h] [bp-8h] BYREF

  va_start(va, a2);
  v2 = sub_FEB0((char *)va, &unk_258C4);
  v3 = sub_10004(off_1B36C[0], &unk_26D6C);
  v4 = sub_10474(v2, v3);
  sub_10210(v4, off_1B36C[0]);
  return 1;
}
