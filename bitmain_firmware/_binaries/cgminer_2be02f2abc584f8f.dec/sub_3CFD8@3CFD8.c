void __fastcall sub_3CFD8(int a1)
{
  double v1; // d0
  _DWORD *v2; // r0
  int v3; // r3
  int *v4; // r0
  const char *v5; // r4
  size_t v6; // r0
  unsigned __int8 *i; // r4
  char *v8; // r0
  char *v9; // r0
  const __int32_t **v10; // r11
  int v11; // r3
  int v12; // r10
  __int32_t v13; // r1
  unsigned __int8 *v14; // r7
  int v15; // r9
  char *v16; // r0
  char *v17; // r8
  const char *v18; // r4
  char **v19; // r6
  int v20; // r5
  const char *v21; // t1
  const char *v22; // r4
  size_t v23; // r0
  const char *v24; // r2
  _BYTE *v25; // r4
  char *v26; // r9
  const char *v27; // r5
  size_t v28; // r0
  int v29; // r5
  size_t v30; // r0
  char *v31; // r0
  const char *v32; // r5
  char **v33; // r4
  char *v34; // r6
  size_t v35; // r0
  const char *v36; // t1
  const __int32_t **v37; // r11
  const __int32_t *v38; // r2
  __int32_t v39; // r3
  int v40; // r5
  size_t v41; // r0
  char *v42; // r0
  size_t v43; // r0
  char *v44; // r0
  char *v45; // r10
  char *v46; // r2
  size_t v47; // r0
  int v48; // r3
  int v49; // t1
  unsigned __int8 *v50; // r4
  int v51; // r3
  unsigned __int8 *v52; // r6
  int v53; // t1
  bool v54; // zf
  char *v55; // r6
  char *v56; // r0
  const __int32_t *v57; // r5
  char v58; // r8
  const unsigned __int16 **v59; // r0
  int v60; // r3
  __int32_t v61; // r3
  _BYTE *v62; // r5
  int v63; // r3
  _BYTE *v64; // r5
  unsigned __int8 v65; // r2
  char *v66; // r0
  _BYTE *v67; // r2
  int j; // r3
  int v69; // r8
  int v70; // r0
  int v71; // r3
  int v72; // r2
  _BYTE *v73; // r1
  int k; // r3
  int v75; // r3
  int v76; // r0
  int m; // r3
  char *v78; // r3
  char v79; // t1
  int n; // r2
  bool v81; // zf
  struct addrinfo *ii; // r4
  int v83; // r0
  int v84; // r0
  int *v85; // r0
  char *v86; // r0
  int *v87; // r0
  char *v88; // r0
  time_t v89; // r9
  int *v90; // r0
  char *v91; // r7
  int *v92; // r0
  char *v93; // r0
  _DWORD *v94; // r7
  int v95; // r10
  int *v96; // r0
  char *v97; // r0
  _BOOL4 v98; // r0
  _BOOL4 v99; // r4
  const char *v100; // r2
  ssize_t v101; // r0
  ssize_t v102; // r4
  int *v103; // r0
  char *v104; // r0
  char *v105; // r0
  char *v106; // r9
  int v107; // r4
  const char *v108; // r8
  _DWORD *v109; // r0
  _DWORD *v110; // r0
  int *v111; // r0
  int v112; // r3
  int v113; // r0
  size_t v114; // r0
  char *v115; // r11
  char *v116; // r0
  const char *v117; // r1
  char **v118; // r7
  int v119; // r6
  int v120; // r7
  __int32_t v121; // r1
  const char *v122; // t1
  int v123; // r3
  int v124; // r3
  int v125; // r3
  int v126; // r3
  const char *v127; // r3
  int *v128; // r0
  int v129; // r0
  int v130; // r0
  int v131; // r0
  char *s; // [sp+14h] [bp-6C38h]
  _DWORD *ptr; // [sp+20h] [bp-6C2Ch]
  char *dest; // [sp+24h] [bp-6C28h]
  int v135; // [sp+30h] [bp-6C1Ch]
  char *haystack; // [sp+34h] [bp-6C18h]
  _DWORD *v137; // [sp+38h] [bp-6C14h]
  __int16 v138; // [sp+3Ch] [bp-6C10h]
  char *v140; // [sp+44h] [bp-6C08h]
  _DWORD *v141; // [sp+50h] [bp-6BFCh]
  const __int32_t **v142; // [sp+64h] [bp-6BE8h]
  int optval; // [sp+68h] [bp-6BE4h] BYREF
  char v144[100]; // [sp+6Ch] [bp-6BE0h] BYREF
  struct __jmp_buf_tag env; // [sp+D0h] [bp-6B7Ch] BYREF
  char v146[2040]; // [sp+1E8h] [bp-6A64h] BYREF
  char v147[88]; // [sp+9E8h] [bp-6264h] BYREF
  struct addrinfo *v148; // [sp+29E8h] [bp-4264h] BYREF
  struct addrinfo v149; // [sp+29ECh] [bp-4260h] BYREF
  char v150; // [sp+2A0Fh] [bp-423Dh] BYREF
  int v151; // [sp+2A10h] [bp-423Ch] BYREF
  unsigned __int8 v152; // [sp+2B0Fh] [bp-413Dh] BYREF
  char v153[48]; // [sp+2B10h] [bp-413Ch] BYREF
  socklen_t v154; // [sp+2B74h] [bp-40D8h] BYREF
  struct sockaddr v155[4]; // [sp+2B78h] [bp-40D4h] BYREF
  char v156[8]; // [sp+2BF8h] [bp-4054h] BYREF
  const char *v157; // [sp+2C04h] [bp-4048h] BYREF
  char v158[56]; // [sp+2C08h] [bp-4044h] BYREF
  char v159[5112]; // [sp+4C08h] [bp-2044h] BYREF
  pthread_t v160[17]; // [sp+6C08h] [bp-44h] BYREF

  v138 = dword_72CF4;
  ptr = malloc(4u);
  *ptr = -1;
  if ( !byte_79899 )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(v147, 0x800u, "API not running%s", " - API will not be available");
      sub_3F1C0(7, v147, 0);
    }
    free(ptr);
    return;
  }
  v137 = malloc(0x10u);
  v137[1] = malloc(0x10000u);
  *v137 = 0x10000;
  *((_BYTE *)v137 + 12) = 1;
  sub_36510((int)v137);
  v2 = malloc(0xCu);
  *v2 = v137;
  v3 = dword_75AD0;
  if ( dword_75AD0 )
  {
    v2[2] = dword_75AD0;
    v2[1] = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v2[1] + 8) = v2;
  }
  else
  {
    v2[1] = v2;
    v2[2] = v2;
    dword_75AD0 = (int)v2;
  }
  if ( pthread_mutex_init(&stru_75AB8, 0) )
  {
    v4 = _errno_location();
    snprintf(v147, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v4, "api.c", "api", 5270);
    sub_3F1C0(3, v147, 1);
    sub_132C4(1);
  }
  if ( _sigsetjmp(&env, 0) )
  {
    sub_38440(ptr);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  dword_75ADC = a1;
  v5 = (const char *)dword_79A0C;
  if ( !dword_79A0C )
    v5 = &byte_67C50;
  v6 = strlen(v5);
  v140 = (char *)malloc(v6 + 1);
  if ( !v140 )
  {
    strcpy(v147, "Failed to malloc ipgroups buf");
    sub_3F1C0(3, v147, 1);
    sub_132C4(1);
  }
  strcpy(v140, v5);
  if ( *v140 )
  {
    for ( i = (unsigned __int8 *)v140; ; i = (unsigned __int8 *)s )
    {
      v8 = strchr((const char *)i, 44);
      s = v8;
      if ( v8 )
      {
        *v8 = 0;
        s = v8 + 1;
      }
      if ( i[1] != 58 )
      {
        v9 = strchr((const char *)i, 58);
        if ( v9 )
          *v9 = 0;
        snprintf(v146, 0x800u, "API invalid group name '%s'", (const char *)i);
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      v10 = _ctype_toupper_loc();
      v11 = *i;
      v12 = LOBYTE((*v10)[v11]);
      v13 = (*v10)[v12];
      if ( v13 < (*v10)[65] || v13 > (*v10)[90] )
      {
        snprintf(v146, 0x800u, "API invalid group name '%c'", v11);
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      if ( v12 == (*v10)[87] )
      {
        snprintf(v146, 0x800u, "API group name can't be '%c'", v12);
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      if ( v12 == (*v10)[82] )
      {
        snprintf(v146, 0x800u, "API group name can't be '%c'", v12);
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      if ( *((_DWORD *)&unk_79EF4 + (*v10)[v12] - (*v10)[65]) )
      {
        snprintf(v146, 0x800u, "API duplicate group name '%c'", *i);
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      strcpy(v147, "|");
      v14 = i + 2;
      if ( i != (unsigned __int8 *)-2 && i[2] )
      {
        v15 = 0;
        dest = &v147[1];
        while ( 1 )
        {
          v16 = strchr((const char *)v14, 58);
          v17 = v16;
          if ( v16 )
          {
            *v16 = 0;
            v17 = v16 + 1;
          }
          if ( *v14 != 42 || v14[1] )
          {
            v18 = off_73354;
            if ( !off_73354 )
            {
LABEL_324:
              snprintf(v146, 0x800u, "API unknown command '%s' in group '%c'", v14, v12);
              sub_3F1C0(3, v146, 1);
              sub_132C4(1);
            }
            v19 = &off_73354;
            v20 = 0;
            while ( strcasecmp((const char *)v14, v18) )
            {
              ++v20;
              v21 = v19[3];
              v19 += 3;
              v18 = v21;
              if ( !v21 )
                goto LABEL_324;
            }
            sprintf(v144, "|%s|", v18);
            if ( !strstr(v147, v144) )
            {
              v22 = (const char *)dword_72F24[3 * v20 + 268];
              strcpy(dest, v22);
              v23 = strlen(v22);
              dest[v23] = 124;
              dest += v23 + 1;
              *dest = 0;
            }
          }
          else
          {
            v15 = 1;
          }
          if ( !v17 || !*v17 )
            break;
          v14 = (unsigned __int8 *)v17;
        }
        if ( v15 )
        {
          v24 = off_73354;
          if ( off_73354 )
          {
            v25 = &unk_7335C;
            v26 = dest;
            do
            {
              if ( !*v25 )
              {
                sprintf(v144, "|%s|", v24);
                if ( !strstr(v147, v144) )
                {
                  v27 = (const char *)*((_DWORD *)v25 - 2);
                  strcpy(v26, v27);
                  v28 = strlen(v27);
                  v26[v28] = 124;
                  v26 += v28 + 1;
                  *v26 = 0;
                }
              }
              v25 += 12;
              v24 = (const char *)*((_DWORD *)v25 - 2);
            }
            while ( v24 );
          }
        }
      }
      v29 = (*v10)[v12] - (*v10)[65];
      v30 = strlen(v147);
      v31 = (char *)malloc(v30 + 1);
      *((_DWORD *)&unk_79EF4 + v29) = v31;
      if ( !v31 )
      {
        strcpy(v146, "Failed to malloc group commands buf");
        sub_3F1C0(3, v146, 1);
        sub_132C4(1);
      }
      strcpy(v31, v147);
      if ( !s || !*s )
        break;
    }
  }
  strcpy(v147, "|");
  v32 = off_73354;
  if ( off_73354 )
  {
    v33 = &off_73354;
    v34 = &v147[1];
    do
    {
      if ( !*((_BYTE *)v33 + 8) )
      {
        strcpy(v34, v32);
        v35 = strlen(v32);
        v34[v35] = 124;
        v34 += v35 + 1;
        *v34 = 0;
      }
      v36 = v33[3];
      v33 += 3;
      v32 = v36;
    }
    while ( v36 );
  }
  v37 = _ctype_toupper_loc();
  v38 = *v37;
  v39 = (*v37)[82];
  if ( (unsigned int)(v39 + 128) < 0x180 )
    v39 = v38[v39];
  v40 = v39 - v38[65];
  v41 = strlen(v147);
  v42 = (char *)malloc(v41 + 1);
  *((_DWORD *)&unk_79EF4 + v40) = v42;
  if ( !v42 )
  {
    strcpy(v146, "Failed to malloc noprivgroup commands buf");
    sub_3F1C0(3, v146, 1);
    sub_132C4(1);
  }
  strcpy(v42, v147);
  free(v140);
  if ( dword_75A98 )
  {
    v43 = strlen((const char *)dword_75A98);
    v44 = (char *)malloc(v43 + 1);
    v45 = v44;
    if ( !v44 )
    {
      strcpy(v147, "Failed to malloc ipaccess buf");
      sub_3F1C0(3, v147, 1);
      sub_132C4(1);
    }
    strcpy(v44, (const char *)dword_75A98);
    v46 = v45 - 1;
    v47 = 1;
    while ( 1 )
    {
      v49 = (unsigned __int8)*++v46;
      v48 = v49;
      if ( !v49 )
        break;
      if ( v48 == 44 )
        ++v47;
    }
    dword_75AB4 = (int)calloc(v47, 0x24u);
    if ( !dword_75AB4 )
    {
      strcpy(v147, "Failed to calloc ipaccess");
      sub_3F1C0(3, v147, 1);
      sub_132C4(1);
    }
    dword_75AB0 = 0;
    if ( !v45 || !*v45 )
    {
LABEL_145:
      free(v45);
      if ( !dword_75AB0 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          snprintf(v147, 0x800u, "API not running (no valid IPs specified)%s", " - API will not be available");
          sub_3F1C0(4, v147, 0);
        }
LABEL_150:
        free(ptr);
        return;
      }
      goto LABEL_151;
    }
    v55 = v45;
    while ( 1 )
    {
      v51 = (unsigned __int8)*v55;
      v81 = v51 == 32;
      if ( v51 != 32 )
        v81 = v51 == 9;
      if ( v81 )
      {
        v52 = (unsigned __int8 *)(v55 + 1);
        do
        {
          v50 = v52;
          v53 = *v52++;
          v51 = v53;
          v54 = v53 == 32;
          if ( v53 != 32 )
            v54 = v51 == 9;
        }
        while ( v54 );
      }
      else
      {
        v50 = (unsigned __int8 *)v55;
      }
      if ( v51 == 44 )
      {
        v55 = (char *)(v50 + 1);
        goto LABEL_136;
      }
      v56 = strchr((const char *)v50, 44);
      v55 = v56;
      if ( v56 )
      {
        *v56 = 0;
        v55 = v56 + 1;
      }
      v57 = *v37;
      v58 = *((_BYTE *)*v37 + 328);
      v59 = _ctype_b_loc();
      v60 = *v50;
      if ( ((*v59)[v60] & 0x400) != 0 && v50[1] == 58 )
      {
        v61 = v57[v60];
        if ( v61 == v57[87] || *((_DWORD *)&unk_79EF4 + v61 - v57[65]) )
          v58 = v61;
        v50 += 2;
      }
      v62 = (_BYTE *)(dword_75AB4 + 36 * dword_75AB0);
      v62[32] = v58;
      if ( *v50 == 48 && v50[1] == 47 && v50[2] == 48 && (v63 = v50[3]) == 0 )
      {
        v64 = v62 - 1;
        v65 = v50[3];
        do
        {
          *++v64 = v65;
          v64[16] = v65;
          ++v63;
        }
        while ( v63 != 16 );
      }
      else
      {
        v66 = strchr((const char *)v50, 47);
        if ( !v66 )
        {
          v67 = v62;
          for ( j = 0; j != 16; ++j )
          {
            v67[16] = -1;
            ++v67;
          }
          v66 = (char *)&v50[strlen((const char *)v50)];
        }
        if ( *v50 == 91 )
        {
          if ( *(v66 - 1) == 93 )
          {
            *v50++ = 0;
            *(v66 - 1) = 0;
            v69 = 1;
          }
          else
          {
            v69 = 0;
          }
        }
        else
        {
          v69 = 0;
        }
        if ( *v66 )
        {
          *v66 = 0;
          v70 = strtol(v66 + 1, 0, 10);
          if ( v70 <= 0 )
            goto LABEL_136;
          v71 = v69 ? 0 : 96;
          v72 = v70 + v71;
          if ( v70 + v71 > 128 )
            goto LABEL_136;
          v73 = v62;
          for ( k = 0; k != 16; ++k )
          {
            v73[16] = 0;
            ++v73;
          }
          v75 = 7;
          v76 = 0;
          while ( v72 > 0 )
          {
            v62[v76 + 16] |= 1 << v75;
            if ( v75 )
            {
              --v75;
            }
            else
            {
              ++v76;
              v75 = 7;
            }
            --v72;
          }
        }
        for ( m = 0; m != 16; ++m )
          v62[m] = 0;
        if ( v69 )
        {
          if ( inet_pton(10, (const char *)v50, v62) != 1 )
            goto LABEL_136;
        }
        else
        {
          sprintf(v147, "::ffff:%s", v50);
          if ( inet_pton(10, v147, (void *)(dword_75AB4 + 36 * dword_75AB0)) != 1 )
            goto LABEL_136;
        }
        v78 = (char *)(dword_75AB4 + 36 * dword_75AB0);
        for ( n = 0; n != 16; ++n )
        {
          v79 = *v78++;
          *(v78 - 1) = v79 & v78[15];
        }
      }
      ++dword_75AB0;
LABEL_136:
      if ( !v55 || !*v55 )
        goto LABEL_145;
    }
  }
LABEL_151:
  sub_2FF20();
  sprintf(v156, "%d", v138);
  memset(&v149.ai_family, 0, 28);
  v149.ai_flags = 1;
  if ( getaddrinfo(off_72CF0, v156, &v149, &v148) )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(v147, 0x800u, "API failed to resolve %s", off_72CF0);
      sub_3F1C0(3, v147, 0);
    }
    goto LABEL_150;
  }
  for ( ii = v148; ii; ii = ii->ai_next )
  {
    v83 = socket(v148->ai_family, 1, 0);
    *ptr = v83;
    if ( v83 > 0 )
      break;
  }
  v84 = *ptr;
  if ( *ptr == -1 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      v85 = _errno_location();
      v86 = strerror(*v85);
      snprintf(v147, 0x800u, "API initialisation failed (%s)%s", v86, " - API will not be available");
      sub_3F1C0(3, v147, 0);
    }
    freeaddrinfo(v148);
    free(ptr);
    return;
  }
  optval = 1;
  if ( setsockopt(v84, 1, 2, &optval, 4u) < 0 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    v87 = _errno_location();
    v88 = strerror(*v87);
    snprintf(v147, 0x800u, "API setsockopt SO_REUSEADDR failed (ignored): %s", v88);
    sub_3F1C0(7, v147, 0);
  }
  v89 = time(0);
  while ( bind(*ptr, ii->ai_addr, ii->ai_addrlen) < 0 )
  {
    v90 = _errno_location();
    v91 = strerror(*v90);
    if ( time(0) - v89 > 61 )
    {
      freeaddrinfo(v148);
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(v147, 0x800u, "API bind to port %d failed (%s)%s", v138, v91, " - API will not be available");
        sub_3F1C0(3, v147, 0);
      }
      free(ptr);
      return;
    }
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(v147, 0x800u, "API bind to port %d failed - trying again in 30sec", v138);
      sub_3F1C0(4, v147, 0);
    }
    sub_2FF20();
  }
  freeaddrinfo(v148);
  if ( listen(*ptr, 100) < 0 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      v92 = _errno_location();
      v93 = strerror(*v92);
      snprintf(v147, 0x800u, "API3 initialisation failed (%s)%s", v93, " - API will not be available");
      sub_3F1C0(3, v147, 0);
    }
    close(*ptr);
    free(ptr);
    return;
  }
  if ( dword_75A98 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(v147, 0x800u, "API running in IP access mode on port %d (%d)", v138, *ptr);
      sub_3F1C0(4, v147, 0);
    }
  }
  else if ( byte_7988C )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(v147, 0x800u, "API running in UNRESTRICTED read access mode on port %d (%d)", v138, *ptr);
      sub_3F1C0(4, v147, 0);
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(v147, 0x800u, "API running in local read access mode on port %d (%d)", v138, *ptr);
    sub_3F1C0(4, v147, 0);
  }
  if ( byte_796EC )
    sub_3CF14();
  dword_75AD4 = sub_3F9F0("StrBufs", 12, 2, 0, 0, "api.c", "api", 5382);
  if ( byte_75AAC )
    goto LABEL_299;
  v135 = 0;
  v94 = 0;
  v142 = v37;
  do
  {
    v154 = 128;
    v95 = accept(*ptr, v155, &v154);
    if ( v95 < 0 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        v96 = _errno_location();
        v97 = strerror(*v96);
        snprintf(v147, 0x800u, "API failed (%s)%s (%d)", v97, " - API will not be available", *ptr);
        sub_3F1C0(3, v147, 0);
      }
      break;
    }
    v98 = sub_36DA8(v155, &v157, &v152);
    v99 = v98;
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      if ( v98 )
        v100 = "Accepted";
      else
        v100 = "Ignored";
      snprintf(v147, 0x800u, "API: connection from %s - %s", v157, v100);
      sub_3F1C0(7, v147, 0);
    }
    if ( !v99 )
      goto LABEL_298;
    v101 = recv(v95, v159, 0x1FFFu, 0);
    v102 = v101;
    if ( v101 < 0 )
    {
      v159[0] = 0;
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        v103 = _errno_location();
        v104 = strerror(*v103);
        snprintf(v147, 0x800u, "API: recv failed: %s", v104);
        sub_3F1C0(7, v147, 0);
      }
      goto LABEL_298;
    }
    v159[v101] = 0;
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(v147, 0x800u, "API: recv command: (%d) '%s'", v101, v159);
      sub_3F1C0(7, v147, 0);
    }
    dword_75AD8 = time(0);
    sub_36510((int)v137);
    if ( v159[0] != 123 )
    {
      v105 = strchr(v159, 124);
      v106 = v105;
      v107 = 0;
      if ( v105 )
      {
        *v105 = 0;
        v106 = v105 + 1;
      }
      v108 = v159;
      goto LABEL_335;
    }
    v109 = (_DWORD *)sub_566C8(v159, v102, 0, &v151);
    v94 = v109;
    if ( !v109 || *v109 )
    {
      sub_39590((int)v137, 23, 0, 0, 1u);
      sub_36F94((int)v137, v95, 1);
LABEL_337:
      v107 = 1;
      goto LABEL_288;
    }
    v110 = (_DWORD *)sub_57304(v109, "command");
    if ( !v110 )
    {
      sub_39590((int)v137, 24, 0, 0, 1u);
      sub_36F94((int)v137, v95, 1);
      goto LABEL_337;
    }
    if ( *v110 != 2 )
    {
      sub_39590((int)v137, 14, 0, 0, 1u);
      sub_36F94((int)v137, v95, 1);
      goto LABEL_337;
    }
    v108 = (const char *)sub_57754(v110);
    v111 = (int *)sub_57304(v94, "parameter");
    if ( v111 )
    {
      v112 = *v111;
      if ( *v111 == 2 )
      {
        v106 = (char *)sub_57754(v111);
        v107 = 1;
      }
      else if ( v112 == 3 )
      {
        v113 = sub_5786C(v111);
        sprintf(v158, "%d", v113);
        v107 = 1;
        v106 = v158;
      }
      else if ( v112 == 4 )
      {
        sub_57940();
        sprintf(v158, "%f", v1);
        v107 = 1;
        v106 = v158;
      }
      else
      {
        v107 = 1;
        v106 = 0;
      }
    }
    else
    {
      v107 = 1;
      v106 = 0;
    }
LABEL_335:
    if ( strchr(v108, 43) )
    {
      v150 = 1;
      v114 = strlen(v108);
      haystack = (char *)malloc(v114 + 3);
      if ( !haystack )
      {
        snprintf(v147, 0x800u, "OOM cmdsbuf in %s %s():%d", "api.c", "api", 5493);
        sub_3F1C0(3, v147, 1);
        sub_132C4(1);
      }
      *(_WORD *)haystack = 124;
      v135 = 1;
      v106 = 0;
    }
    else
    {
      v150 = 0;
      haystack = 0;
      v135 = 0;
    }
    v115 = (char *)v108;
    v141 = v94;
    while ( 1 )
    {
      if ( v135 )
      {
        v116 = strchr(v115, 43);
        v108 = v116;
        if ( v116 )
        {
          *v116 = 0;
          v108 = v116 + 1;
        }
        if ( !*v115 )
          goto LABEL_283;
      }
      v117 = off_73354;
      if ( !off_73354 )
        break;
      v118 = &off_73354;
      v119 = 0;
      while ( strcmp(v115, v117) )
      {
        ++v119;
        v122 = v118[3];
        v118 += 3;
        v117 = v122;
        if ( !v122 )
          goto LABEL_338;
      }
      sprintf(v153, "|%s|", v115);
      if ( !v135 )
        goto LABEL_269;
      if ( strstr(haystack, v153) )
        goto LABEL_283;
      strcat(haystack, v115);
      *(_WORD *)&haystack[strlen(haystack)] = 124;
      sub_368FC((int)v137, v115, v107, &v150);
      if ( BYTE1(dword_72F24[3 * v119 + 270]) )
      {
LABEL_269:
        v120 = v152;
        v121 = (*v142)[v152];
        if ( v121 == (*v142)[87] || strstr(*((const char **)&unk_79EF4 + v121 - (*v142)[65]), v153) )
        {
          ((void (__fastcall *)(_DWORD *, int, char *, int, int))dword_72F24[3 * v119 + 269])(
            v137,
            v95,
            v106,
            v107,
            v120);
        }
        else
        {
          sub_39590((int)v137, 45, 0, dword_72F24[3 * v119 + 268], v107);
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(
              v147,
              0x800u,
              "API: access denied to '%s' for '%s' command",
              v157,
              (const char *)dword_72F24[3 * v119 + 268]);
            sub_3F1C0(7, v147, 0);
          }
        }
        if ( !v135 )
        {
          v94 = v141;
          sub_36F94((int)v137, v95, v107);
          goto LABEL_288;
        }
        sub_36A10((int)v137, v107);
      }
      else
      {
        sub_39590((int)v137, 45, 0, dword_72F24[3 * v119 + 268], v107);
        sub_36A10((int)v137, v107);
      }
LABEL_283:
      if ( v108 )
        v123 = v135 & 1;
      else
        v123 = 0;
      if ( !v123 )
      {
        v94 = v141;
        goto LABEL_288;
      }
      v115 = (char *)v108;
    }
LABEL_338:
    if ( v135 )
    {
      sub_368FC((int)v137, v115, v107, &v150);
      sub_39590((int)v137, 14, 0, 0, v107);
      sub_36A10((int)v137, v107);
      goto LABEL_283;
    }
    v94 = v141;
    sub_39590((int)v137, 14, 0, 0, v107);
    sub_36F94((int)v137, v95, v107);
LABEL_288:
    if ( v135 )
      sub_36F94((int)v137, v95, v107);
    v124 = (int)v94;
    if ( v94 )
      v124 = 1;
    if ( (v124 & v107) != 0 && !*v94 )
    {
      if ( v124 )
      {
        v125 = v94[1];
        if ( v125 != -1 )
        {
          v126 = v125 - 1;
          v94[1] = v126;
          if ( !v126 )
            sub_57A64(v94);
        }
      }
    }
LABEL_298:
    close(v95);
  }
  while ( !byte_75AAC );
LABEL_299:
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  sub_38440(ptr);
  free(ptr);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    if ( byte_75AAE )
    {
      v127 = "QUIT";
    }
    else if ( byte_75AAD )
    {
      v127 = "RESTART";
    }
    else if ( byte_75AAC )
    {
      v127 = "BYE";
    }
    else
    {
      v127 = "UNKNOWN!";
    }
    snprintf(v147, 0x800u, "API: terminating due to: %s", v127);
    sub_3F1C0(7, v147, 0);
  }
  if ( pthread_mutex_lock(&stru_75AB8) )
  {
    v128 = _errno_location();
    snprintf(v147, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v128, "api.c", "api", 5592);
    sub_3F1C0(3, v147, 1);
    sub_132C4(1);
  }
  if ( byte_75AAD )
  {
    if ( sub_346C4((int)v160, 0, (void *(*)(void *))sub_38544, v160) )
    {
      v129 = sub_36BC8(&stru_75AB8, "api.c", "api", 5598);
      off_72D00(v129);
      strcpy(v147, "API failed to initiate a restart - aborting");
      sub_3F1C0(3, v147, 1);
      sub_132C4(1);
    }
    goto LABEL_320;
  }
  if ( byte_75AAE )
  {
    if ( sub_346C4((int)v160, 0, (void *(*)(void *))sub_386BC, v160) )
    {
      v130 = sub_36BC8(&stru_75AB8, "api.c", "api", 5607);
      off_72D00(v130);
      strcpy(v147, "API failed to initiate a clean quit - aborting");
      sub_3F1C0(3, v147, 1);
      sub_132C4(1);
    }
LABEL_320:
    pthread_detach(v160[3]);
  }
  v131 = sub_36BC8(&stru_75AB8, "api.c", "api", 5613);
  off_72D00(v131);
}
