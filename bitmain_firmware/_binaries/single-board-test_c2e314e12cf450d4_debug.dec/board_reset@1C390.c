void board_reset()
{
  board_reset_low();
  usleep(0x186A0u);
  board_reset_high();
}
