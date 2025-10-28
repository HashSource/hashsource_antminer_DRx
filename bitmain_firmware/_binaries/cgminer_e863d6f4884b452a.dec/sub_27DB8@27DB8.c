bool __fastcall sub_27DB8(int a1, int a2)
{
  __time_t v2; // r1
  fd_set *p_tv_usec; // r3
  int v4; // r4
  _BYTE *v5; // r4
  int v6; // r3
  struct timeval timeout; // [sp+8h] [bp-8Ch] BYREF
  fd_set readfds; // [sp+10h] [bp-84h] BYREF
  _BYTE v10[4]; // [sp+90h] [bp-4h] BYREF

  v2 = a2 & ~(a2 >> 31);
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( &readfds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
  timeout.tv_sec = v2;
  v4 = (a1 + 31) & (a1 >> 31);
  if ( a1 >= 0 )
    v4 = a1;
  timeout.tv_usec = 0;
  v5 = &v10[4 * (v4 >> 5)];
  LOBYTE(v6) = a1 & 0x1F;
  if ( a1 <= 0 )
    v6 = -(-a1 & 0x1F);
  *((_DWORD *)v5 - 32) |= 1 << v6;
  return select(a1 + 1, &readfds, 0, 0, &timeout) > 0;
}
