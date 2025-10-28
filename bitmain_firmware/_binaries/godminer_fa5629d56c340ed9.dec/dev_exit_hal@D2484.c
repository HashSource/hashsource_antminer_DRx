int dev_exit_hal()
{
  uart_uninit();
  fpga_uninit();
  platform_uninit();
  return 0;
}
