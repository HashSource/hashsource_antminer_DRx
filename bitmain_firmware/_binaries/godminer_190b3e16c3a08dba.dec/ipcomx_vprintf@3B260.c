_DWORD *ipcomx_vprintf(char *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return json_vsprintf(a1, varg_r1);
}
