void __noreturn sub_17404(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_6D870, 0x200u, a1, varg_r1);
  sub_343C4(3, byte_6D870, 1);
  exit(1);
}
