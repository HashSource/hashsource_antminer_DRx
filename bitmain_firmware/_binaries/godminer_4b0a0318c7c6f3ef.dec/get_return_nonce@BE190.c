int __fastcall get_return_nonce(_QWORD *a1)
{
  int result; // r0
  __int64 v3; // [sp+0h] [bp-8h] BYREF

  fpga_read(16, &v3);
  result = fpga_read(20, (_DWORD *)&v3 + 1);
  *a1 = v3;
  return result;
}
