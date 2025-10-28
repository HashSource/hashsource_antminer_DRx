int __fastcall sub_A150(int a1, int *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r0
  int i; // r3
  FILE *v9; // r6
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r4
  int v13; // r0
  int v14; // r5
  struct addrinfo *v15; // r5
  size_t v16; // r2
  int v17; // r0
  int v18; // r10
  socklen_t v19; // r2
  int v20; // r10
  int *v21; // r2
  int v22; // r3
  bool v23; // zf
  struct addrinfo *v24; // r0
  socklen_t ai_addrlen; // r2
  FILE *v26; // r4
  const char *v27; // r0
  int v28; // r7
  struct addrinfo *v29; // r8
  int *v30; // r10
  int v31; // r5
  struct addrinfo *ai_next; // r3
  int v33; // r3
  bool v34; // zf
  int v35; // r0
  struct addrinfo *v36; // r2
  int ai_family; // r1
  int v38; // r3
  struct addrinfo *v39; // r1
  size_t v40; // r2
  socklen_t v41; // r2
  int v42; // r0
  int v43; // r12
  unsigned int v44; // r2
  int v45; // r0
  int v46; // r0
  int v47; // r7
  unsigned int v48; // r3
  int v49; // r5
  unsigned int v50; // r1
  int v51; // r1
  bool v52; // zf
  const char *v53; // r0
  int v54; // r4
  int v55; // r9
  int v56; // r8
  _BOOL4 v57; // r2
  int *v58; // r0
  int v59; // r5
  int *v60; // r4
  int v61; // r1
  int v62; // r2
  int v63; // r3
  _DWORD *v64; // r12
  int v65; // r0
  int v66; // r1
  int v67; // r2
  int **v68; // lr
  unsigned int v69; // r2
  int v70; // r0
  int v71; // r4
  int *v72; // r0
  unsigned int v73; // r8
  int v74; // r12
  unsigned int v75; // r0
  int v76; // r5
  char v77; // r3
  unsigned int v78; // r3
  unsigned int v79; // r2
  unsigned int v80; // r3
  unsigned int v81; // r2
  unsigned int v82; // r12
  unsigned int v83; // r3
  unsigned int v84; // r2
  unsigned int v85; // lr
  unsigned int v86; // r3
  _DWORD *v87; // r5
  int v88; // r4
  char *v89; // r2
  int v90; // r3
  int v91; // r12
  unsigned int v92; // r7
  unsigned int *j; // r6
  unsigned int *v94; // r3
  unsigned int v95; // r2
  unsigned int v96; // t1
  int v97; // r1
  unsigned int v98; // r0
  int v99; // r3
  int v100; // r0
  int v101; // r1
  int v102; // r1
  unsigned int v103; // r3
  int v104; // r1
  int v105; // r3
  _DWORD *v106; // r12
  unsigned int v107; // r2
  unsigned int v108; // t1
  int v109; // r4
  int v110; // r8
  unsigned int v111; // r3
  const char *v112; // r0
  int v113; // r3
  int v114; // r0
  int v115; // t1
  _DWORD *v116; // r1
  char *v117; // r12
  _DWORD *v118; // r6
  int v119; // r3
  int v120; // r2
  int v121; // r0
  unsigned int v122; // r1
  int *v123; // r0
  int v124; // t1
  struct addrinfo **v125; // r10
  int v126; // r4
  unsigned int *v127; // r12
  unsigned int v128; // r6
  unsigned int v129; // r0
  int v130; // r2
  int v131; // r3
  int k; // r2
  int v133; // r0
  unsigned int *v134; // r6
  unsigned int v135; // r7
  unsigned int v136; // r3
  unsigned int v137; // r2
  unsigned int v138; // r1
  unsigned int v139; // t1
  bool v140; // cf
  int v141; // r1
  int v142; // t1
  int v143; // r1
  unsigned int *v144; // r3
  int m; // r5
  FILE *v146; // r6
  const char *v147; // r0
  int v148; // lr
  int v149; // r12
  const char *v150; // r7
  int v151; // r10
  int v152; // r8
  const char *v153; // r0
  const char *v154; // r3
  const char *v155; // r2
  int v156; // r8
  int v157; // r7
  const char *v158; // r0
  const char *v159; // r0
  const char *v160; // r0
  const char *v161; // r0
  const char *v162; // r0
  unsigned int v163; // r1
  unsigned int v164; // r3
  const char *v165; // r0
  const char *v166; // r0
  int v167; // r8
  const char *v168; // r0
  const char *v169; // r7
  const char *v170; // r0
  const char *v171; // r0
  int v172; // r0
  int v173; // r7
  const char *v174; // r8
  const char *v175; // r10
  const char *v176; // r0
  int v177; // r3
  const char *v178; // r5
  const char *v179; // r0
  int result; // r0
  int v181; // r0
  __time_t v182; // r3
  unsigned int v183; // r2
  unsigned int v184; // r1
  int v185; // r1
  int v186; // lr
  int v187; // r12
  unsigned int v188; // r2
  unsigned int v189; // r2
  int v190; // r6
  int v191; // lr
  int v192; // r2
  int v193; // r12
  __suseconds_t v194; // r2
  const char *v195; // r5
  const char *v196; // r0
  const char *v197; // r0
  int v198; // r3
  const char *v199; // r0
  const char *v200; // r0
  unsigned int v201; // r3
  const char *v202; // r0
  int v203; // r6
  unsigned int v204; // r1
  int v205; // lr
  int v206; // r2
  int v207; // r12
  unsigned int v208; // r1
  unsigned int v209; // r0
  int v210; // r6
  int v211; // r1
  int v212; // r0
  int v213; // r1
  unsigned int v214; // lr
  int v215; // r0
  int v216; // r3
  int v217; // r6
  const char *v218; // r8
  const char *v219; // r0
  int v220; // r12
  int v221; // r3
  unsigned int v222; // r3
  int v223; // r2
  int v224; // r1
  int *v225; // lr
  bool v226; // cc
  bool v227; // cc
  unsigned int v228; // r1
  int v229; // r3
  unsigned int v230; // r8
  int v231; // r1
  int v232; // r3
  unsigned int v233; // r3
  int v234; // r9
  int v235; // r0
  FILE *v236; // r4
  const char *v237; // r0
  const char *v238; // r0
  int v239; // r0
  bool v240; // zf
  unsigned int v241; // r6
  int v242; // r1
  int v243; // lr
  unsigned int v244; // r1
  int *v245; // r0
  int v246; // t1
  int v247; // r1
  char *v248; // r0
  unsigned int *v249; // r1
  bool v250; // cc
  unsigned int v251; // lr
  int v252; // r1
  char *v253; // lr
  char *v254; // r1
  int v255; // t1
  int v256; // t1
  _BYTE *v257; // r3
  int v259; // [sp+18h] [bp-FCh]
  unsigned int v260; // [sp+1Ch] [bp-F8h]
  unsigned int v261; // [sp+1Ch] [bp-F8h]
  unsigned int s1a; // [sp+20h] [bp-F4h]
  struct addrinfo *pai; // [sp+28h] [bp-ECh] BYREF
  int optval; // [sp+2Ch] [bp-E8h] BYREF
  int v266; // [sp+30h] [bp-E4h] BYREF
  int v267; // [sp+34h] [bp-E0h]
  int v268; // [sp+38h] [bp-DCh]
  unsigned int v269; // [sp+3Ch] [bp-D8h]
  int v270; // [sp+40h] [bp-D4h]
  int v271; // [sp+44h] [bp-D0h]
  struct timeval delta; // [sp+48h] [bp-CCh] BYREF
  struct timeval olddelta; // [sp+50h] [bp-C4h] BYREF
  struct itimerval v274; // [sp+58h] [bp-BCh] BYREF
  struct sockaddr domain; // [sp+68h] [bp-ACh] BYREF
  int v276; // [sp+78h] [bp-9Ch]
  int v277; // [sp+7Ch] [bp-98h]
  int v278; // [sp+80h] [bp-94h]
  struct sockaddr addr; // [sp+84h] [bp-90h] BYREF
  int v280; // [sp+94h] [bp-80h]
  int v281; // [sp+98h] [bp-7Ch]
  int v282; // [sp+9Ch] [bp-78h]
  struct addrinfo req; // [sp+A0h] [bp-74h] BYREF
  int v284; // [sp+C0h] [bp-54h] BYREF
  char v285; // [sp+C4h] [bp-50h] BYREF
  char v286; // [sp+E4h] [bp-30h] BYREF
  unsigned int v287; // [sp+E8h] [bp-2Ch] BYREF
  char v288; // [sp+ECh] [bp-28h]
  _BYTE v289[4]; // [sp+110h] [bp-4h] BYREF

  sub_DAE4();
  if ( !dword_241D4 )
    dword_24078 = 2;
  v2 = 0;
  v3 = *a2;
  dword_212F8 = 0;
  dword_2405C = v3;
  while ( 1 )
  {
    v4 = sub_D914(a1, a2, "46a:bBde:k:o:p:qst:uv");
    if ( v4 == -1 )
      break;
    switch ( v4 )
    {
      case '4':
        dword_24078 = 2;
        break;
      case '6':
        dword_24078 = 10;
        break;
      case '?':
        ++v2;
        break;
      case 'B':
        dword_21F98 = 0;
        ++dword_21F9C;
        break;
      case 'a':
        v7 = strtol((const char *)dword_241D0, 0, 10);
        dword_21F88 = 1;
        dword_21F8C = v7;
        break;
      case 'b':
        dword_21F9C = 0;
        ++dword_21F98;
        break;
      case 'd':
        ++dword_21F80;
        break;
      case 'e':
        if ( !sub_C740(dword_241D0, &v266) || v266 )
        {
          ++v2;
          fprintf(
            (FILE *)stderr,
            "%s: encryption delay %s is unlikely\n",
            (const char *)dword_2405C,
            (const char *)dword_241D0);
        }
        else
        {
          dword_21F90 = v267;
        }
        break;
      case 'k':
        off_212E0 = (char *)dword_241D0;
        break;
      case 'o':
        dword_212D4 = strtol((const char *)dword_241D0, 0, 10);
        break;
      case 'p':
        v6 = strtol((const char *)dword_241D0, 0, 10);
        if ( (unsigned int)(v6 - 1) > 7 )
        {
          ++v2;
          fprintf((FILE *)stderr, "%s: number of samples (%d) is invalid\n", (const char *)dword_2405C, v6);
        }
        else
        {
          dword_212D0 = v6;
        }
        break;
      case 'q':
        dword_21FA0 = 1;
        break;
      case 's':
        dword_212F8 = 1;
        break;
      case 't':
        if ( sub_C740(dword_241D0, &v266) )
        {
          if ( v266 < 0x10000 && v266 > -65536 )
          {
            v5 = (5 * (HIWORD(v267) | (unsigned int)(v266 << 16)) + 0x8000) >> 16;
            if ( v5 < 0xA )
              v5 = 10;
          }
          else
          {
            v5 = 0x8000;
          }
          dword_212D8 = v5;
        }
        else
        {
          ++v2;
          fprintf(
            (FILE *)stderr,
            "%s: timeout %s is undecodeable\n",
            (const char *)dword_2405C,
            (const char *)dword_241D0);
        }
        break;
      case 'u':
        dword_21FA8 = 1;
        break;
      case 'v':
        dword_21FA4 = 1;
        break;
      default:
        continue;
    }
  }
  if ( v2 )
  {
    fprintf(
      (FILE *)stderr,
      "usage: %s [-46bBdqsuv] [-a key#] [-e delay] [-k file] [-p samples] [-o version#] [-t timeo] server ...\n",
      (const char *)dword_2405C);
    exit(2);
  }
  if ( dword_21F80 || dword_21FA0 )
    v4 = setvbuf((FILE *)stdout, buf, 1, 0x2000u);
  if ( dword_212F8 )
  {
    openlog("ntpdate", 9, 24);
    if ( dword_21F80 )
      v239 = 255;
    else
      v239 = 127;
    v4 = setlogmask(v239);
  }
  if ( dword_21F80 || dword_21FA4 )
    v4 = sub_E15C(5, "%s", off_212EC[0]);
  for ( i = dword_23FC8; a1 > dword_23FC8; i = ++dword_23FC8 )
  {
    v12 = (const char *)a2[i];
    strncpy((char *)&v287, "ntp", 5u);
    req.ai_flags = 0;
    memset(&req.ai_protocol, 0, 20);
    req.ai_family = dword_24078;
    req.ai_socktype = 2;
    if ( dword_21F80 )
      printf("Looking for host %s and service %s\n", v12, (const char *)&v287);
    v13 = getaddrinfo(v12, (const char *)&v287, &req, &pai);
    v14 = v13;
    if ( v13 )
    {
      if ( (unsigned int)(v13 + 4) <= 1 )
      {
        v236 = (FILE *)stderr;
        v237 = gai_strerror(v13);
        fprintf(v236, "Exiting, name server cannot be used: %s (%d)", v237, v14);
        v238 = gai_strerror(v14);
        sub_E15C(3, "name server cannot be used: %s (%d)\n", v238, v14);
        exit(1);
      }
      v9 = (FILE *)stderr;
      v10 = gai_strerror(v13);
      fprintf(v9, "Error resolving %s: %s (%d)\n", v12, v10, v14);
      v11 = gai_strerror(v14);
      v4 = sub_E15C(3, "Can't find host %s: %s (%d)\n", v12, v11, v14);
      continue;
    }
    if ( dword_21F80 )
    {
      memset(&domain, 0, sizeof(domain));
      v276 = 0;
      v277 = 0;
      v278 = 0;
      ai_addrlen = pai->ai_addrlen;
      if ( ai_addrlen > 0x1C )
        off_21DCC("ntpdate.c", 1395, 2, "addrResult->ai_addrlen <= sizeof(addr)");
      memcpy(&domain, pai->ai_addr, ai_addrlen);
      v26 = (FILE *)stderr;
      v27 = (const char *)sub_ED9C(&domain);
      fprintf(v26, "host found : %s\n", v27);
      v15 = pai;
      if ( pai )
      {
        do
        {
LABEL_48:
          memset(&domain, 0, sizeof(domain));
          v276 = 0;
          v277 = 0;
          v278 = 0;
          v16 = v15->ai_addrlen;
          if ( v16 > 0x1C )
            off_21DCC("ntpdate.c", 1404, 2, "ptr->ai_addrlen <= sizeof(addr)");
          memcpy(&domain, v15->ai_addr, v16);
          v17 = socket(domain.sa_family, 2, 0);
          v18 = v17;
          if ( v17 != -1 )
          {
            if ( domain.sa_family == 2 )
              v19 = 16;
            else
              v19 = 28;
            if ( connect(v17, &domain, v19) )
            {
              close(v18);
            }
            else
            {
              close(v18);
              v20 = sub_D7E8(0, 272, 0, 1);
              memcpy((void *)(v20 + 4), v15->ai_addr, v15->ai_addrlen);
              v21 = (int *)dword_24074;
              v22 = dword_23FAC;
              v23 = dword_24074 == 0;
              if ( !dword_24074 )
                dword_24074 = v20;
              ++dword_23FAC;
              *(_DWORD *)(v20 + 60) = v22 + 1;
              if ( !v23 )
              {
                while ( *v21 )
                  v21 = (int *)*v21;
                *v21 = v20;
              }
            }
          }
          v15 = v15->ai_next;
        }
        while ( v15 );
        v24 = pai;
        goto LABEL_65;
      }
    }
    else
    {
      v15 = pai;
      if ( pai )
        goto LABEL_48;
    }
    v24 = v15;
LABEL_65:
    freeaddrinfo(v24);
  }
  if ( !dword_23FAC )
  {
    sub_E15C(3, "no servers can be used, exiting");
    exit(1);
  }
  if ( dword_21F88 )
  {
    sub_C9B4(v4);
    if ( !sub_D380(off_212E0) )
    {
      sub_E15C(3, "no key file <%s>, exiting", off_212E0);
      exit(1);
    }
    sub_CBE4(dword_21F8C, 1);
    if ( !sub_CD8C(dword_21F8C) )
    {
      sub_E15C(3, "authentication key %lu unknown", dword_21F8C);
      exit(1);
    }
  }
  v28 = dword_21F80;
  optval = 1;
  if ( dword_21F80 )
  {
    v28 = 0;
  }
  else if ( !dword_21FA0 )
  {
    v28 = dword_21FA8 == 0;
  }
  sub_E9D4(dword_23FAC + 2);
  strncpy((char *)&v287, "ntp", 5u);
  memset(&req.ai_protocol, 0, 20);
  req.ai_family = dword_24078;
  req.ai_flags = 1;
  req.ai_socktype = 2;
  if ( getaddrinfo(0, (const char *)&v287, &req, &pai) )
  {
    sub_E15C(3, "getaddrinfo() failed: %m");
    exit(1);
  }
  v29 = pai;
  v30 = &dword_2408C;
  dword_2408C = 0;
  if ( pai )
  {
    v31 = 0;
    ai_next = pai;
    do
    {
      dword_24060[v31] = socket(ai_next->ai_family, ai_next->ai_socktype, ai_next->ai_protocol);
      v31 = dword_2408C;
      v35 = dword_24060[dword_2408C];
      if ( v35 == -1 )
      {
        v33 = *_errno_location();
        v34 = v33 == 93;
        if ( v33 != 93 )
          v34 = v33 == 97;
        if ( !v34 && v33 != 96 )
        {
          sub_E15C(3, "socket() failed: %m");
          exit(1);
        }
      }
      else
      {
        if ( setsockopt(v35, 1, 2, &optval, 4u) < 0 )
        {
          sub_E15C(3, "setsockopt() SO_REUSEADDR failed: %m");
          exit(1);
        }
        v36 = pai;
        ai_family = pai->ai_family;
        if ( ai_family == 10 )
        {
          if ( setsockopt(dword_24060[dword_2408C], 41, 26, &optval, 4u) < 0 )
          {
            sub_E15C(3, "setsockopt() IPV6_V6ONLY failed: %m");
            exit(1);
          }
          v36 = pai;
          ai_family = pai->ai_family;
        }
        v38 = dword_2408C;
        dword_24068[dword_2408C] = ai_family;
        if ( v28 )
        {
          v39 = v36;
          memset(&addr, 0, sizeof(addr));
          v280 = 0;
          v281 = 0;
          v282 = 0;
          v40 = v36->ai_addrlen;
          if ( v40 > 0x1C )
            off_21DCC("ntpdate.c", 1768, 2, "res->ai_addrlen <= sizeof(addr)");
          memcpy(&addr, v39->ai_addr, v40);
          if ( addr.sa_family == 2 )
            v41 = 16;
          else
            v41 = 28;
          if ( bind(dword_24060[dword_2408C], &addr, v41) < 0 )
          {
            if ( *_errno_location() == 98 )
              sub_E15C(3, "the NTP socket is in use, exiting");
            else
              sub_E15C(3, "bind() fails: %m");
            exit(1);
          }
          v38 = dword_2408C;
        }
        v42 = dword_24060[v38];
        *(&fds.events + 4 * v38) = 1;
        *(&fds.fd + 2 * v38) = v42;
        if ( fcntl(v42, 4, 2048) < 0 )
        {
          sub_E15C(3, "fcntl(FNDELAY|FASYNC) fails: %m");
          exit(1);
        }
        v31 = ++dword_2408C;
      }
      ai_next = pai->ai_next;
      pai = ai_next;
    }
    while ( v31 <= 1 && ai_next );
  }
  freeaddrinfo(v29);
  dword_21F7C = 0;
  sub_EE58(14, sub_9C28);
  v274.it_interval.tv_sec = 0;
  v274.it_value.tv_sec = 0;
  v274.it_interval.tv_usec = 200000;
  v274.it_value.tv_usec = (__suseconds_t)"lable";
  setitimer(0, &v274, 0);
  setpriority(0, 0, -12);
  dword_212DC = 0;
LABEL_104:
  v43 = (int)&unk_23F74;
  v44 = dword_21F84;
  if ( dword_21F84 < dword_23FAC )
  {
    if ( dword_21F7C )
    {
      v259 = 1;
      dword_21F7C = 0;
    }
    else
    {
      v259 = 0;
    }
    v45 = ((int (*)(void))sub_E9A4)();
    if ( !(v45 | v259) )
    {
      v70 = poll(&fds, dword_2408C, 1000 * dword_212E4);
      v71 = v70;
      if ( v70 <= 0 )
      {
        if ( v70 == -1 )
        {
          v72 = _errno_location();
          if ( *v72 != 4 )
            v72 = (int *)sub_E15C(3, "poll() error: %m");
        }
        else
        {
          v72 = _errno_location();
          if ( *v72 )
            v72 = (int *)sub_E15C(7, "poll(): nfound = %d, error: %m", v71);
        }
      }
      else
      {
        v72 = sub_9FE8();
      }
      if ( dword_21F7C )
      {
        dword_21F7C = 0;
        v259 = 1;
      }
      else
      {
        v259 = 0;
      }
      v45 = sub_E9A4(v72);
    }
    while ( 1 )
    {
      v46 = sub_EBB0(v45);
      v47 = v46;
      if ( !v46 )
      {
        if ( v259 )
          sub_9F7C();
        goto LABEL_104;
      }
      if ( dword_21F80 )
      {
        v53 = (const char *)sub_ECA8(v46 + 8);
        printf("receive(%s)\n", v53);
        v48 = *(_DWORD *)(v47 + 88);
        if ( v48 != 48 )
        {
LABEL_116:
          if ( v48 <= 0x2F )
          {
            if ( dword_21F80 )
              printf("receive: packet length %d\n", v48);
            goto LABEL_112;
          }
          v49 = 1;
          goto LABEL_118;
        }
      }
      else
      {
        v48 = *(_DWORD *)(v46 + 88);
        if ( v48 != 48 )
          goto LABEL_116;
      }
      v49 = 0;
LABEL_118:
      v50 = *(unsigned __int8 *)(v47 + 92);
      if ( ((v50 >> 3) & 7) - 1 > 3 )
        goto LABEL_112;
      v51 = v50 & 7;
      v52 = v51 == 2;
      if ( v51 != 2 )
        v52 = v51 == 4;
      if ( !v52 || *(unsigned __int8 *)(v47 + 93) > 0xFu )
      {
        if ( dword_21F80 )
          printf("receive: mode %d stratum %d\n", v51, *(unsigned __int8 *)(v47 + 93));
        goto LABEL_112;
      }
      if ( (unsigned __int16)((*(_WORD *)(v47 + 10) << 8) | HIBYTE(*(_WORD *)(v47 + 10))) != 0x7B
        || (v54 = dword_24074) == 0 )
      {
LABEL_149:
        if ( dword_21F80 )
          puts("receive: server not found");
        goto LABEL_112;
      }
      v260 = v48;
      v55 = *(unsigned __int16 *)(v47 + 8);
      v56 = 0;
      while ( 1 )
      {
        while ( *(unsigned __int16 *)(v54 + 4) != v55 )
        {
          v54 = *(_DWORD *)v54;
          if ( !v54 )
            goto LABEL_142;
        }
        if ( v55 != 2 )
          break;
        v69 = *(_DWORD *)(v54 + 8);
        if ( *(_DWORD *)(v47 + 12) == v69 )
          goto LABEL_162;
        v57 = (bswap32(v69) & 0xF0000000) == -536870912;
LABEL_139:
        if ( v57 )
          v56 = v54;
        v54 = *(_DWORD *)v54;
        if ( !v54 )
        {
LABEL_142:
          if ( v56 )
          {
            if ( *(_DWORD *)(v56 + 60) )
            {
              *(_DWORD *)(v56 + 60) = v54;
              ++dword_21F84;
            }
            v58 = (int *)sub_D7E8(0, 272, 0, 1);
            v59 = ++dword_23FAC;
            v60 = v58;
            v61 = *(_DWORD *)(v47 + 12);
            v62 = *(_DWORD *)(v47 + 16);
            v63 = *(_DWORD *)(v47 + 20);
            v58[1] = *(_DWORD *)(v47 + 8);
            v58[2] = v61;
            v58[3] = v62;
            v58[4] = v63;
            v64 = v58 + 5;
            v65 = *(_DWORD *)(v47 + 24);
            v66 = *(_DWORD *)(v47 + 28);
            v67 = *(_DWORD *)(v47 + 32);
            v60[15] = v59;
            v68 = (int **)dword_24074;
            *v64 = v65;
            v64[1] = v66;
            v64[2] = v67;
            while ( *v68 )
              v68 = (int **)*v68;
            *v68 = v60;
            sub_9D08(v60);
          }
          goto LABEL_149;
        }
      }
      if ( memcmp((const void *)(v47 + 16), (const void *)(v54 + 12), 0x10u)
        || *(_DWORD *)(v47 + 32) != *(_DWORD *)(v54 + 28) )
      {
        v57 = *(unsigned __int8 *)(v54 + 12) == 255;
        goto LABEL_139;
      }
LABEL_162:
      s1a = bswap32(*(_DWORD *)(v47 + 116));
      v73 = bswap32(*(_DWORD *)(v47 + 120));
      if ( s1a == *(_DWORD *)(v54 + 244) && v73 == *(_DWORD *)(v54 + 248) )
      {
        if ( !dword_21F88 )
          goto LABEL_341;
        v74 = v47 + 92;
        if ( dword_21F80 > 3 )
        {
          v233 = v260 - 48;
          v234 = dword_21F8C;
          v261 = bswap32(*(_DWORD *)(v47 + 140));
          v235 = sub_D240(dword_21F8C, v47 + 92, 48, v233);
          printf("receive: rpkt keyid=%ld sys_authkey=%ld decrypt=%ld\n", v261, v234, v235);
          v74 = v47 + 92;
        }
        if ( v49
          && (v75 = bswap32(*(_DWORD *)(v47 + 140)), v75 == dword_21F8C)
          && sub_D240(v75, v74, 48, *(_DWORD *)(v47 + 88) - 48) )
        {
          if ( dword_21F80 )
            printf("receive: authentication %s\n", "passed");
LABEL_341:
          *(_BYTE *)(v54 + 36) *= 2;
          v76 = *(unsigned __int8 *)(v47 + 92) >> 6;
          if ( v76 == 3 )
          {
LABEL_342:
            if ( !*(_BYTE *)(v47 + 93) && !memcmp("RATE", (const void *)(v47 + 104), 4u) )
            {
              v197 = (const char *)sub_ECA8(v47 + 8);
              sub_E15C(v76, "%s rate limit response from server.\n", v197);
              v198 = dword_21F84;
              *(_DWORD *)(v54 + 60) = 0;
              dword_21F84 = v198 + 1;
              goto LABEL_112;
            }
          }
        }
        else
        {
          if ( dword_21F80 )
            printf("receive: authentication %s\n", "failed");
          *(_BYTE *)(v54 + 36) = (2 * *(_BYTE *)(v54 + 36)) | 1;
          v76 = *(unsigned __int8 *)(v47 + 92) >> 6;
          if ( v76 == 3 )
            goto LABEL_342;
        }
        *(_BYTE *)(v54 + 33) = v76;
        v77 = *(_BYTE *)(v47 + 93);
        if ( !v77 )
          v77 = 16;
        *(_BYTE *)(v54 + 34) = v77;
        *(_BYTE *)(v54 + 35) = *(_BYTE *)(v47 + 95);
        v78 = *(_DWORD *)(v47 + 100);
        v79 = bswap32(*(_DWORD *)(v47 + 96));
        *(_DWORD *)(v54 + 48) = *(_DWORD *)(v47 + 104);
        *(_DWORD *)(v54 + 40) = v79;
        *(_DWORD *)(v54 + 44) = bswap32(v78);
        v80 = *(_DWORD *)(v47 + 112);
        *(_DWORD *)(v54 + 52) = bswap32(*(_DWORD *)(v47 + 108));
        v81 = *(_DWORD *)(v47 + 132);
        v82 = bswap32(*(_DWORD *)(v47 + 124));
        *(_DWORD *)(v54 + 56) = bswap32(v80);
        v83 = *(_DWORD *)(v47 + 128);
        v84 = bswap32(v81);
        v85 = bswap32(*(_DWORD *)(v47 + 136));
        *(_DWORD *)(v54 + 236) = v84;
        *(_DWORD *)(v54 + 240) = v85;
        v86 = bswap32(v83);
        if ( (v82 || v86) && (v82 < v84 || v82 == v84 && v86 <= v85) )
        {
          v203 = *(_DWORD *)(v47 + 80);
          v204 = *(_DWORD *)(v54 + 240);
          v268 = *(_DWORD *)(v54 + 236);
          v269 = v204;
          if ( v203 )
          {
            v241 = -v203;
            v242 = (unsigned __int16)v241 + (unsigned __int16)v85;
            v243 = HIWORD(v241) + HIWORD(v85);
            if ( (v242 & 0x10000) != 0 )
              ++v243;
            v23 = (v243 & 0x10000) == 0;
            v205 = (unsigned __int16)v242 | (v243 << 16);
            v206 = v84 + ~*(_DWORD *)(v47 + 76);
            v269 = v205;
            v268 = v206;
            if ( !v23 )
              v268 = ++v206;
          }
          else
          {
            v205 = v269;
            v206 = v84 - *(_DWORD *)(v47 + 76);
            v268 = v206;
          }
          if ( v73 )
          {
            v230 = -v73;
            v231 = (unsigned __int16)v230 + (unsigned __int16)v86;
            v232 = HIWORD(v230) + HIWORD(v86);
            if ( (v231 & 0x10000) != 0 )
              ++v232;
            v23 = (v232 & 0x10000) == 0;
            v86 = (unsigned __int16)v231 | (v232 << 16);
            v207 = v82 + ~s1a;
            if ( !v23 )
              ++v207;
          }
          else
          {
            v207 = v82 - s1a;
          }
          v271 = v269;
          v270 = v268 >> 1;
          v208 = v86 >> 1;
          v209 = v269 >> 1;
          if ( (v268 & 1) != 0 )
            v209 |= 0x80000000;
          if ( (v207 & 1) != 0 )
            v208 |= 0x80000000;
          v210 = (unsigned __int16)v209 + (unsigned __int16)v208;
          v211 = HIWORD(v209) + HIWORD(v208);
          if ( (v210 & 0x10000) != 0 )
            ++v211;
          v212 = (v207 >> 1) + v270;
          v270 = v212;
          if ( (v211 & 0x10000) != 0 )
            v270 = v212 + 1;
          v213 = (unsigned __int16)v210 | (v211 << 16);
          if ( !v205 )
            v207 -= v206;
          v271 = v213;
          if ( v205 )
          {
            v214 = -v205;
            v207 += ~v206;
            v215 = (unsigned __int16)v214 + (unsigned __int16)v86;
            v216 = HIWORD(v214) + HIWORD(v86);
            if ( (v215 & 0x10000) != 0 )
              ++v216;
            if ( (v216 & 0x10000) != 0 )
              ++v207;
            v86 = (unsigned __int16)v215 | (v216 << 16);
          }
          if ( v207 < 0x10000 )
          {
            if ( v207 <= -65536 )
              v217 = 0x80000000;
            else
              v217 = (v207 << 16) | HIWORD(v86);
          }
          else
          {
            v217 = 0x7FFFFFFF;
          }
          if ( dword_21F80 > 3 )
          {
            v218 = (const char *)sub_DDB8(v270, v213, 6);
            v219 = (const char *)sub_D8A8(v217, 5);
            printf("offset: %s, delay %s\n", v218, v219);
          }
          v220 = 1311;
          v221 = v217 + (0x10000 >> -*(_BYTE *)(v54 + 35)) + 1679;
          if ( v221 >= 1311 )
            v220 = v217 + (0x10000 >> -*(_BYTE *)(v54 + 35)) + 1679;
          if ( v221 <= 0 )
          {
            v271 = 0;
            v270 = 0;
            v220 = 0;
          }
          v222 = *(unsigned __int16 *)(v54 + 74);
          if ( v222 <= 7 )
          {
            v223 = v270;
            v224 = v271;
            v225 = (int *)(v54 + 8 * v222 + 108);
            v226 = v270 < 0x10000;
            *v225 = v270;
            v225[1] = v224;
            if ( !v226 )
              v223 = 0x7FFFFFFF;
            *(_DWORD *)(v54 + 4 * v222 + 76) = v220;
            if ( v226 )
            {
              v227 = v223 <= -65536;
              if ( v223 <= -65536 )
                v223 = 0x80000000;
              else
                v224 = HIWORD(v271);
              if ( !v227 )
                v223 = v224 | (v223 << 16);
            }
            v228 = v54 + 4 * (v222 + 50);
            *(_DWORD *)(v54 + 4 * v222 + 172) = v223;
            v222 = (unsigned __int16)(v222 + 1);
            *(_WORD *)(v54 + 74) = v222;
            *(_DWORD *)(v228 + 4) = 0;
          }
          if ( (int)v222 < dword_212D0 )
          {
            *(_DWORD *)(v54 + 60) = dword_212D8 + dword_21F94;
          }
          else
          {
            v229 = dword_21F84;
            *(_DWORD *)(v54 + 60) = 0;
            dword_21F84 = v229 + 1;
          }
        }
        else
        {
          *(_DWORD *)(v54 + 60) = dword_212D8 + dword_21F94;
        }
      }
      else if ( dword_21F80 )
      {
        puts("receive: pkt.org and peer.xmt differ");
      }
LABEL_112:
      v45 = sub_EA80(v47);
    }
  }
  v87 = (_DWORD *)dword_24074;
  if ( !dword_24074 )
    goto LABEL_442;
  do
  {
    v88 = dword_212D0;
    if ( dword_212D0 > 0 )
    {
      v89 = &v286;
      v90 = 0;
      do
      {
        *((_DWORD *)v89 + 1) = v90;
        v89 += 4;
        ++v90;
      }
      while ( v90 != v88 );
    }
    v91 = 0;
    v92 = 0;
    for ( j = &v287; (int)v92 < v88 - 1; v91 += 4 )
    {
      if ( (int)++v92 < v88 )
      {
        v94 = &v287 + v92;
        do
        {
          v96 = *v94++;
          v95 = v96;
          v97 = v87[v96 + 19];
          if ( v97 )
          {
            v98 = *(unsigned int *)((char *)&v287 + v91);
            v30 = (int *)v87[v98 + 19];
            if ( !v30 || v97 < (int)v30 )
            {
              *(unsigned int *)((char *)&v287 + v91) = v95;
              *(v94 - 1) = v98;
            }
          }
        }
        while ( v94 != &v287 + v88 );
      }
    }
    v44 = v287;
    v99 = v87[v287 + 19];
    if ( v99 )
    {
      v87[63] = v99;
      v100 = v87[2 * v44 + 27];
      v101 = v87[2 * v44 + 28];
      v87[65] = v100;
      v87[66] = v101;
      v102 = v100;
      if ( v100 <= 0xFFFF )
      {
        if ( v100 < -65535 )
        {
          v103 = 0x80000000;
        }
        else
        {
          v102 = v100 << 16;
          v103 = v87[66];
        }
        if ( v100 >= -65535 )
          v103 = v102 | HIWORD(v103);
      }
      else
      {
        v103 = 0x7FFFFFFF;
      }
      v87[67] = v103;
      v87[64] = 0;
      if ( v88 > 1 )
      {
        v104 = 0;
        v105 = 1;
        v106 = &v87[v44 + 42];
        do
        {
          v108 = j[1];
          ++j;
          v107 = v108;
          if ( v87[v108 + 19] )
          {
            v44 = v87[v107 + 43] - v106[1];
            if ( (v44 & 0x80000000) != 0 )
              v44 = -v44;
            if ( (int)v44 >= 0x400000 )
              v44 = 0x400000;
          }
          else
          {
            v44 = 0x400000;
          }
          v104 += v44 >> v105++;
        }
        while ( v105 != v88 );
        v87[64] = v104;
      }
    }
    else
    {
      v87[63] = 0;
      v87[66] = 0;
      v87[65] = 0;
      v87[67] = 0;
      v87[64] = 0x400000;
    }
    v87 = (_DWORD *)*v87;
  }
  while ( v87 );
  v43 = (int)&dword_24074;
  v109 = dword_24074;
  if ( !dword_24074 )
  {
LABEL_442:
    v110 = dword_21F80;
    v126 = 0;
    goto LABEL_266;
  }
  v110 = dword_21F80;
  do
  {
    while ( 1 )
    {
      v111 = *(_DWORD *)(v109 + 252);
      if ( !v111 )
      {
        if ( v110 )
        {
          v166 = (const char *)sub_ECA8(v109 + 4);
          printf("%s: Server dropped: no data\n", v166);
          v110 = dword_21F80;
        }
        goto LABEL_219;
      }
      v44 = *(unsigned __int8 *)(v109 + 34);
      if ( v44 > 0xF )
        break;
      if ( v111 <= 0x80000 )
      {
        if ( *(_BYTE *)(v109 + 33) == 3 )
        {
          if ( v110 )
          {
            v200 = (const char *)sub_ECA8(v109 + 4);
            printf("%s: Server dropped: Leap not in sync\n", v200);
            v110 = dword_21F80;
          }
          goto LABEL_219;
        }
        v163 = *(_DWORD *)(v109 + 236);
        v164 = *(_DWORD *)(v109 + 52);
        if ( v163 > v164 )
        {
          if ( v163 - v164 > (unsigned int)&loc_1517C + 3 )
          {
            if ( v110 )
            {
              v199 = (const char *)sub_ECA8(v109 + 4);
              printf("%s: Server dropped: Server has gone too long without sync\n", v199);
              v110 = dword_21F80;
            }
            goto LABEL_219;
          }
        }
        else if ( v163 != v164 || *(_DWORD *)(v109 + 240) < *(_DWORD *)(v109 + 56) )
        {
          if ( v110 )
          {
            v165 = (const char *)sub_ECA8(v109 + 4);
            printf("%s: Server dropped: server is very broken\n", v165);
            v110 = dword_21F80;
          }
          goto LABEL_219;
        }
        v201 = *(unsigned __int8 *)(v109 + 36);
        if ( *(_BYTE *)(v109 + 36) )
        {
          if ( v110 )
          {
            v202 = (const char *)sub_ECA8(v109 + 4);
            printf("%s: Server dropped: Server is untrusted\n", v202);
            v110 = dword_21F80;
          }
        }
        else
        {
          v43 = 2 * *(_DWORD *)(v109 + 256);
          if ( !v87 )
          {
            v201 = 0;
            goto LABEL_479;
          }
          v244 = *(unsigned __int8 *)(v284 + 34);
          if ( v44 <= v244 )
          {
LABEL_469:
            if ( v44 >= v244 )
            {
              v252 = 4 * v201;
              if ( v43 >= (int)*(&v287 + v201) )
              {
                v253 = (char *)&v287 + v252;
                v254 = (char *)&v284 + v252;
                do
                {
                  if ( ++v201 >= (unsigned int)v87 )
                  {
                    if ( v201 > 4 )
                      goto LABEL_219;
                    goto LABEL_479;
                  }
                  v255 = *((_DWORD *)v254 + 1);
                  v254 += 4;
                  v92 = *(unsigned __int8 *)(v255 + 34);
                  if ( v92 > v44 )
                    break;
                  v256 = *((_DWORD *)v253 + 1);
                  v253 += 4;
                  v92 = v256;
                }
                while ( v43 >= v256 );
                if ( v201 > 4 )
                  goto LABEL_219;
LABEL_459:
                v44 = (unsigned int)v87 - 1;
                v247 = 4 * ((_DWORD)v87 - 1);
                v248 = (char *)&v284 + v247;
                v249 = (unsigned int *)((char *)&v287 + v247);
                do
                {
                  v250 = v44 + 1 > 4;
                  if ( v44 + 1 > 4 )
                  {
                    v251 = v44;
                  }
                  else
                  {
                    v30 = *(int **)v248;
                    v251 = v44;
                    v92 = *v249;
                  }
                  --v44;
                  if ( !v250 )
                    *((_DWORD *)v248 + 1) = v30;
                  v248 -= 4;
                  if ( !v250 )
                    v249[1] = v92;
                  --v249;
                }
                while ( v201 < v251 );
LABEL_479:
                v257 = &v289[4 * v201];
                if ( (unsigned int)v87 <= 4 )
                  v87 = (_DWORD *)((char *)v87 + 1);
                *((_DWORD *)v257 - 20) = v109;
                *((_DWORD *)v257 - 10) = v43;
                goto LABEL_219;
              }
            }
          }
          else
          {
            v245 = &v284;
            while ( (_DWORD *)++v201 != v87 )
            {
              v246 = v245[1];
              ++v245;
              v244 = *(unsigned __int8 *)(v246 + 34);
              if ( v44 <= v244 )
                goto LABEL_469;
            }
          }
          if ( v201 <= 4 )
          {
            if ( v201 < (unsigned int)v87 )
              goto LABEL_459;
            goto LABEL_479;
          }
        }
      }
      else if ( v110 )
      {
        v162 = (const char *)sub_ECA8(v109 + 4);
        printf("%s: Server dropped: server too far away\n", v162);
        v110 = dword_21F80;
      }
LABEL_219:
      v109 = *(_DWORD *)v109;
      if ( !v109 )
        goto LABEL_224;
    }
    if ( !v110 )
      goto LABEL_219;
    v112 = (const char *)sub_ECA8(v109 + 4);
    printf("%s: Server dropped: strata too high\n", v112);
    v109 = *(_DWORD *)v109;
    v110 = dword_21F80;
  }
  while ( v109 );
LABEL_224:
  if ( (unsigned int)v87 > 1 )
  {
    v44 = (unsigned int)&v284;
    v113 = 1;
    while ( 1 )
    {
      v114 = *(_DWORD *)(v44 + 4);
      v115 = *(_DWORD *)v44;
      v44 += 4;
      if ( *(unsigned __int8 *)(v114 + 34) > (unsigned int)*(unsigned __int8 *)(v115 + 34) )
      {
        if ( v109 == 1 )
        {
          v87 = (_DWORD *)v113;
          break;
        }
        v109 = 1;
      }
      if ( (_DWORD *)++v113 == v87 )
        goto LABEL_230;
    }
  }
  if ( v87 )
  {
    if ( v87 == (_DWORD *)1 )
    {
      v126 = v284;
    }
    else
    {
LABEL_230:
      v116 = 0;
      v117 = &v285;
      do
      {
        v118 = (_DWORD *)((char *)v116 + 1);
        if ( (_DWORD *)((char *)v116 + 1) < v87 )
        {
          v119 = *((_DWORD *)v117 - 1);
          v120 = *(_DWORD *)v117;
          if ( *(unsigned __int8 *)(v119 + 34) >= (unsigned int)*(unsigned __int8 *)(*(_DWORD *)v117 + 34) )
          {
            v121 = (int)v116 + 2;
            v122 = (unsigned int)v116 + 1;
            v123 = &v284 + v121;
            do
            {
              ++v122;
              if ( *(_DWORD *)(v119 + 252) >= *(_DWORD *)(v120 + 252) )
              {
                *((_DWORD *)v117 - 1) = v120;
                *(v123 - 1) = v119;
              }
              if ( v122 >= (unsigned int)v87 )
                break;
              v119 = *((_DWORD *)v117 - 1);
              v124 = *v123++;
              v120 = v124;
            }
            while ( *(unsigned __int8 *)(v119 + 34) >= (unsigned int)*(unsigned __int8 *)(v124 + 34) );
          }
        }
        v116 = v118;
        v117 += 4;
      }
      while ( v118 != (_DWORD *)((char *)v87 - 1) );
      v125 = &req.ai_next + (_DWORD)v87;
      v126 = v284;
      do
      {
        v127 = &v287;
        v128 = 0;
        do
        {
          v129 = 0;
          *v127++ = 0;
          do
          {
            if ( v128 != v129 )
            {
              v130 = *(_DWORD *)(*(&v284 + v129) + 268);
              v131 = v130 - *(_DWORD *)(*(&v284 + v128) + 268);
              if ( v131 < 0 )
                v131 = *(_DWORD *)(*(&v284 + v128) + 268) - v130;
              if ( v129 )
              {
                for ( k = 0; k != v129; ++k )
                  v131 = (v131 >> 2) + (v131 >> 1);
              }
              *(v127 - 1) += v131;
            }
            ++v129;
          }
          while ( v129 < (unsigned int)v87 );
          ++v128;
        }
        while ( v128 < (unsigned int)v87 );
        v133 = *(char *)(v126 + 35);
        v134 = &v287;
        v135 = v287;
        v43 = (int)&v284;
        v136 = 0;
        v137 = 1;
        do
        {
          v139 = v134[1];
          ++v134;
          v138 = v139;
          v140 = v139 >= v135;
          if ( v139 >= v135 )
            v135 = v138;
          v142 = *(_DWORD *)(v43 + 4);
          v43 += 4;
          v141 = v142;
          if ( v140 )
            v136 = v137;
          ++v137;
          v143 = *(char *)(v141 + 35);
          if ( v133 >= v143 )
            v133 = v143;
        }
        while ( v137 < (unsigned int)v87 );
        v44 = (0x10000 >> -(char)v133) + 1679;
        if ( (int)v135 < (int)v44 )
          break;
        v44 = v136 + 1;
        if ( v136 + 1 < (unsigned int)v87 )
        {
          v144 = (unsigned int *)(&v284 + v136);
          do
          {
            v44 = v144[1];
            *v144++ = v44;
          }
          while ( v125 != (struct addrinfo **)v144 );
          v126 = v284;
        }
        v87 = (_DWORD *)((char *)v87 - 1);
        --v125;
      }
      while ( v87 != (_DWORD *)1 );
    }
  }
  else
  {
    v126 = 0;
  }
LABEL_266:
  if ( !v110 && !dword_21FA0 )
    goto LABEL_300;
  m = dword_24074;
  if ( !dword_24074 )
    goto LABEL_300;
  v146 = (FILE *)stdout;
  if ( !v110 )
    goto LABEL_299;
LABEL_270:
  v147 = (const char *)sub_ECA8(m + 4);
  fprintf(v146, "server %s, port %d\n", v147, (unsigned __int16)(*(_WORD *)(m + 6) << 8) | HIBYTE(*(_WORD *)(m + 6)));
  if ( (*(_BYTE *)(m + 33) & 2) != 0 )
    v148 = 49;
  else
    v148 = 48;
  if ( (*(_BYTE *)(m + 33) & 1) != 0 )
    v149 = 49;
  else
    v149 = 48;
  fprintf(
    v146,
    "stratum %d, precision %d, leap %c%c, trust %03o\n",
    *(unsigned __int8 *)(m + 34),
    *(char *)(m + 35),
    v148,
    v149,
    *(unsigned __int8 *)(m + 36));
  if ( *(_BYTE *)(m + 34) == 1 )
  {
    v150 = (const char *)&v287;
    v288 = 0;
    memmove(&v287, (const void *)(m + 48), 4u);
  }
  else
  {
    v150 = (const char *)sub_ECA8(m + 4);
  }
  v151 = m;
  v152 = sub_D8A8(*(_DWORD *)(m + 252), 5);
  v153 = (const char *)sub_D5B4(*(_DWORD *)(m + 256), 0, 5, 0);
  v154 = (const char *)v152;
  v155 = v150;
  v156 = 1;
  v157 = m;
  fprintf(v146, "refid [%s], delay %s, dispersion %s\n", v155, v154, v153);
  fprintf(v146, "transmitted %d, in filter %d\n", *(unsigned __int16 *)(m + 68), *(unsigned __int16 *)(m + 74));
  v158 = (const char *)sub_E49C(m + 52);
  fprintf(v146, "reference time:    %s\n", v158);
  v159 = (const char *)sub_E49C(m + 236);
  fprintf(v146, "originate timestamp: %s\n", v159);
  v160 = (const char *)sub_E49C(m + 244);
  fprintf(v146, "transmit timestamp:  %s\n", v160);
  fwrite("filter delay: ", 1u, 0xEu, v146);
  while ( 2 )
  {
    v161 = (const char *)sub_D8A8(*(_DWORD *)(v151 + 76), 5);
    fprintf(v146, " %-8.8s", v161);
    if ( v156 == 4 )
    {
      fwrite("\n        ", 1u, 9u, v146);
      goto LABEL_280;
    }
    if ( v156 != 8 )
    {
LABEL_280:
      v151 += 4;
      ++v156;
      continue;
    }
    break;
  }
  fputc(10, v146);
  v167 = 1;
  fwrite("filter offset:", 1u, 0xEu, v146);
  while ( 2 )
  {
    v168 = (const char *)sub_DDB8(*(_DWORD *)(v157 + 108), *(_DWORD *)(v157 + 112), 6);
    fprintf(v146, " %-8.8s", v168);
    if ( v167 == 4 )
    {
      fwrite("\n        ", 1u, 9u, v146);
      goto LABEL_294;
    }
    if ( v167 != 8 )
    {
LABEL_294:
      v157 += 8;
      ++v167;
      continue;
    }
    break;
  }
  fputc(10, v146);
  v169 = (const char *)sub_D8A8(*(_DWORD *)(m + 252), 5);
  v170 = (const char *)sub_D5B4(*(_DWORD *)(m + 256), 0, 5, 0);
  fprintf(v146, "delay %s, dispersion %s\n", v169, v170);
  v171 = (const char *)sub_DDB8(*(_DWORD *)(m + 260), *(_DWORD *)(m + 264), 6);
  fprintf(v146, "offset %s\n\n", v171);
  for ( m = *(_DWORD *)m; m; m = *(_DWORD *)m )
  {
    v146 = (FILE *)stdout;
    if ( dword_21F80 )
      goto LABEL_270;
LABEL_299:
    v172 = sub_ECA8(m + 4);
    v173 = *(unsigned __int8 *)(m + 34);
    v174 = (const char *)v172;
    v175 = (const char *)sub_DDB8(*(_DWORD *)(m + 260), *(_DWORD *)(m + 264), 6);
    v176 = (const char *)sub_D8A8(*(_DWORD *)(m + 252), 5);
    fprintf(v146, "server %s, stratum %d, offset %s, delay %s\n", v174, v173, v175, v176);
  }
LABEL_300:
  if ( v126 )
  {
    if ( dword_21F98 )
      goto LABEL_486;
    if ( dword_21F9C )
      goto LABEL_315;
    v177 = *(_DWORD *)(v126 + 268);
    if ( v177 < 0 )
      v177 = -v177;
    if ( (unsigned int)v177 < 0x8000 )
    {
LABEL_315:
      v181 = dword_21FA0;
      if ( dword_21FA0 )
        goto LABEL_336;
      v182 = *(_DWORD *)(v126 + 260);
      v183 = *(_DWORD *)(v126 + 264);
      if ( v182 < 0 )
      {
        v240 = v183 == 0;
        if ( v183 )
          v183 = -v183;
        else
          v182 = -v182;
        if ( v240 )
          v43 = v183;
        else
          v181 = 1;
        if ( v240 )
        {
          v184 = v183;
          v181 = 1;
        }
        else
        {
          v184 = v183 >> v181;
          v43 = (unsigned __int16)v183;
        }
        if ( !v240 )
        {
          v182 = ~v182;
          v183 >>= 16;
        }
      }
      else
      {
        v184 = v183 >> 1;
        v43 = (unsigned __int16)v183;
        v183 >>= 16;
      }
      if ( (v182 & 1) != 0 )
        v184 |= 0x80000000;
      if ( (unsigned int)v182 >> 1 )
      {
        v185 = 4096;
        v186 = 0;
      }
      else
      {
        if ( v184 >= 0x10000000 )
          v184 = 0x10000000;
        v186 = (unsigned __int16)v184;
        v185 = HIWORD(v184);
      }
      v187 = v186 + v43;
      v188 = v185 + v183;
      if ( (v187 & 0x10000) != 0 )
        ++v188;
      v23 = (v188 & 0x10000) == 0;
      v189 = (unsigned __int16)v187 | (v188 << 16);
      v190 = BYTE2(v189);
      if ( !v23 )
        ++v182;
      v191 = dword_219CC[HIBYTE(v189)];
      v192 = dword_213CC[(unsigned __int16)v189 >> 9];
      v193 = v191 + dword_215CC[v190];
      delta.tv_sec = v182;
      v194 = (v193 + v192 + 4) >> 3;
      delta.tv_usec = v194;
      if ( v194 == 1000000 )
      {
        delta.tv_sec = v182 + 1;
        delta.tv_usec = 0;
        v194 = 0;
      }
      if ( v181 )
      {
        v194 = -v194;
        delta.tv_usec = v194;
        delta.tv_sec = -delta.tv_sec;
      }
      if ( !v194 || dword_21F80 || adjtime(&delta, &olddelta) >= 0 )
      {
LABEL_336:
        v195 = (const char *)sub_ECA8(v126 + 4);
        v196 = (const char *)sub_DDB8(*(_DWORD *)(v126 + 260), *(_DWORD *)(v126 + 264), 6);
        sub_E15C(5, "adjust time server %s offset %s sec", v195, v196);
        return 0;
      }
      else
      {
        sub_E15C(3, "Can't adjust the time of day: %m");
        return 0;
      }
    }
    else
    {
LABEL_486:
      if ( dword_21FA0 || dword_21F80 || (result = sub_C580()) != 0 )
      {
        v178 = (const char *)sub_ECA8(v126 + 4);
        v179 = (const char *)sub_DDB8(*(_DWORD *)(v126 + 260), *(_DWORD *)(v126 + 264), 6);
        sub_E15C(5, "step time server %s offset %s sec", v178, v179);
        return 0;
      }
    }
  }
  else
  {
    sub_E15C(3, "no server suitable for synchronization found", v44);
    return 1;
  }
  return result;
}
