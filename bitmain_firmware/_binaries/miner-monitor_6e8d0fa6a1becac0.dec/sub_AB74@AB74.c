int (*sub_AB74())()
{
  int (*result)(); // r0
  socklen_t *optlen[1024]; // [sp+0h] [bp-1070h] BYREF
  socklen_t v2; // [sp+1004h] [bp-6Ch] BYREF
  _BYTE v3[104]; // [sp+1008h] [bp-68h] BYREF

  v2 = 104;
  if ( dword_1B394 == 1 )
  {
    puts("Web  Switch is OFF!");
    exit(1);
  }
  getsockopt(dword_258BC, 6, 11, v3, &v2);
  if ( v3[0] == 1 )
    return (int (*)())puts("Connect to normal!!!");
  puts("Off Line!!! in tcp_state()");
  dword_1B380 = 0;
  memcpy(optlen, &unk_1C3E4, 0xFFFu);
  sub_E7F4(unk_1C3D4, unk_1C3D8, unk_1C3DC, unk_1C3E0);
  memset(&unk_26D24, 0, 0x46u);
  if ( sub_AA14() == -1 )
    return (int (*)())puts("tcp_state, sock_connect_server failed!");
  if ( sub_A938() == -1 )
  {
    off_1D434 = sub_10CD4;
    off_1D43C = sub_10D04;
    close(dword_258BC);
    sub_AA14();
    return (int (*)())puts("encrypt connect failed.");
  }
  else
  {
    result = sub_10C84;
    off_1D434 = sub_10C84;
    off_1D43C = sub_10CAC;
  }
  return result;
}
