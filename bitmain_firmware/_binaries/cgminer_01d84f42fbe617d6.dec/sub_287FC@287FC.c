int __fastcall sub_287FC(const char **a1, int a2, int a3)
{
  const char *v5; // r3
  const char *v6; // r12
  size_t v7; // r0
  ssize_t v8; // r0
  int v9; // r2
  unsigned __int8 *v10; // r6
  unsigned __int8 v11; // r0
  char v13; // [sp+Fh] [bp-C05h] BYREF
  char s; // [sp+10h] [bp-C04h] BYREF
  char v15; // [sp+11h] [bp-C03h]
  char v16; // [sp+12h] [bp-C02h]
  unsigned __int8 v17; // [sp+13h] [bp-C01h] BYREF
  char v18[2048]; // [sp+410h] [bp-804h] BYREF

  v5 = a1[148];
  v6 = a1[144];
  if ( a3 )
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.0\r\n\r\n", v5, v6);
  else
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n", v5, v6, v5, v6);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v18, 0x800u, "Sending proxy %s:%s - %s", a1[149], a1[150], &s);
    sub_38438(7, v18, 0);
  }
  v7 = strlen(&s);
  send(a2, &s, v7, 0);
  v8 = recv(a2, &s, 0xCu, 0);
  if ( v8 <= 0 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      return 0;
    snprintf(v18, 0x800u, "Couldn't read from proxy %s:%s after sending CONNECT", a1[149], a1[150]);
LABEL_22:
    sub_38438(4, v18, 0);
    return 0;
  }
  v9 = (unsigned __int8)byte_630C1;
  *(&s + v8) = 0;
  if ( v9 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v18, 0x800u, "Received from proxy %s:%s - %s", a1[149], a1[150], &s);
    sub_38438(7, v18, 0);
  }
  if ( strcmp(&s, "HTTP/1.1 200") && strcmp(&s, "HTTP/1.0 200") )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
      return 0;
    snprintf(v18, 0x800u, "HTTP Error from proxy %s:%s - %s", a1[149], a1[150], &s);
    goto LABEL_22;
  }
  v10 = (unsigned __int8 *)&v13;
  while ( 1 )
  {
    v11 = sub_287D4(a2);
    *++v10 = v11;
    if ( v11 == 255 )
      break;
    if ( v10 == &v17 )
    {
      while ( strncmp(&s, "\r\n\r\n", 4u) )
      {
        s = v15;
        v15 = v16;
        v16 = v17;
        v17 = sub_287D4(a2);
        if ( v17 == 255 )
          goto LABEL_18;
      }
      if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        return 1;
      snprintf(v18, 0x800u, "Success negotiating with %s:%s HTTP proxy", a1[149], a1[150]);
      sub_38438(7, v18, 0);
      return 1;
    }
  }
LABEL_18:
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(v18, 0x800u, "Couldn't read HTTP byte from proxy %s:%s", a1[149], a1[150]);
    goto LABEL_22;
  }
  return 0;
}
