char *sub_3A4C0(int *a1, char *a2, char a3, char *format, ...)
{
  va_list __varargs; // [sp+30h] [bp+14h] BYREF

  va_start(__varargs, format);
  jsonp_error_vset(a1[14], a1[6], a1[7], a1[8], a3, format, __varargs);
  return jsonp_error_set_source((char *)a1[14], a2);
}
