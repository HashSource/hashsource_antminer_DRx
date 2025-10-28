int json_unpack_ex(_DWORD *a1, char *a2, int a3, _BYTE *a4, ...)
{
  va_list va; // [sp+18h] [bp+Ch] BYREF

  va_start(va, a4);
  return json_vunpack_ex(a1, a2, a3, a4, (_QWORD **)va);
}
