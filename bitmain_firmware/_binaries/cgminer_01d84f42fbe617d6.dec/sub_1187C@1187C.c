void __noreturn sub_1187C(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_60FA8, 0x200u, a1, varg_r1);
  sub_38438(3, byte_60FA8, 1);
  exit(1);
}
