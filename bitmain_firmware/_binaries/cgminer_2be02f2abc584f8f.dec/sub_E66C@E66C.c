void __noreturn sub_E66C(const char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r1, a1);
  vsnprintf(byte_73AEC, 0x200u, a1, varg_r1);
  sub_3F1C0(3, byte_73AEC, 1);
  exit(1);
}
