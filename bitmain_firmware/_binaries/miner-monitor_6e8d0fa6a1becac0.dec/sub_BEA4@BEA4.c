char *__fastcall sub_BEA4(const char *a1, const char *a2, __int16 a3)
{
  char *v6; // r6
  struct hostent *v7; // r8
  int v8; // r7
  int v9; // r5
  char **h_addr_list; // r2
  int v11; // r3
  size_t v12; // r0
  int v13; // r4
  size_t v14; // r9
  ssize_t v15; // r5
  int *v16; // r0
  char *v17; // r0
  int *v19; // r0
  char *v20; // r0
  int *v21; // r0
  char *v22; // r0
  struct sockaddr v23; // [sp+0h] [bp-10h] BYREF

  v6 = (char *)malloc(0xFFDDu);
  if ( !v6 )
    _assert_fail("buf", "cgminer_api.c", 0x8Bu, "callapi");
  v7 = gethostbyname(a2);
  if ( v7 )
  {
    v8 = socket(2, 1, 0);
    if ( v8 == -1 )
    {
      v21 = _errno_location();
      v6 = 0;
      v22 = strerror(*v21);
      printf("Socket initialisation failed: %s\n", v22);
    }
    else
    {
      memset(&v23.sa_data[2], 0, 12);
      v9 = 0;
      h_addr_list = v7->h_addr_list;
      *(_DWORD *)&v23.sa_family = 2;
      v11 = *(_DWORD *)*h_addr_list;
      v23.sa_data[0] = HIBYTE(a3);
      v23.sa_data[1] = a3;
      *(_DWORD *)&v23.sa_data[2] = v11;
      while ( connect(v8, &v23, 0x10u) < 0 )
      {
        if ( !v9 )
        {
          puts("Call API error.Disconnect with server!");
          raise(10);
        }
        v9 = 1;
        puts("Call API Failed wait 5s !!");
        sleep(5u);
      }
      if ( v9 )
      {
        v6 = (char *)"";
        close(v8);
        raise(12);
      }
      else
      {
        v12 = strlen(a1);
        if ( send(v8, a1, v12, 0) < 0 )
        {
          v16 = _errno_location();
          v17 = strerror(*v16);
          printf("Send failed: %s\n", v17);
        }
        else
        {
          v13 = 0;
          v14 = 65500;
          puts("Send succed");
          *v6 = 0;
          while ( 1 )
          {
            puts("begin to Recv");
            v15 = recv(v8, &v6[v13], 0xFFDCu, 0);
            printf("Recved n: %d\n", v15);
            if ( v15 < 0 )
              break;
            if ( !v15 )
              goto LABEL_18;
            v13 += v15;
            v6[v13] = 0;
            if ( v14 < v13 + 65500 )
            {
              v14 *= 2;
              v6 = (char *)realloc(v6, v14);
              if ( !v6 )
                _assert_fail("buf", "cgminer_api.c", 0xBBu, "callapi");
            }
          }
          v19 = _errno_location();
          v20 = strerror(*v19);
          printf("Recv failed: %s\n", v20);
        }
LABEL_18:
        close(v8);
        printf("the result of callapi about %s: %s\n\n", a1, v6);
      }
    }
  }
  else
  {
    v6 = 0;
    printf("Failed to resolve host %s\n", a2);
  }
  return v6;
}
