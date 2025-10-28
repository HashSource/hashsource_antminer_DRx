int __fastcall callapi(const char *a1, char *name, unsigned int a3)
{
  struct hostent *v6; // r7
  int v7; // r0
  int v8; // r4
  char **h_addr_list; // r12
  int v10; // r3
  int v11; // r5
  size_t v12; // r0
  ssize_t v13; // r7
  int *v15; // r0
  char *v16; // r0
  int *v17; // r0
  char *v18; // r0
  int *v19; // r0
  char *v20; // r0
  int *v21; // r0
  char *v22; // r0
  int *v23; // r0
  char *v24; // r0
  int *v25; // r0
  char *v26; // r0
  char *v27; // r8
  int v28; // r7
  int v29; // r9
  int v30; // r6
  char *v31; // r10
  int v32; // r11
  ssize_t v33; // r0
  int *v34; // r0
  char *v35; // r0
  _DWORD optval[2]; // [sp+8h] [bp-24h] BYREF
  _DWORD v37[2]; // [sp+10h] [bp-1Ch] BYREF
  struct sockaddr addr; // [sp+18h] [bp-14h] BYREF

  v6 = gethostbyname(name);
  if ( v6 )
  {
    v7 = socket(2, 1, 0);
    v8 = v7;
    if ( v7 == -1 )
    {
      v15 = _errno_location();
      v16 = strerror(*v15);
      printf("Socket initialisation failed: %s\n", v16);
      return 1;
    }
    else
    {
      memset(&addr.sa_data[4], 0, 10);
      h_addr_list = v6->h_addr_list;
      *(_DWORD *)addr.sa_data = 0;
      addr.sa_family = 2;
      v10 = *(_DWORD *)*h_addr_list;
      *(_WORD *)addr.sa_data = __rev16(a3);
      *(_DWORD *)&addr.sa_data[2] = v10;
      if ( connect(v7, &addr, 0x10u) >= 0 )
      {
        optval[0] = 1;
        optval[1] = 60;
        if ( setsockopt(v8, 1, 13, optval, 8u) )
        {
          v23 = _errno_location();
          v24 = strerror(*v23);
          printf("cgminer-api, setsocket SO_LINGER failed (%s)\n", v24);
          close(v8);
        }
        v37[0] = 10;
        v37[1] = 0;
        if ( setsockopt(v8, 1, 21, v37, 8u) )
        {
          v21 = _errno_location();
          v22 = strerror(*v21);
          printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n", v22);
          close(v8);
        }
        v11 = setsockopt(v8, 1, 20, v37, 8u);
        if ( v11 )
        {
          v19 = _errno_location();
          v20 = strerror(*v19);
          printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n", v20);
          close(v8);
        }
        v12 = strlen(a1);
        v13 = send(v8, a1, v12, 0);
        if ( v13 <= 0 )
        {
          v25 = _errno_location();
          v11 = 1;
          v26 = strerror(*v25);
          printf("cgminer api send failed: %s\n", v26);
        }
        else if ( strlen(a1) == v13 )
        {
          v27 = (char *)malloc(0x10000u);
          if ( !v27 )
          {
            v11 = 1;
            printf("cgminer api: OOM (%d)\n", 0x10000);
            return v11;
          }
          v28 = 0xFFFF;
          v29 = 3;
          v30 = 0;
          while ( 1 )
          {
            v31 = &v27[v30];
            v32 = v28 + 0x10000;
            v33 = recv(v8, &v27[v30], v28 - v30, 0);
            v30 += v33;
            if ( v33 < 0 )
            {
              v34 = _errno_location();
              v11 = 1;
              v35 = strerror(*v34);
              printf("Recv failed: %s\n", v35);
              goto LABEL_28;
            }
            if ( !v33 )
            {
              v11 = 1;
              puts("Recv failed: api server close the socket");
              goto LABEL_28;
            }
            if ( v28 != v30 )
              break;
            if ( !--v29 )
            {
              v31 = &v27[v28];
              goto LABEL_28;
            }
            v27 = (char *)realloc(v27, v28 + 0x10000);
            v28 += 0xFFFF;
            if ( !v27 )
            {
              v11 = 1;
              printf("cgminer realloc: OOM (%d)\n", v32);
              return v11;
            }
          }
          v31 = &v27[v30];
LABEL_28:
          *v31 = 0;
          if ( dword_22080 )
            puts(v27);
          else
            display(v27);
          free(v27);
        }
        close(v8);
        return v11;
      }
      v17 = _errno_location();
      v18 = strerror(*v17);
      printf("Socket connect failed: %s\n", v18);
      return 1;
    }
  }
  else
  {
    printf("Couldn't get hostname: '%s'\n", name);
    return 1;
  }
}
