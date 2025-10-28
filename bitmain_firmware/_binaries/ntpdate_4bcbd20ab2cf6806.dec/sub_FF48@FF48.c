int sub_FF48(const char *a1, int a2, const char *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  return ((int (__fastcall *)(const char *, int, const char *, void *))off_21DE0[0])(a1, a2, a3, varg_r3);
}
