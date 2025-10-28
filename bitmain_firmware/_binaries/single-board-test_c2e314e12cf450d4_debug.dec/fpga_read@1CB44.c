int __fastcall fpga_read(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(axi_fpga_addr + 4 * a1);
  return 0;
}
