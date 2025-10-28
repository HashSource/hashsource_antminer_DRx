void __fastcall sub_1ED5C(int a1)
{
  const char *v2; // r2
  int v3; // r4
  const char *v4; // r10
  const char *v5; // r0
  int v6; // r3
  _BOOL4 v7; // r3
  _BOOL4 v8; // r2
  const char *v9; // r1
  int v10; // r3
  const char *v11; // r10
  const char *v12; // r0
  _BOOL4 v13; // r3
  _BOOL4 v14; // r2
  int v15; // r12
  int v16; // r10
  struct addrinfo *v17; // r9
  struct sockaddr *ai_addr; // lr
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  _DWORD *v23; // r12
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  bool v28; // zf
  char *v29; // r1
  _BOOL4 v30; // r3
  const char *v31; // r0
  int v32; // r0
  socklen_t v33; // r1
  int v34; // r3
  _BOOL4 v35; // r9
  const char *v36; // r2
  const char *v37; // r3
  int v38; // r11
  char *v39; // r0
  struct addrinfo *pai; // [sp+14h] [bp-28h] BYREF
  struct addrinfo req; // [sp+18h] [bp-24h] BYREF

  if ( dword_7CF4C > 1 )
  {
    v2 = "without";
    if ( a1 )
      v2 = "with";
    sub_4FE78(6, "Running doconfigure %s DNS", v2);
  }
  if ( a1 )
    _res_init();
  v3 = dword_7D3BC;
  if ( dword_7D3BC )
  {
    while ( 1 )
    {
      if ( dword_7CF4C > 1 )
      {
        v4 = *(const char **)(v3 + 4);
        v5 = (const char *)sub_50CD0(v3 + 184);
        sub_4FE78(6, "doconfigure: <%s> has peeraddr %s", v4, v5);
      }
      v6 = *(unsigned __int16 *)(v3 + 184);
      if ( !a1 )
        goto LABEL_15;
      if ( v6 == 2 )
      {
        v8 = *(_DWORD *)(v3 + 188) == 0;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 192) || *(_DWORD *)(v3 + 196) || *(_DWORD *)(v3 + 200) )
          goto LABEL_15;
        v8 = *(_DWORD *)(v3 + 204) == 0;
      }
      if ( !v8 )
        goto LABEL_15;
      sub_1E584();
      v9 = *(const char **)(v3 + 4);
      v10 = *(unsigned __int16 *)(v3 + 184);
      if ( !v9 )
        break;
      if ( v10 == 2 )
      {
        v13 = *(_DWORD *)(v3 + 188) != 0;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 192) || *(_DWORD *)(v3 + 196) || *(_DWORD *)(v3 + 200) )
        {
LABEL_35:
          sub_4FE78(3, "findhostaddr: both ce_name and ce_peeraddr are defined...");
          goto LABEL_36;
        }
        v13 = *(_DWORD *)(v3 + 204) != 0;
      }
      if ( v13 )
        goto LABEL_35;
      if ( dword_7CF4C > 1 )
        printf("findhostaddr: Resolving <%s>\n", v9);
      v15 = *(_DWORD *)(v3 + 180);
      req.ai_flags = 0;
      memset(&req.ai_addrlen, 0, 16);
      req.ai_family = v15;
      req.ai_socktype = 2;
      if ( !dword_CB864 )
        req.ai_family = 2;
      req.ai_protocol = 17;
      v16 = getaddrinfo(*(const char **)(v3 + 4), 0, &req, &pai);
      if ( v16 )
      {
LABEL_78:
        switch ( v16 )
        {
          case -11:
            if ( dword_7CF4C <= 0 )
              goto LABEL_36;
            v35 = 1;
            v38 = *_errno_location();
            v39 = strerror(v38);
            printf("intres: EAI_SYSTEM errno %d (%s) means try again, right?\n", v38, v39);
            v34 = dword_7CF4C;
            break;
          case -5:
          case -2:
            v36 = " EAI_NODATA";
            if ( v16 == -2 )
              v36 = (const char *)&unk_665CC;
            v37 = " (permanent)";
            if ( !dword_7D3C0 )
              v37 = (const char *)&unk_665CC;
            sub_4FE78(3, "host name not found%s%s: %s", v36, v37, *(const char **)(v3 + 4));
            v34 = dword_7CF4C;
            v35 = dword_7D3C0 == 0;
            break;
          case -4:
            v34 = dword_7CF4C;
            v35 = 1;
            break;
          case -3:
            v34 = dword_7CF4C;
            v35 = 1;
            dword_7D3C0 = 1;
            break;
          default:
            v34 = dword_7CF4C;
            v35 = 0;
            break;
        }
        if ( v34 > 1 )
          printf("intres: got error status of: %d\n", v16);
        if ( !v35 )
          goto LABEL_83;
LABEL_36:
        v6 = *(unsigned __int16 *)(v3 + 184);
        if ( v6 != 2 )
          goto LABEL_37;
        goto LABEL_67;
      }
      v17 = pai;
      ai_addr = pai->ai_addr;
      v19 = *(_DWORD *)&ai_addr->sa_family;
      v20 = *(_DWORD *)&ai_addr->sa_data[2];
      v21 = *(_DWORD *)&ai_addr->sa_data[6];
      v22 = *(_DWORD *)&ai_addr->sa_data[10];
      ++ai_addr;
      *(_DWORD *)(v3 + 184) = v19;
      *(_DWORD *)(v3 + 188) = v20;
      *(_DWORD *)(v3 + 192) = v21;
      *(_DWORD *)(v3 + 196) = v22;
      v23 = (_DWORD *)(v3 + 200);
      v24 = *(_DWORD *)&ai_addr->sa_family;
      v25 = *(_DWORD *)&ai_addr->sa_data[2];
      v26 = *(_DWORD *)&ai_addr->sa_data[6];
      *(_DWORD *)(v3 + 200) = *(_DWORD *)&ai_addr->sa_family;
      *(_DWORD *)(v3 + 204) = v25;
      *(_DWORD *)(v3 + 208) = v26;
      v27 = *(unsigned __int16 *)(v3 + 184);
      v28 = v27 == 2;
      if ( v27 == 2 )
      {
        *(_DWORD *)(v3 + 152) = 0;
      }
      else
      {
        v23 = (_DWORD *)(v3 + 160);
        *(_DWORD *)(v3 + 152) = 1;
        v24 = *(_DWORD *)(v3 + 192);
        v25 = *(_DWORD *)(v3 + 196);
        v26 = *(_DWORD *)(v3 + 200);
        v27 = *(_DWORD *)(v3 + 204);
      }
      if ( v28 )
      {
        v27 = *(_DWORD *)(v3 + 188);
      }
      else
      {
        *v23 = v24;
        v23[1] = v25;
        v23[2] = v26;
        v23[3] = v27;
      }
      if ( v28 )
        *(_DWORD *)(v3 + 8) = v27;
      freeaddrinfo(v17);
LABEL_62:
      if ( dword_7CF4C <= 1 )
        goto LABEL_36;
      if ( *(_DWORD *)(v3 + 4) )
        v29 = "name";
      else
        v29 = "address";
      printf("findhostaddr: %s resolved.\n", v29, "address");
      v6 = *(unsigned __int16 *)(v3 + 184);
      if ( v6 != 2 )
      {
LABEL_37:
        if ( *(_DWORD *)(v3 + 192) || *(_DWORD *)(v3 + 196) || *(_DWORD *)(v3 + 200) )
        {
LABEL_38:
          v11 = *(const char **)(v3 + 4);
          v12 = (const char *)sub_50CD0(v3 + 184);
          sub_4FE78(6, "DNS %s -> %s", v11, v12);
          v6 = *(unsigned __int16 *)(v3 + 184);
          goto LABEL_15;
        }
        v14 = *(_DWORD *)(v3 + 204) != 0;
        goto LABEL_68;
      }
LABEL_67:
      v14 = *(_DWORD *)(v3 + 188) != 0;
LABEL_68:
      if ( v14 )
        goto LABEL_38;
LABEL_15:
      if ( v6 == 2 )
      {
        v7 = *(_DWORD *)(v3 + 188) != 0;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 192) || *(_DWORD *)(v3 + 196) || *(_DWORD *)(v3 + 200) )
        {
          if ( sub_1E5AC((const void *)(v3 + 8)) )
            goto LABEL_28;
LABEL_18:
          if ( dword_7CF4C > 1 )
            sub_4FE78(6, "doconfigure: request() FAILED, maybe next time.");
          goto LABEL_20;
        }
        v7 = *(_DWORD *)(v3 + 204) != 0;
      }
      if ( v7 )
      {
        if ( sub_1E5AC((const void *)(v3 + 8)) )
        {
LABEL_28:
          v3 = sub_1E504((int *)v3);
          goto LABEL_21;
        }
        goto LABEL_18;
      }
LABEL_20:
      v3 = *(_DWORD *)v3;
LABEL_21:
      if ( !v3 )
        return;
    }
    if ( v10 == 2 )
    {
      v30 = *(_DWORD *)(v3 + 188) == 0;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 192) || *(_DWORD *)(v3 + 196) || *(_DWORD *)(v3 + 200) )
        goto LABEL_72;
      v30 = *(_DWORD *)(v3 + 204) == 0;
    }
    if ( v30 )
    {
      sub_4FE78(3, "findhostaddr: both ce_name and ce_peeraddr are undefined!");
LABEL_83:
      sub_4FE78(3, "couldn't resolve `%s', giving up on it", *(const char **)(v3 + 4));
      v3 = sub_1E504((int *)v3);
      goto LABEL_21;
    }
LABEL_72:
    if ( dword_7CF4C > 1 )
    {
      v31 = (const char *)sub_50CD0(v3 + 184);
      printf("findhostaddr: Resolving <%s>\n", v31);
    }
    v32 = sub_4F524(64);
    if ( *(_WORD *)(v3 + 184) == 2 )
      v33 = 16;
    else
      v33 = 28;
    *(_DWORD *)(v3 + 4) = v32;
    v16 = getnameinfo((const struct sockaddr *)(v3 + 184), v33, (char *)(v3 + 4), 0x40u, 0, 0, 0);
    if ( v16 )
      goto LABEL_78;
    goto LABEL_62;
  }
}
