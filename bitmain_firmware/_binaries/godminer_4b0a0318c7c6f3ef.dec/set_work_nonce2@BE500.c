int __fastcall set_work_nonce2(int *a1)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  fpga_write(264, *a1);
  fpga_write(268, a1[1]);
  fpga_read(264, &v3);
  return fpga_read(268, &v3);
}
