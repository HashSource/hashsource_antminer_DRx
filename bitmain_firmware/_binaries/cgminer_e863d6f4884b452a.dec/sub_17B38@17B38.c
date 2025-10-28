int __fastcall sub_17B38(int a1)
{
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  snprintf(
    s,
    0x800u,
    "%s %s %d: Share above target",
    "submit_tested_work",
    *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
    *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
  sub_343C4(7, s, 0);
  return 0;
}
