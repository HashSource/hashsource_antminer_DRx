int hal_led_red_addr()
{
  if ( conf_loaded )
    return red_addr;
  else
    return -1;
}
