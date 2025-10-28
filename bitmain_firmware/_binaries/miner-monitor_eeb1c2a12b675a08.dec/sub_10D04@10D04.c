ssize_t __fastcall sub_10D04(int a1, int fd, void *buf, size_t n)
{
  if ( dword_1B380 == 1 )
    return send(fd, buf, n, 0);
  else
    return -1;
}
