void __fastcall __noreturn sub_19018(int a1, int *a2)
{
  int v3; // r10
  __mode_t v4; // r0
  char *v5; // r11
  __uid_t v6; // r4
  int v7; // r3
  _DWORD *v8; // r5
  const char **v9; // r5
  int v10; // t1
  int v11; // r4
  int v12; // r0
  const char *v13; // r1
  const char *v14; // t1
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r2
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r4
  void (__fastcall *v30)(int); // r3
  int v31; // r0
  int v32; // r0
  const char *v33; // r6
  __uid_t v34; // r0
  int *v35; // r4
  const char *v36; // r0
  struct passwd *v37; // r0
  int pw_gid; // r2
  const char *v39; // r4
  int priority_max; // r4
  int priority_min; // r0
  struct group *v42; // r0
  int *v43; // r0
  int v44; // r2
  const char *v45; // r1
  _DWORD *v46; // r4
  const char *v47; // r0
  int v48; // r5
  int v49; // r1
  int v50; // r2
  int v51; // r3
  struct passwd *v52; // r0
  struct timeval *timeout; // [sp+0h] [bp-BCh]
  int v54; // [sp+4h] [bp-B8h]
  struct sched_param param; // [sp+8h] [bp-B4h] BYREF
  int v56; // [sp+Ch] [bp-B0h] BYREF
  int v57; // [sp+10h] [bp-ACh]
  int v58[2]; // [sp+14h] [bp-A8h] BYREF
  int s[2]; // [sp+1Ch] [bp-A0h] BYREF
  char v60; // [sp+24h] [bp-98h]
  int v61; // [sp+28h] [bp-94h]
  int v62; // [sp+2Ch] [bp-90h]
  int v63; // [sp+30h] [bp-8Ch]
  char v64; // [sp+34h] [bp-88h]
  fd_set dest; // [sp+38h] [bp-84h] BYREF

  dword_CAA7C = *a2;
  dword_CAA98 = 1;
  v3 = sub_4FFC0(&unk_79508, a1, a2);
  sub_18E8C((const char *)dword_CAA7C, 1);
  v4 = umask(0);
  v5 = (char *)(a1 - v3);
  if ( !v4 )
    v4 = 18;
  umask(v4);
  v6 = getuid();
  if ( v6 && (*((_DWORD *)off_7954C + 356) & 0xF) == 0 )
  {
    sub_4FE78(3, "ntpd: must be run as root, not uid %ld", v6);
    printf("must be run as root, not uid %ld\n", v6);
    exit(1);
  }
  v7 = *((unsigned __int16 *)off_7954C + 199);
  dword_7CF4C = v7;
  if ( v7 )
    puts(off_79E4C);
  sub_18EFC();
  if ( (*((_DWORD *)off_7954C + 260) & 0xF) != 0
    || (*((_DWORD *)off_7954C + 324) & 0xF) != 0
    || dword_7CF4C
    || (*((_DWORD *)off_7954C + 356) & 0xF) != 0 )
  {
    dword_7CF54 = 1;
  }
  if ( (*((_DWORD *)off_7954C + 228) & 0xF) != 0 )
    dword_79500 = 0;
  if ( (*((_DWORD *)off_7954C + 180) & 0xF) != 0 )
  {
    v8 = (_DWORD *)*((_DWORD *)off_7954C + 183);
    v10 = *v8;
    v9 = (const char **)(v8 + 2);
    v11 = v10 - 1;
    if ( v10 > 0 )
    {
      do
      {
        v12 = sub_14720(*v9, (char *)s);
        --v11;
        v14 = *v9++;
        v13 = v14;
        if ( v12 )
          v15 = 5;
        else
          v15 = 4;
        sub_148DC(v15, v13, -1, 0);
      }
      while ( v11 != -1 );
    }
  }
  if ( (*((_DWORD *)off_7954C + 276) & 0xF) != 0 )
    dword_79504 = 0;
  if ( (*((_DWORD *)off_7954C + 308) & 0xF) != 0 )
  {
    v32 = *((_DWORD *)off_7954C + 310);
    dword_79504 = 0;
    dword_C9CB8 = v32;
    dword_7CE2C = 1;
  }
  sub_4CBA8(&v56);
  sub_505A4(v57 * v56);
  if ( !dword_7CF54 )
  {
    sub_51514(sub_18DE8);
    sub_5164C(sub_18D7C);
    sub_5162C(sub_18CF0);
    daemon(0, 0);
  }
  sub_5131C(1, sub_18E44);
  sub_5131C(2, sub_18E44);
  sub_5131C(3, sub_18E44);
  sub_5131C(15, sub_18E44);
  sub_5131C(7, sub_18E44);
  sub_5131C(10, sub_18CA8);
  sub_5131C(12, sub_18C60);
  v16 = sub_5131C(13, 1);
  v17 = sub_4DC58(v16);
  v18 = sub_2D808(v17);
  v19 = sub_2C9CC(v18);
  v20 = sub_20D28(v19);
  v21 = sub_2D304(v20);
  v22 = sub_4F7C0(v21);
  v23 = sub_2C294(v22);
  v24 = sub_1CBE8(v23);
  v25 = sub_21400(v24);
  sub_270E4(v25);
  if ( dword_7CF4C > 1 )
  {
    v26 = "Leave priority alone";
    if ( !dword_79504 )
      v26 = "Attempt to set priority";
    sub_4FE78(7, "set_process_priority: %s: priority_done is <%d>", v26, dword_79504);
  }
  if ( !dword_79504 )
  {
    priority_max = sched_get_priority_max(1);
    param.__sched_priority = priority_max;
    if ( dword_7CE2C )
    {
      priority_min = sched_get_priority_min(1);
      if ( priority_max >= dword_C9CB8 )
      {
        if ( priority_min < dword_C9CB8 )
          param.__sched_priority = dword_C9CB8;
        else
          param.__sched_priority = priority_min;
      }
      else
      {
        param.__sched_priority = priority_max;
      }
    }
    if ( sched_setscheduler(0, 1, &param) == -1 )
      sub_4FE78(3, "sched_setscheduler(): %m");
    else
      ++dword_79504;
    if ( !dword_79504 )
    {
      if ( setpriority(0, 0, -12) == -1 )
        sub_4FE78(3, "setpriority() error: %m");
      else
        ++dword_79504;
      if ( !dword_79504 )
        sub_4FE78(3, "set_process_priority: No way found to improve our priority");
    }
  }
  sub_266E0();
  v27 = sub_142B0();
  sub_1FBF0(v27);
  sub_20D7C(1);
  sub_109FC(v5);
  sub_1D3D8(6, 0, 0);
  sub_20854(2);
  dword_CAA98 = 0;
  if ( !dword_7CF58 )
  {
LABEL_29:
    dword_CAA80 = 0;
    do
    {
LABEL_30:
      if ( dword_CB570 )
      {
        dword_CAA80 = 1;
        dword_CB570 = 0;
      }
      if ( dword_CAA80 )
        goto LABEL_33;
      v28 = (_DWORD *)sub_50BD4();
      if ( !v28 )
      {
        memcpy(&dest, dword_CA584, sizeof(dest));
        v28 = (_DWORD *)select(dword_CA604 + 1, &dest, 0, 0, 0);
        v46 = v28;
        if ( (int)v28 > 0 )
        {
          sub_4CBA8(v58);
          v28 = sub_15730(
                  v58,
                  v49,
                  v50,
                  v51,
                  (int)timeout,
                  v54,
                  param.__sched_priority,
                  v56,
                  v57,
                  v58[0],
                  v58[1],
                  s[0],
                  s[1],
                  v60,
                  v61,
                  v62,
                  v63,
                  v64,
                  dest.__fds_bits[0],
                  dest.__fds_bits[1],
                  dest.__fds_bits[2],
                  dest.__fds_bits[3],
                  dest.__fds_bits[4],
                  dest.__fds_bits[5],
                  dest.__fds_bits[6],
                  dest.__fds_bits[7],
                  dest.__fds_bits[8],
                  dest.__fds_bits[9],
                  dest.__fds_bits[10],
                  dest.__fds_bits[11]);
        }
        else if ( v28 != (_DWORD *)-1 || (v28 = _errno_location(), *v28 == 4) )
        {
          if ( dword_7CF4C > 5 )
            v28 = (_DWORD *)sub_4FE78(7, "select(): nfound=%d, error: %m", v46);
        }
        else
        {
          v28 = (_DWORD *)sub_4FE78(3, "select() error: %m");
        }
        if ( dword_CB570 )
        {
          dword_CAA80 = 1;
          dword_CB570 = 0;
        }
      }
      if ( dword_CAA80 )
      {
LABEL_33:
        v28 = (_DWORD *)sub_2D3AC();
        dword_CAA80 = 0;
      }
      v29 = sub_50AF4(v28);
    }
    while ( !v29 );
    while ( !dword_CB570 )
    {
      if ( dword_CAA80 )
        goto LABEL_41;
      v30 = *(void (__fastcall **)(int))(v29 + 84);
      if ( !v30 )
        goto LABEL_42;
LABEL_38:
      v30(v29);
      v31 = sub_509C4(v29);
      v29 = sub_50AF4(v31);
      if ( !v29 )
        goto LABEL_30;
    }
    dword_CAA80 = 1;
    dword_CB570 = 0;
LABEL_41:
    sub_2D3AC();
    v30 = *(void (__fastcall **)(int))(v29 + 84);
    dword_CAA80 = 0;
    if ( !v30 )
    {
LABEL_42:
      sub_4FE78(3, "receive buffer corruption - receiver found to be NULL - ABORTING");
      abort();
    }
    goto LABEL_38;
  }
  if ( prctl(8, 1, 0, 0, 0) == -1 )
  {
    sub_4FE78(3, "prctl( PR_SET_KEEPCAPS, 1L ) failed: %m");
    exit(-1);
  }
  v33 = (const char *)dword_7CF5C;
  if ( dword_7CF5C )
  {
    if ( ((*_ctype_b_loc())[*(unsigned __int8 *)v33] & 0x800) != 0
      && (v34 = strtoul(v33, &endptr, 0), dword_CAA84 = v34, !*endptr) )
    {
      v52 = getpwuid(v34);
      dword_CAA94 = (int)v52;
      if ( !v52 )
      {
        v43 = _errno_location();
        v44 = dword_7CF5C;
        v45 = "Cannot find user ID %s";
        goto LABEL_81;
      }
      dword_7CF5C = (int)_strdup(v52->pw_name);
      if ( !dword_7CF5C )
      {
        sub_4FE78(3, "strdup() failed: %m");
        exit(-1);
      }
      dword_CAA88 = *(_DWORD *)(dword_CAA94 + 12);
    }
    else
    {
      v35 = _errno_location();
      v36 = (const char *)dword_7CF5C;
      *v35 = 0;
      v37 = getpwnam(v36);
      dword_CAA94 = (int)v37;
      if ( !v37 )
      {
        if ( *v35 )
          sub_4FE78(3, "getpwnam(%s) failed: %m", dword_7CF5C);
        else
          sub_4FE78(3, "Cannot find user `%s'", dword_7CF5C);
LABEL_105:
        exit(-1);
      }
      pw_gid = v37->pw_gid;
      dword_CAA84 = v37->pw_uid;
      dword_CAA88 = pw_gid;
    }
  }
  v39 = (const char *)dword_7CF60;
  if ( !dword_7CF60 )
    goto LABEL_59;
  if ( ((*_ctype_b_loc())[*(unsigned __int8 *)v39] & 0x800) != 0 )
  {
    dword_CAA88 = strtoul(v39, &endptr, 0);
    if ( !*endptr )
      goto LABEL_59;
  }
  v42 = getgrnam((const char *)dword_7CF60);
  dword_CAA90 = (int)v42;
  if ( v42 )
  {
    dword_CAA88 = v42->gr_gid;
LABEL_59:
    if ( dword_7CF64 )
    {
      if ( chdir((const char *)dword_7CF64) )
      {
        sub_4FE78(3, "Cannot chdir() to `%s': %m", (const char *)dword_7CF64);
        exit(-1);
      }
      if ( chroot((const char *)dword_7CF64) )
      {
        sub_4FE78(3, "Cannot chroot() to `%s': %m", (const char *)dword_7CF64);
        exit(-1);
      }
      if ( chdir("/") )
      {
        sub_4FE78(3, "Cannot chdir() to`root after chroot(): %m");
        goto LABEL_105;
      }
    }
    if ( dword_7CF5C && initgroups((const char *)dword_7CF5C, dword_CAA88) )
    {
      sub_4FE78(3, "Cannot initgroups() to user `%s': %m", (const char *)dword_7CF5C);
      exit(-1);
    }
    if ( dword_7CF60 )
    {
      if ( setgid(dword_CAA88) )
      {
        sub_4FE78(3, "Cannot setgid() to group `%s': %m", (const char *)dword_7CF60);
        exit(-1);
      }
      if ( dword_7CF60 && setegid(dword_CAA88) )
      {
        sub_4FE78(3, "Cannot setegid() to group `%s': %m", (const char *)dword_7CF60);
        exit(-1);
      }
    }
    if ( dword_7CF5C )
    {
      if ( setuid(dword_CAA84) )
      {
        sub_4FE78(3, "Cannot setuid() to user `%s': %m", (const char *)dword_7CF5C);
        exit(-1);
      }
      if ( dword_7CF5C && seteuid(dword_CAA84) )
      {
        sub_4FE78(3, "Cannot seteuid() to user `%s': %m", (const char *)dword_7CF5C);
        exit(-1);
      }
    }
    if ( dword_CA648 )
    {
      if ( !dword_7A4E8 )
        goto LABEL_98;
      dword_7A4E8 = 0;
      sub_4FE78(6, "running in unprivileged mode disables dynamic interface tracking");
    }
    if ( dword_7A4E8 )
    {
      v47 = "cap_sys_time,cap_net_bind_service=ipe";
      goto LABEL_99;
    }
LABEL_98:
    v47 = "cap_sys_time=ipe";
LABEL_99:
    v48 = cap_from_text(v47);
    if ( !v48 )
    {
      sub_4FE78(3, "cap_from_text() failed: %m");
      exit(-1);
    }
    if ( cap_set_proc() == -1 )
    {
      sub_4FE78(3, "cap_set_proc() failed to drop root privileges: %m");
      exit(-1);
    }
    cap_free(v48);
    goto LABEL_29;
  }
  v43 = _errno_location();
  v44 = dword_7CF60;
  v45 = "Cannot find group `%s'";
LABEL_81:
  *v43 = 0;
  sub_4FE78(3, v45, v44);
  exit(-1);
}
