bool __fastcall sub_2870C(int a1, int a2)
{
  int v2; // lr
  fd_set *p_tv_usec; // r3
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r6
  int v7; // lr
  struct timeval timeout; // [sp+8h] [bp-88h] BYREF
  fd_set readfds; // [sp+10h] [bp-80h] BYREF
  _DWORD vars0[6]; // [sp+90h] [bp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 580);
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
  v4 = v2 + 1;
  v5 = &vars0[v2 / 32];
  v6 = v2 % 32;
  v7 = *(v5 - 32);
  timeout.tv_usec = 0;
  *(v5 - 32) = v7 | (1 << v6);
  timeout.tv_sec = a2 & ~(a2 >> 31);
  return select(v4, &readfds, 0, 0, &timeout) > 0;
}
