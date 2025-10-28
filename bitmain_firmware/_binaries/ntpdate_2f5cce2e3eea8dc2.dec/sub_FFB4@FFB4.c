void __fastcall __noreturn sub_FFB4(const char *a1, int a2, const char *a3)
{
  const char *v6; // r0

  v6 = (const char *)sub_F118((_DWORD *)dword_2400C, 1, 101, (int)"failed");
  sub_FF84(a1, a2, "RUNTIME_CHECK(%s) %s", a3, v6);
}
