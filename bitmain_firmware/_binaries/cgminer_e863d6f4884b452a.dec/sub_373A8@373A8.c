int __fastcall sub_373A8(int a1)
{
  int fd; // r0
  const char *v3; // r2
  int v4; // r3
  unsigned __int16 *v6; // r0
  int v7; // r3
  int v8; // r0
  void *v9; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  fd = open("/dev/axi_fpga_dev", 2);
  *(_DWORD *)(a1 + 174) = fd;
  if ( fd < 0 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    v3 = "/dev/axi_fpga_dev open failed. fd = %d\n";
    v4 = fd;
    goto LABEL_6;
  }
  v6 = (unsigned __int16 *)mmap(0, 0x400u, 3, 1, fd, 0);
  dword_6FAEC = (int)v6;
  if ( !v6 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    v3 = "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n";
LABEL_32:
    v4 = 0;
LABEL_6:
    snprintf(s, 0x800u, v3, v4);
LABEL_7:
    sub_343C4(3, s, 0);
    return -1;
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
  {
    v7 = *v6;
    goto LABEL_16;
  }
  snprintf(s, 0x800u, "mmap axi_fpga_addr = %p\n", v6);
  sub_343C4(4, s, 0);
  v7 = *(unsigned __int16 *)dword_6FAEC;
  if ( !byte_73320 && !byte_6FA70 )
  {
LABEL_16:
    if ( dword_6D35C <= 3 )
      goto LABEL_18;
  }
  snprintf(s, 0x800u, "axi_fpga_addr data = 0x%x\n", v7);
  sub_343C4(4, s, 0);
LABEL_18:
  v8 = open("/dev/fpga_mem", 2);
  *(_DWORD *)(a1 + 178) = v8;
  if ( v8 < 0 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem = %d\n", v8);
    goto LABEL_7;
  }
  v9 = mmap(0, 0x1000000u, 3, 1, v8, 0);
  dword_6FBC0 = (int)v9;
  if ( !v9 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    v3 = "mmap fpga_mem_addr failed. fpga_mem_addr = %p\n";
    goto LABEL_32;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "mmap fpga_mem_addr = %p\n", v9);
    sub_343C4(4, s, 0);
  }
  return 0;
}
