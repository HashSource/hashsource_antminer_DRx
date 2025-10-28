int __fastcall sub_35F54(int a1, int a2)
{
  const char *v2; // r7
  int *v4; // r4
  speed_t v5; // r1
  char **v6; // r2
  unsigned int v7; // r3
  int v8; // r6
  const char *v9; // r0
  void *v10; // r7
  ssize_t v12; // r0
  char *v13; // r8
  char *v14; // r0
  __int16 v15; // r10
  struct hostent *v16; // r8
  struct protoent *v17; // r2
  char **h_addr_list; // r12
  int p_proto; // r2
  char *v20; // r3
  int v21; // r0
  struct sockaddr addr; // [sp+Ch] [bp-78h] BYREF
  char s[20]; // [sp+1Ch] [bp-68h] BYREF
  char buf[84]; // [sp+30h] [bp-54h] BYREF

  v4 = *(int **)(a2 + 60);
  snprintf(s, 0x14u, "/dev/gps%d", a1);
  v7 = ((*(unsigned __int8 *)(a2 + 59) >> 4) & 7) - 1;
  if ( v7 > 4 )
  {
    v5 = 12;
    v2 = "4800";
  }
  else
  {
    v6 = off_6758C;
  }
  if ( v7 <= 4 )
  {
    v2 = v6[v7];
    v5 = (speed_t)v6[v7 + 5];
  }
  v8 = sub_27D18(s, v5, 1);
  if ( v8 > 0 )
    goto LABEL_7;
  v12 = readlink(s, buf, 0x50u);
  if ( v12 == -1 )
    return 0;
  buf[v12] = 0;
  v13 = strtok(buf, ":");
  if ( !v13 )
    return 0;
  v14 = strtok(0, ":");
  if ( !v14 )
    return 0;
  v15 = strtol(v14, 0, 10);
  v16 = gethostbyname(v13);
  if ( !v16 )
    return 0;
  v17 = getprotobyname("tcp");
  if ( !v17 )
    return 0;
  memset(&addr.sa_data[2], 0, 12);
  h_addr_list = v16->h_addr_list;
  addr.sa_family = 2;
  p_proto = v17->p_proto;
  v20 = *h_addr_list;
  *(_DWORD *)addr.sa_data = (unsigned __int16)(HIBYTE(v15) | (unsigned __int16)(v15 << 8));
  *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v20;
  v21 = socket(2, 1, p_proto);
  v8 = v21;
  if ( v21 == -1 )
    return 0;
  if ( connect(v21, &addr, 0x10u) == -1 )
  {
    close(v8);
    return 0;
  }
LABEL_7:
  v9 = (const char *)sub_50BEC(a2 + 12);
  sub_4FE78(5, "%s serial %s open at %s bps", v9, s, v2);
  v10 = (void *)sub_4F524(28);
  memset(v10, 0, 0x1Cu);
  v4[3] = a2;
  v4[5] = v8;
  v4[1] = (int)sub_352A0;
  v4[4] = 0;
  if ( sub_15FC4(v4) )
  {
    v4[7] = (int)v10;
    *(_BYTE *)(a2 + 71) = -9;
    v4[9] = (int)"NMEA GPS Clock";
    v4[187] = 5460039;
    sub_35F24(v8, a2);
    return 1;
  }
  else
  {
    v4[5] = -1;
    close(v8);
    free(v10);
    return 0;
  }
}
