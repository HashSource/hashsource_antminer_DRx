int __fastcall sub_109FC(char *a1)
{
  size_t v2; // r0
  size_t v3; // r0
  int v4; // r0
  int v5; // r0
  int i; // r3
  int v7; // r0
  int result; // r0
  __pid_t v9; // r0
  const char *v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  char v14[1024]; // [sp+0h] [bp-400h] BYREF

  sub_5B388(sub_FF84);
  dword_7BE6C = 61440;
  dword_C9D68 = (int)"/etc/ntp.conf";
  dword_C9D6C = 0;
  snprintf(v14, 0x400u, "daemon_version=\"%s\"", off_79E4C);
  v2 = strlen(v14);
  sub_1CE68(v14, v2 + 1, 1);
  off_C9AFC = sub_BB88;
  strncpy(v14, "settimeofday=\"UNKNOWN\"", 0x400u);
  v3 = strlen(v14);
  sub_1CE68(v14, v3 + 1, 1);
  sub_20854(1);
  sub_B6A0(a1);
  sub_C040();
  dword_CA57C = 0;
  v4 = nullsub_1(dword_C9D68);
  dword_C9CA0[0] = sub_182F0(v4, "r");
  if ( dword_C9CA0[0] )
  {
    v5 = sub_4F4E8(dword_C9D68);
    dword_CA668 = dword_C9CA0[dword_CA57C];
    dword_CA664 = dword_7CF4C > 4;
    dword_C9CD0 = v5;
    sub_1651C(v5);
    if ( dword_7CF4C > 0 )
      puts("Finished Parsing!!");
    dword_C9CC8 = 0;
    dword_C9CE0 = time(0);
    sub_D434();
    for ( i = dword_CA57C; dword_CA57C != -1; i = dword_CA57C )
    {
      v7 = dword_C9CA0[i];
      dword_CA57C = i - 1;
      sub_183C8(v7);
    }
    result = dword_C9D6C;
    if ( dword_C9D6C && dword_794F0 )
    {
      fclose((FILE *)dword_C9D6C);
      dword_C9D6C = 0;
      dword_CAB7C = (int)name;
      sub_5131C(17, sub_BD1C);
      if ( pipe(&dword_C9C98) < 0 )
      {
        sub_4FE78(3, "unable to open resolver pipe");
        exit(1);
      }
      v9 = fork();
      if ( !v9 )
      {
        closelog();
        sub_16060(0);
        sub_5131C(17, 0);
        v12 = sub_18E8C("ntpd_intres", 0);
        v13 = sub_18EFC(v12);
        sub_1F310(v13);
      }
      if ( v9 == -1 )
      {
        sub_4FE78(3, "fork() failed, can't start ntp_intres: %m");
        sub_5131C(17, 0);
        return sub_BFF0();
      }
      else
      {
        return close(dword_C9C98);
      }
    }
  }
  else
  {
    v10 = (const char *)nullsub_1(dword_C9D68);
    v11 = sub_4FE78(6, "getconfig: Couldn't open <%s>", v10);
    return sub_142B8(v11);
  }
  return result;
}
