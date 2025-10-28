int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_1944B0) )
  {
    gpio_export(dword_1944B0);
    gpio_direction(dword_1944B0, 1);
  }
  return gpio_write(dword_1944B0, 1);
}
