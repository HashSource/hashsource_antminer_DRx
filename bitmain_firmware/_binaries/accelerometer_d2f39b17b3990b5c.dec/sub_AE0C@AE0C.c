int sub_AE0C(unsigned int a1, const char *a2, int a3, const char *a4, const char *a5, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a5);
  return sub_AD24(a1, a2, a3, a4, (int)a5, (int)va);
}
