int beeper_on()
{
  return gpio_ctrl_ui(0x10u, 0);
}
