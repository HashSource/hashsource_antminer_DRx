unsigned int power_off()
{
  bitmain_power_off_0();
  byte_196B10 = 0;
  return sleep(1u);
}
