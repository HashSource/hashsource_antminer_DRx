int __fastcall get_eth_mac(const char *a1, int a2)
{
  char dest[32]; // [sp+8h] [bp+8h] BYREF
  int fd; // [sp+28h] [bp+28h]
  int i; // [sp+2Ch] [bp+2Ch]

  fd = socket(2, 1, 0);
  if ( fd >= 0 )
  {
    strcpy(dest, a1);
    if ( ioctl(fd, 0x8927u, dest) >= 0 )
    {
      for ( i = 0; i <= 5; ++i )
        *(_BYTE *)(a2 + i) = dest[i + 18];
      close(fd);
      return 0;
    }
    else
    {
      printf("%s:%d", "get_eth_mac", 149);
      printf("error ioctl");
      close(fd);
      return -2;
    }
  }
  else
  {
    printf("%s:%d", "get_eth_mac", 143);
    printf("error sock");
    return -1;
  }
}
