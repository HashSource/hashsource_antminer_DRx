int close_i2c()
{
  printf("--- %s\n", "close_i2c");
  iic_uninit(e2prom_fd);
  iic_uninit(power_fd);
  iic_uninit(i2c_fd);
  return 0;
}
