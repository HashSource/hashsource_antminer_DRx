void __fastcall __noreturn sub_18D7C(const char *a1, int a2, const char *a3, void *a4)
{
  char v8[260]; // [sp+0h] [bp-104h] BYREF

  sub_5164C(0);
  sub_4FE78(3, "%s:%d: fatal error:", a1, a2);
  vsnprintf(v8, 0x100u, a3, a4);
  sub_4FE78(3, v8);
  sub_4FE78(3, "exiting (due to fatal error in library)");
  abort();
}
