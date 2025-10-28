int __fastcall fpga_write(int a1, int a2)
{
  *(_DWORD *)(axi_fpga_addr + 4 * a1) = a2;
  return 0;
}
