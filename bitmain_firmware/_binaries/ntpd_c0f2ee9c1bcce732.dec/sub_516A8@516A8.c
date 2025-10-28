void __noreturn sub_516A8(const char *a1, int a2, const char *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  off_7CA04(a1, a2, a3, varg_r3);
  abort();
}
