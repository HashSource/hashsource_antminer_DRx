int __fastcall sub_112C0(int a1, int fd, unsigned __int16 *a3)
{
  int v4; // r2
  int v8; // r2
  const char *v9; // r0
  const char *v10; // r0
  int optval; // [sp+Ch] [bp-4h] BYREF

  v4 = *a3;
  optval = 1;
  if ( v4 == 2 )
  {
    if ( setsockopt(fd, 1, 6, &optval, 4u) )
    {
      v10 = (const char *)sub_50CD0(a3);
      sub_4FE78(3, "setsockopt(SO_BROADCAST) enable failure on address %s: %m", v10);
    }
    else if ( dword_7CF4C > 1 )
    {
      v9 = (const char *)sub_50CD0(a3);
      printf("Broadcast enabled on socket %d for address %s\n", fd, v9);
    }
  }
  v8 = *(_DWORD *)(a1 + 140) | 0x20;
  dword_CA628 = 1;
  *(_DWORD *)(a1 + 140) = v8;
  return 1;
}
