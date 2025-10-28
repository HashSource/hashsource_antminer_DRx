int platform_uninit()
{
  int result; // r0

  if ( platform_inited )
  {
    uart_uninit();
    fpga_uninit();
    fan_uninit();
    ui_uninit();
    result = gpio_uninit();
    platform_inited = 0;
  }
  return result;
}
