int json_unpack(_DWORD *a1, _BYTE *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  return json_vunpack_ex(a1, 0, 0, a2, (_QWORD **)varg_r2);
}
