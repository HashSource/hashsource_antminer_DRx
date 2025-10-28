double *qsnprintf(wchar_t *a1, int a2, wchar_t *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  return json_vpack_ex((char *)a1, a2, a3, (int *)varg_r3);
}
