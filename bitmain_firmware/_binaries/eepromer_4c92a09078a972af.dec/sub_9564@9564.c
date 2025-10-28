int __fastcall sub_9564(int a1, __int16 a2)
{
  int v2; // r4
  struct tm *v3; // r0
  char v5[16]; // [sp+0h] [bp-10h] BYREF

  sub_93DC(a1, a2, dword_11CF8);
  v2 = dword_11CF8;
  v3 = localtime((const time_t *)dword_11CF8);
  strftime(v5, 0xFu, "%Y%m%d%H%M%S", v3);
  return printf("LEN=%d,TIME=%s\n", *(_DWORD *)(v2 + 4), v5);
}
