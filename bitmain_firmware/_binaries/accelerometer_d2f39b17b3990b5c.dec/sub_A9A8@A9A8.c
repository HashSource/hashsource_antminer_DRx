int sub_A9A8()
{
  unsigned int v0; // r4
  int v1; // r6
  bool v2; // zf
  unsigned int v3; // r6
  bool v4; // cc
  int v5; // r4
  int v7; // r6
  size_t v8; // r0
  int v9; // r4
  int v10; // r7
  size_t v11; // r0
  int v12; // r7
  size_t v13; // r0
  int v14; // r4
  struct sockaddr s[8]; // [sp+4h] [bp-88h] BYREF

  v0 = dword_16038;
  if ( dword_16038 == 8 )
  {
    sub_A10C();
    v5 = 0;
    sub_A0E0();
    sub_A064();
    return v5;
  }
  v1 = dword_16038;
  if ( (unsigned int)(dword_16038 - 6) <= 1 && getpid() != 1 && isatty(2) > 0 )
    goto LABEL_14;
  v2 = v0 == 6;
  if ( v0 != 6 )
    v2 = v0 == 3;
  if ( !v2 && v0 != 2 )
    goto LABEL_7;
  memset(s, 0, sizeof(s));
  s[0].sa_family = 1;
  strcpy(s[0].sa_data, "/run/systemd/journal/socket");
  memset(&s[1].sa_data[12], 0, 0x50u);
  if ( dword_16010 >= 0 )
  {
LABEL_19:
    v5 = 0;
    goto LABEL_20;
  }
  v7 = sub_9C90(2);
  dword_16010 = v7;
  if ( v7 < 0 )
  {
    sub_A10C();
    v0 = dword_16038;
    v1 = dword_16038;
  }
  else
  {
    v8 = strlen(s[0].sa_data);
    if ( connect(v7, s, v8 + 2) >= 0 )
      goto LABEL_19;
    v9 = *_errno_location();
    sub_A10C();
    v5 = -v9;
    if ( v5 >= 0 )
      goto LABEL_20;
    v0 = dword_16038;
    v1 = dword_16038;
  }
LABEL_7:
  if ( (unsigned int)(v1 - 4) > 1 )
    goto LABEL_8;
  memset(s, 0, sizeof(s));
  s[0].sa_family = 1;
  strcpy(s[0].sa_data, "/dev/log");
  memset(&s[0].sa_data[9], 0, 0x63u);
  if ( dword_16004 >= 0 )
    goto LABEL_26;
  v10 = sub_9C90(2);
  dword_16004 = v10;
  if ( v10 < 0 )
    goto LABEL_36;
  v11 = strlen(s[0].sa_data);
  if ( connect(v10, s, v11 + 2) >= 0 )
  {
    byte_16034 = 0;
LABEL_26:
    v5 = 0;
LABEL_27:
    sub_A10C();
    sub_A064();
    return v5;
  }
  sub_9868(dword_16004);
  v12 = sub_9C90(1);
  dword_16004 = v12;
  if ( v12 < 0 )
  {
LABEL_36:
    sub_A0E0();
    v0 = dword_16038;
    v1 = dword_16038;
  }
  else
  {
    v13 = strlen(s[0].sa_data);
    if ( connect(v12, s, v13 + 2) >= 0 )
    {
      byte_16034 = 1;
      goto LABEL_26;
    }
    v14 = *_errno_location();
    sub_A0E0();
    v5 = -v14;
    if ( v5 >= 0 )
      goto LABEL_27;
    v0 = dword_16038;
    v1 = dword_16038;
  }
LABEL_8:
  v3 = v1 - 6;
  v4 = v0 > 3;
  if ( v0 != 3 )
    v4 = v3 > 1;
  if ( !v4 || v0 == 5 || v0 == 1 )
  {
    v5 = sub_9BD4();
    if ( v5 >= 0 )
    {
      sub_A10C();
LABEL_20:
      sub_A0E0();
      sub_A064();
      return v5;
    }
  }
LABEL_14:
  sub_A10C();
  sub_A0E0();
  sub_A064();
  return sub_9C2C();
}
