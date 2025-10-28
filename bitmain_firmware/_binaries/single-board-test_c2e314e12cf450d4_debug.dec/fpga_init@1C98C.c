int fpga_init()
{
  if ( fpga_inited )
    return 0;
  fpga_fd = open("/dev/axi_fpga_dev", 2);
  if ( fpga_fd >= 0 )
  {
    axi_fpga_addr = (int)mmap(0, 0x1200u, 3, 1, fpga_fd, 0);
    if ( axi_fpga_addr )
    {
      printf("%s:%d", "fpga_init", 314);
      printf("fpga_init success. axi_fpga_addr = 0x%x\n", axi_fpga_addr);
      reset();
      fpga_inited = 1;
      return 0;
    }
    else
    {
      printf("%s:%d", "fpga_init", 310);
      printf("mmap axi_fpga_addr failed. axi_fpga_addr = 0x%x\n", axi_fpga_addr);
      close(fpga_fd);
      return -2;
    }
  }
  else
  {
    printf("%s:%d", "fpga_init", 303);
    printf("/dev/axi_fpga_dev open failed. fd = %d\n", fpga_fd);
    return -1;
  }
}
