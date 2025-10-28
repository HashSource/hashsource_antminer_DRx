int __fastcall sub_E084(FILE *a1, unsigned __int8 *a2, void *a3)
{
  int *v6; // r0
  char v8[256]; // [sp+0h] [bp-100h] BYREF

  v6 = _errno_location();
  sub_DF84((int)v8, 256, a2, *v6);
  return vfprintf(a1, v8, a3);
}
