int beeper_flicker()
{
  return gpio_ctrl_ui(0x10u, 2);
}
