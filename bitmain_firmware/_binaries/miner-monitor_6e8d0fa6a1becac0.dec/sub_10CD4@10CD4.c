ssize_t __fastcall sub_10CD4(int a1, int fd, void *buf, size_t n)
{
  if ( dword_1B380 == 1 )
    return recv(fd, buf, n, 0);
  else
    return -1;
}
