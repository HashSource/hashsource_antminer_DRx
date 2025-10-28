int __fastcall sub_E75C(int a1, int a2, int a3, int a4)
{
  int varg_r0; // [sp+10h] [bp+8h] BYREF
  int varg_r1; // [sp+14h] [bp+Ch] BYREF
  _DWORD varg_r2[2]; // [sp+18h] [bp+10h] BYREF

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2[0] = a3;
  varg_r2[1] = a4;
  return printf(
           "first_2byte=%s  ser_cmd=%s ser_len=%s body=%s\n",
           (const char *)&varg_r0,
           (const char *)&varg_r0 + 3,
           (const char *)&varg_r1 + 2,
           (const char *)varg_r2);
}
