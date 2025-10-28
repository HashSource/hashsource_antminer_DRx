int __fastcall sub_C2A8(int a1, FILE *a2, int a3)
{
  int *v6; // r8
  const char *v7; // r0
  int v8; // r0
  const char *v9; // r0
  int v10; // r4
  const char *v11; // r2
  _DWORD *v12; // r4
  const char *v13; // r0
  _DWORD *i; // r8
  _DWORD *v15; // r4
  const char *v16; // r0
  const char *v17; // r9
  const char *v18; // r0
  int v19; // r3
  const char *v20; // r0
  int v21; // r4
  const char *v22; // r0
  int v23; // r2
  const char *v24; // r2
  const char *v25; // r2
  _DWORD *v26; // r4
  int v27; // r2
  int v28; // r2
  int v29; // r5
  int v30; // r4
  const char *v31; // r0
  int v33; // r8
  int v34; // r0
  const char *v35; // r0
  const char *v36; // r0
  const char *v37; // r0
  const char *v38; // r0
  int v39; // r8
  const char *v40; // r0
  int j; // r9
  const char **v42; // r4
  const char *v43; // r0
  const char *v44; // r2
  int v45; // r2
  int v46; // r2
  int v47; // r5
  const char *v48; // r4
  int v49; // r2
  int v50; // r2
  double v51; // d16
  _DWORD *k; // r4
  const char *v53; // r0
  const char ***v54; // r8
  const char *v55; // r4
  int *v56; // r4
  const char *v57; // r0
  int v58; // r0
  const char *v59; // r0
  _DWORD *v60; // r4
  _DWORD *v61; // r4
  int m; // r4
  _DWORD *v63; // r4
  const char *v64; // r0
  int n; // r5
  const char *v66; // r2
  const char **v67; // r3
  _DWORD *ii; // r4
  const char *v69; // r0
  _DWORD *jj; // r4
  const char *v71; // r5
  const char *v72; // r3
  const char *v73; // r0
  const char *v74; // r0
  const char *v75; // r0
  const char *v76; // r0
  const char **v77; // r4
  int v78; // r4
  _DWORD *kk; // r4
  char *v80; // r5
  char *v81; // r8
  _DWORD *v82; // r4
  int mm; // r10
  const char **v84; // r5
  _DWORD *nn; // r4
  struct tm *v87; // r0
  size_t v88; // r0
  int v89; // r12
  const char *v90; // r3
  const char *v91; // [sp+0h] [bp-5Ch]
  char s[84]; // [sp+8h] [bp-54h] BYREF

  if ( dword_7CF4C > 0 )
    printf("dump_config_tree(%p)\n", (const void *)a1);
  if ( a3 )
  {
    v87 = localtime((const time_t *)(a1 + 32));
    v88 = strftime(s, 0x50u, "%Y-%m-%d %H:%M:%S", v87);
    v89 = *(_DWORD *)(a1 + 8);
    v90 = "startup configuration file";
    v91 = *(const char **)(a1 + 16);
    if ( !v88 )
      s[0] = 0;
    if ( v89 == 1 )
      v90 = "ntpq remote config from";
    fprintf(a2, "# %s %s %s\n", s, v90, v91);
  }
  v6 = (int *)sub_10DB4(*(_DWORD *)(a1 + 156));
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == 326 )
        goto LABEL_16;
      if ( *v6 <= 326 )
      {
        if ( v8 == 273 )
        {
          v36 = (const char *)sub_182B8(273);
          fprintf(a2, "%s %d\n", v36, v6[2]);
          goto LABEL_10;
        }
        if ( v8 > 273 )
        {
          if ( v8 == 287 || v8 == 321 )
            goto LABEL_16;
        }
        else if ( v8 == 270 )
        {
          goto LABEL_72;
        }
LABEL_9:
        v7 = (const char *)sub_1821C(v8);
        fprintf(a2, "\n# dump error:\n# unknown vars token %s\n", v7);
LABEL_10:
        v6 = (int *)sub_10D84(v6);
        if ( !v6 )
          break;
      }
      else
      {
        if ( v8 != 377 )
        {
          if ( v8 > 377 )
          {
            if ( v8 == 389 || v8 == 403 )
            {
LABEL_72:
              v35 = (const char *)sub_182B8(v8);
              fprintf(a2, "%s %g\n", v35, *((double *)v6 + 1));
              goto LABEL_10;
            }
          }
          else if ( v8 == 363 )
          {
            goto LABEL_16;
          }
          goto LABEL_9;
        }
LABEL_16:
        v9 = (const char *)sub_182B8(v8);
        fprintf(a2, "%s \"%s\"\n", v9, (const char *)v6[2]);
        v6 = (int *)sub_10D84(v6);
        if ( !v6 )
          break;
      }
    }
  }
  v10 = sub_10DB4(*(_DWORD *)(a1 + 132));
  if ( v10 )
  {
    fwrite("logconfig", 1u, 9u, a2);
    do
    {
      fprintf(a2, " %c%s", *(_DWORD *)v10, *(const char **)(v10 + 8));
      v10 = sub_10D84(v10);
    }
    while ( v10 );
    fputc(10, a2);
  }
  v11 = *(const char **)(a1 + 64);
  if ( v11 )
    fprintf(a2, "statsdir \"%s\"\n", v11);
  v12 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 60));
  if ( v12 )
  {
    fwrite("statistics", 1u, 0xAu, a2);
    do
    {
      v13 = (const char *)sub_182B8(*v12);
      fprintf(a2, " %s", v13);
      v12 = (_DWORD *)sub_10D84(v12);
    }
    while ( v12 );
    fputc(10, a2);
  }
  for ( i = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 68)); i; i = (_DWORD *)sub_10D84(i) )
  {
    v15 = (_DWORD *)sub_10DB4(i[1]);
    if ( v15 )
    {
      v16 = (const char *)sub_182B8(*i);
      fprintf(a2, "filegen %s", v16);
      do
      {
        while ( 1 )
        {
          v19 = *v15;
          if ( *v15 != 399 )
            break;
          v20 = (const char *)sub_182B8(v15[2]);
          fprintf(a2, " type %s", v20);
          v15 = (_DWORD *)sub_10D84(v15);
          if ( !v15 )
            goto LABEL_36;
        }
        if ( v19 == 408 )
        {
          v37 = (const char *)sub_182B8(v15[2]);
          fprintf(a2, " %s", v37);
        }
        else if ( v19 == 293 )
        {
          fprintf(a2, " file %s", (const char *)v15[2]);
        }
        else
        {
          v17 = (const char *)sub_1821C(*v15);
          v18 = (const char *)sub_182B8(*i);
          fprintf(a2, "\n# dump error:\n# unknown filegen option token %s\nfilegen %s", v17, v18);
        }
        v15 = (_DWORD *)sub_10D84(v15);
      }
      while ( v15 );
    }
LABEL_36:
    fputc(10, a2);
  }
  v21 = sub_10DB4(*(_DWORD *)(a1 + 104));
  if ( v21 )
  {
    fwrite("crypto", 1u, 6u, a2);
    do
    {
      v22 = (const char *)sub_182B8(*(_DWORD *)v21);
      fprintf(a2, " %s %s", v22, *(const char **)(v21 + 8));
      v21 = sub_10D84(v21);
    }
    while ( v21 );
    fputc(10, a2);
  }
  v23 = *(_DWORD *)(a1 + 120);
  if ( v23 )
    fprintf(a2, "revoke %d\n", v23);
  v24 = *(const char **)(a1 + 112);
  if ( v24 )
    fprintf(a2, "keysdir \"%s\"\n", v24);
  v25 = *(const char **)(a1 + 108);
  if ( v25 )
    fprintf(a2, "keys \"%s\"\n", v25);
  v26 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 124));
  if ( v26 )
  {
    fwrite("trustedkey", 1u, 0xAu, a2);
    while ( *v26 != 105 )
    {
      if ( *v26 == 45 )
      {
        fprintf(a2, " (%u ... %u)", HIWORD(v26[2]), (unsigned __int16)v26[2]);
        v26 = (_DWORD *)sub_10D84(v26);
        if ( !v26 )
        {
LABEL_54:
          fputc(10, a2);
          goto LABEL_55;
        }
      }
      else
      {
        fprintf(a2, "\n# dump error:\n# unknown trustedkey attr %d\ntrustedkey", *v26);
LABEL_50:
        v26 = (_DWORD *)sub_10D84(v26);
        if ( !v26 )
          goto LABEL_54;
      }
    }
    fprintf(a2, " %d", v26[2]);
    goto LABEL_50;
  }
LABEL_55:
  v27 = *(_DWORD *)(a1 + 96);
  if ( v27 )
    fprintf(a2, "controlkey %d\n", v27);
  v28 = *(_DWORD *)(a1 + 116);
  if ( v28 )
    fprintf(a2, "requestkey %d\n", v28);
  v29 = 1;
  do
  {
    if ( v29 )
    {
      v30 = sub_10DB4(*(_DWORD *)(a1 + 88));
      if ( !v30 )
        continue;
      fprintf(a2, "enable");
    }
    else
    {
      v30 = sub_10DB4(*(_DWORD *)(a1 + 92));
      if ( !v30 )
        continue;
      fprintf(a2, "disable");
    }
    do
    {
      v31 = (const char *)sub_182B8(*(_DWORD *)(v30 + 8));
      fprintf(a2, " %s", v31);
      v30 = sub_10D84(v30);
    }
    while ( v30 );
    fputc(10, a2);
  }
  while ( v29-- != 0 );
  v33 = sub_10DB4(*(_DWORD *)(a1 + 56));
  if ( v33 )
  {
    fwrite("tos", 1u, 3u, a2);
    do
    {
      v34 = *(_DWORD *)v33;
      switch ( *(_DWORD *)v33 )
      {
        case 0x10A:
        case 0x112:
        case 0x114:
        case 0x12C:
        case 0x14C:
        case 0x14F:
        case 0x153:
        case 0x165:
          v73 = (const char *)sub_182B8(v34);
          fprintf(a2, " %s %d", v73, (int)*(double *)(v33 + 8));
          break;
        case 0x14D:
        case 0x150:
          v38 = (const char *)sub_182B8(v34);
          fprintf(a2, " %s %g", v38, *(double *)(v33 + 8));
          break;
        default:
          v74 = (const char *)sub_1821C(v34);
          fprintf(a2, "\n# dump error:\n# unknown tos token %s\ntos", v74);
          break;
      }
      v33 = sub_10D84(v33);
    }
    while ( v33 );
  }
  if ( sub_10DB4(*(_DWORD *)(a1 + 56)) )
    fputc(10, a2);
  v39 = sub_10DB4(*(_DWORD *)(a1 + 84));
  if ( v39 )
  {
    fwrite("tinker", 1u, 6u, a2);
    do
    {
      v40 = (const char *)sub_182B8(*(_DWORD *)v39);
      fprintf(a2, " %s %g", v40, *(double *)(v39 + 8));
      v39 = sub_10D84(v39);
    }
    while ( v39 );
    fputc(10, a2);
  }
  if ( *(_DWORD *)(a1 + 44) )
    fwrite("broadcastclient\n", 1u, 0x10u, a2);
  for ( j = sub_10DB4(*(_DWORD *)(a1 + 36)); j; j = sub_10D84(j) )
  {
    v42 = *(const char ***)(j + 4);
    v43 = (const char *)sub_182B8(*(_DWORD *)j);
    fputs(v43, a2);
    v44 = v42[1];
    if ( v44 == (const char *)2 )
    {
      fwrite(" -4", 1u, 3u, a2);
    }
    else if ( v44 == (const char *)10 )
    {
      fwrite(" -6", 1u, 3u, a2);
    }
    else if ( v44 )
    {
      fprintf(a2, "# dump error:\n# unknown peer family %d for:\npeer", v44);
    }
    fprintf(a2, " %s", *v42);
    v45 = *(_DWORD *)(j + 12);
    if ( v45 )
      fprintf(a2, " minpoll %d", v45);
    v46 = *(_DWORD *)(j + 16);
    if ( v46 )
      fprintf(a2, " maxpoll %d", v46);
    v47 = *(_DWORD *)(j + 20);
    if ( v47 )
    {
      v48 = *v42;
      if ( strlen(v48) > 8 && !memcmp(v48, "127.127.", 8u) )
        fprintf(a2, " mode %d", v47);
      else
        fprintf(a2, " ttl %d", v47);
    }
    v49 = *(_DWORD *)(j + 24);
    if ( v49 != 4 )
      fprintf(a2, " version %d", v49);
    v50 = *(_DWORD *)(j + 28);
    if ( v50 )
    {
      fprintf(a2, " key %d", v50);
      v51 = *(double *)(j + 32);
      if ( v51 == 0.0 )
        goto LABEL_106;
    }
    else
    {
      v51 = *(double *)(j + 32);
      if ( v51 == 0.0 )
        goto LABEL_106;
    }
    fprintf(a2, " bias %g", v51);
LABEL_106:
    for ( k = (_DWORD *)sub_10DB4(*(_DWORD *)(j + 8)); k; k = (_DWORD *)sub_10D84(k) )
    {
      if ( *k != 408 )
        off_7C9FC("ntp_config.c", 861, 2, "408 == atrv->attr");
      if ( k[4] != 309 )
        off_7C9FC("ntp_config.c", 862, 2, "309 == atrv->type");
      v53 = (const char *)sub_182B8(k[2]);
      fprintf(a2, " %s", v53);
    }
    fputc(10, a2);
    v54 = (const char ***)sub_10DB4(*(_DWORD *)(a1 + 80));
    if ( v54 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v55 = **v54;
          if ( !strcmp(**(const char ***)(j + 4), v55) )
            break;
          v54 = (const char ***)sub_10D84(v54);
          if ( !v54 )
            goto LABEL_128;
        }
        fprintf(a2, "fudge %s", v55);
        v56 = (int *)sub_10DB4(v54[1]);
        if ( v56 )
          break;
LABEL_127:
        fputc(10, a2);
        v54 = (const char ***)sub_10D84(v54);
        if ( !v54 )
          goto LABEL_128;
      }
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 == 373 )
          break;
        if ( *v56 <= 373 )
        {
          if ( (unsigned int)(v58 - 295) <= 3 )
          {
LABEL_163:
            v76 = (const char *)sub_182B8(v58);
            fprintf(a2, " %s %d", v76, v56[2]);
          }
          else
          {
LABEL_119:
            v57 = (const char *)sub_1821C(v58);
            fprintf(a2, "\n# dump error:\n# unknown fudge option %s\nfudge %s", v57, **v54);
          }
LABEL_120:
          v56 = (int *)sub_10D84(v56);
          if ( !v56 )
            goto LABEL_127;
          continue;
        }
        if ( v58 == 386 )
          goto LABEL_163;
        if ( v58 < 386 || (unsigned int)(v58 - 390) > 1 )
          goto LABEL_119;
        v59 = (const char *)sub_182B8(v58);
        fprintf(a2, " %s %g", v59, *((double *)v56 + 1));
        v56 = (int *)sub_10D84(v56);
        if ( !v56 )
          goto LABEL_127;
      }
      v75 = (const char *)sub_182B8(373);
      fprintf(a2, " %s %s", v75, (const char *)v56[2]);
      goto LABEL_120;
    }
LABEL_128:
    ;
  }
  v60 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 48));
  if ( v60 )
  {
    fprintf(a2, "manycastserver %s", *v60);
    while ( 1 )
    {
      v60 = (_DWORD *)sub_10D84(v60);
      if ( !v60 )
        break;
      fprintf(a2, " %s", *v60);
    }
    fputc(10, a2);
  }
  v61 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 52));
  if ( v61 )
  {
    fprintf(a2, "multicastclient %s", *v61);
    while ( 1 )
    {
      v61 = (_DWORD *)sub_10D84(v61);
      if ( !v61 )
        break;
      fprintf(a2, " %s", *v61);
    }
    fputc(10, a2);
  }
  for ( m = sub_10DB4(*(_DWORD *)(a1 + 40)); m; m = sub_10D84(m) )
    fprintf(a2, "unpeer %s\n", **(const char ***)(m + 4));
  v63 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 72));
  if ( v63 )
  {
    fwrite("discard", 1u, 7u, a2);
    do
    {
      v64 = (const char *)sub_182B8(*v63);
      fprintf(a2, " %s %d", v64, v63[2]);
      v63 = (_DWORD *)sub_10D84(v63);
    }
    while ( v63 );
    fputc(10, a2);
  }
  for ( n = sub_10DB4(*(_DWORD *)(a1 + 76)); n; n = sub_10D84(n) )
  {
    if ( *(_DWORD *)n )
      v66 = **(const char ***)n;
    else
      v66 = "default";
    fprintf(a2, "restrict %s", v66);
    v67 = *(const char ***)(n + 4);
    if ( v67 )
      fprintf(a2, " mask %s", *v67);
    for ( ii = (_DWORD *)sub_10DB4(*(_DWORD *)(n + 8)); ii; ii = (_DWORD *)sub_10D84(ii) )
    {
      v69 = (const char *)sub_182B8(*ii);
      fprintf(a2, " %s", v69);
    }
    fputc(10, a2);
  }
  for ( jj = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 160)); jj; jj = (_DWORD *)sub_10D84(jj) )
  {
    v71 = (const char *)sub_182B8(jj[2]);
    if ( *jj )
      v72 = (const char *)sub_182B8(*jj);
    else
      v72 = (const char *)jj[1];
    fprintf(a2, "interface %s %s\n", v71, v72);
  }
  v77 = (const char **)sub_10DB4(*(_DWORD *)(a1 + 140));
  if ( v77 )
  {
    fwrite("phone", 1u, 5u, a2);
    do
    {
      fprintf(a2, " %s", *v77);
      v77 = (const char **)sub_10D84(v77);
    }
    while ( v77 );
    fputc(10, a2);
  }
  v78 = sub_10DB4(*(_DWORD *)(a1 + 136));
  if ( v78 )
  {
    fwrite("qos", 1u, 3u, a2);
    do
    {
      fprintf(a2, " %s", *(const char **)(v78 + 8));
      v78 = sub_10D84(v78);
    }
    while ( v78 );
    fputc(10, a2);
  }
  for ( kk = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 144)); kk; kk = (_DWORD *)sub_10D84(kk) )
  {
    v80 = (char *)sub_184FC(*kk);
    v81 = (char *)sub_184FC(kk[1]);
    fprintf(a2, "setvar %s = %s", v80, v81);
    free(v80);
    free(v81);
    if ( kk[2] )
      fwrite(" default", 1u, 8u, a2);
    fputc(10, a2);
  }
  v82 = (_DWORD *)sub_10DB4(*(_DWORD *)(a1 + 148));
  if ( v82 )
  {
    fwrite("ttl", 1u, 3u, a2);
    do
    {
      fprintf(a2, " %d", *v82);
      v82 = (_DWORD *)sub_10D84(v82);
    }
    while ( v82 );
    fputc(10, a2);
  }
  for ( mm = sub_10DB4(*(_DWORD *)(a1 + 152)); mm; mm = sub_10D84(mm) )
  {
    v84 = *(const char ***)mm;
    fprintf(a2, "trap %s", **(const char ***)mm);
    for ( nn = (_DWORD *)sub_10DB4(*(_DWORD *)(mm + 4)); nn; nn = (_DWORD *)sub_10D84(nn) )
    {
      while ( *nn == 310 )
      {
        v84 = (const char **)nn[2];
        fprintf(a2, " interface %s", *v84);
        nn = (_DWORD *)sub_10D84(nn);
        if ( !nn )
          goto LABEL_194;
      }
      if ( *nn == 365 )
        fprintf(a2, " port %d", nn[2]);
      else
        fprintf(a2, "\n# dump error:\n# unknown trap token %d\ntrap %s", *nn, *v84);
    }
LABEL_194:
    fputc(10, a2);
  }
  return 0;
}
