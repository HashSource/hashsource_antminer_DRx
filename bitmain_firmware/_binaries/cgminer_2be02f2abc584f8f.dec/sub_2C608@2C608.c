int __fastcall sub_2C608(const char **a1, int a2, int a3)
{
  __int16 v6; // r0
  unsigned int v7; // r5
  signed int v9; // r0
  size_t v10; // r7
  int v11; // r4
  struct addrinfo *pai; // [sp+8h] [bp-A28h] BYREF
  char v13; // [sp+Ch] [bp-A24h] BYREF
  struct addrinfo req; // [sp+2Ch] [bp-A04h] BYREF
  _BYTE v15[4]; // [sp+82Ch] [bp-204h] BYREF
  char v16; // [sp+830h] [bp-200h]
  char v17; // [sp+831h] [bp-1FFh]
  char v18; // [sp+832h] [bp-1FEh]
  char v19; // [sp+833h] [bp-1FDh]
  char v20[8]; // [sp+834h] [bp-1FCh] BYREF
  _BYTE _83C[524]; // [sp+83Ch] [bp-1F4h] BYREF

  v15[0] = 4;
  v15[1] = 1;
  v6 = strtol(a1[146], 0, 10);
  v15[2] = HIBYTE(v6);
  v15[3] = v6;
  strcpy(v20, "CGMINER");
  v7 = bswap32(inet_addr(a1[150]));
  if ( v7 != -1 )
  {
LABEL_9:
    v16 = HIBYTE(v7);
    v17 = BYTE2(v7);
    v18 = BYTE1(v7);
    v19 = v7;
    send(a2, v15, 0x10u, 0);
    goto LABEL_14;
  }
  pai = (struct addrinfo *)&v13;
  req.ai_flags = 0;
  memset(&req.ai_socktype, 0, 24);
  req.ai_family = 2;
  if ( !getaddrinfo(a1[150], 0, &req, &pai) )
  {
    v7 = bswap32(*(_DWORD *)&pai->ai_addr->sa_data[2]);
    freeaddrinfo(pai);
    if ( v7 == -1 )
    {
LABEL_4:
      if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 3 )
        return 0;
      snprintf((char *)&req, 0x800u, "Invalid IP address specified for socks4 proxy: %s", a1[150]);
      sub_3F1C0(4, &req, 0);
      return 0;
    }
    goto LABEL_9;
  }
  if ( !a3 )
    goto LABEL_4;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 1;
  v9 = strlen(a1[150]);
  if ( v9 >= 255 )
    v10 = 255;
  else
    v10 = v9;
  memcpy(_83C, a1[150], v10);
  _83C[v10] = 0;
  send(a2, v15, v10 + 17, 0);
LABEL_14:
  if ( !sub_2C0DC(a2) && sub_2C0DC(a2) == 90 )
  {
    v11 = 6;
    do
    {
      sub_2C0DC(a2);
      --v11;
    }
    while ( v11 );
    return 1;
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf((char *)&req, 0x800u, "Bad response from %s:%s SOCKS4 server", a1[151], a1[152]);
    sub_3F1C0(4, &req, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
