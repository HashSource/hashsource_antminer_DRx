int sub_94C8()
{
  int v0; // r0
  size_t v1; // r0
  socklen_t addr_len; // [sp+Ch] [bp-A0h] BYREF
  struct timeval timeout; // [sp+10h] [bp-9Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-94h] BYREF
  ssize_t v7; // [sp+98h] [bp-14h]
  void *buf; // [sp+9Ch] [bp-10h]
  fd_set *p_readfds; // [sp+A0h] [bp-Ch]
  unsigned int i; // [sp+A4h] [bp-8h]

  timeout.tv_sec = 2;
  timeout.tv_usec = 0;
  p_readfds = &readfds;
  for ( i = 0; i <= 0x1F; ++i )
    p_readfds->__fds_bits[i] = 0;
  readfds.__fds_bits[dword_11E0C / 32] |= 1 << (dword_11E0C % 32);
  buf = 0;
  buf = calloc(0x1Eu, 1u);
  v0 = select(dword_11E0C + 1, &readfds, 0, 0, &timeout);
  if ( v0 == -1 )
    exit(-1);
  if ( !v0 )
  {
    ++dword_11E38;
    goto LABEL_15;
  }
  if ( ((readfds.__fds_bits[dword_11E0C / 32] >> (dword_11E0C % 32)) & 1) == 0 )
  {
LABEL_15:
    if ( dword_11E38 == 5 )
    {
      dword_11E38 = 0;
      puts("Time Out");
      free(buf);
      return 1;
    }
    else
    {
      free(buf);
      return 0;
    }
  }
  addr_len = 16;
  v7 = recvfrom(dword_11E0C, buf, 0x1Eu, 0, (struct sockaddr *)&word_11E3C, &addr_len);
  if ( v7 <= 0 )
  {
    printf("read error....");
    ++dword_11E38;
    goto LABEL_15;
  }
  printf("rev:\n%s\t", (const char *)buf);
  dword_11E38 = 0;
  v1 = strlen(byte_11E18);
  if ( !strncmp((const char *)buf, byte_11E18, v1) )
  {
    printf("send_ack(\"1\");");
    sub_9050();
    sub_944C("OK");
    free(buf);
    return 1;
  }
  else
  {
    printf("send_ack(\"0\");");
    sub_90BC();
    sub_944C("FAILD");
    free(buf);
    return 0;
  }
}
