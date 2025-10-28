int __fastcall sub_27848(const char **a1, int a2, int a3)
{
  const char *v5; // r0
  size_t v6; // r0
  ssize_t v7; // r0
  int v8; // r3
  int v9; // r7
  int v10; // r3
  int v11; // r4
  char s; // [sp+10h] [bp-C00h] BYREF
  char v14; // [sp+11h] [bp-BFFh]
  char v15; // [sp+12h] [bp-BFEh]
  char v16; // [sp+13h] [bp-BFDh]
  char buf[2048]; // [sp+410h] [bp-800h] BYREF

  v5 = a1[150];
  if ( a3 )
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.0\r\n\r\n", v5, a1[146]);
  else
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n", v5, a1[146], v5, a1[146]);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(buf, 0x800u, "Sending proxy %s:%s - %s", a1[151], a1[152], &s);
    sub_343C4(7, buf, 0);
  }
  v6 = strlen(&s);
  send(a2, &s, v6, 0);
  v7 = recv(a2, &s, 0xCu, 0);
  if ( v7 > 0 )
  {
    v8 = (unsigned __int8)byte_6FA71;
    *(&s + v7) = 0;
    if ( v8 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(buf, 0x800u, "Received from proxy %s:%s - %s", a1[151], a1[152], &s);
      sub_343C4(7, buf, 0);
    }
    v9 = strcmp(&s, "HTTP/1.1 200");
    if ( v9 )
    {
      v9 = strcmp(&s, "HTTP/1.0 200");
      if ( v9 )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        {
          snprintf(buf, 0x800u, "HTTP Error from proxy %s:%s - %s", a1[151], a1[152], &s);
          sub_343C4(4, buf, 0);
          return 0;
        }
        return 0;
      }
    }
    do
    {
      if ( recv(a2, buf, 1u, 0) == -1 )
      {
        *(&s + v9) = -1;
        goto LABEL_31;
      }
      v10 = (unsigned __int8)buf[0];
      *(&s + v9++) = buf[0];
      if ( v10 == 255 )
        goto LABEL_31;
    }
    while ( v9 != 4 );
    if ( !strncmp(&s, "\r\n\r\n", 4u) )
    {
LABEL_20:
      v11 = (unsigned __int8)byte_6FA71;
      if ( !byte_6FA71 )
        return 1;
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        snprintf(buf, 0x800u, "Success negotiating with %s:%s HTTP proxy", a1[151], a1[152]);
        sub_343C4(7, buf, 0);
      }
      return v11;
    }
    while ( 1 )
    {
      s = v14;
      v14 = v15;
      v15 = v16;
      if ( recv(a2, buf, 1u, 0) == -1 )
        break;
      v16 = buf[0];
      if ( (unsigned __int8)buf[0] == 255 )
        goto LABEL_31;
      if ( !strncmp(&s, "\r\n\r\n", 4u) )
        goto LABEL_20;
    }
    v16 = -1;
LABEL_31:
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      v11 = 0;
      snprintf(buf, 0x800u, "Couldn't read HTTP byte from proxy %s:%s", a1[151], a1[152]);
      sub_343C4(4, buf, 0);
      return v11;
    }
    return 0;
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
    return 0;
  snprintf(buf, 0x800u, "Couldn't read from proxy %s:%s after sending CONNECT", a1[151], a1[152]);
  sub_343C4(4, buf, 0);
  return 0;
}
