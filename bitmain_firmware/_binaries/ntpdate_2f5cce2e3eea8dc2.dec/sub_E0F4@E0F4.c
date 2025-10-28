int sub_E0F4(unsigned __int8 *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return sub_E084((FILE *)stdout, a1, varg_r1);
}
