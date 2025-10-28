int sub_F4C0()
{
  const char *v0; // r0
  __int16 v1; // r4
  struct hostent *v2; // r6
  int v3; // r5
  __int16 v4; // r2
  char **h_addr_list; // r1
  int v6; // r4
  int v7; // r3
  int *v8; // r0
  char *v9; // r0
  int *v12; // r0
  char *v13; // r0
  _BYTE v14[12]; // [sp+4h] [bp-C4h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-B8h] BYREF
  char name[40]; // [sp+20h] [bp-A8h] BYREF
  sigset_t set; // [sp+48h] [bp-80h] BYREF

  v0 = (const char *)sub_F990(off_1B2F0, "port_local", v14);
  v1 = strtol(v0, 0, 10);
  if ( !sub_E284("eth0", name) )
    puts("get IP error");
  sigemptyset(&set);
  sigaddset(&set, 13);
  sigprocmask(0, &set, 0);
  system("/etc/init.d/cgminer restart");
  sigprocmask(1, &set, 0);
  sleep(5u);
  v2 = gethostbyname(name);
  if ( v2 )
  {
    v3 = socket(2, 1, 0);
    if ( v3 == -1 )
    {
      v12 = _errno_location();
      v13 = strerror(*v12);
      printf("Socket initialisation failed: %s\n", v13);
      return 0;
    }
    else
    {
      memset(&addr.sa_data[2], 0, 12);
      v4 = HIBYTE(v1) | (unsigned __int16)(v1 << 8);
      h_addr_list = v2->h_addr_list;
      *(_WORD *)addr.sa_data = 0;
      v6 = 6;
      addr.sa_family = 2;
      v7 = *(_DWORD *)*h_addr_list;
      *(_WORD *)addr.sa_data = v4;
      *(_DWORD *)&addr.sa_data[2] = v7;
      while ( connect(v3, &addr, 0x10u) < 0 )
      {
        if ( v6-- == 0 )
        {
          close(v3);
LABEL_10:
          puts("restart timeout!");
          return 255;
        }
        v8 = _errno_location();
        v9 = strerror(*v8);
        printf("Cgminer!Socket connect failed: %s\n", v9);
        puts("restart not well!!\nwait next 5s......");
        sleep(5u);
      }
      close(v3);
      if ( v6 <= 0 )
        goto LABEL_10;
      puts("restart OK!");
      return 1;
    }
  }
  else
  {
    puts("Failed to resolve host ");
    return 0;
  }
}
