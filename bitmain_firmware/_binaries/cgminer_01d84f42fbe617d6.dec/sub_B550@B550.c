void __fastcall __noreturn sub_B550(const char *a1, int a2)
{
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v4 = _errno_location();
  snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v4, "cgminer.c", a1, a2);
  sub_38438(3, s, 1);
  sub_16724(1);
}
