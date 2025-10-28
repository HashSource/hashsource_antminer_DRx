unsigned int __fastcall get_fan_speed(_BYTE *a1, _DWORD *a2)
{
  int v4; // r2
  unsigned int result; // r0
  unsigned int v6; // [sp+4h] [bp-8h] BYREF

  fpga_read(4, &v6);
  v4 = (v6 >> 8) & 7;
  result = v6;
  *a2 = (unsigned __int8)v6;
  *a1 = v4;
  return result;
}
