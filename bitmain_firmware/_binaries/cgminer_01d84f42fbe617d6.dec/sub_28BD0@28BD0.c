int __fastcall sub_28BD0(const char **a1, int a2, int a3)
{
  const char *v6; // r0
  __int16 v7; // kr00_2
  unsigned int v8; // r6
  int v10; // r4
  const char *v11; // r0
  const char *v12; // r8
  signed int v13; // r0
  const char *v14; // r1
  size_t v15; // r8
  unsigned int v16; // r6
  struct addrinfo *pai; // [sp+8h] [bp-A28h] BYREF
  char v18; // [sp+Ch] [bp-A24h] BYREF
  _BYTE buf[4]; // [sp+2Ch] [bp-A04h] BYREF
  char v20; // [sp+30h] [bp-A00h]
  char v21; // [sp+31h] [bp-9FFh]
  char v22; // [sp+32h] [bp-9FEh]
  char v23; // [sp+33h] [bp-9FDh]
  char v24[8]; // [sp+34h] [bp-9FCh] BYREF
  _BYTE v25[500]; // [sp+3Ch] [bp-9F4h] BYREF
  struct addrinfo s[64]; // [sp+230h] [bp-800h] BYREF

  v6 = a1[144];
  buf[0] = 4;
  buf[1] = 1;
  v7 = strtol(v6, 0, 10);
  buf[2] = HIBYTE(v7);
  buf[3] = v7;
  strcpy(v24, "CGMINER");
  v8 = bswap32(inet_addr(a1[148]));
  if ( v8 != -1 )
    goto LABEL_2;
  v11 = a1[148];
  s[0].ai_socktype = 0;
  s[0].ai_protocol = 0;
  s[0].ai_addrlen = 0;
  pai = (struct addrinfo *)&v18;
  s[0].ai_addr = 0;
  s[0].ai_flags = 0;
  s[0].ai_canonname = 0;
  s[0].ai_family = 2;
  s[0].ai_next = 0;
  if ( !getaddrinfo(v11, 0, s, &pai) )
  {
    v16 = *(_DWORD *)&pai->ai_addr->sa_data[2];
    freeaddrinfo(pai);
    v8 = bswap32(v16);
    if ( v8 != -1 )
    {
LABEL_2:
      v23 = v8;
      v20 = HIBYTE(v8);
      v21 = BYTE2(v8);
      v22 = BYTE1(v8);
      send(a2, buf, 0x10u, 0);
      goto LABEL_3;
    }
LABEL_22:
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      return 0;
    snprintf((char *)s, 0x800u, "Invalid IP address specified for socks4 proxy: %s", a1[148]);
    goto LABEL_8;
  }
  if ( !a3 )
    goto LABEL_22;
  v12 = a1[148];
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 1;
  v13 = strlen(v12);
  v14 = v12;
  if ( v13 >= 255 )
    v15 = 255;
  else
    v15 = v13;
  memcpy(v25, v14, v15);
  v25[v15] = 0;
  send(a2, buf, v15 + 17, 0);
LABEL_3:
  if ( sub_287D4(a2) || sub_287D4(a2) != 90 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      return 0;
    snprintf((char *)s, 0x800u, "Bad response from %s:%s SOCKS4 server", a1[149], a1[150]);
LABEL_8:
    sub_38438(4, s, 0);
    return 0;
  }
  v10 = 6;
  do
  {
    sub_287D4(a2);
    --v10;
  }
  while ( v10 );
  return 1;
}
