int __fastcall sub_BD2C(const char *a1, _WORD *a2, struct addrinfo **a3, int a4)
{
  char *v7; // r5
  int v8; // r1
  char *v9; // r0
  const char *v10; // r1
  int v11; // r8
  char *v13; // r0
  struct addrinfo *ai; // [sp+0h] [bp-444h] BYREF
  _WORD s[14]; // [sp+4h] [bp-440h] BYREF
  struct addrinfo req; // [sp+20h] [bp-424h] BYREF
  char dest[1024]; // [sp+40h] [bp-404h] BYREF

  v7 = (char *)a1;
  memset(&req, 0, sizeof(req));
  if ( strlen(a1) >= 0x400 )
    off_7C9FC("ntp_config.c", 4337, 2, "strlen(nameornum) < sizeof(lookbuf)");
  if ( sub_14720((int)v7, s) )
  {
    v8 = (unsigned __int8)*v7;
    req.ai_flags = 4;
    req.ai_family = s[0];
    if ( v8 != 91 )
    {
      if ( !strchr(v7, 37) )
        goto LABEL_8;
      strncpy(dest, v7, 0x400u);
      v9 = strchr(dest, 37);
      goto LABEL_7;
    }
    strncpy(dest, v7 + 1, 0x400u);
    v13 = strchr(dest, 93);
    if ( v13 )
      *v13 = 0;
    v9 = strchr(dest, 37);
    if ( v9 )
    {
LABEL_7:
      v7 = dest;
      *v9 = 0;
      goto LABEL_8;
    }
    v7 = dest;
  }
LABEL_8:
  if ( req.ai_family == 10 )
  {
    if ( !dword_CB864 )
      return 0;
  }
  else if ( !req.ai_family )
  {
    if ( dword_CB864 )
    {
      if ( dword_CB868 )
      {
        if ( (*a2 & 0xFFF7) == 2 )
          req.ai_family = (unsigned __int16)*a2;
      }
      else
      {
        req.ai_family = 10;
      }
    }
    else
    {
      req.ai_family = 2;
    }
  }
  req.ai_socktype = 2;
  if ( dword_7CF4C > 3 )
  {
    if ( req.ai_family )
    {
      v10 = "v6 ";
      if ( req.ai_family == 2 )
        v10 = "v4 ";
    }
    else
    {
      v10 = (const char *)&unk_665CC;
    }
    printf("getaddrinfo %s%s\n", v10, v7);
  }
  v11 = getaddrinfo(v7, "ntp", &req, &ai);
  if ( v11 || ai->ai_family == 10 && !dword_CB864 )
  {
    if ( a4 )
    {
      sub_4FE78(3, "getaddrinfo: \"%s\" invalid host address, ignored", v7);
    }
    else if ( dword_7CF4C > 0 )
    {
      printf("getaddrinfo: \"%s\" invalid host address.\n", v7);
    }
    if ( v11 )
      return 0;
    freeaddrinfo(ai);
    return -1;
  }
  else
  {
    *a3 = ai;
    return 1;
  }
}
