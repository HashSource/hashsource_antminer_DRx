int __fastcall sub_8BA8(const char *a1, char *name, __int16 a3)
{
  struct hostent *v6; // r7
  int v7; // r0
  int v8; // r8
  int v9; // r4
  char **h_addr_list; // r3
  int v11; // r3
  size_t v12; // r0
  char *v13; // r7
  int v14; // r5
  char *v15; // r6
  ssize_t v16; // r0
  int v17; // r6
  size_t v18; // r1
  int *v19; // r0
  char *v20; // r0
  int *v22; // r0
  char *v23; // r0
  int *v24; // r0
  char *v25; // r0
  int *v26; // r0
  char *v27; // r0
  int v28; // r4
  struct sockaddr v29; // [sp+0h] [bp-10h] BYREF

  v6 = gethostbyname(name);
  if ( !v6 )
  {
    printf("Couldn't get hostname: '%s'\n", name);
    return 1;
  }
  v7 = socket(2, 1, 0);
  v8 = v7;
  if ( v7 == -1 )
  {
    v24 = _errno_location();
    v28 = 1;
    v25 = strerror(*v24);
    printf("Socket initialisation failed: %s\n", v25);
    return v28;
  }
  v9 = 0;
  memset(&v29.sa_data[2], 0, 12);
  h_addr_list = v6->h_addr_list;
  *(_DWORD *)&v29.sa_family = 2;
  v11 = *(_DWORD *)*h_addr_list;
  v29.sa_data[0] = HIBYTE(a3);
  v29.sa_data[1] = a3;
  *(_DWORD *)&v29.sa_data[2] = v11;
  if ( connect(v7, &v29, 0x10u) < 0 )
  {
    v26 = _errno_location();
    v28 = 1;
    v27 = strerror(*v26);
    printf("Socket connect failed: %s\n", v27);
    return v28;
  }
  v12 = strlen(a1);
  if ( send(v8, a1, v12, 0) < 0 )
  {
    v19 = _errno_location();
    v28 = 1;
    v20 = strerror(*v19);
    printf("Send failed: %s\n", v20);
LABEL_14:
    close(v8);
    return v28;
  }
  v13 = (char *)malloc(0x10000u);
  if ( v13 )
  {
    v14 = 0xFFFF;
    while ( 1 )
    {
      v15 = &v13[v9];
      v16 = recv(v8, &v13[v9], v14 - v9, 0);
      v9 += v16;
      if ( v16 < 0 )
      {
        v22 = _errno_location();
        v28 = 1;
        v23 = strerror(*v22);
        printf("Recv failed: %s\n", v23);
        goto LABEL_17;
      }
      if ( !v16 )
        break;
      if ( v14 == v9 )
      {
        v17 = v14 + 0x10000;
        v18 = v14 + 0x10000;
        v14 += 0xFFFF;
        v13 = (char *)realloc(v13, v18);
        if ( !v13 )
        {
          printf("Err: OOM (%d)\n", v17);
          return 1;
        }
      }
    }
    v28 = 0;
LABEL_17:
    *v15 = 0;
    if ( dword_11170 )
    {
      puts(v13);
    }
    else
    {
      printf("Reply was '%s'\n", v13);
      sub_8A64(v13);
    }
    goto LABEL_14;
  }
  printf("Err: OOM (%d)\n", 0x10000);
  return 1;
}
