ssize_t __fastcall sub_361F0(__int16 *a1, int fd)
{
  __int16 v2; // r2

  v2 = *a1;
  *(_BYTE *)(*((_DWORD *)a1 + 1) + v2) = 16;
  *(_BYTE *)(*((_DWORD *)a1 + 1) + (__int16)(v2 + 1)) = 3;
  *a1 = v2 + 2;
  return write(fd, *((const void **)a1 + 1), (__int16)(v2 + 2));
}
