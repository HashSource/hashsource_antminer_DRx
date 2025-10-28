int *sub_9FE8()
{
  int v0; // r7
  int *result; // r0
  int v2; // r3
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r11
  ssize_t v6; // r0
  int v7; // r1
  socklen_t addr_len; // [sp+8h] [bp-84h] BYREF
  _DWORD v9[2]; // [sp+Ch] [bp-80h] BYREF
  struct pollfd fds; // [sp+14h] [bp-78h] BYREF
  int v11; // [sp+1Ch] [bp-70h]
  int v12; // [sp+20h] [bp-6Ch]
  _BYTE buf[104]; // [sp+24h] [bp-68h] BYREF

  v0 = 0;
  while ( 1 )
  {
    fds = ::fds;
    v11 = unk_24084;
    v12 = unk_24088;
    result = (int *)poll(&fds, dword_2408C, 0);
    if ( dword_2408C <= 0 )
      goto LABEL_7;
    v2 = fds.revents & 1;
    if ( (fds.revents & 1) == 0 )
    {
      while ( ++v2 != dword_2408C )
      {
        if ( (*(&fds.revents + 4 * v2) & 1) != 0 )
          goto LABEL_12;
      }
LABEL_7:
      if ( !result )
        return result;
      goto LABEL_8;
    }
    v2 = 0;
LABEL_12:
    v0 = dword_24060[v2];
    if ( !result )
      return result;
LABEL_8:
    if ( result == (int *)-1 )
      break;
    v3 = sub_C348(v9);
    if ( !dword_212DC && sub_E994(v3) )
    {
      v4 = sub_EB48();
      addr_len = 28;
      v5 = (_DWORD *)v4;
      v6 = recvfrom(v0, (void *)(v4 + 92), 0x4Cu, 0, (struct sockaddr *)(v4 + 8), &addr_len);
      v5[22] = v6;
      if ( v6 == -1 )
      {
        sub_EA80(v5);
      }
      else
      {
        v7 = v9[1];
        v5[19] = v9[0];
        v5[20] = v7;
        sub_EAEC(v5);
      }
    }
    else
    {
      read(v0, buf, 0x64u);
    }
  }
  result = _errno_location();
  if ( *result != 4 )
    return (int *)sub_E15C(3, "poll() error: %m");
  return result;
}
