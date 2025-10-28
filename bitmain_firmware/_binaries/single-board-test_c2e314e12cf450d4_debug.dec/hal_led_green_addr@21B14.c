int hal_led_green_addr()
{
  if ( conf_loaded )
    return green_addr;
  else
    return -1;
}
