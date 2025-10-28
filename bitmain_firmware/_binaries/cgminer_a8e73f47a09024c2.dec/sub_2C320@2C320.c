int __fastcall sub_2C320(const char **a1, int a2, int a3)
{
  size_t v5; // r0
  ssize_t v6; // r0
  unsigned __int8 *v8; // r5
  unsigned __int8 v9; // r0
  char v10[2047]; // [sp+10h] [bp-C04h] BYREF
  char v11; // [sp+80Fh] [bp-405h] BYREF
  char s; // [sp+810h] [bp-404h] BYREF
  char v13; // [sp+811h] [bp-403h]
  char v14; // [sp+812h] [bp-402h]
  unsigned __int8 v15; // [sp+813h] [bp-401h] BYREF

  if ( a3 )
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.0\r\n\r\n", a1[150], a1[146]);
  else
    snprintf(&s, 0x400u, "CONNECT %s:%s HTTP/1.1\r\nHost: %s:%s\r\n\r\n", a1[150], a1[146], a1[150], a1[146]);
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v10, 0x800u, "Sending proxy %s:%s - %s", a1[151], a1[152], &s);
    sub_3F178(7, v10, 0);
  }
  v5 = strlen(&s);
  send(a2, &s, v5, 0);
  v6 = recv(a2, &s, 0xCu, 0);
  if ( v6 > 0 )
  {
    *(&s + v6) = 0;
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(v10, 0x800u, "Received from proxy %s:%s - %s", a1[151], a1[152], &s);
      sub_3F178(7, v10, 0);
    }
    if ( !strcmp(&s, "HTTP/1.1 200") || !strcmp(&s, "HTTP/1.0 200") )
    {
      v8 = (unsigned __int8 *)&v11;
      while ( 1 )
      {
        v9 = sub_2C2F4(a2);
        *++v8 = v9;
        if ( v9 == 255 )
          break;
        if ( v8 == &v15 )
        {
          do
          {
            if ( !strncmp(&s, "\r\n\r\n", 4u) )
            {
              if ( !byte_7CC61 )
                return 1;
              if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 6 )
                return 1;
              snprintf(v10, 0x800u, "Success negotiating with %s:%s HTTP proxy", a1[151], a1[152]);
              sub_3F178(7, v10, 0);
              return 1;
            }
            s = v13;
            v13 = v14;
            v14 = v15;
            v15 = sub_2C2F4(a2);
          }
          while ( v15 != 255 );
          if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
            return 0;
          goto LABEL_33;
        }
      }
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 3 )
        return 0;
LABEL_33:
      snprintf(v10, 0x800u, "Couldn't read HTTP byte from proxy %s:%s", a1[151], a1[152]);
      sub_3F178(4, v10, 0);
      return 0;
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      snprintf(v10, 0x800u, "HTTP Error from proxy %s:%s - %s", a1[151], a1[152], &s);
      sub_3F178(4, v10, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(v10, 0x800u, "Couldn't read from proxy %s:%s after sending CONNECT", a1[151], a1[152]);
    sub_3F178(4, v10, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
