void *api()
{
  void *result; // r0
  int v1; // r4
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  struct addrinfo *v5; // r4
  const char *v6; // r1
  const char *v7; // r0
  struct addrinfo *i; // r3
  int v9; // r0
  int v10; // r6
  int v11; // r8
  time_t v12; // r9
  int *v13; // r0
  char *v14; // r5
  _DWORD *v15; // r3
  int v16; // r1
  int v17; // r3
  _DWORD *v18; // r1
  _WORD *v19; // r0
  int v20; // r11
  _DWORD *v21; // r10
  int v22; // r6
  int v23; // r0
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  int v27; // r3
  _DWORD *v28; // r3
  int v29; // r1
  ssize_t v30; // r3
  int v31; // r3
  _DWORD *v32; // r3
  int v33; // r1
  double *v34; // r0
  double *v35; // r5
  _DWORD *v36; // r0
  _DWORD *v37; // r6
  unsigned int *v38; // r3
  unsigned int v39; // r2
  unsigned int v40; // r2
  _DWORD *v41; // r4
  double *v42; // r0
  double *v43; // r5
  const char *v44; // r2
  char *v45; // r0
  char *v46; // r5
  unsigned int *v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r2
  char *v50; // r1
  _DWORD *v51; // r0
  _DWORD *v52; // r0
  _DWORD *v53; // r8
  int v54; // r0
  int v55; // r6
  _WORD *v56; // r7
  size_t v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int *v61; // r4
  char **v62; // r6
  unsigned int v63; // r5
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // lr
  char *v68; // r7
  char *v69; // t1
  _DWORD *v70; // r0
  unsigned int *v71; // r3
  unsigned int v72; // r2
  unsigned int v73; // r2
  _DWORD *v74; // r0
  _DWORD *v75; // r3
  int v76; // r1
  unsigned int *v77; // r3
  unsigned int v78; // r2
  unsigned int v79; // r2
  int v80; // r3
  _DWORD *v81; // r3
  int v82; // r1
  const char *v83; // r3
  char *v84; // r1
  _DWORD *v85; // r0
  unsigned int v86; // r4
  _DWORD *v87; // r8
  _DWORD *v88; // r0
  bool v89; // zf
  int v90; // r7
  const char *v91; // r0
  const char *v92; // r1
  char *v93; // r0
  char *v94; // r4
  unsigned int *v95; // r3
  unsigned int v96; // r2
  unsigned int v97; // r2
  unsigned int *v98; // r3
  unsigned int v99; // r2
  unsigned int v100; // r2
  int *v101; // r0
  char *v102; // r0
  int v103; // r3
  _DWORD *v104; // r3
  int v105; // r1
  int v106; // r3
  int v107; // r3
  _DWORD *v108; // r3
  int v109; // r1
  _DWORD *v110; // r8
  unsigned int v111; // r6
  _DWORD *v112; // r0
  _DWORD *v113; // r7
  int v114; // r3
  _DWORD *v115; // r3
  int v116; // r1
  int v117; // r3
  _DWORD *v118; // r3
  int v119; // r1
  int v120; // r0
  int v121; // r5
  size_t v122; // r0
  int v123; // r0
  int v124; // r0
  int v125; // r0
  int *v126; // r8
  char *v127; // r6
  _DWORD *v128; // r3
  int v129; // r12
  int v130; // r1
  const char *v131; // r1
  _DWORD *v132; // r0
  const char *v133; // r2
  char *v134; // r1
  _DWORD *v135; // r0
  char *v136; // r1
  _DWORD *v137; // r0
  unsigned int v138; // r1
  unsigned int *v139; // r3
  unsigned int v140; // r2
  unsigned int v141; // r2
  const char *v142; // r2
  _DWORD *v143; // r0
  const char *v144; // r2
  int *v145; // r0
  char *v146; // r0
  int v147; // r3
  _DWORD *v148; // r3
  int v149; // r1
  unsigned int v150; // [sp+10h] [bp-11574h]
  unsigned int protocol; // [sp+14h] [bp-11570h]
  _DWORD *v152; // [sp+18h] [bp-1156Ch]
  _DWORD *v153; // [sp+1Ch] [bp-11568h]
  unsigned int v154; // [sp+20h] [bp-11564h]
  int v155; // [sp+24h] [bp-11560h]
  _WORD *v156; // [sp+28h] [bp-1155Ch]
  _DWORD *v157; // [sp+2Ch] [bp-11558h]
  _DWORD *v158; // [sp+34h] [bp-11550h]
  _DWORD *v159; // [sp+40h] [bp-11544h]
  int v160; // [sp+48h] [bp-1153Ch] BYREF
  int fd; // [sp+4Ch] [bp-11538h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11534h] BYREF
  int v163; // [sp+54h] [bp-11530h] BYREF
  int v164; // [sp+58h] [bp-1152Ch] BYREF
  int v165; // [sp+5Ch] [bp-11528h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11524h] BYREF
  int optval; // [sp+64h] [bp-11520h] BYREF
  _DWORD v168[2]; // [sp+68h] [bp-1151Ch] BYREF
  char service[12]; // [sp+70h] [bp-11514h] BYREF
  char v170[4]; // [sp+7Ch] [bp-11508h] BYREF
  int v171; // [sp+80h] [bp-11504h]
  int v172; // [sp+84h] [bp-11500h]
  int v173; // [sp+88h] [bp-114FCh]
  char s1[4]; // [sp+8Ch] [bp-114F8h] BYREF
  int v175; // [sp+90h] [bp-114F4h]
  int v176; // [sp+94h] [bp-114F0h]
  int v177; // [sp+98h] [bp-114ECh]
  _DWORD v178[5]; // [sp+9Ch] [bp-114E8h] BYREF
  char v179[32]; // [sp+B0h] [bp-114D4h] BYREF
  addrinfo req; // [sp+D0h] [bp-114B4h] BYREF
  struct sockaddr addr; // [sp+F0h] [bp-11494h] BYREF
  char v182[16]; // [sp+170h] [bp-11414h] BYREF
  char v183[252]; // [sp+26Ch] [bp-11318h] BYREF
  char src[256]; // [sp+368h] [bp-1121Ch] BYREF
  _DWORD v185[70]; // [sp+468h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+580h] [bp-11004h] BYREF
  char v187[4096]; // [sp+1580h] [bp-10004h] BYREF
  char v188[4096]; // [sp+2580h] [bp-F004h] BYREF
  char v189[3968]; // [sp+3580h] [bp-E004h] BYREF
  char v190[3968]; // [sp+4580h] [bp-D004h] BYREF
  char v191[3968]; // [sp+5580h] [bp-C004h] BYREF
  char v192[3968]; // [sp+6580h] [bp-B004h] BYREF
  char v193[3968]; // [sp+7580h] [bp-A004h] BYREF
  char v194[3968]; // [sp+8580h] [bp-9004h] BYREF
  char v195[3968]; // [sp+9580h] [bp-8004h] BYREF
  char v196[3968]; // [sp+A580h] [bp-7004h] BYREF
  char v197[3968]; // [sp+B580h] [bp-6004h] BYREF
  char v198[3968]; // [sp+C580h] [bp-5004h] BYREF
  char v199[3968]; // [sp+D580h] [bp-4004h] BYREF
  char v200[3968]; // [sp+E580h] [bp-3004h] BYREF
  _BYTE v201[8196]; // [sp+F580h] [bp-2004h] BYREF

  v160 = -1;
  fd = -1;
  v150 = 2;
  memset(v201, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  v171 = 0;
  v172 = 0;
  v173 = 0;
  *(_DWORD *)v170 = 0;
  result = memset(v179, 0, sizeof(v179));
  v1 = (unsigned __int8)byte_195890;
  if ( !byte_195890 )
  {
    V_LOCK();
    LOWORD(v2) = 28204;
    HIWORD(v2) = (unsigned int)"uart print time" >> 16;
    logfmt_raw(v187, 0x1000u, v1, v2);
    V_UNLOCK();
    LOWORD(v3) = 20532;
    HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v4) = 24672;
    HIWORD(v4) = (unsigned int)" print time %lld ms" >> 16;
    zlog(*v3, v4, 137, "api", 3, 2880, 60, v187);
    v5 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v185, v1);
    if ( v5 )
    {
      sub_28B90(&v160);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v185);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v185);
      LOWORD(v6) = 27572;
      HIWORD(v6) = (unsigned int)" to port %d, failed (%s)" >> 16;
      sprintf(service, v6, 4028);
      LOWORD(v7) = 28224;
      memset(&req.ai_family, 0, 28);
      HIWORD(v7) = (unsigned int)"artplines" >> 16;
      req.ai_flags = 1;
      protocol = getaddrinfo(v7, service, &req, &ai);
      if ( protocol )
      {
        V_LOCK();
        v127 = v195;
        logfmt_raw(v195, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
        V_UNLOCK();
        LOWORD(v128) = 20532;
        HIWORD(v128) = (unsigned int)&g_fan_zc >> 16;
        v129 = 2432;
LABEL_127:
        LOWORD(v130) = 24672;
        HIWORD(v130) = (unsigned int)" print time %lld ms" >> 16;
        zlog(*v128, v130, 137, "api_init_socket", 15, v129, 100, v127);
LABEL_117:
        V_LOCK();
        LOWORD(v117) = 28416;
        HIWORD(v117) = (unsigned int)" is lower than ideal rate" >> 16;
        logfmt_raw(v188, 0x1000u, 0, v117, "api");
        V_UNLOCK();
        LOWORD(v118) = 20532;
        HIWORD(v118) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v119) = 24672;
        HIWORD(v119) = (unsigned int)" print time %lld ms" >> 16;
        return (void *)zlog(*v118, v119, 137, "api", 3, 2887, 100, v188);
      }
      v5 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v9 = socket(i->ai_family, 1, protocol);
          if ( v9 > 0 )
          {
            v10 = v9;
            goto LABEL_10;
          }
          v5 = v5->ai_next;
          if ( !v5 )
            break;
        }
        v10 = v9;
        if ( v9 == -1 )
        {
          V_LOCK();
          v127 = v196;
          logfmt_raw(v196, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
          V_UNLOCK();
          LOWORD(v128) = 20532;
          HIWORD(v128) = (unsigned int)&g_fan_zc >> 16;
          v129 = 2447;
          goto LABEL_127;
        }
        goto LABEL_10;
      }
    }
    v10 = (int)v5;
LABEL_10:
    optval = 1;
    setsockopt(v10, 1, 2, &optval, 4u);
    LOWORD(v11) = 28292;
    v12 = time(0);
    while ( bind(v10, v5->ai_addr, v5->ai_addrlen) < 0 )
    {
      v13 = _errno_location();
      v14 = strerror(*v13);
      if ( time(0) - v12 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK();
        LOWORD(v114) = 28348;
        HIWORD(v114) = (unsigned int)"" >> 16;
        logfmt_raw(v198, 0x1000u, 0, v114, 4028, v14);
        V_UNLOCK();
        LOWORD(v115) = 20532;
        HIWORD(v115) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v116) = 24672;
        HIWORD(v116) = (unsigned int)" print time %lld ms" >> 16;
        zlog(*v115, v116, 137, "api_init_socket", 15, 2475, 100, v198);
        goto LABEL_117;
      }
      V_LOCK();
      HIWORD(v11) = (unsigned int)"re reg" >> 16;
      logfmt_raw(v197, 0x1000u, 0, v11, "api_init_socket", 4028);
      V_UNLOCK();
      LOWORD(v15) = 20532;
      HIWORD(v15) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v16) = 24672;
      HIWORD(v16) = (unsigned int)" print time %lld ms" >> 16;
      zlog(*v15, v16, 137, "api_init_socket", 15, 2465, 80, v197);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    if ( listen(v10, 100) >= 0 )
    {
      if ( v10 < 0 )
        goto LABEL_117;
      LOWORD(v17) = 22616;
      LOWORD(v18) = 23756;
      LOWORD(v19) = -6832;
      HIWORD(v17) = (unsigned int)&dword_195860 >> 16;
      HIWORD(v18) = (unsigned int)&unk_145FDC >> 16;
      HIWORD(v19) = (unsigned int)"og_mux_HNS_2130" >> 16;
      v153 = v18;
      v160 = v10;
      v20 = v17;
      *(_BYTE *)(v17 + 0x38) = 1;
      v21 = v18 + 158;
      v156 = v19;
      while ( 1 )
      {
        v22 = *(unsigned __int8 *)(v20 + 0x14);
        if ( *(_BYTE *)(v20 + 0x14) )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v185);
          sub_28B90(&v160);
          LOWORD(v106) = 22616;
          HIWORD(v106) = (unsigned int)&dword_195860 >> 16;
          *(_BYTE *)(v106 + 0x38) = 0;
          V_LOCK();
          LOWORD(v107) = 28692;
          HIWORD(v107) = (unsigned int)"lgorithm to use\n                          eth_1798         ethash\n                          ckb_2040         eaglesong\n                          ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
          logfmt_raw(v194, 0x1000u, 0, v107);
          V_UNLOCK();
          LOWORD(v108) = 20532;
          HIWORD(v108) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v109) = 24672;
          HIWORD(v109) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v108, v109, 137, "api", 3, 2988, 60, v194);
          return (void *)close(v160);
        }
        addr_len = 128;
        v23 = accept(v160, &addr, &addr_len);
        fd = v23;
        if ( v23 < 0 )
        {
          V_LOCK();
          v101 = _errno_location();
          v102 = strerror(*v101);
          LOWORD(v103) = 28440;
          HIWORD(v103) = (unsigned int)"e" >> 16;
          logfmt_raw(v189, 0x1000u, v22, v103, "api", v102);
          V_UNLOCK();
          LOWORD(v104) = 20532;
          HIWORD(v104) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v105) = 24672;
          HIWORD(v105) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v104, v105, 137, "api", 3, 2900, 100, v189);
          goto LABEL_107;
        }
        v165 = 2;
        v163 = 1;
        v164 = 5;
        setsockopt(v23, 1, 9, &v163, 4u);
        setsockopt(fd, 6, 1, &v163, 4u);
        setsockopt(fd, 6, 6, &v163, 4u);
        setsockopt(fd, 6, 4, &v164, 4u);
        setsockopt(fd, 6, 5, &v165, 4u);
        v168[1] = v22;
        v168[0] = 10;
        if ( setsockopt(fd, 1, 21, v168, 8u) )
        {
          V_LOCK();
          LOWORD(v24) = 28468;
          HIWORD(v24) = (unsigned int)"_chip_status_monitor" >> 16;
          logfmt_raw(v190, 0x1000u, v22, v24, v21);
          V_UNLOCK();
          LOWORD(v25) = 20532;
          HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v26) = 24672;
          HIWORD(v26) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v25, v26, 137, v21, 3, 2919, 100, v190);
          close(fd);
        }
        if ( setsockopt(fd, 1, 20, v168, 8u) )
        {
          V_LOCK();
          LOWORD(v27) = 28504;
          HIWORD(v27) = (unsigned int)"_monitor" >> 16;
          logfmt_raw(v191, 0x1000u, 0, v27, v21);
          V_UNLOCK();
          LOWORD(v28) = 20532;
          HIWORD(v28) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v29) = 24672;
          HIWORD(v29) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v28, v29, 137, v21, 3, 2925, 100, v191);
          close(fd);
        }
        v30 = recv(fd, v201, 0xFFFu, 0);
        if ( v30 < 0 )
        {
          v201[0] = 0;
          goto LABEL_18;
        }
        v201[v30] = 0;
        v171 = 0;
        v172 = 0;
        v173 = 0;
        *(_DWORD *)v170 = 0;
        memset(v179, 0, sizeof(v179));
        *(_DWORD *)(v20 + 4) = 0;
        *(_DWORD *)(v20 + 8) = 0;
        *(_DWORD *)(v20 + 0xC) = 0;
        *(_DWORD *)(v20 + 0x10) = 0;
        *(_DWORD *)v20 = time(0);
        getnameinfo(&addr, 0x80u, (char *)(v20 + 4), 0x10u, 0, 0, 1u);
        V_LOCK();
        LOWORD(v31) = 28540;
        HIWORD(v31) = (unsigned int)"ro_check" >> 16;
        logfmt_raw(v192, 0x1000u, 0, v31, v20 + 4);
        V_UNLOCK();
        LOWORD(v32) = 20532;
        HIWORD(v32) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v33) = 24672;
        HIWORD(v33) = (unsigned int)" print time %lld ms" >> 16;
        zlog(*v32, v33, 137, v21, 3, 2942, 20, v192);
        v175 = 0;
        *(_DWORD *)s1 = 0;
        v176 = 0;
        v177 = 0;
        v34 = json_loads((int)v201, 0, v182);
        v35 = v34;
        if ( v34 && !*(_DWORD *)v34 )
        {
          v36 = (_DWORD *)json_object_get(v34, "command");
          v37 = v36;
          if ( v36 && *v36 == 1 )
          {
            LOWORD(v84) = 28560;
            HIWORD(v84) = (unsigned int)off_1472A0 >> 16;
            v85 = (_DWORD *)json_object_get(v35, v84);
            if ( v85 )
              v154 = *v85 != 5;
            else
              v154 = 1;
            v86 = protocol;
            v155 = protocol;
            v87 = json_object();
            while ( (unsigned int)json_array_size(v37) > v86 )
            {
              v88 = json_array_get(v37, v86);
              v89 = v88 == 0;
              if ( v88 )
                v89 = v86 == 11;
              v90 = v89;
              if ( v89 )
                break;
              if ( *v88 == 2 )
              {
                *(_DWORD *)s1 = v90;
                v175 = v90;
                v176 = v90;
                v177 = v90;
                v91 = (const char *)json_string_value(v88);
                snprintf(s1, 0x10u, "%s", v91);
                LOWORD(v92) = 28568;
                HIWORD(v92) = (unsigned int)off_1472A8 >> 16;
                if ( strcmp(s1, v92) | v154 )
                {
                  v158 = json_object();
                  sub_28BD4(v158, s1, v90, v154);
                  json_object_set_new(v87, s1, v158);
                }
                else
                {
                  v155 = 1;
                }
              }
              ++v86;
            }
            v93 = json_dumps(v87, 24576);
            v94 = v93;
            if ( v93 )
              sub_29188(&fd, v93);
            free(v94);
            if ( v155 == 1 )
            {
              LOWORD(v131) = 28568;
              HIWORD(v131) = (unsigned int)off_1472A8 >> 16;
              sub_28BD4(v87, v131, 0, 0);
            }
            if ( v87 )
            {
              if ( v87[1] != -1 )
              {
                v95 = v87 + 1;
                __dmb(0xBu);
                do
                {
                  v96 = __ldrex(v95);
                  v97 = v96 - 1;
                }
                while ( __strex(v97, v95) );
                if ( !v97 )
                  json_delete(v87);
              }
            }
            if ( *((_DWORD *)v35 + 1) != -1 )
            {
              v98 = (unsigned int *)v35 + 1;
              __dmb(0xBu);
              do
              {
                v99 = __ldrex(v98);
                v100 = v99 - 1;
              }
              while ( __strex(v100, v98) );
              if ( !v100 )
                json_delete(v35);
            }
            goto LABEL_18;
          }
          if ( *((_DWORD *)v35 + 1) != -1 )
          {
            v38 = (unsigned int *)v35 + 1;
            __dmb(0xBu);
            do
            {
              v39 = __ldrex(v38);
              v40 = v39 - 1;
            }
            while ( __strex(v40, v38) );
            if ( !v40 )
              json_delete(v35);
          }
        }
        v41 = json_object();
        v42 = json_loads((int)v201, 0, v183);
        v43 = v42;
        if ( !v42 || *(_DWORD *)v42 )
        {
          LOWORD(v44) = -27680;
          HIWORD(v44) = (unsigned int)"space" >> 16;
          v150 = 2;
          snprintf(v170, 0x10u, v44, v201);
          sub_28BD4(v41, v170, (int)v179, 2u);
          goto LABEL_38;
        }
        v74 = (_DWORD *)json_object_get(v42, "command");
        if ( v74 && *v74 == 2 )
        {
          v132 = json_string_value(v74);
          LOWORD(v133) = -27680;
          HIWORD(v133) = (unsigned int)"space" >> 16;
          snprintf(v170, 0x10u, v133, v132);
          LOWORD(v134) = 28560;
          HIWORD(v134) = (unsigned int)off_1472A0 >> 16;
          v135 = (_DWORD *)json_object_get(v43, v134);
          if ( v135 && *v135 == 5 )
          {
            if ( *((_DWORD *)v43 + 1) == -1 )
            {
              v150 = protocol;
              sub_28BD4(v41, v170, (int)v179, protocol);
              goto LABEL_38;
            }
            v138 = protocol;
          }
          else
          {
            LOWORD(v136) = 28616;
            HIWORD(v136) = (unsigned int)"g" >> 16;
            v137 = (_DWORD *)json_object_get(v43, v136);
            if ( v137 && *v137 == 2 )
            {
              v143 = json_string_value(v137);
              LOWORD(v144) = -27680;
              HIWORD(v144) = (unsigned int)"space" >> 16;
              snprintf(v179, 0x20u, v144, v143);
            }
            if ( *((_DWORD *)v43 + 1) == -1 )
            {
              v150 = 1;
              sub_28BD4(v41, v170, (int)v179, 1u);
              goto LABEL_38;
            }
            v138 = 1;
          }
          v139 = (unsigned int *)v43 + 1;
          __dmb(0xBu);
          do
          {
            v140 = __ldrex(v139);
            v141 = v140 - 1;
          }
          while ( __strex(v141, v139) );
          v150 = v138;
          if ( v141 )
          {
            sub_28BD4(v41, v170, (int)v179, v138);
          }
          else
          {
            json_delete(v43);
            sub_28BD4(v41, v170, (int)v179, v150);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v200, 0x1000u, 0, "%s error: format error about command", v153 + 163);
          V_UNLOCK();
          LOWORD(v75) = 20532;
          HIWORD(v75) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v76) = 24672;
          HIWORD(v76) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v75, v76, 137, v153 + 163, 14, 2519, 100, v200);
          if ( *((_DWORD *)v43 + 1) != -1 )
          {
            v77 = (unsigned int *)v43 + 1;
            __dmb(0xBu);
            do
            {
              v78 = __ldrex(v77);
              v79 = v78 - 1;
            }
            while ( __strex(v79, v77) );
            if ( !v79 )
              json_delete(v43);
          }
          V_LOCK();
          LOWORD(v80) = 28628;
          HIWORD(v80) = (unsigned int)"ODMINER [OPTIONS]\nOptions:\n  -a, --algo=ALGO       specify the algorithm to use\n                          eth_1798         ethash\n                          ckb_2040         eaglesong\n                          ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
          logfmt_raw(v193, 0x1000u, 0, v80, v21);
          V_UNLOCK();
          LOWORD(v81) = 20532;
          HIWORD(v81) = (unsigned int)&g_fan_zc >> 16;
          LOWORD(v82) = 24672;
          HIWORD(v82) = (unsigned int)" print time %lld ms" >> 16;
          zlog(*v81, v82, 137, v21, 3, 2957, 100, v193);
          LOWORD(v83) = 28660;
          HIWORD(v83) = (unsigned int)" --algo=ALGO       specify the algorithm to use\n                          eth_1798         ethash\n                          ckb_2040         eaglesong\n                          ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
          sub_25FCC(v41, 0, 24, v83);
        }
LABEL_38:
        if ( v150 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v41 )
          {
            LOWORD(v50) = 24552;
            HIWORD(v50) = (unsigned int)"n %d chip_id %d chip_addr %x reg_addr %x" >> 16;
            v51 = (_DWORD *)json_object_get(v41, v50);
            if ( v51 )
            {
              if ( *v51 == 1 )
              {
                v52 = json_array_get(v51, 0);
                v53 = v52;
                if ( v52 )
                {
                  if ( !*v52 )
                  {
                    v54 = json_object_iter(v52);
                    v55 = json_object_iter_key(v54);
                    if ( v55 )
                    {
                      LOWORD(v56) = 28684;
                      v157 = v41;
                      do
                      {
                        v60 = json_object_key_to_iter(v55);
                        v61 = (int *)json_object_iter_value(v60);
                        if ( !v61 )
                          break;
                        v57 = strlen(s);
                        *(_WORD *)stpcpy(&s[v57], v55) = *v156;
                        sub_28D98(s, v61);
                        HIWORD(v56) = (unsigned int)"fy the algorithm to use\n                          eth_1798         ethash\n                          ckb_2040         eaglesong\n                          ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
                        *(_WORD *)&s[strlen(s)] = *v56;
                        v58 = json_object_key_to_iter(v55);
                        v59 = json_object_iter_next(v53, v58);
                        v55 = json_object_iter_key(v59);
                      }
                      while ( v55 );
                      v41 = v157;
                    }
                    v62 = (char **)v178;
                    *((_BYTE *)&v185[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v63 = protocol;
                    v64 = v153[168];
                    v65 = v153[169];
                    v66 = v153[170];
                    v67 = v153[171];
                    v178[0] = v153[167];
                    v178[1] = v64;
                    v178[2] = v65;
                    v178[3] = v66;
                    v178[4] = v67;
                    while ( 1 )
                    {
                      v69 = *v62++;
                      v68 = v69;
                      v70 = (_DWORD *)json_object_get(v41, v69);
                      if ( v70 )
                      {
                        if ( *v70 == 1 )
                          break;
                      }
                      if ( ++v63 == 5 )
                        goto LABEL_62;
                    }
                    v110 = v70;
                    if ( (v63 & 0xFFFFFFFB) == 0 )
                    {
                      LOWORD(v142) = 28688;
                      HIWORD(v142) = (unsigned int)"he algorithm to use\n                          eth_1798         ethash\n                          ckb_2040         eaglesong\n                          ckb_2042         eaglesong\n                          kda_2110         blake2s\n                          dcr_1727         blaker14\n                          hns_2130         blake2s\n                          dash_1766        x11\n  -o, --url=URL         URL of mining server\n  -u, --user=USERNAME   username for mining server\n  -p, --pass=PASSWORD   password for mining server\n  -P, --protocol        verbose dump of protocol-level activities\n      --api-remote      Allow remote control\n  -c, --config=FILE     load a JSON-format configuration file\n  -v, --version         display version information and exit\n  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n      --bitmain-freq=N  set working freq\n      --bitmain-voltage=N  set working power voltage\n  -z, --zlog=FILE       load a zlog configuration file\n  -h, --help            display this help text and exit\n" >> 16;
                      snprintf(src, 0x100u, v142, v68);
                      strcat(s, src);
                    }
                    v152 = json_array_size(v110);
                    if ( (int)v152 > 0 )
                    {
                      v111 = protocol;
                      do
                      {
                        v112 = json_array_get(v110, v111);
                        v113 = v112;
                        if ( v112 && !*v112 )
                        {
                          v120 = json_object_iter(v112);
                          v121 = json_object_iter_key(v120);
                          if ( v121 )
                          {
                            v159 = v110;
                            do
                            {
                              v125 = json_object_key_to_iter(v121);
                              v126 = (int *)json_object_iter_value(v125);
                              if ( !v126 )
                                break;
                              v122 = strlen(s);
                              *(_WORD *)stpcpy(&s[v122], v121) = *v156;
                              sub_28D98(s, v126);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v123 = json_object_key_to_iter(v121);
                              v124 = json_object_iter_next(v113, v123);
                              v121 = json_object_iter_key(v124);
                            }
                            while ( v121 );
                            v110 = v159;
                          }
                          *((_BYTE *)&v185[69] + strlen(s) + 3) = 124;
                          if ( (_DWORD *)((char *)v152 - 1) != (_DWORD *)v111 )
                            s[strlen(s)] = 44;
                        }
                        ++v111;
                      }
                      while ( v152 != (_DWORD *)v111 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_29188(&fd, s);
          if ( v41 )
          {
            if ( v41[1] != -1 )
            {
              v71 = v41 + 1;
              __dmb(0xBu);
              do
              {
                v72 = __ldrex(v71);
                v73 = v72 - 1;
              }
              while ( __strex(v73, v71) );
              if ( !v73 )
                json_delete(v41);
            }
          }
        }
        else
        {
          v45 = json_dumps(v41, 24576);
          v46 = v45;
          if ( v45 )
            sub_29188(&fd, v45);
          if ( v41 && v41[1] != -1 )
          {
            v47 = v41 + 1;
            __dmb(0xBu);
            do
            {
              v48 = __ldrex(v47);
              v49 = v48 - 1;
            }
            while ( __strex(v49, v47) );
            if ( !v49 )
              json_delete(v41);
          }
          free(v46);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK();
    v145 = _errno_location();
    v146 = strerror(*v145);
    LOWORD(v147) = 28384;
    HIWORD(v147) = (unsigned int)"" >> 16;
    logfmt_raw(v199, 0x1000u, 0, v147, "api_init_socket", v146);
    V_UNLOCK();
    LOWORD(v148) = 20532;
    HIWORD(v148) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v149) = 24672;
    HIWORD(v149) = (unsigned int)" print time %lld ms" >> 16;
    zlog(*v148, v149, 137, "api_init_socket", 15, 2481, 100, v199);
    close(v10);
    goto LABEL_117;
  }
  return result;
}
