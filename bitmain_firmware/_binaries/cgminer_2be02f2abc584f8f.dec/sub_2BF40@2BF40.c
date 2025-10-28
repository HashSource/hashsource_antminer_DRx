bool __fastcall sub_2BF40(int a1, int a2)
{
  int v2; // r0
  __time_t v3; // r1
  fd_set *v4; // r3
  char v6; // [sp+4h] [bp-90h] BYREF
  fd_set readfds; // [sp+8h] [bp-8Ch] BYREF
  struct timeval timeout; // [sp+88h] [bp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 588);
  v3 = a2 & ~(a2 >> 31);
  v4 = (fd_set *)&v6;
  do
  {
    v4->__fds_bits[1] = 0;
    v4 = (fd_set *)((char *)v4 + 4);
  }
  while ( v4 != (fd_set *)&readfds.__fds_bits[31] );
  readfds.__fds_bits[v2 / 32] |= 1 << (v2 % 32);
  timeout.tv_usec = 0;
  timeout.tv_sec = v3;
  return select(v2 + 1, &readfds, 0, 0, &timeout) > 0;
}
