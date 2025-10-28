unsigned __int16 *__fastcall sub_154A4(unsigned __int16 *addr, int a2, int a3, const void *a4, size_t n)
{
  int v6; // r1
  const struct sockaddr *v7; // r4
  int v8; // r6
  int v9; // r3
  int v10; // r3
  const char *v11; // r1
  const char *v12; // r10
  const char *v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r3
  socklen_t addr_len; // r12
  int v18; // r3
  const char *v19; // r6
  const char *v20; // r0
  int v21; // r0
  const char *v22; // r0
  int v23; // [sp+10h] [bp-1Ch]
  const char *v24; // [sp+14h] [bp-18h]
  int optval; // [sp+1Ch] [bp-10h] BYREF
  char v27; // [sp+27h] [bp-5h] BYREF

  v6 = *addr;
  v7 = (const struct sockaddr *)addr;
  optval = a3;
  if ( v6 == 2 )
  {
    if ( (bswap32(*((_DWORD *)addr + 1)) & 0xF0000000) != 0xE0000000 )
      goto LABEL_3;
    v8 = 1;
    a2 = dword_CA634;
  }
  else
  {
    if ( *((unsigned __int8 *)addr + 8) != 255 )
    {
LABEL_3:
      v8 = 0;
      goto LABEL_4;
    }
    v8 = 1;
    a2 = dword_CA630;
  }
LABEL_4:
  if ( a2 )
  {
    while ( 1 )
    {
      if ( dword_7CF4C > 1 )
      {
        v11 = "\tMCAST\t***** ";
        if ( !v8 )
          v11 = (const char *)&unk_665CC;
        v23 = *(_DWORD *)(a2 + 8);
        v24 = v11;
        v12 = (const char *)sub_50CD0(v7);
        v13 = (const char *)sub_50CD0(a2 + 20);
        printf("%ssendpkt(%d, dst=%s, src=%s, ttl=%d, len=%d)\n", v24, v23, v12, v13, optval, n);
      }
      v14 = optval;
      if ( optval > 0 )
        v15 = v8;
      else
        v15 = 0;
      if ( !v15 || optval == *(_DWORD *)(a2 + 144) )
        goto LABEL_25;
      v16 = *(unsigned __int16 *)(a2 + 20);
      if ( v16 == 2 )
        break;
      if ( v16 == 10 )
      {
        if ( setsockopt(*(_DWORD *)(a2 + 8), 41, 18, &optval, 4u) )
          goto LABEL_39;
LABEL_37:
        v14 = optval;
      }
      *(_DWORD *)(a2 + 144) = v14;
LABEL_25:
      if ( v7->sa_family == 2 )
        addr_len = 16;
      else
        addr_len = 28;
      addr = (unsigned __int16 *)sendto(*(_DWORD *)(a2 + 8), a4, n, 0, v7, addr_len);
      if ( addr == (unsigned __int16 *)-1 )
      {
        v18 = dword_CA658;
        ++*(_DWORD *)(a2 + 168);
        dword_CA658 = v18 + 1;
      }
      else
      {
        v9 = dword_CA60C;
        ++*(_DWORD *)(a2 + 164);
        dword_CA60C = v9 + 1;
      }
      if ( v8 )
        a2 = *(_DWORD *)(a2 + 4);
      if ( a2 )
        v10 = v8;
      else
        v10 = 0;
      if ( !v10 )
        return addr;
    }
    v21 = *(_DWORD *)(a2 + 8);
    v27 = optval;
    if ( setsockopt(v21, 0, 33, &v27, 1u) )
    {
LABEL_39:
      v22 = (const char *)sub_50CD0(a2 + 20);
      sub_4FE78(3, "setsockopt IP_MULTICAST_TTL/IPV6_MULTICAST_HOPS fails on address %s: %m", v22);
      goto LABEL_25;
    }
    goto LABEL_37;
  }
  if ( dword_7CF4C > 1 )
  {
    if ( v8 )
      v19 = "\tMCAST\t***** ";
    else
      v19 = (const char *)&unk_665CC;
    v20 = (const char *)sub_50CD0(addr);
    return (unsigned __int16 *)printf(
                                 "%ssendpkt(dst=%s, ttl=%d, len=%d): no interface - IGNORED\n",
                                 v19,
                                 v20,
                                 optval,
                                 n);
  }
  return addr;
}
