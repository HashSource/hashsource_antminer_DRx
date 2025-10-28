int __fastcall sub_E038(char *a1, size_t a2, unsigned __int8 *a3, void *a4)
{
  int *v8; // r0
  char v10[260]; // [sp+0h] [bp-104h] BYREF

  v8 = _errno_location();
  sub_DF84((int)v10, 256, a3, *v8);
  return vsnprintf(a1, a2, v10, a4);
}
