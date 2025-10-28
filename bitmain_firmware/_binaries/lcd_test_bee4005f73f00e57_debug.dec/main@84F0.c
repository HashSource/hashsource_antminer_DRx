int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r3
  _BYTE s[64]; // [sp+Ch] [bp+Ch] BYREF
  int fd; // [sp+4Ch] [bp+4Ch]

  fd = open("/dev/bitmain-lcd", 1052674, envp, v3, argv, argc);
  if ( fd >= 0 )
  {
    printf("/dev/bitmain-lcd opened. fd = %d\n", fd);
    while ( 1 )
    {
      puts("\nclear lcd");
      memset(s, 32, sizeof(s));
      write(fd, s, 0x40u);
      sleep(3u);
      puts("\nwrite lcd");
      memset(s, 97, sizeof(s));
      write(fd, s, 0x40u);
      sleep(3u);
    }
  }
  printf("/dev/bitmain-lcd open failed. fd = %d\n", fd);
  perror("open");
  return -1;
}
