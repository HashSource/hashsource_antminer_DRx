void __noreturn sub_E834(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_7AB4C, 0x200u, a1, varg_r1);
  sub_3F178(3, byte_7AB4C, 1);
  exit(1);
}
