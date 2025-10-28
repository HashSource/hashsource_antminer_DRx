int get_nonce2_and_job_id_store_address()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(272, &v1);
  return v1;
}
