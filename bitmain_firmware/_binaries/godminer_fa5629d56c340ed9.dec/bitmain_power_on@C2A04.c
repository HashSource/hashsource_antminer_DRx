int bitmain_power_on()
{
  if ( !is_gpio_exist(dword_1954C0) )
  {
    gpio_export(dword_1954C0);
    gpio_direction(dword_1954C0, 1);
  }
  return gpio_write(dword_1954C0, 0);
}
