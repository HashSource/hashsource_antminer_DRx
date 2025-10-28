int sub_9120()
{
  int v0; // r3
  int optval; // [sp+8h] [bp-Ch] BYREF
  int v3; // [sp+Ch] [bp-8h]

  dword_11E0C = socket(2, 2, 0);
  if ( dword_11E0C == -1 )
  {
    printf("socket error");
    return -1;
  }
  else
  {
    optval = 1;
    v3 = 0;
    v3 = setsockopt(dword_11E0C, 1, 6, &optval, 4u);
    if ( v3 == -1 )
    {
      printf("set socket error...");
      return -1;
    }
    else
    {
      bzero(&word_11E4C, 0x10u);
      word_11E4C = 2;
      dword_11E50 = htonl(0xFFFFFFFF);
      word_11E4E = htons(0x379Bu);
      bzero(&word_11E3C, 0x10u);
      word_11E3C = 2;
      dword_11E40 = htonl(0);
      word_11E3E = htons(0x379Cu);
      v0 = bind(dword_11E0C, (const struct sockaddr *)&word_11E3C, 0x10u);
      if ( v0 == -1 )
      {
        printf("bind error...");
        return 0;
      }
    }
  }
  return v0;
}
