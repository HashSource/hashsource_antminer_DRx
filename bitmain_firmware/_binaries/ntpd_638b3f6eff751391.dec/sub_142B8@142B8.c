void sub_142B8()
{
  int *v0; // r3
  int v1; // r0
  int v2; // r5
  int *v3; // r10
  int v4; // r2
  int v5; // r11
  _DWORD *v6; // r6
  _DWORD *v7; // r9
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r11
  _DWORD *v15; // r5
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r0
  const char *v22; // r0
  struct sockaddr v23; // [sp+0h] [bp-2Ch] BYREF
  int v24; // [sp+10h] [bp-1Ch]
  int v25; // [sp+14h] [bp-18h]
  int v26; // [sp+18h] [bp-14h]
  int v27; // [sp+1Ch] [bp-10h]
  int v28; // [sp+20h] [bp-Ch]
  int v29; // [sp+24h] [bp-8h]

  if ( dword_7CE38 || (*((_DWORD *)off_7954C + 356) & 0xF) != 0 )
    return;
  v0 = (int *)&unk_CA580;
  dword_7CE38 = 1;
  dword_CA604 = 0;
  do
  {
    v0[1] = 0;
    ++v0;
  }
  while ( v0 != &dword_CA584[31] );
  if ( dword_7CF4C > 1 )
    printf("create_sockets(%d)\n", 123);
  *(_DWORD *)&v23.sa_data[10] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( dword_CB868 )
  {
    *(_DWORD *)&v23.sa_data[10] = 2063597570;
    v5 = sub_12344(0, (unsigned __int16 *)&v23.sa_data[10], 0);
    if ( v5 != 1 )
    {
      v6 = sub_1155C(0);
      strncpy((char *)v6 + 104, "v4wildcard", 0x20u);
      v7 = v6 + 5;
      v8 = v24;
      v9 = v25;
      v10 = v26;
      v6[5] = *(_DWORD *)&v23.sa_data[10];
      v6[6] = v8;
      v6[7] = v9;
      v6[8] = v10;
      v11 = v28;
      v12 = v29;
      v6[9] = v27;
      v6[10] = v11;
      v6[11] = v12;
      *((_WORD *)v6 + 39) = 31488;
      *((_WORD *)v6 + 68) = 2;
      v6[13] = -1;
      *((_WORD *)v6 + 24) = 2;
      v6[44] = v5 == 2;
      *((_WORD *)v6 + 38) = 2;
      v6[20] = 0;
      v6[35] = 137;
      v13 = sub_12CBC((unsigned __int16 *)v6 + 10, 0, 1, (int)v6);
      v6[2] = v13;
      if ( v13 == -1 )
        goto LABEL_27;
      dword_7CE3C = (int)v6;
      dword_CA608 = (int)v6;
      sub_127D4((int)(v6 + 5), (int)v6);
      sub_119C4((int)v6);
      sub_10EE0((int)v6);
      if ( dword_7CF4C > 1 )
        sub_1176C((int)v6, "created ", (int)"\n");
    }
  }
  if ( dword_CB864 )
  {
    v24 = 0;
    v29 = 0;
    *(_DWORD *)&v23.sa_data[10] = 2063597578;
    v25 = in6addr_any;
    v26 = unk_7CDD4;
    v27 = unk_7CDD8;
    v28 = unk_7CDDC;
    v14 = sub_12344(0, (unsigned __int16 *)&v23.sa_data[10], 0);
    if ( v14 != 1 )
    {
      v15 = sub_1155C(0);
      strncpy((char *)v15 + 104, "v6wildcard", 0x20u);
      v7 = v15 + 5;
      v16 = v24;
      v17 = v25;
      v18 = v26;
      v15[5] = *(_DWORD *)&v23.sa_data[10];
      v15[6] = v16;
      v15[7] = v17;
      v15[8] = v18;
      v19 = v28;
      v20 = v29;
      v15[9] = v27;
      v15[10] = v19;
      v15[11] = v20;
      *((_WORD *)v15 + 68) = 10;
      *((_WORD *)v15 + 24) = 10;
      memset(v15 + 14, 255, 0x10u);
      v15[35] = 129;
      v15[44] = v14 == 2;
      v21 = sub_12CBC((unsigned __int16 *)v15 + 10, 0, 1, (int)v15);
      v15[2] = v21;
      if ( v21 != -1 )
      {
        dword_7CE40 = (int)v15;
        dword_CA644 = (int)v15;
        sub_127D4((int)(v15 + 5), (int)v15);
        sub_119C4((int)v15);
        sub_10EE0((int)v15);
        if ( dword_7CF4C > 1 )
          sub_1176C((int)v15, "created ", (int)"\n");
        goto LABEL_10;
      }
LABEL_27:
      v22 = (const char *)sub_50CD0(v7);
      sub_4FE78(3, "unable to bind to wildcard address %s - another process may be running - EXITING", v22);
      exit(1);
    }
  }
LABEL_10:
  sub_132E0(0, 0);
  sub_111CC(0);
  if ( dword_7CF4C > 1 )
    printf("create_sockets: Total interfaces = %d\n", dword_CA62C);
  v1 = socket(16, 3, 0);
  if ( v1 < 0 )
  {
    sub_4FE78(3, "unable to open routing socket (%m) - using polled interface update");
  }
  else
  {
    *(_DWORD *)&v23.sa_data[2] = 0;
    *(_DWORD *)&v23.sa_family = 16;
    *(_DWORD *)&v23.sa_data[6] = 1905;
    v2 = sub_115D4(v1);
    if ( bind(v2, &v23, 0xCu) < 0 )
    {
      sub_4FE78(3, "bind failed on routing socket (%m) - using polled interface update");
    }
    else
    {
      sub_12C84(v2);
      v3 = (int *)sub_4F524(16);
      memset(v3, 0, 0x10u);
      v3[1] = v2;
      v4 = dword_CA618;
      v3[3] = (int)sub_120CC;
      *v3 = v4;
      dword_CA618 = (int)v3;
      sub_12224(v2, 0);
      sub_4FE78(6, "Listening on routing socket on fd #%d for interface updates", v2);
    }
  }
  if ( dword_7CF4C > 2 )
    printf("io_open_sockets: maxactivefd %d\n", dword_CA604);
}
