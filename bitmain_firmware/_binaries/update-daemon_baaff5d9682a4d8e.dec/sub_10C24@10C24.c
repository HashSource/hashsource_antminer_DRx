void __fastcall __noreturn sub_10C24(int *a1)
{
  int v2; // r4
  int v3; // r0
  __int16 v4; // r5
  size_t v5; // r0
  char v6[16]; // [sp+0h] [bp-810h] BYREF
  _DWORD buf[256]; // [sp+10h] [bp-800h] BYREF
  char command[1024]; // [sp+410h] [bp-400h] BYREF

  puts("New Thread!\r");
  memset(buf, 0, sizeof(buf));
  v2 = *a1;
  read(v2, buf, 0x400u);
  printf("Recv:'%s'\r\n", (const char *)buf);
  strcpy(command, "/usr/sbin/updateporc.sh ");
  memset(&command[25], 0, 0x3E7u);
  strcpy(&command[24], (const char *)buf);
  strcpy(v6, "Come On WUHAN");
  v3 = system(command);
  if ( v3 == -1 )
  {
    puts("system err!\r");
    strcpy(v6, "500");
  }
  else
  {
    v4 = v3;
    printf("system status:[%d]\r\n", v3);
    if ( (v4 & 0x7F) != 0 )
    {
      printf("Other Exit Ret[%d]\r\n", HIBYTE(v4));
      sprintf(v6, "6%d", HIBYTE(v4));
    }
    else if ( HIBYTE(v4) )
    {
      printf("Shell Execute Failed, Ret[%d]\r\n", HIBYTE(v4));
      sprintf(v6, "%d", HIBYTE(v4));
    }
    else
    {
      puts("Shell Exec Successfully!\r");
      strcpy(v6, "200");
    }
  }
  v5 = strlen(v6);
  write(v2, v6, v5 + 1);
  close(v2);
  pthread_exit(0);
}
