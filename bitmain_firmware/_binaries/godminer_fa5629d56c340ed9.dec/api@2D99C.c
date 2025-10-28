void *api()
{
  void *result; // r0
  int v1; // r4
  struct addrinfo *v2; // r4
  struct addrinfo *i; // r3
  int v4; // r0
  int v5; // r6
  time_t v6; // r9
  int *v7; // r0
  char *v8; // r5
  int v9; // r6
  int v10; // r0
  ssize_t v11; // r3
  double *v12; // r0
  double *v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r6
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  _DWORD *v19; // r4
  double *v20; // r0
  double *v21; // r5
  char *v22; // r0
  char *v23; // r5
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r8
  int v30; // r0
  int v31; // r6
  size_t v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int *v36; // r4
  char **v37; // r6
  unsigned int v38; // r5
  const char *v39; // r7
  char *v40; // t1
  _DWORD *v41; // r0
  unsigned int *v42; // r3
  unsigned int v43; // r2
  unsigned int v44; // r2
  _DWORD *v45; // r0
  unsigned int *v46; // r3
  unsigned int v47; // r2
  unsigned int v48; // r2
  _DWORD *v49; // r0
  unsigned int v50; // r4
  _DWORD *v51; // r8
  _DWORD *v52; // r0
  bool v53; // zf
  int v54; // r7
  const char *v55; // r0
  char *v56; // r0
  char *v57; // r4
  unsigned int *v58; // r3
  unsigned int v59; // r2
  unsigned int v60; // r2
  unsigned int *v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r2
  int *v64; // r0
  char *v65; // r0
  _DWORD *v66; // r8
  unsigned int v67; // r6
  _DWORD *v68; // r0
  _DWORD *v69; // r7
  int v70; // r0
  int v71; // r5
  size_t v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int *v76; // r8
  char *v77; // r6
  int v78; // r12
  const char *v79; // r0
  _DWORD *v80; // r0
  _DWORD *v81; // r0
  unsigned int v82; // r1
  unsigned int *v83; // r3
  unsigned int v84; // r2
  unsigned int v85; // r2
  const char *v86; // r0
  int *v87; // r0
  char *v88; // r0
  unsigned int v89; // [sp+10h] [bp-11574h]
  unsigned int protocol; // [sp+14h] [bp-11570h]
  _DWORD *v91; // [sp+18h] [bp-1156Ch]
  unsigned int v92; // [sp+20h] [bp-11564h]
  int v93; // [sp+24h] [bp-11560h]
  _DWORD *v94; // [sp+2Ch] [bp-11558h]
  _DWORD *v95; // [sp+34h] [bp-11550h]
  _DWORD *v96; // [sp+40h] [bp-11544h]
  int v97; // [sp+48h] [bp-1153Ch] BYREF
  int fd; // [sp+4Ch] [bp-11538h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11534h] BYREF
  int v100; // [sp+54h] [bp-11530h] BYREF
  int v101; // [sp+58h] [bp-1152Ch] BYREF
  int v102; // [sp+5Ch] [bp-11528h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11524h] BYREF
  int optval; // [sp+64h] [bp-11520h] BYREF
  _DWORD v105[2]; // [sp+68h] [bp-1151Ch] BYREF
  char service[12]; // [sp+70h] [bp-11514h] BYREF
  char v107[4]; // [sp+7Ch] [bp-11508h] BYREF
  int v108; // [sp+80h] [bp-11504h]
  int v109; // [sp+84h] [bp-11500h]
  int v110; // [sp+88h] [bp-114FCh]
  char s1[4]; // [sp+8Ch] [bp-114F8h] BYREF
  int v112; // [sp+90h] [bp-114F4h]
  int v113; // [sp+94h] [bp-114F0h]
  int v114; // [sp+98h] [bp-114ECh]
  _DWORD v115[5]; // [sp+9Ch] [bp-114E8h] BYREF
  char v116[32]; // [sp+B0h] [bp-114D4h] BYREF
  addrinfo req; // [sp+D0h] [bp-114B4h] BYREF
  struct sockaddr addr; // [sp+F0h] [bp-11494h] BYREF
  char v119[16]; // [sp+170h] [bp-11414h] BYREF
  char v120[252]; // [sp+26Ch] [bp-11318h] BYREF
  char src[256]; // [sp+368h] [bp-1121Ch] BYREF
  _DWORD v122[70]; // [sp+468h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+580h] [bp-11004h] BYREF
  char v124[4096]; // [sp+1580h] [bp-10004h] BYREF
  char v125[4096]; // [sp+2580h] [bp-F004h] BYREF
  char v126[3968]; // [sp+3580h] [bp-E004h] BYREF
  char v127[3968]; // [sp+4580h] [bp-D004h] BYREF
  char v128[3968]; // [sp+5580h] [bp-C004h] BYREF
  char v129[3968]; // [sp+6580h] [bp-B004h] BYREF
  char v130[3968]; // [sp+7580h] [bp-A004h] BYREF
  char v131[3968]; // [sp+8580h] [bp-9004h] BYREF
  char v132[3968]; // [sp+9580h] [bp-8004h] BYREF
  char v133[3968]; // [sp+A580h] [bp-7004h] BYREF
  char v134[3968]; // [sp+B580h] [bp-6004h] BYREF
  char v135[3968]; // [sp+C580h] [bp-5004h] BYREF
  char v136[3968]; // [sp+D580h] [bp-4004h] BYREF
  char v137[3968]; // [sp+E580h] [bp-3004h] BYREF
  char v138[8196]; // [sp+F580h] [bp-2004h] BYREF

  v97 = -1;
  fd = -1;
  v89 = 2;
  memset(v138, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  v108 = 0;
  v109 = 0;
  v110 = 0;
  *(_DWORD *)v107 = 0;
  result = memset(v116, 0, sizeof(v116));
  v1 = (unsigned __int8)byte_1968A0;
  if ( !byte_1968A0 )
  {
    V_LOCK();
    logfmt_raw(v124, 0x1000u, v1, "Start api function");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "api",
      3,
      2881,
      60,
      v124);
    v2 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v122, v1);
    if ( v2 )
    {
      sub_28E58(&v97);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v122);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v122);
      sprintf(service, "%d", 4028);
      memset(&req.ai_family, 0, 28);
      req.ai_flags = 1;
      protocol = getaddrinfo("0.0.0.0", service, &req, &ai);
      if ( protocol )
      {
        V_LOCK();
        v77 = v132;
        logfmt_raw(v132, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
        V_UNLOCK();
        v78 = 2433;
LABEL_127:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "api_init_socket",
          15,
          v78,
          100,
          v77);
LABEL_117:
        V_LOCK();
        logfmt_raw(v125, 0x1000u, 0, "%s: init socket failed", "api");
        V_UNLOCK();
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/api_new.c",
                         137,
                         "api",
                         3,
                         2888,
                         100,
                         v125);
      }
      v2 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v4 = socket(i->ai_family, 1, protocol);
          if ( v4 > 0 )
          {
            v5 = v4;
            goto LABEL_10;
          }
          v2 = v2->ai_next;
          if ( !v2 )
            break;
        }
        v5 = v4;
        if ( v4 == -1 )
        {
          V_LOCK();
          v77 = v133;
          logfmt_raw(v133, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
          V_UNLOCK();
          v78 = 2448;
          goto LABEL_127;
        }
        goto LABEL_10;
      }
    }
    v5 = (int)v2;
LABEL_10:
    optval = 1;
    setsockopt(v5, 1, 2, &optval, 4u);
    v6 = time(0);
    while ( bind(v5, v2->ai_addr, v2->ai_addrlen) < 0 )
    {
      v7 = _errno_location();
      v8 = strerror(*v7);
      if ( time(0) - v6 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK();
        logfmt_raw(v135, 0x1000u, 0, "api bind to port %d, failed (%s)", 4028, v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "api_init_socket",
          15,
          2476,
          100,
          v135);
        goto LABEL_117;
      }
      V_LOCK();
      logfmt_raw(v134, 0x1000u, 0, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", 4028);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "api_init_socket",
        15,
        2466,
        80,
        v134);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    if ( listen(v5, 100) >= 0 )
    {
      if ( v5 < 0 )
        goto LABEL_117;
      v97 = v5;
      byte_1968A0 = 1;
      while ( 1 )
      {
        v9 = (unsigned __int8)byte_19687C;
        if ( byte_19687C )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v122);
          sub_28E58(&v97);
          byte_1968A0 = 0;
          V_LOCK();
          logfmt_raw(v131, 0x1000u, 0, "End api function !!!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            2989,
            60,
            v131);
          return (void *)close(v97);
        }
        addr_len = 128;
        v10 = accept(v97, &addr, &addr_len);
        fd = v10;
        if ( v10 < 0 )
        {
          V_LOCK();
          v64 = _errno_location();
          v65 = strerror(*v64);
          logfmt_raw(v126, 0x1000u, v9, "%s: exec accept failed (%s)", "api", v65);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            2901,
            100,
            v126);
          goto LABEL_107;
        }
        v102 = 2;
        v100 = 1;
        v101 = 5;
        setsockopt(v10, 1, 9, &v100, 4u);
        setsockopt(fd, 6, 1, &v100, 4u);
        setsockopt(fd, 6, 6, &v100, 4u);
        setsockopt(fd, 6, 4, &v101, 4u);
        setsockopt(fd, 6, 5, &v102, 4u);
        v105[1] = v9;
        v105[0] = 10;
        if ( setsockopt(fd, 1, 21, v105, 8u) )
        {
          V_LOCK();
          logfmt_raw(v127, 0x1000u, v9, "%s:setsocket SO_SNDTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            2920,
            100,
            v127);
          close(fd);
        }
        if ( setsockopt(fd, 1, 20, v105, 8u) )
        {
          V_LOCK();
          logfmt_raw(v128, 0x1000u, 0, "%s:setsocket SO_RCVTIMEO failed\n", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            2926,
            100,
            v128);
          close(fd);
        }
        v11 = recv(fd, v138, 0xFFFu, 0);
        if ( v11 < 0 )
        {
          v138[0] = 0;
          goto LABEL_18;
        }
        v138[v11] = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        *(_DWORD *)v107 = 0;
        memset(v116, 0, sizeof(v116));
        *(_DWORD *)::s1 = 0;
        dword_196870 = 0;
        dword_196874 = 0;
        dword_196878 = 0;
        dword_196868 = time(0);
        getnameinfo(&addr, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK();
        logfmt_raw(v129, 0x1000u, 0, "connect_addr: %s", ::s1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "api",
          3,
          2943,
          20,
          v129);
        v112 = 0;
        *(_DWORD *)s1 = 0;
        v113 = 0;
        v114 = 0;
        v12 = json_loads((int)v138, 0, v119);
        v13 = v12;
        if ( v12 && !*(_DWORD *)v12 )
        {
          v14 = (_DWORD *)json_object_get(v12, "command");
          v15 = v14;
          if ( v14 && *v14 == 1 )
          {
            v49 = (_DWORD *)json_object_get(v13, "new_api");
            if ( v49 )
              v92 = *v49 != 5;
            else
              v92 = 1;
            v50 = protocol;
            v93 = protocol;
            v51 = json_object();
            while ( (unsigned int)json_array_size(v15) > v50 )
            {
              v52 = json_array_get(v15, v50);
              v53 = v52 == 0;
              if ( v52 )
                v53 = v50 == 11;
              v54 = v53;
              if ( v53 )
                break;
              if ( *v52 == 2 )
              {
                *(_DWORD *)s1 = v54;
                v112 = v54;
                v113 = v54;
                v114 = v54;
                v55 = (const char *)json_string_value(v52);
                snprintf(s1, 0x10u, "%s", v55);
                if ( strcmp(s1, "reload") | v92 )
                {
                  v95 = json_object();
                  sub_28E9C(v95, s1, v54, v92);
                  json_object_set_new(v51, s1, v95);
                }
                else
                {
                  v93 = 1;
                }
              }
              ++v50;
            }
            v56 = json_dumps(v51, 24576);
            v57 = v56;
            if ( v56 )
              sub_29450(&fd, v56);
            free(v57);
            if ( v93 == 1 )
              sub_28E9C(v51, "reload", 0, 0);
            if ( v51 )
            {
              if ( v51[1] != -1 )
              {
                v58 = v51 + 1;
                __dmb(0xBu);
                do
                {
                  v59 = __ldrex(v58);
                  v60 = v59 - 1;
                }
                while ( __strex(v60, v58) );
                if ( !v60 )
                  json_delete(v51);
              }
            }
            if ( *((_DWORD *)v13 + 1) != -1 )
            {
              v61 = (unsigned int *)v13 + 1;
              __dmb(0xBu);
              do
              {
                v62 = __ldrex(v61);
                v63 = v62 - 1;
              }
              while ( __strex(v63, v61) );
              if ( !v63 )
                json_delete(v13);
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v13 + 1) != -1 )
          {
            v16 = (unsigned int *)v13 + 1;
            __dmb(0xBu);
            do
            {
              v17 = __ldrex(v16);
              v18 = v17 - 1;
            }
            while ( __strex(v18, v16) );
            if ( !v18 )
              json_delete(v13);
          }
        }
        v19 = json_object();
        v20 = json_loads((int)v138, 0, v120);
        v21 = v20;
        if ( !v20 || *(_DWORD *)v20 )
        {
          v89 = 2;
          snprintf(v107, 0x10u, "%s", v138);
          sub_28E9C(v19, v107, (int)v116, 2u);
          goto LABEL_38;
        }
        v45 = (_DWORD *)json_object_get(v20, "command");
        if ( v45 && *v45 == 2 )
        {
          v79 = (const char *)json_string_value(v45);
          snprintf(v107, 0x10u, "%s", v79);
          v80 = (_DWORD *)json_object_get(v21, "new_api");
          if ( v80 && *v80 == 5 )
          {
            if ( *((_DWORD *)v21 + 1) == -1 )
            {
              v89 = protocol;
              sub_28E9C(v19, v107, (int)v116, protocol);
              goto LABEL_38;
            }
            v82 = protocol;
          }
          else
          {
            v81 = (_DWORD *)json_object_get(v21, "parameter");
            if ( v81 && *v81 == 2 )
            {
              v86 = (const char *)json_string_value(v81);
              snprintf(v116, 0x20u, "%s", v86);
            }
            if ( *((_DWORD *)v21 + 1) == -1 )
            {
              v89 = 1;
              sub_28E9C(v19, v107, (int)v116, 1u);
              goto LABEL_38;
            }
            v82 = 1;
          }
          v83 = (unsigned int *)v21 + 1;
          __dmb(0xBu);
          do
          {
            v84 = __ldrex(v83);
            v85 = v84 - 1;
          }
          while ( __strex(v85, v83) );
          v89 = v82;
          if ( v85 )
          {
            sub_28E9C(v19, v107, (int)v116, v82);
          }
          else
          {
            json_delete(v21);
            sub_28E9C(v19, v107, (int)v116, v89);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v137, 0x1000u, 0, "%s error: format error about command", "parse_recv_buf");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "parse_recv_buf",
            14,
            2520,
            100,
            v137);
          if ( *((_DWORD *)v21 + 1) != -1 )
          {
            v46 = (unsigned int *)v21 + 1;
            __dmb(0xBu);
            do
            {
              v47 = __ldrex(v46);
              v48 = v47 - 1;
            }
            while ( __strex(v48, v46) );
            if ( !v48 )
              json_delete(v21);
          }
          V_LOCK();
          logfmt_raw(v130, 0x1000u, 0, "%s: input invaild param format", "api");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api",
            3,
            2958,
            100,
            v130);
          sub_26294(v19, 0, 24, "Missing JSON 'command'");
        }
LABEL_38:
        if ( v89 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v19 )
          {
            v27 = (_DWORD *)json_object_get(v19, "STATUS");
            if ( v27 )
            {
              if ( *v27 == 1 )
              {
                v28 = json_array_get(v27, 0);
                v29 = v28;
                if ( v28 )
                {
                  if ( !*v28 )
                  {
                    v30 = json_object_iter(v28);
                    v31 = json_object_iter_key(v30);
                    if ( v31 )
                    {
                      v94 = v19;
                      do
                      {
                        v35 = json_object_key_to_iter(v31);
                        v36 = (int *)json_object_iter_value(v35);
                        if ( !v36 )
                          break;
                        v32 = strlen(s);
                        *(_WORD *)stpcpy(&s[v32], v31) = 61;
                        sub_29060(s, v36);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v33 = json_object_key_to_iter(v31);
                        v34 = json_object_iter_next(v29, v33);
                        v31 = json_object_iter_key(v34);
                      }
                      while ( v31 );
                      v19 = v94;
                    }
                    v37 = (char **)v115;
                    *((_BYTE *)&v122[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v38 = protocol;
                    v115[0] = "SUMMARY";
                    v115[1] = "POOLS";
                    v115[2] = "STATS";
                    v115[3] = "DEVS";
                    v115[4] = "VERSION";
                    while ( 1 )
                    {
                      v40 = *v37++;
                      v39 = v40;
                      v41 = (_DWORD *)json_object_get(v19, v40);
                      if ( v41 )
                      {
                        if ( *v41 == 1 )
                          break;
                      }
                      if ( ++v38 == 5 )
                        goto LABEL_62;
                    }
                    v66 = v41;
                    if ( (v38 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, "%s,", v39);
                      strcat(s, src);
                    }
                    v91 = json_array_size(v66);
                    if ( (int)v91 > 0 )
                    {
                      v67 = protocol;
                      do
                      {
                        v68 = json_array_get(v66, v67);
                        v69 = v68;
                        if ( v68 && !*v68 )
                        {
                          v70 = json_object_iter(v68);
                          v71 = json_object_iter_key(v70);
                          if ( v71 )
                          {
                            v96 = v66;
                            do
                            {
                              v75 = json_object_key_to_iter(v71);
                              v76 = (int *)json_object_iter_value(v75);
                              if ( !v76 )
                                break;
                              v72 = strlen(s);
                              *(_WORD *)stpcpy(&s[v72], v71) = 61;
                              sub_29060(s, v76);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v73 = json_object_key_to_iter(v71);
                              v74 = json_object_iter_next(v69, v73);
                              v71 = json_object_iter_key(v74);
                            }
                            while ( v71 );
                            v66 = v96;
                          }
                          *((_BYTE *)&v122[69] + strlen(s) + 3) = 124;
                          if ( (_DWORD *)((char *)v91 - 1) != (_DWORD *)v67 )
                            s[strlen(s)] = 44;
                        }
                        ++v67;
                      }
                      while ( v91 != (_DWORD *)v67 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_29450(&fd, s);
          if ( v19 )
          {
            if ( v19[1] != -1 )
            {
              v42 = v19 + 1;
              __dmb(0xBu);
              do
              {
                v43 = __ldrex(v42);
                v44 = v43 - 1;
              }
              while ( __strex(v44, v42) );
              if ( !v44 )
                json_delete(v19);
            }
          }
        }
        else
        {
          v22 = json_dumps(v19, 24576);
          v23 = v22;
          if ( v22 )
            sub_29450(&fd, v22);
          if ( v19 && v19[1] != -1 )
          {
            v24 = v19 + 1;
            __dmb(0xBu);
            do
            {
              v25 = __ldrex(v24);
              v26 = v25 - 1;
            }
            while ( __strex(v26, v24) );
            if ( !v26 )
              json_delete(v19);
          }
          free(v23);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK();
    v87 = _errno_location();
    v88 = strerror(*v87);
    logfmt_raw(v136, 0x1000u, 0, "%s: exec listen() failed (%s)", "api_init_socket", v88);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "api_init_socket",
      15,
      2482,
      100,
      v136);
    close(v5);
    goto LABEL_117;
  }
  return result;
}
