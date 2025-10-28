int __fastcall sub_4331C(int a1)
{
  int fd; // r0
  unsigned __int16 *v4; // r0
  int v5; // r3
  int v6; // r0
  void *v7; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  fd = open("/dev/axi_fpga_dev", 2);
  *(_DWORD *)(a1 + 174) = fd;
  if ( fd < 0 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return -1;
    snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", fd);
    sub_3F178(3, s, 0);
    return -1;
  }
  v4 = (unsigned __int16 *)mmap(0, 0x400u, 3, 1, fd, 0);
  dword_7CD48 = (int)v4;
  if ( !v4 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return -1;
    snprintf(s, 0x800u, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
    sub_3F178(3, s, 0);
    return -1;
  }
  if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
  {
    v5 = *v4;
    goto LABEL_18;
  }
  snprintf(s, 0x800u, "mmap axi_fpga_addr = %p\n", v4);
  sub_3F178(4, s, 0);
  v5 = *(unsigned __int16 *)dword_7CD48;
  if ( !byte_7FE78 && !byte_7CC60 )
  {
LABEL_18:
    if ( dword_7A52C <= 3 )
      goto LABEL_20;
  }
  snprintf(s, 0x800u, "axi_fpga_addr data = 0x%x\n", v5);
  sub_3F178(4, s, 0);
LABEL_20:
  v6 = open("/dev/fpga_mem", 2);
  *(_DWORD *)(a1 + 178) = v6;
  if ( v6 >= 0 )
  {
    v7 = mmap(0, 0x1000000u, 3, 1, v6, 0);
    dword_7CD4C = (int)v7;
    if ( v7 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "mmap fpga_mem_addr = %p\n", v7);
        sub_3F178(4, s, 0);
        return 0;
      }
      else
      {
        return 0;
      }
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(s, 0x800u, "mmap fpga_mem_addr failed. fpga_mem_addr = %p\n", 0);
      sub_3F178(3, s, 0);
      return -1;
    }
    else
    {
      return -1;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem = %d\n", v6);
    sub_3F178(3, s, 0);
    return -1;
  }
  else
  {
    return -1;
  }
}
