int __fastcall sub_27BE8(const char **a1, int a2, int a3)
{
  const char *v6; // r0
  __int16 v7; // kr00_2
  unsigned int v8; // r6
  const char *v10; // r0
  const char *v11; // r8
  size_t v12; // r0
  size_t v13; // r6
  int v14; // r4
  unsigned int v15; // r6
  struct addrinfo *pai; // [sp+8h] [bp-A28h] BYREF
  char v17; // [sp+Ch] [bp-A24h] BYREF
  __int16 buf; // [sp+2Ch] [bp-A04h] BYREF
  char v19; // [sp+2Eh] [bp-A02h]
  char v20; // [sp+2Fh] [bp-A01h]
  int v21; // [sp+30h] [bp-A00h]
  char v22[8]; // [sp+34h] [bp-9FCh] BYREF
  _BYTE dest[500]; // [sp+3Ch] [bp-9F4h] BYREF
  struct addrinfo v24; // [sp+230h] [bp-800h] BYREF

  v6 = a1[146];
  buf = 260;
  v7 = strtol(v6, 0, 10);
  v19 = HIBYTE(v7);
  v20 = v7;
  strcpy(v22, "CGMINER");
  v8 = bswap32(inet_addr(a1[150]));
  if ( v8 != -1 )
    goto LABEL_2;
  pai = (struct addrinfo *)&v17;
  memset(&v24, 0, sizeof(v24));
  v10 = a1[150];
  v24.ai_family = 2;
  if ( !getaddrinfo(v10, 0, &v24, &pai) )
  {
    v15 = *(_DWORD *)&pai->ai_addr->sa_data[2];
    freeaddrinfo(pai);
    v8 = bswap32(v15);
    if ( v8 != -1 )
    {
LABEL_2:
      HIBYTE(v21) = v8;
      LOBYTE(v21) = HIBYTE(v8);
      BYTE1(v21) = BYTE2(v8);
      BYTE2(v21) = BYTE1(v8);
      send(a2, &buf, 0x10u, 0);
      goto LABEL_3;
    }
LABEL_22:
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf((char *)&v24, 0x800u, "Invalid IP address specified for socks4 proxy: %s", a1[150]);
      goto LABEL_9;
    }
    return 0;
  }
  if ( !a3 )
    goto LABEL_22;
  v11 = a1[150];
  v21 = 0x1000000;
  v12 = strlen(v11);
  if ( v12 >= 0xFF )
    v12 = 255;
  v13 = v12;
  memcpy(dest, v11, v12);
  dest[v13] = 0;
  send(a2, &buf, v13 + 17, 0);
LABEL_3:
  if ( recv(a2, &v24, 1u, 0) == -1 || LOBYTE(v24.ai_flags) || recv(a2, &v24, 1u, 0) == -1 || LOBYTE(v24.ai_flags) != 90 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf((char *)&v24, 0x800u, "Bad response from %s:%s SOCKS4 server", a1[151], a1[152]);
LABEL_9:
      sub_343C4(4, &v24, 0);
      return 0;
    }
    return 0;
  }
  v14 = 6;
  do
  {
    recv(a2, &v24, 1u, 0);
    --v14;
  }
  while ( v14 );
  return 1;
}
