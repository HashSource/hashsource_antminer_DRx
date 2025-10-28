int sub_5D24C(int a1, int a2, int a3, int a4, char *format, ...)
{
  va_list __varargs; // [sp+1Ch] [bp+8h] BYREF

  va_start(__varargs, format);
  return sub_5D208(a1, a2, a3, a4, format, __varargs);
}
