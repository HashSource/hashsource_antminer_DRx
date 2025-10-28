void fpga_uninit()
{
  if ( fpga_inited )
  {
    if ( munmap((void *)axi_fpga_addr, 0x1200u) < 0 )
    {
      printf("%s:%d", "fpga_uninit", 330);
      puts("munmap failed!");
    }
    fpga_inited = 0;
    close(fpga_fd);
  }
}
