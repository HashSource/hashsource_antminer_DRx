int beeper_off()
{
  return gpio_ctrl_ui(0x10u, 1);
}
