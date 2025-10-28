void __fastcall __noreturn sub_18DE8(const char *a1, int a2, int a3, const char *a4)
{
  const char *v8; // r0

  sub_51514(0);
  v8 = (const char *)sub_51534(a3);
  sub_4FE78(3, "%s:%d: %s(%s) failed", a1, a2, v8, a4);
  sub_4FE78(3, "exiting (due to assertion failure)");
  abort();
}
