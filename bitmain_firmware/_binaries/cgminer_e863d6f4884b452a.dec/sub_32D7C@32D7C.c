void sub_32D7C()
{
  double v0; // d0
  int v1; // r3
  unsigned __int8 *v2; // r5
  _BYTE *v3; // r0
  char *v4; // r7
  _DWORD *v5; // r0
  int v6; // r2
  const char *v7; // r4
  size_t v8; // r0
  unsigned __int8 *v9; // r5
  char *v10; // r0
  char *v11; // r0
  const __int32_t **v12; // r9
  const __int32_t *v13; // r2
  __int32_t v14; // r1
  unsigned __int8 *v15; // r4
  int v16; // r8
  char *v17; // r0
  char *v18; // r7
  const char *v19; // r5
  char **v20; // r10
  int v21; // r6
  const char *v22; // t1
  size_t v23; // r0
  int v24; // r5
  char *v25; // r0
  const __int32_t **v26; // r0
  const char *v27; // r5
  const __int32_t **v28; // r11
  char **v29; // r4
  char *v30; // r7
  const char *v31; // t1
  size_t v32; // r0
  const char *v33; // t1
  char *v34; // r0
  size_t v35; // r0
  __int32_t v36; // r3
  int v37; // r4
  char *v38; // r0
  const char *v39; // r5
  size_t v40; // r0
  char *v41; // r0
  char *v42; // r9
  char *v43; // r2
  size_t v44; // r0
  int v45; // r3
  int v46; // t1
  int v47; // r6
  const char *v48; // r5
  int v49; // r3
  int v50; // t1
  bool v51; // zf
  char *v52; // r0
  char *v53; // r8
  const unsigned __int16 **v54; // r0
  int v55; // r2
  const __int32_t *v56; // r3
  char v57; // r1
  _BYTE *v58; // r4
  int v59; // r10
  char *v60; // r0
  int v61; // r10
  int v62; // r0
  const char *v63; // r5
  size_t v64; // r0
  char **v65; // r4
  char *v66; // r8
  char *v67; // t1
  const char *v68; // r7
  char *v69; // r0
  _BYTE *v70; // r1
  _BYTE *v71; // r3
  _BYTE *v72; // r3
  int v73; // r2
  bool v74; // cf
  int v75; // r12
  _BYTE *v76; // r3
  _BYTE *v77; // r0
  _BYTE *v78; // r3
  _BYTE *v79; // r4
  char v80; // r2
  char v81; // t1
  char v82; // t1
  _BYTE *v83; // r3
  __int32_t v84; // r0
  struct addrinfo *v85; // r4
  struct addrinfo *i; // r3
  int v87; // r0
  int *v88; // r0
  char *v89; // r0
  time_t v90; // r8
  int *v91; // r0
  int v92; // r7
  int v93; // r4
  _BOOL4 v94; // r0
  int v95; // r9
  const char *v96; // r1
  ssize_t v97; // r0
  ssize_t v98; // r5
  int v99; // r3
  const char *v100; // r8
  time_t v101; // r0
  _BYTE *v102; // r3
  int v103; // r3
  char *v104; // r0
  size_t v105; // r0
  char *v106; // r6
  char *v107; // r0
  int v108; // r3
  const char *v109; // r1
  char **v110; // r5
  int v111; // r4
  const char *v112; // t1
  size_t v113; // r0
  int *v114; // r3
  int v115; // r5
  __int32_t v116; // r2
  int v117; // r3
  int *v118; // r0
  char *v119; // r0
  int *v120; // r0
  char *v121; // r0
  int *v122; // r0
  int *v123; // r0
  char *v124; // r0
  const char *v125; // r3
  _DWORD *v126; // r0
  int v127; // r3
  int v128; // r3
  int *v129; // r0
  char *v130; // r0
  _DWORD *v131; // r0
  int *v132; // r0
  int v133; // r3
  int v134; // r0
  int v135; // [sp+14h] [bp-16468h]
  unsigned __int8 *v136; // [sp+18h] [bp-16464h]
  int *ptr; // [sp+20h] [bp-1645Ch]
  char *v138; // [sp+24h] [bp-16458h]
  _DWORD *v139; // [sp+2Ch] [bp-16450h]
  __int16 v140; // [sp+38h] [bp-16444h]
  int fd; // [sp+40h] [bp-1643Ch]
  char *dest; // [sp+44h] [bp-16438h]
  int protocol; // [sp+48h] [bp-16434h]
  char *v144; // [sp+54h] [bp-16428h]
  unsigned __int8 *v145; // [sp+58h] [bp-16424h]
  char *haystack; // [sp+60h] [bp-1641Ch]
  unsigned __int8 v147; // [sp+7Eh] [bp-163FEh] BYREF
  char v148; // [sp+7Fh] [bp-163FDh] BYREF
  const char *v149; // [sp+80h] [bp-163FCh] BYREF
  socklen_t addr_len; // [sp+84h] [bp-163F8h] BYREF
  struct addrinfo *ai; // [sp+88h] [bp-163F4h] BYREF
  int optval; // [sp+8Ch] [bp-163F0h] BYREF
  char service[12]; // [sp+90h] [bp-163ECh] BYREF
  char cp[32]; // [sp+9Ch] [bp-163E0h] BYREF
  struct addrinfo req; // [sp+BCh] [bp-163C0h] BYREF
  _BYTE v156[12]; // [sp+DCh] [bp-163A0h] BYREF
  pthread_t th; // [sp+E8h] [bp-16394h]
  char v158[100]; // [sp+11Ch] [bp-16360h] BYREF
  char needle[100]; // [sp+180h] [bp-162FCh] BYREF
  struct sockaddr addr; // [sp+1E4h] [bp-16298h] BYREF
  char v161[20]; // [sp+264h] [bp-16218h] BYREF
  struct __jmp_buf_tag env; // [sp+360h] [bp-1611Ch] BYREF
  char s[2048]; // [sp+478h] [bp-16004h] BYREF
  char v164[2024]; // [sp+C78h] [bp-15804h] BYREF
  char v165[2024]; // [sp+1478h] [bp-15004h] BYREF
  char v166[1992]; // [sp+1C78h] [bp-14804h] BYREF
  char v167[1992]; // [sp+2478h] [bp-14004h] BYREF
  char v168[1992]; // [sp+2C78h] [bp-13804h] BYREF
  char v169[1992]; // [sp+3478h] [bp-13004h] BYREF
  char v170[1928]; // [sp+3C78h] [bp-12804h] BYREF
  char v171[1928]; // [sp+4478h] [bp-12004h] BYREF
  char v172[1928]; // [sp+4C78h] [bp-11804h] BYREF
  char v173[1928]; // [sp+5478h] [bp-11004h] BYREF
  char v174[1928]; // [sp+5C78h] [bp-10804h] BYREF
  char v175[1928]; // [sp+6478h] [bp-10004h] BYREF
  char v176[1928]; // [sp+6C78h] [bp-F804h] BYREF
  char v177[1928]; // [sp+7478h] [bp-F004h] BYREF
  char v178[1928]; // [sp+7C78h] [bp-E804h] BYREF
  char v179[1928]; // [sp+8478h] [bp-E004h] BYREF
  char v180[1928]; // [sp+8C78h] [bp-D804h] BYREF
  char v181[1928]; // [sp+9478h] [bp-D004h] BYREF
  char v182[1928]; // [sp+9C78h] [bp-C804h] BYREF
  char v183[1928]; // [sp+A478h] [bp-C004h] BYREF
  char v184[1928]; // [sp+AC78h] [bp-B804h] BYREF
  char v185[1928]; // [sp+B478h] [bp-B004h] BYREF
  char v186[1928]; // [sp+BC78h] [bp-A804h] BYREF
  char v187[1928]; // [sp+C478h] [bp-A004h] BYREF
  char v188[1928]; // [sp+CC78h] [bp-9804h] BYREF
  char v189[1928]; // [sp+D478h] [bp-9004h] BYREF
  char v190[1928]; // [sp+DC78h] [bp-8804h] BYREF
  char v191[1928]; // [sp+E478h] [bp-8004h] BYREF
  char v192[1928]; // [sp+EC78h] [bp-7804h] BYREF
  char v193[1928]; // [sp+F478h] [bp-7004h] BYREF
  char v194[1928]; // [sp+FC78h] [bp-6804h] BYREF
  char v195[8072]; // [sp+10478h] [bp-6004h] BYREF
  char v196[8072]; // [sp+12478h] [bp-4004h] BYREF
  _WORD v197[4098]; // [sp+14478h] [bp-2004h] BYREF

  v139 = 0;
  v140 = dword_6CB54;
  ptr = (int *)malloc(4u);
  v1 = (unsigned __int8)byte_738C0;
  *ptr = -1;
  if ( !v1 )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "API not running%s", " - API will not be available");
      sub_343C4(7, s, 0);
    }
    goto LABEL_6;
  }
  v145 = (unsigned __int8 *)malloc(0x10u);
  v2 = v145;
  v3 = malloc(0x10000u);
  v4 = 0;
  v145[13] = 0;
  *v3 = 0;
  *((_DWORD *)v145 + 1) = v3;
  *((_DWORD *)v145 + 2) = v3;
  v145[12] = 1;
  *(_DWORD *)v145 = 0x10000;
  v5 = malloc(0xCu);
  *v5 = v145;
  v6 = dword_6F93C;
  if ( dword_6F93C )
  {
    v5[2] = dword_6F93C;
    v5[1] = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = v5;
    *(_DWORD *)(v5[1] + 8) = v5;
  }
  else
  {
    v5[1] = v5;
    v5[2] = v5;
    dword_6F93C = (int)v5;
  }
  if ( pthread_mutex_init(&stru_6F924, 0) )
  {
    v122 = _errno_location();
    snprintf(v183, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v122, "api.c", "api", 5270);
    sub_343C4(3, v183, 1);
    sub_26B0C(1);
  }
  if ( _sigsetjmp(&env, 0) )
  {
    sub_2F6FC(ptr);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
LABEL_253:
    freeaddrinfo(ai);
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(v169, 0x800u, "API bind to port %d failed (%s)%s", v2, v4, " - API will not be available");
      sub_343C4(3, v169, 0);
    }
    goto LABEL_6;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  v7 = (const char *)dword_72C00;
  if ( dword_72C00 )
  {
    v8 = strlen((const char *)dword_72C00) + 1;
  }
  else
  {
    v7 = &byte_57FF0;
    v8 = 1;
  }
  dest = (char *)malloc(v8);
  if ( !dest )
  {
    strcpy(v184, "Failed to malloc ipgroups buf");
    sub_343C4(3, v184, 1);
    sub_26B0C(1);
  }
  v9 = (unsigned __int8 *)dest;
  strcpy(dest, v7);
  if ( *dest )
  {
    do
    {
      v10 = strchr((const char *)v9, 44);
      if ( v10 )
      {
        v136 = (unsigned __int8 *)(v10 + 1);
        *v10 = 0;
      }
      else
      {
        v136 = 0;
      }
      if ( v9[1] != 58 )
      {
        v11 = strchr((const char *)v9, 58);
        if ( v11 )
          *v11 = 0;
        snprintf(v185, 0x800u, "API invalid group name '%s'", v9);
        sub_343C4(3, v185, 1);
        sub_26B0C(1);
      }
      v12 = _ctype_toupper_loc();
      v13 = *v12;
      v135 = LOBYTE((*v12)[*v9]);
      v14 = (*v12)[v135];
      if ( v14 < (*v12)[65] || v14 > v13[90] )
      {
        snprintf(v186, 0x800u, "API invalid group name '%c'");
        sub_343C4(3, v186, 1);
        sub_26B0C(1);
      }
      if ( v135 == v13[87] )
      {
        snprintf(v187, 0x800u, "API group name can't be '%c'", v135);
        sub_343C4(3, v187, 1);
        sub_26B0C(1);
      }
      if ( v135 == v13[82] )
      {
        snprintf(v188, 0x800u, "API group name can't be '%c'", v135);
        sub_343C4(3, v188, 1);
        sub_26B0C(1);
      }
      if ( *((_DWORD *)&unk_73E10 + v13[v135] - v13[65]) )
      {
        snprintf(v189, 0x800u, "API duplicate group name '%c'", *v9);
        sub_343C4(3, v189, 1);
        sub_26B0C(1);
      }
      v15 = v9 + 2;
      v197[0] = 124;
      if ( v9 != (unsigned __int8 *)-2 && v9[2] )
      {
        v16 = 0;
        v138 = (char *)v197 + 1;
        do
        {
          v17 = strchr((const char *)v15, 58);
          v18 = v17;
          if ( v17 )
          {
            v18 = v17 + 1;
            *v17 = 0;
          }
          if ( *v15 != 42 || v15[1] )
          {
            v19 = off_6D1C4;
            v20 = &off_6D1C4;
            v21 = 0;
            if ( !off_6D1C4 )
            {
LABEL_92:
              snprintf(v190, 0x800u, "API unknown command '%s' in group '%c'", v15, v135);
              sub_343C4(3, v190, 1);
              sub_26B0C(1);
            }
            while ( strcasecmp((const char *)v15, v19) )
            {
              v22 = v20[3];
              v20 += 3;
              v19 = v22;
              ++v21;
              if ( !v22 )
                goto LABEL_92;
            }
            sprintf(needle, "|%s|", v19);
            if ( !strstr((const char *)v197, needle) )
            {
              v63 = (const char *)dword_6CD94[3 * v21 + 268];
              strcpy(v138, v63);
              v64 = strlen(v63);
              v138[v64 + 1] = 0;
              v138[v64] = 124;
              v138 += v64 + 1;
            }
          }
          else
          {
            v16 = 1;
          }
          if ( !v18 )
            break;
          v15 = (unsigned __int8 *)v18;
        }
        while ( *v18 );
        if ( v16 && off_6D1C4 )
        {
          v65 = &off_6D1C4;
          v66 = v138;
          do
          {
            if ( !*((_BYTE *)v65 + 8) )
            {
              sprintf(needle, "|%s|");
              if ( !strstr((const char *)v197, needle) )
              {
                v68 = *v65;
                strcpy(v66, *v65);
                v69 = &v66[strlen(v68)];
                v66 = v69 + 1;
                v69[1] = 0;
                *v69 = 124;
              }
            }
            v67 = v65[3];
            v65 += 3;
          }
          while ( v67 );
        }
      }
      v23 = strlen((const char *)v197);
      v24 = (*v12)[v135] - (*v12)[65];
      v25 = (char *)malloc(v23 + 1);
      *((_DWORD *)&unk_73E10 + v24) = v25;
      if ( !v25 )
      {
        strcpy(v191, "Failed to malloc group commands buf");
        sub_343C4(3, v191, 1);
        sub_26B0C(1);
      }
      strcpy(v25, (const char *)v197);
      if ( !v136 )
        break;
      v9 = v136;
    }
    while ( *v136 );
  }
  v26 = _ctype_toupper_loc();
  v27 = off_6D1C4;
  v28 = v26;
  v197[0] = 124;
  if ( off_6D1C4 )
  {
    v29 = &off_6D1C4;
    v30 = (char *)v197 + 1;
    do
    {
      while ( *((_BYTE *)v29 + 8) )
      {
        v31 = v29[3];
        v29 += 3;
        v27 = v31;
        if ( !v31 )
          goto LABEL_51;
      }
      strcpy(v30, v27);
      v32 = strlen(v27);
      v33 = v29[3];
      v29 += 3;
      v27 = v33;
      v34 = &v30[v32];
      v30 = v34 + 1;
      *v34 = 124;
      v34[1] = 0;
    }
    while ( v33 );
  }
LABEL_51:
  v35 = strlen((const char *)v197) + 1;
  v36 = (*v28)[82];
  if ( (unsigned int)(v36 + 128) < 0x180 )
    v36 = (*v28)[v36];
  v37 = v36 - (*v28)[65];
  v38 = (char *)malloc(v35);
  *((_DWORD *)&unk_73E10 + v37) = v38;
  if ( !v38 )
  {
    strcpy(v192, "Failed to malloc noprivgroup commands buf");
    sub_343C4(3, v192, 1);
    sub_26B0C(1);
  }
  strcpy(v38, (const char *)v197);
  free(dest);
  v39 = (const char *)dword_6F910;
  if ( dword_6F910 )
  {
    v40 = strlen((const char *)dword_6F910);
    v41 = (char *)malloc(v40 + 1);
    v42 = v41;
    if ( !v41 )
    {
      strcpy(v193, "Failed to malloc ipaccess buf");
      sub_343C4(3, v193, 1);
      sub_26B0C(1);
    }
    strcpy(v41, v39);
    v43 = v42 - 1;
    v44 = 1;
    while ( 1 )
    {
      v46 = (unsigned __int8)*++v43;
      v45 = v46;
      if ( !v46 )
        break;
      if ( v45 == 44 )
        ++v44;
    }
    dword_6F91C = (int)calloc(v44, 0x24u);
    if ( !dword_6F91C )
    {
      strcpy(v194, "Failed to calloc ipaccess");
      sub_343C4(3, v194, 1);
      sub_26B0C(1);
    }
    v47 = 0;
    v48 = v42;
    dword_6F920 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v49 = *(unsigned __int8 *)v48;
        if ( !*v48 )
        {
LABEL_85:
          free(v42);
          if ( v47 )
            goto LABEL_86;
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
          {
            snprintf(v164, 0x800u, "API not running (no valid IPs specified)%s", " - API will not be available");
            sub_343C4(4, v164, 0);
          }
LABEL_6:
          free(ptr);
          return;
        }
        while ( 1 )
        {
          v51 = v49 == 9;
          if ( v49 != 9 )
            v51 = v49 == 32;
          if ( !v51 )
            break;
          v50 = *(unsigned __int8 *)++v48;
          v49 = v50;
        }
        if ( v49 != 44 )
          break;
        ++v48;
LABEL_84:
        if ( !v48 )
          goto LABEL_85;
      }
      v52 = strchr(v48, 44);
      v53 = v52;
      if ( v52 )
      {
        v53 = v52 + 1;
        *v52 = 0;
      }
      v54 = _ctype_b_loc();
      v55 = *(unsigned __int8 *)v48;
      v56 = *v28;
      v57 = *((_BYTE *)*v28 + 328);
      if ( ((*v54)[v55] & 0x400) != 0 && v48[1] == 58 )
      {
        v84 = v56[v55];
        if ( v84 == v56[87] || *((_DWORD *)&unk_73E10 + v84 - v56[65]) )
          v57 = v56[v55];
        v48 += 2;
      }
      v58 = (_BYTE *)(dword_6F91C + 36 * v47);
      v58[32] = v57;
      v59 = *(unsigned __int8 *)v48;
      if ( v59 == 48 )
      {
        if ( v48[1] == 47 && v48[2] == 48 && !v48[3] )
        {
          v70 = v58 + 15;
          v71 = v58 - 1;
          do
          {
            *++v71 = 0;
            *++v70 = 0;
          }
          while ( v71 != v58 + 15 );
          goto LABEL_107;
        }
        v60 = strchr(v48, 47);
        if ( v60 )
          goto LABEL_78;
      }
      else
      {
        v60 = strchr(v48, 47);
        if ( v60 )
          goto LABEL_76;
      }
      v72 = v58 + 15;
      do
        *++v72 = -1;
      while ( v58 + 31 != v72 );
      v59 = *(unsigned __int8 *)v48;
      v60 = (char *)&v48[strlen(v48)];
LABEL_76:
      if ( v59 == 91 && *(v60 - 1) == 93 )
      {
        v61 = 1;
        *v48++ = 0;
        *(v60 - 1) = 0;
        goto LABEL_79;
      }
LABEL_78:
      v61 = 0;
LABEL_79:
      if ( *v60 )
      {
        *v60 = 0;
        v62 = strtol(v60 + 1, 0, 10);
        if ( v62 <= 0 )
          goto LABEL_83;
        if ( v61 )
        {
          if ( v62 > 128 )
            goto LABEL_83;
        }
        else
        {
          v62 += 96;
          if ( v62 > 128 )
          {
LABEL_83:
            v48 = v53;
            goto LABEL_84;
          }
        }
        v83 = v58 + 15;
        v73 = 0;
        do
          *++v83 = 0;
        while ( v58 + 31 != v83 );
        while ( 1 )
        {
          v74 = v62-- != 0;
          v75 = 7;
          if ( !v74 )
            break;
          while ( 1 )
          {
            v58[v73 + 16] |= 1 << v75;
            if ( !v75 )
              break;
            v74 = v62-- != 0;
            --v75;
            if ( !v74 )
              goto LABEL_118;
          }
          ++v73;
        }
      }
LABEL_118:
      v76 = v58 - 1;
      do
        *++v76 = 0;
      while ( v58 + 15 != v76 );
      if ( v61 )
      {
        if ( inet_pton(10, v48, v58) != 1 )
          goto LABEL_83;
      }
      else
      {
        sprintf(cp, "::ffff:%s", v48);
        v47 = dword_6F920;
        v58 = (_BYTE *)(dword_6F91C + 36 * dword_6F920);
        if ( inet_pton(10, cp, v58) != 1 )
        {
          v48 = v53;
          goto LABEL_84;
        }
      }
      v77 = v58 + 15;
      v78 = v58 - 1;
      v79 = v58 + 15;
      do
      {
        v81 = *++v78;
        v80 = v81;
        v82 = *++v77;
        *v78 = v80 & v82;
      }
      while ( v78 != v79 );
LABEL_107:
      v48 = v53;
      dword_6F920 = ++v47;
      if ( !v53 )
        goto LABEL_85;
    }
  }
LABEL_86:
  v2 = (unsigned __int8 *)v140;
  sub_2A7F4();
  sprintf(service, "%d", v140);
  req.ai_flags = 1;
  memset(&req.ai_family, 0, 28);
  protocol = getaddrinfo(off_6CB50, service, &req, &ai);
  if ( protocol )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(v165, 0x800u, "API failed to resolve %s", off_6CB50);
      sub_343C4(3, v165, 0);
    }
    goto LABEL_6;
  }
  v85 = ai;
  if ( ai )
  {
    for ( i = ai; ; i = ai )
    {
      v87 = socket(i->ai_family, 1, protocol);
      *ptr = v87;
      if ( v87 > 0 )
        break;
      v85 = v85->ai_next;
      if ( !v85 )
        goto LABEL_223;
    }
  }
  else
  {
    v87 = *ptr;
LABEL_223:
    if ( v87 == -1 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        v118 = _errno_location();
        v119 = strerror(*v118);
        snprintf(v166, 0x800u, "API initialisation failed (%s)%s", v119, " - API will not be available");
        sub_343C4(3, v166, 0);
      }
      freeaddrinfo(ai);
      free(ptr);
      return;
    }
    v85 = 0;
  }
  optval = 1;
  if ( setsockopt(v87, 1, 2, &optval, 4u) < 0 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    v88 = _errno_location();
    v89 = strerror(*v88);
    snprintf(v167, 0x800u, "API setsockopt SO_REUSEADDR failed (ignored): %s", v89);
    sub_343C4(7, v167, 0);
  }
  v90 = time(0);
  while ( bind(*ptr, v85->ai_addr, v85->ai_addrlen) < 0 )
  {
    v91 = _errno_location();
    v4 = strerror(*v91);
    if ( time(0) - v90 > 61 )
      goto LABEL_253;
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(v168, 0x800u, "API bind to port %d failed - trying again in 30sec", v140);
      sub_343C4(4, v168, 0);
    }
    sub_2A7F4();
  }
  freeaddrinfo(ai);
  if ( listen(*ptr, 100) < 0 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      v129 = _errno_location();
      v130 = strerror(*v129);
      snprintf(v170, 0x800u, "API3 initialisation failed (%s)%s", v130, " - API will not be available");
      sub_343C4(3, v170, 0);
    }
    close(*ptr);
    free(ptr);
    return;
  }
  if ( dword_6F910 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(v171, 0x800u, "API running in IP access mode on port %d (%d)", v140, *ptr);
      sub_343C4(4, v171, 0);
    }
  }
  else if ( byte_73B7C )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(v172, 0x800u, "API running in UNRESTRICTED read access mode on port %d (%d)", v140, *ptr);
      sub_343C4(4, v172, 0);
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(v173, 0x800u, "API running in local read access mode on port %d (%d)", v140, *ptr);
    sub_343C4(4, v173, 0);
  }
  if ( byte_73221 )
    sub_32CF4();
  v92 = 0;
  dword_6F940 = sub_3547C("StrBufs", 12, 2, 0, 0, "api.c", "api", 5382);
  while ( 1 )
  {
    v93 = (unsigned __int8)byte_6F918;
    if ( byte_6F918 )
      goto LABEL_265;
    addr_len = 128;
    fd = accept(*ptr, &addr, &addr_len);
    if ( fd < 0 )
      break;
    v94 = sub_2E7E4(&addr, &v149, &v147);
    v95 = v94;
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      v96 = "Accepted";
      if ( !v94 )
        v96 = "Ignored";
      snprintf(v175, 0x800u, "API: connection from %s - %s", v149, v96);
      sub_343C4(7, v175, 0);
    }
    if ( v95 )
    {
      v97 = recv(fd, v195, 0x1FFFu, 0);
      v98 = v97;
      v99 = (unsigned __int8)byte_6FA71;
      if ( v97 >= 0 )
      {
        v195[v97] = 0;
        if ( v99 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(v177, 0x800u, "API: recv command: (%d) '%s'", v97, v195);
          sub_343C4(7, v177, 0);
        }
        v100 = v195;
        v101 = time(0);
        v102 = (_BYTE *)*((_DWORD *)v145 + 1);
        *((_DWORD *)v145 + 2) = v102;
        dword_6F944 = v101;
        *v102 = 0;
        v103 = (unsigned __int8)v195[0];
        v145[13] = 0;
        if ( v103 == 123 )
        {
          v126 = (_DWORD *)sub_47640(v195, v98, 0, v161);
          v139 = v126;
          if ( v126 && !*v126 )
          {
            v131 = (_DWORD *)sub_47F24(v126, "command");
            if ( v131 )
            {
              if ( *v131 == 2 )
              {
                v100 = (const char *)sub_4813C(v131);
                v132 = (int *)sub_47F24(v139, "parameter");
                if ( v132 )
                {
                  v133 = *v132;
                  if ( *v132 == 2 )
                  {
                    v144 = (char *)sub_4813C(v132);
                  }
                  else if ( v133 == 3 )
                  {
                    v134 = sub_481D0(v132);
                    v144 = v196;
                    sprintf(v196, "%d", v134);
                  }
                  else if ( v133 == 4 )
                  {
                    sub_48240();
                    v144 = v196;
                    sprintf(v196, "%f", v0);
                  }
                  else
                  {
                    v144 = 0;
                  }
                }
                else
                {
                  v144 = 0;
                }
                goto LABEL_191;
              }
              sub_30214((unsigned int *)v145, 14, 0, 0, 1u);
            }
            else
            {
              sub_30214((unsigned int *)v145, 24, 0, 0, 1u);
            }
          }
          else
          {
            sub_30214((unsigned int *)v145, 23, 0, 0, 1u);
          }
          sub_2F184(*((const char **)v145 + 1), v145[13], fd, 1);
LABEL_283:
          if ( v92 )
            sub_2F184(*((const char **)v145 + 1), v145[13], fd, v95);
LABEL_215:
          if ( v139 )
            v117 = v95 & 1;
          else
            v117 = 0;
          if ( v117 )
          {
            if ( !*v139 )
            {
              v127 = v139[1];
              if ( v127 != -1 )
              {
                v128 = v127 - 1;
                v139[1] = v128;
                if ( !v128 )
                  sub_482FC(v139);
              }
            }
          }
          goto LABEL_220;
        }
        v104 = strchr(v195, 124);
        if ( v104 )
        {
          v95 = v93;
          *v104 = 0;
          v144 = v104 + 1;
        }
        else
        {
          v144 = 0;
          v95 = v93;
        }
LABEL_191:
        haystack = strchr(v100, 43);
        if ( haystack )
        {
          v92 = 1;
          v148 = 1;
          v105 = strlen(v100);
          haystack = (char *)malloc(v105 + 3);
          if ( !haystack )
          {
            snprintf(v178, 0x800u, "OOM cmdsbuf in %s %s():%d", "api.c", "api", 5493);
            sub_343C4(3, v178, 1);
            sub_26B0C(1);
          }
          v144 = 0;
          *(_WORD *)haystack = 124;
        }
        else
        {
          v92 = v93;
          v148 = 0;
        }
        v106 = (char *)v100;
        if ( !v92 )
        {
          v109 = off_6D1C4;
          if ( off_6D1C4 )
            goto LABEL_204;
          goto LABEL_237;
        }
        while ( 2 )
        {
          v107 = strchr(v106, 43);
          v100 = v107;
          if ( v107 )
          {
            v100 = v107 + 1;
            *v107 = 0;
          }
          if ( !*v106 )
          {
LABEL_198:
            if ( v100 )
              v108 = v92 & 1;
            else
              v108 = 0;
            v106 = (char *)v100;
            if ( !v108 )
              goto LABEL_283;
            continue;
          }
          break;
        }
        v109 = off_6D1C4;
        if ( off_6D1C4 )
        {
LABEL_204:
          v110 = &off_6D1C4;
          v111 = 0;
          while ( strcmp(v106, v109) )
          {
            v112 = v110[3];
            v110 += 3;
            v109 = v112;
            ++v111;
            if ( !v112 )
            {
              if ( !v92 )
                goto LABEL_237;
              goto LABEL_236;
            }
          }
          sprintf(v158, "|%s|", v106);
          if ( v92 )
          {
            if ( strstr(haystack, v158) )
              goto LABEL_198;
            v113 = strlen(haystack);
            strcpy((char *)stpcpy(&haystack[v113], v106), "|");
            sub_2E730((unsigned int *)v145, v106, v95, &v148);
            v114 = &dword_6CD94[3 * v111];
            if ( !*((_BYTE *)v114 + 1081) )
            {
              sub_30214((unsigned int *)v145, 45, *((unsigned __int8 *)v114 + 1081), v114[268], v95);
              sub_2F090((int)v145, v95);
              goto LABEL_214;
            }
          }
          v115 = v147;
          v116 = (*v28)[v147];
          if ( v116 == (*v28)[87] || strstr(*((const char **)&unk_73E10 + v116 - (*v28)[65]), v158) )
          {
            ((void (__fastcall *)(unsigned __int8 *, int, char *, int, int))dword_6CD94[3 * v111 + 269])(
              v145,
              fd,
              v144,
              v95,
              v115);
          }
          else
          {
            sub_30214((unsigned int *)v145, 45, 0, dword_6CD94[3 * v111 + 268], v95);
            if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              snprintf(
                v179,
                0x800u,
                "API: access denied to '%s' for '%s' command",
                v149,
                (const char *)dword_6CD94[3 * v111 + 268]);
              sub_343C4(7, v179, 0);
            }
          }
          if ( (unsigned __int8)v92 == 1 )
            goto LABEL_238;
        }
        else
        {
LABEL_236:
          sub_2E730((unsigned int *)v145, v106, v95, &v148);
LABEL_237:
          sub_30214((unsigned int *)v145, 14, 0, 0, v95);
          if ( v92 )
          {
LABEL_238:
            sub_2F090((int)v145, v95);
LABEL_214:
            if ( !v92 )
              goto LABEL_215;
            goto LABEL_198;
          }
        }
        sub_2F184(*((const char **)v145 + 1), v145[13], fd, v95);
        goto LABEL_214;
      }
      v195[0] = 0;
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        v120 = _errno_location();
        v121 = strerror(*v120);
        snprintf(v176, 0x800u, "API: recv failed: %s", v121);
        sub_343C4(7, v176, 0);
      }
    }
LABEL_220:
    close(fd);
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    v123 = _errno_location();
    v124 = strerror(*v123);
    snprintf(v174, 0x800u, "API failed (%s)%s (%d)", v124, " - API will not be available", *ptr);
    sub_343C4(3, v174, 0);
  }
LABEL_265:
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  sub_2F6FC(ptr);
  free(ptr);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    if ( byte_6F919 )
    {
      v125 = "QUIT";
    }
    else if ( byte_6F91A )
    {
      v125 = "RESTART";
    }
    else
    {
      v125 = "UNKNOWN!";
      if ( byte_6F918 )
        v125 = "BYE";
    }
    snprintf(v180, 0x800u, "API: terminating due to: %s", v125);
    sub_343C4(7, v180, 0);
  }
  if ( pthread_mutex_lock(&stru_6F924) )
    sub_2F624("api", 5592);
  if ( byte_6F91A )
  {
    if ( sub_2D7E0((int)v156, 0, (void *(*)(void *))sub_2F8B0, v156) )
    {
      if ( !pthread_mutex_unlock(&stru_6F924) )
      {
        off_6CB70(0);
        strcpy(v181, "API failed to initiate a restart - aborting");
        sub_343C4(3, v181, 1);
        sub_26B0C(1);
      }
      sub_2F6B4("api", 5598);
    }
  }
  else
  {
    if ( !byte_6F919 )
      goto LABEL_277;
    if ( sub_2D7E0((int)v156, (const pthread_attr_t *)(unsigned __int8)byte_6F91A, (void *(*)(void *))sub_2F79C, v156) )
    {
      if ( pthread_mutex_unlock(&stru_6F924) )
        sub_2F6B4("api", 5607);
      off_6CB70(0);
      strcpy(v182, "API failed to initiate a clean quit - aborting");
      sub_343C4(3, v182, 1);
      sub_26B0C(1);
    }
  }
  pthread_detach(th);
LABEL_277:
  if ( pthread_mutex_unlock(&stru_6F924) )
    sub_2F6B4("api", 5613);
  off_6CB70(0);
}
