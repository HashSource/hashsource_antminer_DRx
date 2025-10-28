void sub_E15C(int a1, char *a2, ...)
{
  char var404[1032]; // [sp+8h] [bp-404h] BYREF
  va_list varg_r2; // [sp+418h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  sub_E038(var404, 0x400u, (unsigned __int8 *)a2, varg_r2);
  sub_DDF8(a1, var404);
}
