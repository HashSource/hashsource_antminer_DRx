int reset()
{
  int v1; // [sp+4h] [bp+4h] BYREF

  v1 = -2147450880;
  fpga_write(16, -2147450880);
  do
  {
    usleep(0x186A0u);
    fpga_read(16, &v1);
  }
  while ( v1 < 0 );
  printf("%s:%d", "reset", 291);
  return puts("fpga reset success");
}
