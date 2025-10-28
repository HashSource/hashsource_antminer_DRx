int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_178AF0) )
  {
    gpio_export(dword_178AF0);
    gpio_direction(dword_178AF0, 1);
  }
  return gpio_write(dword_178AF0, 1);
}
