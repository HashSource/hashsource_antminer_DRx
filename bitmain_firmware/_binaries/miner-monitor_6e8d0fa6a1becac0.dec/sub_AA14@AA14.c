int sub_AA14()
{
  char *v0; // r0
  __int16 v1; // r5
  struct hostent *v2; // r6
  int v3; // r0
  char *v4; // r3
  int v5; // r3
  int v6; // r5
  struct sockaddr addr; // [sp+4h] [bp-4Ch] BYREF
  char s[60]; // [sp+14h] [bp-3Ch] BYREF

  if ( dword_1B394 == 1 )
  {
    puts("Web  Switch is OFF!");
    exit(1);
  }
  memset(s, 0, sizeof(s));
  sub_FA50(off_1B2F0, "ip_server", s);
  v0 = strchr(s, 58);
  *v0 = 0;
  v1 = strtol(v0 + 1, 0, 10);
  v2 = gethostbyname(s);
  if ( !v2 )
  {
    perror("gethostbyname");
    exit(1);
  }
  v3 = socket(2, 1, 0);
  dword_258BC = v3;
  if ( v3 == -1 )
  {
    perror("socket");
    exit(1);
  }
  v4 = *v2->h_addr_list;
  addr.sa_data[0] = HIBYTE(v1);
  addr.sa_data[1] = v1;
  addr.sa_family = 2;
  v5 = *(_DWORD *)v4;
  *(_DWORD *)&addr.sa_data[6] = 0;
  *(_DWORD *)&addr.sa_data[10] = 0;
  *(_DWORD *)&addr.sa_data[2] = v5;
  v6 = connect(v3, &addr, 0x10u);
  if ( v6 == -1 )
  {
    puts("connect failed");
    dword_1B380 = 0;
  }
  else
  {
    dword_1B380 = 1;
    puts("server connected");
  }
  return v6;
}
