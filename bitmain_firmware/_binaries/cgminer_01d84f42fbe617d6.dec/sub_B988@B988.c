void __fastcall __noreturn sub_B988(int a1)
{
  int *v2; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = _errno_location();
  snprintf(
    s,
    0x800u,
    "Failed to pthread_mutex_init errno=%d in %s %s():%d",
    *v2,
    "driver-btm-L3.c",
    "bitmain_L3_prepare",
    a1);
  sub_38438(3, s, 1);
  sub_16724(1);
}
