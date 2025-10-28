int __fastcall set_nonce2_and_job_id_store_address(int a1)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  fpga_read(272, &v3);
  fpga_write(272, a1);
  return fpga_read(272, &v3);
}
