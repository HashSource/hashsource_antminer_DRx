void __fastcall sub_3646C(int a1)
{
  double v1; // d0
  int *v2; // r0
  _BYTE *v3; // r0
  _DWORD *v4; // r0
  char *v5; // r3
  int v6; // r2
  bool v7; // zf
  const char *v8; // r4
  size_t v9; // r5
  char *v10; // r0
  unsigned __int8 *v11; // r4
  char *v12; // r0
  char *v13; // r0
  int v14; // r3
  const __int32_t *v15; // r2
  int v16; // r8
  __int32_t v17; // r1
  unsigned __int8 *v18; // r6
  int v19; // r10
  char *v20; // r0
  char *v21; // r7
  const char *v22; // r9
  _UNKNOWN **v23; // r5
  int v24; // r4
  const char *v25; // t1
  const char *v26; // r4
  char *v27; // r3
  const char *v28; // r2
  _BYTE *v29; // r6
  char *v30; // r7
  const char *v31; // r9
  size_t v32; // r0
  int v33; // r5
  size_t v34; // r0
  char *v35; // r0
  int *v36; // r4
  const char *v37; // r5
  char *v38; // r7
  const char *v39; // t1
  size_t v40; // r0
  const char *v41; // t1
  const __int32_t *v42; // r2
  __int32_t v43; // r3
  int v44; // r5
  size_t v45; // r0
  char *v46; // r0
  const char *v47; // r5
  size_t v48; // r0
  char *v49; // r0
  char *v50; // r11
  char *v51; // r2
  size_t v52; // r0
  int v53; // r3
  int v54; // t1
  int v55; // r7
  int v56; // r3
  char *v57; // r6
  bool v58; // zf
  unsigned __int8 *v59; // r6
  int v60; // t1
  bool v61; // zf
  char *v62; // r0
  const unsigned __int16 **v63; // r0
  int v64; // r1
  const __int32_t *v65; // r3
  char v66; // r2
  char *v67; // r5
  int v68; // r9
  int v69; // r3
  char *v70; // r5
  unsigned __int8 v71; // r2
  char *v72; // r0
  int v73; // r9
  int i; // r3
  int j; // r3
  char v76; // t1
  int v77; // r0
  int v78; // r2
  int v79; // r2
  int v80; // r3
  char *v81; // r1
  int v82; // r0
  int v83; // r3
  char *v84; // r1
  int v85; // r12
  __int32_t v86; // r1
  unsigned __int8 *v87; // r4
  int v88; // r2
  char *v89; // r3
  struct addrinfo *v90; // r12
  struct addrinfo *v91; // r4
  int v92; // r0
  time_t v93; // r9
  int v94; // r9
  _DWORD *v95; // r11
  int v96; // r0
  _BOOL4 v97; // r5
  const char *v98; // r2
  ssize_t v99; // r0
  ssize_t v100; // r6
  int v101; // r3
  int v102; // r5
  time_t v103; // r0
  _BYTE *v104; // r1
  char *v105; // r0
  char *v106; // r10
  const char *v107; // r8
  size_t v108; // r0
  char *v109; // r7
  char *v110; // r0
  const char *v111; // r1
  _UNKNOWN **v112; // r10
  int v113; // r6
  const char *v114; // t1
  int v115; // r3
  int v116; // r6
  int v117; // r3
  int v118; // r3
  int *v119; // r0
  char *v120; // r10
  int *v121; // r0
  char *v122; // r0
  int *v123; // r0
  char *v124; // r0
  int v125; // r0
  int v126; // r12
  __int32_t v127; // r2
  char *v128; // r0
  int *v129; // r0
  char *v130; // r0
  const char *v131; // r3
  int *v132; // r0
  int *v133; // r0
  char *v134; // r0
  _DWORD *v135; // r0
  int *v136; // r0
  char *v137; // r0
  _DWORD *v138; // r0
  size_t v139; // r0
  int *v140; // r3
  char *v141; // r0
  int v142; // r3
  int v143; // r0
  int v144; // [sp+10h] [bp-4B9Ch]
  unsigned __int8 *v145; // [sp+14h] [bp-4B98h]
  const __int32_t **v146; // [sp+20h] [bp-4B8Ch]
  char *dest; // [sp+28h] [bp-4B84h]
  int *ptr; // [sp+2Ch] [bp-4B80h]
  int fd; // [sp+34h] [bp-4B78h]
  _DWORD *v150; // [sp+38h] [bp-4B74h]
  char *haystack; // [sp+3Ch] [bp-4B70h]
  __int16 v152; // [sp+40h] [bp-4B6Ch]
  char *s; // [sp+48h] [bp-4B64h]
  char *v155; // [sp+6Ch] [bp-4B40h]
  unsigned __int8 v156; // [sp+72h] [bp-4B3Ah] BYREF
  char v157; // [sp+73h] [bp-4B39h] BYREF
  const char *v158; // [sp+74h] [bp-4B38h] BYREF
  socklen_t addr_len; // [sp+78h] [bp-4B34h] BYREF
  struct addrinfo *v160; // [sp+7Ch] [bp-4B30h] BYREF
  int optval; // [sp+80h] [bp-4B2Ch] BYREF
  char service[12]; // [sp+84h] [bp-4B28h] BYREF
  struct addrinfo req; // [sp+90h] [bp-4B1Ch] BYREF
  char v164[100]; // [sp+B0h] [bp-4AFCh] BYREF
  struct sockaddr addr; // [sp+114h] [bp-4A98h] BYREF
  char v166[252]; // [sp+194h] [bp-4A18h] BYREF
  struct __jmp_buf_tag env; // [sp+290h] [bp-491Ch] BYREF
  char needle[2040]; // [sp+3A8h] [bp-4804h] BYREF
  char v169[8152]; // [sp+BA8h] [bp-4004h] BYREF
  char v170[8024]; // [sp+2BA8h] [bp-2004h] BYREF

  v152 = dword_60170;
  v2 = (int *)malloc(4u);
  v7 = byte_63D71 == 0;
  ptr = v2;
  *v2 = -1;
  if ( v7 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(v170, 0x800u, "API not running%s", " - API will not be available");
      sub_38438(7, v170, 0);
    }
    goto LABEL_7;
  }
  v150 = malloc(0x10u);
  v3 = malloc(0x10000u);
  v150[1] = v3;
  v150[2] = v3;
  *((_BYTE *)v150 + 12) = 1;
  *v150 = 0x10000;
  *v3 = 0;
  *((_BYTE *)v150 + 13) = 0;
  v4 = malloc(0xCu);
  v5 = &byte_62F64;
  v6 = dword_62F88;
  v7 = dword_62F88 == 0;
  *v4 = v150;
  if ( v7 )
  {
    v4[1] = v4;
    v4[2] = v4;
  }
  else
  {
    v4[2] = v6;
    v5 = *(char **)(v6 + 4);
  }
  if ( v7 )
  {
    *((_DWORD *)v5 + 9) = v4;
  }
  else
  {
    v4[1] = v5;
    *(_DWORD *)(v6 + 4) = v4;
    v5 = (char *)v4[1];
  }
  if ( !v7 )
    *((_DWORD *)v5 + 2) = v4;
  if ( pthread_mutex_init(&stru_62F70, 0) )
  {
    v132 = _errno_location();
    snprintf(v170, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v132, "api.c", "api", 5279);
    sub_38438(3, v170, 1);
    sub_16724(1);
  }
  if ( _sigsetjmp(&env, 0) )
  {
    sub_32320(ptr);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
    goto LABEL_308;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
  v8 = (const char *)dword_63EE4;
  dword_62F94 = a1;
  if ( dword_63EE4 )
  {
    v9 = strlen((const char *)dword_63EE4) + 1;
  }
  else
  {
    v8 = "";
    v9 = 1;
  }
  v10 = (char *)malloc(v9);
  s = v10;
  if ( !v10 )
  {
    strcpy(v170, "Failed to malloc ipgroups buf");
    sub_38438(3, v170, 1);
    sub_16724(1);
  }
  memcpy(v10, v8, v9);
  if ( !*s )
  {
    v146 = _ctype_toupper_loc();
    goto LABEL_69;
  }
  v11 = (unsigned __int8 *)s;
  v146 = _ctype_toupper_loc();
  while ( 2 )
  {
    v12 = strchr((const char *)v11, 44);
    v145 = (unsigned __int8 *)v12;
    if ( v12 )
    {
      *v12 = 0;
      v145 = (unsigned __int8 *)(v12 + 1);
    }
    if ( v11[1] != 58 )
    {
      v13 = strchr((const char *)v11, 58);
      if ( v13 )
        *v13 = 0;
      snprintf(v169, 0x800u, "API invalid group name '%s'", v11);
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    v14 = *v11;
    v15 = *v146;
    v16 = LOBYTE((*v146)[v14]);
    v17 = (*v146)[v16];
    if ( v17 < (*v146)[65] || v17 > v15[90] )
    {
      snprintf(v169, 0x800u, "API invalid group name '%c'", v14);
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    if ( v16 == v15[87] )
    {
      snprintf(v169, 0x800u, "API group name can't be '%c'", v16);
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    if ( v16 == v15[82] )
    {
      snprintf(v169, 0x800u, "API group name can't be '%c'", v16);
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    if ( *((_DWORD *)&unk_642C4 + v15[v16] - v15[65]) )
    {
      snprintf(v169, 0x800u, "API duplicate group name '%c'", *v11);
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    v18 = v11 + 2;
    v19 = 0;
    strcpy(v170, "|");
    if ( v11 == (unsigned __int8 *)-2 || !v11[2] )
      goto LABEL_61;
    dest = &v170[1];
    while ( 1 )
    {
      v20 = strchr((const char *)v18, 58);
      v21 = v20;
      if ( v20 )
      {
        *v20 = 0;
        v21 = v20 + 1;
      }
      if ( *v18 == 42 && !v18[1] )
      {
        v19 = 1;
        goto LABEL_42;
      }
      v22 = (const char *)off_607CC;
      if ( !off_607CC )
      {
LABEL_65:
        snprintf(v169, 0x800u, "API unknown command '%s' in group '%c'", v18, v16);
        sub_38438(3, v169, 1);
        sub_16724(1);
      }
      v23 = &off_607CC;
      v24 = 0;
      while ( strcasecmp((const char *)v18, v22) )
      {
        v25 = (const char *)v23[3];
        v23 += 3;
        v22 = v25;
        ++v24;
        if ( !v25 )
          goto LABEL_65;
      }
      sprintf(needle, "|%s|", v22);
      if ( !strstr(v170, needle) )
        break;
LABEL_42:
      if ( !v21 )
        goto LABEL_54;
LABEL_43:
      if ( !*v21 )
        goto LABEL_54;
      v18 = (unsigned __int8 *)v21;
    }
    v26 = (const char *)dword_6039C[3 * v24 + 268];
    strcpy(dest, v26);
    v27 = &dest[strlen(v26)];
    *v27 = 124;
    dest = v27 + 1;
    v27[1] = 0;
    if ( v21 )
      goto LABEL_43;
LABEL_54:
    if ( v19 )
    {
      v28 = (const char *)off_607CC;
      if ( off_607CC )
      {
        v29 = &unk_607D4;
        v30 = dest;
        do
        {
          while ( 1 )
          {
            if ( !*v29 )
            {
              sprintf(needle, "|%s|", v28);
              if ( !strstr(v170, needle) )
                break;
            }
            v29 += 12;
            v28 = (const char *)*((_DWORD *)v29 - 2);
            if ( !v28 )
              goto LABEL_61;
          }
          v31 = (const char *)*((_DWORD *)v29 - 2);
          v29 += 12;
          strcpy(v30, v31);
          v32 = strlen(v31);
          v30[v32] = 124;
          v30 += v32 + 1;
          *v30 = 0;
          v28 = (const char *)*((_DWORD *)v29 - 2);
        }
        while ( v28 );
      }
    }
LABEL_61:
    v33 = (*v146)[v16] - (*v146)[65];
    v34 = strlen(v170);
    v35 = (char *)malloc(v34 + 1);
    *((_DWORD *)&unk_642C4 + v33) = v35;
    if ( !v35 )
    {
      strcpy(v169, "Failed to malloc group commands buf");
      sub_38438(3, v169, 1);
      sub_16724(1);
    }
    strcpy(v35, v170);
    if ( v145 && *v145 )
    {
      v11 = v145;
      continue;
    }
    break;
  }
LABEL_69:
  v36 = dword_6039C;
  v37 = (const char *)off_607CC;
  if ( off_607CC )
    v36 = (int *)&off_607CC;
  strcpy(v170, "|");
  if ( off_607CC )
  {
    v38 = &v170[1];
    do
    {
      while ( *((_BYTE *)v36 + 8) )
      {
        v39 = (const char *)v36[3];
        v36 += 3;
        v37 = v39;
        if ( !v39 )
          goto LABEL_77;
      }
      strcpy(v38, v37);
      v40 = strlen(v37);
      v38[v40] = 124;
      v38 += v40 + 1;
      *v38 = 0;
      v41 = (const char *)v36[3];
      v36 += 3;
      v37 = v41;
    }
    while ( v41 );
  }
LABEL_77:
  v42 = *v146;
  v43 = (*v146)[82];
  if ( (unsigned int)(v43 + 128) < 0x180 )
    v43 = v42[v43];
  v44 = v43 - v42[65];
  v45 = strlen(v170);
  v46 = (char *)malloc(v45 + 1);
  *((_DWORD *)&unk_642C4 + v44) = v46;
  if ( !v46 )
  {
LABEL_308:
    strcpy(v169, "Failed to malloc noprivgroup commands buf");
    sub_38438(3, v169, 1);
    sub_16724(1);
  }
  strcpy(v46, v170);
  free(s);
  v47 = (const char *)dword_62F4C;
  if ( !dword_62F4C )
    goto LABEL_114;
  v48 = strlen((const char *)dword_62F4C);
  v49 = (char *)malloc(v48 + 1);
  v50 = v49;
  if ( !v49 )
  {
    strcpy(v170, "Failed to malloc ipaccess buf");
    sub_38438(3, v170, 1);
    sub_16724(1);
  }
  strcpy(v49, v47);
  v51 = v50 - 1;
  v52 = 1;
  while ( 1 )
  {
    v54 = (unsigned __int8)*++v51;
    v53 = v54;
    if ( !v54 )
      break;
    if ( v53 == 44 )
      ++v52;
  }
  dword_62F6C = (int)calloc(v52, 0x24u);
  if ( !dword_62F6C )
  {
    strcpy(v170, "Failed to calloc ipaccess");
    sub_38438(3, v170, 1);
    sub_16724(1);
  }
  v55 = 0;
  dword_62F68 = 0;
  if ( !v50 || (v56 = (unsigned __int8)*v50, !*v50) )
  {
    free(v50);
    goto LABEL_158;
  }
  v57 = v50;
  do
  {
    v58 = v56 == 32;
    if ( v56 != 32 )
      v58 = v56 == 9;
    if ( v58 )
    {
      v59 = (unsigned __int8 *)(v57 + 1);
      do
      {
        v87 = v59;
        v60 = *v59++;
        v56 = v60;
        v61 = v60 == 32;
        if ( v60 != 32 )
          v61 = v56 == 9;
      }
      while ( v61 );
    }
    else
    {
      v87 = (unsigned __int8 *)v57;
    }
    if ( v56 == 44 )
    {
      v57 = (char *)(v87 + 1);
    }
    else
    {
      v62 = strchr((const char *)v87, 44);
      v57 = v62;
      if ( v62 )
      {
        *v62 = 0;
        v57 = v62 + 1;
      }
      v63 = _ctype_b_loc();
      v64 = *v87;
      v65 = *v146;
      v66 = *((_BYTE *)*v146 + 328);
      if ( ((*v63)[v64] & 0x400) != 0 && v87[1] == 58 )
      {
        v86 = v65[v64];
        if ( v86 == v65[87] || *((_DWORD *)&unk_642C4 + v86 - v65[65]) )
          v66 = v86;
        v87 += 2;
      }
      v67 = (char *)(dword_62F6C + 36 * v55);
      v67[32] = v66;
      v68 = *v87;
      if ( v68 == 48 && v87[1] == 47 && v87[2] == 48 )
      {
        v69 = v87[3];
        if ( !v87[3] )
        {
          v70 = v67 - 1;
          v71 = v87[3];
          do
          {
            ++v69;
            *++v70 = v71;
            v70[16] = v71;
          }
          while ( v69 != 16 );
          goto LABEL_110;
        }
      }
      v72 = strchr((const char *)v87, 47);
      if ( !v72 )
      {
        v88 = 0;
        v89 = v67;
        do
        {
          ++v88;
          v89[16] = -1;
          ++v89;
        }
        while ( v88 != 16 );
        v68 = *v87;
        v72 = (char *)&v87[strlen((const char *)v87)];
      }
      if ( v68 == 91 && *(v72 - 1) == 93 )
      {
        v73 = 1;
        *v87++ = 0;
        *(v72 - 1) = 0;
      }
      else
      {
        v73 = 0;
      }
      if ( !*v72 )
        goto LABEL_124;
      *v72 = 0;
      v77 = strtol(v72 + 1, 0, 10);
      if ( v77 > 0 )
      {
        v78 = v73 ? 0 : 96;
        v79 = v77 + v78;
        if ( v79 <= 128 )
        {
          v80 = 0;
          v81 = v67;
          v82 = 0;
          do
          {
            ++v80;
            v81[16] = 0;
            ++v81;
          }
          while ( v80 != 16 );
          v83 = 7;
          while ( v79 > 0 )
          {
            v84 = &v67[v82];
            if ( !v83 )
              ++v82;
            --v79;
            v85 = (unsigned __int8)v84[16] | (1 << v83);
            if ( v83 )
              --v83;
            else
              v83 = 7;
            v84[16] = v85;
          }
LABEL_124:
          for ( i = 0; i != 16; ++i )
            v67[i] = 0;
          if ( v73 )
          {
            if ( inet_pton(10, (const char *)v87, v67) != 1 )
              goto LABEL_111;
          }
          else
          {
            sprintf(v170, "::ffff:%s", v87);
            v55 = dword_62F68;
            v67 = (char *)(dword_62F6C + 36 * dword_62F68);
            if ( inet_pton(10, v170, v67) != 1 )
              goto LABEL_111;
          }
          for ( j = 0; j != 16; ++j )
          {
            v76 = *v67++;
            *(v67 - 1) = v76 & v67[15];
          }
LABEL_110:
          dword_62F68 = ++v55;
        }
      }
    }
LABEL_111:
    if ( !v57 )
      break;
    v56 = (unsigned __int8)*v57;
  }
  while ( *v57 );
  free(v50);
  if ( !v55 )
  {
LABEL_158:
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      snprintf(v170, 0x800u, "API not running (no valid IPs specified)%s", " - API will not be available");
      sub_38438(4, v170, 0);
    }
    goto LABEL_7;
  }
LABEL_114:
  sub_2B21C();
  sprintf(service, "%d", v152);
  req.ai_flags = 1;
  memset(&req.ai_family, 0, 28);
  if ( getaddrinfo(off_6016C, service, &req, &v160) )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      snprintf(v170, 0x800u, "API failed to resolve %s", off_6016C);
LABEL_119:
      sub_38438(3, v170, 0);
    }
    goto LABEL_7;
  }
  v90 = v160;
  if ( v160 )
  {
    v91 = v160;
    while ( 1 )
    {
      v92 = socket(v90->ai_family, 1, 0);
      *ptr = v92;
      if ( v92 > 0 )
        break;
      v91 = v91->ai_next;
      if ( !v91 )
        goto LABEL_240;
      v90 = v160;
    }
  }
  else
  {
    v92 = *ptr;
LABEL_240:
    if ( v92 == -1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        v121 = _errno_location();
        v122 = strerror(*v121);
        snprintf(v170, 0x800u, "API initialisation failed (%s)%s", v122, " - API will not be available");
        sub_38438(3, v170, 0);
      }
      freeaddrinfo(v160);
      free(ptr);
      return;
    }
    v91 = 0;
  }
  optval = 1;
  if ( setsockopt(v92, 1, 2, &optval, 4u) < 0 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    v123 = _errno_location();
    v124 = strerror(*v123);
    snprintf(v170, 0x800u, "API setsockopt SO_REUSEADDR failed (ignored): %s", v124);
    sub_38438(7, v170, 0);
  }
  v93 = time(0);
  while ( 2 )
  {
    if ( bind(*ptr, v91->ai_addr, v91->ai_addrlen) >= 0 )
    {
      freeaddrinfo(v160);
      if ( listen(*ptr, 100) < 0 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          v133 = _errno_location();
          v134 = strerror(*v133);
          snprintf(v170, 0x800u, "API3 initialisation failed (%s)%s", v134, " - API will not be available");
          sub_38438(3, v170, 0);
        }
        close(*ptr);
        goto LABEL_7;
      }
      if ( !dword_62F4C )
      {
        if ( byte_63D64 )
        {
          if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
            goto LABEL_180;
          snprintf(v170, 0x800u, "API running in UNRESTRICTED read access mode on port %d (%d)", v152, *ptr);
        }
        else
        {
          if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 3 )
            goto LABEL_180;
          snprintf(v170, 0x800u, "API running in local read access mode on port %d (%d)", v152, *ptr);
        }
LABEL_179:
        sub_38438(4, v170, 0);
        goto LABEL_180;
      }
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(v170, 0x800u, "API running in IP access mode on port %d (%d)", v152, *ptr);
        goto LABEL_179;
      }
LABEL_180:
      if ( byte_63BC4 )
        sub_363A4();
      dword_62F8C = sub_38C34("StrBufs", 12, 2, 0, 0, "api.c", "api", 5391);
      if ( !byte_62F64 )
      {
        v94 = 0;
        v95 = 0;
        while ( 1 )
        {
          v96 = *ptr;
          addr_len = 128;
          fd = accept(v96, &addr, &addr_len);
          if ( fd < 0 )
            break;
          v97 = sub_30928(&addr, &v158, &v156);
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            if ( v97 )
              LOWORD(v98) = 14040;
            else
              LOWORD(v98) = 14052;
            HIWORD(v98) = 5;
            snprintf(needle, 0x800u, "API: connection from %s - %s", v158, v98);
            sub_38438(7, needle, 0);
          }
          if ( v97 )
          {
            v99 = recv(fd, v169, 0x1FFFu, 0);
            v100 = v99;
            if ( v99 < 0 )
            {
              v169[0] = 0;
              if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                v136 = _errno_location();
                v137 = strerror(*v136);
                snprintf(needle, 0x800u, "API: recv failed: %s", v137);
                sub_38438(7, needle, 0);
              }
            }
            else
            {
              v101 = (unsigned __int8)byte_630C1;
              v169[v99] = 0;
              if ( v101 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
              {
                snprintf(needle, 0x800u, "API: recv command: (%d) '%s'", v99, v169);
                sub_38438(7, needle, 0);
              }
              v102 = 0;
              v103 = time(0);
              v104 = (_BYTE *)v150[1];
              v150[2] = v104;
              dword_62F90 = v103;
              *v104 = 0;
              *((_BYTE *)v150 + 13) = 0;
              if ( v169[0] != 123 )
              {
                v105 = strchr(v169, 124);
                v106 = v105;
                if ( v105 )
                {
                  *v105 = 0;
                  v106 = v105 + 1;
                }
                else
                {
                  v102 = 0;
                }
                v107 = v169;
LABEL_205:
                if ( strchr(v107, 43) )
                {
                  v157 = 1;
                  v108 = strlen(v107);
                  haystack = (char *)malloc(v108 + 3);
                  if ( !haystack )
                  {
                    snprintf(needle, 0x800u, "OOM cmdsbuf in %s %s():%d", "api.c", "api", 5502);
                    sub_38438(3, needle, 1);
                    sub_16724(1);
                  }
                  v94 = 1;
                  v106 = 0;
                  *(_WORD *)haystack = 124;
                }
                else
                {
                  haystack = 0;
                  v94 = 0;
                  v157 = 0;
                }
                v109 = (char *)v107;
                v155 = v106;
                while ( 2 )
                {
                  if ( !v94 )
                    goto LABEL_214;
                  v110 = strchr(v109, 43);
                  v107 = v110;
                  if ( v110 )
                  {
                    *v110 = 0;
                    v107 = v110 + 1;
                  }
                  if ( !*v109 )
                  {
LABEL_220:
                    v109 = (char *)v107;
                  }
                  else
                  {
LABEL_214:
                    v111 = (const char *)off_607CC;
                    if ( off_607CC )
                    {
                      v112 = &off_607CC;
                      v113 = 0;
                      while ( strcmp(v109, v111) )
                      {
                        v114 = (const char *)v112[3];
                        v112 += 3;
                        v111 = v114;
                        ++v113;
                        if ( !v114 )
                          goto LABEL_253;
                      }
                      sprintf(v164, "|%s|", v109);
                      if ( v94 )
                      {
                        if ( strstr(haystack, v164) )
                          goto LABEL_220;
                        v139 = strlen(haystack);
                        *(_WORD *)stpcpy(&haystack[v139], v109) = 124;
                        sub_3079C(v150, v109, v102, &v157);
                        v140 = &dword_6039C[3 * v113];
                        if ( !*((_BYTE *)v140 + 1081) )
                        {
                          sub_32F3C(v150, 45, *((unsigned __int8 *)v140 + 1081), v140[268], v102);
                          sub_31E94((int)v150, v102);
                          goto LABEL_220;
                        }
                      }
                      v126 = v156;
                      v127 = (*v146)[v156];
                      if ( v127 == (*v146)[87]
                        || (v144 = v156,
                            v128 = strstr(*((const char **)&unk_642C4 + v127 - (*v146)[65]), v164),
                            v126 = v144,
                            v128) )
                      {
                        ((void (__fastcall *)(_DWORD *, int, char *, int, int))dword_6039C[3 * v113 + 269])(
                          v150,
                          fd,
                          v155,
                          v102,
                          v126);
                      }
                      else
                      {
                        sub_32F3C(v150, 45, 0, dword_6039C[3 * v113 + 268], v102);
                        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
                        {
                          snprintf(
                            needle,
                            0x800u,
                            "API: access denied to '%s' for '%s' command",
                            v158,
                            (const char *)dword_6039C[3 * v113 + 268]);
                          sub_38438(7, needle, 0);
                        }
                      }
                      v125 = (int)v150;
                      if ( v94 )
                      {
LABEL_260:
                        sub_31E94(v125, v102);
                        goto LABEL_220;
                      }
                    }
                    else
                    {
LABEL_253:
                      if ( v94 )
                      {
                        sub_3079C(v150, v109, v102, &v157);
                        sub_32F3C(v150, 14, 0, 0, v102);
                        v125 = (int)v150;
                        goto LABEL_260;
                      }
                      sub_32F3C(v150, 14, 0, 0, v102);
                      v125 = (int)v150;
                    }
                    sub_30AC8(v125, fd, v102);
                  }
                  if ( v109 )
                    v115 = v94 & 1;
                  else
                    v115 = 0;
                  if ( !v115 )
                  {
                    v116 = v102;
                    goto LABEL_226;
                  }
                  continue;
                }
              }
              v135 = (_DWORD *)sub_45B3C(v169, v100, 0, v166);
              v95 = v135;
              if ( v135 && !*v135 )
              {
                v138 = (_DWORD *)sub_46698(v135, "command");
                if ( v138 )
                {
                  if ( *v138 == 2 )
                  {
                    v107 = (const char *)sub_469F0(v138);
                    v141 = (char *)sub_46698(v95, "parameter");
                    v106 = v141;
                    if ( v141 )
                    {
                      v142 = *(_DWORD *)v141;
                      if ( *(_DWORD *)v141 == 2 )
                      {
                        v102 = 1;
                        v106 = (char *)sub_469F0(v141);
                        goto LABEL_205;
                      }
                      if ( v142 == 3 )
                      {
                        v143 = sub_46AC0(v141);
                        v102 = 1;
                        v106 = v170;
                        sprintf(v170, "%d", v143);
                        goto LABEL_205;
                      }
                      if ( v142 == 4 )
                      {
                        sub_46B70();
                        v102 = 1;
                        v106 = v170;
                        sprintf(v170, "%f", v1);
                        goto LABEL_205;
                      }
                      v106 = 0;
                    }
                    v102 = 1;
                    goto LABEL_205;
                  }
                  sub_32F3C(v150, 14, 0, 0, 1u);
                }
                else
                {
                  sub_32F3C(v150, 24, 0, 0, 1u);
                }
              }
              else
              {
                sub_32F3C(v150, 23, 0, 0, 1u);
              }
              sub_30AC8((int)v150, fd, 1);
              v116 = (int)v95;
              v102 = 1;
              if ( v95 )
                v116 = 1;
LABEL_226:
              if ( v94 )
                sub_30AC8((int)v150, fd, v102);
              if ( v116 )
              {
                if ( !*v95 )
                {
                  v117 = v95[1];
                  if ( v117 != -1 )
                  {
                    v118 = v117 - 1;
                    v95[1] = v118;
                    if ( !v118 )
                      sub_46C5C(v95);
                  }
                }
              }
            }
          }
          close(fd);
          if ( byte_62F64 )
            goto LABEL_265;
        }
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          v129 = _errno_location();
          v130 = strerror(*v129);
          snprintf(needle, 0x800u, "API failed (%s)%s (%d)", v130, " - API will not be available", *ptr);
          sub_38438(3, needle, 0);
        }
      }
LABEL_265:
      _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
      sub_32320(ptr);
      free(ptr);
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        if ( byte_62F66 )
        {
          v131 = "QUIT";
        }
        else if ( byte_62F65 )
        {
          v131 = "RESTART";
        }
        else if ( byte_62F64 )
        {
          v131 = "BYE";
        }
        else
        {
          v131 = "UNKNOWN!";
        }
        snprintf(needle, 0x800u, "API: terminating due to: %s", v131);
        sub_38438(7, needle, 0);
      }
      if ( pthread_mutex_lock(&stru_62F70) )
        sub_B844("api", 5601);
      if ( byte_62F65 )
      {
        if ( sub_2F0EC((int)&env, 0, (void *(*)(void *))sub_3212C, &env) )
        {
          sub_320F0(&stru_62F70, "api", 5607);
          strcpy(needle, "API failed to initiate a restart - aborting");
          sub_38438(3, needle, 1);
          sub_16724(1);
        }
      }
      else
      {
        if ( !byte_62F66 )
        {
LABEL_280:
          if ( pthread_mutex_unlock(&stru_62F70) )
            sub_B91C("api", 5622);
          off_60178();
          return;
        }
        if ( sub_2F0EC(
               (int)&env,
               (const pthread_attr_t *)(unsigned __int8)byte_62F65,
               (void *(*)(void *))sub_32224,
               &env) )
        {
          sub_320F0(&stru_62F70, "api", 5616);
          strcpy(needle, "API failed to initiate a clean quit - aborting");
          sub_38438(3, needle, 1);
          sub_16724(1);
        }
      }
      pthread_detach(env.__jmpbuf[3]);
      goto LABEL_280;
    }
    v119 = _errno_location();
    v120 = strerror(*v119);
    if ( time(0) - v93 <= 61 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(v170, 0x800u, "API bind to port %d failed - trying again in 30sec", v152);
        sub_38438(4, v170, 0);
      }
      sub_2B21C();
      continue;
    }
    break;
  }
  freeaddrinfo(v160);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
  {
    snprintf(v170, 0x800u, "API bind to port %d failed (%s)%s", v152, v120, " - API will not be available");
    goto LABEL_119;
  }
LABEL_7:
  free(ptr);
}
