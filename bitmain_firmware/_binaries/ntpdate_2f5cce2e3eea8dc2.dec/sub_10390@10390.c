void __fastcall sub_10390(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        char *format,
        __gnuc_va_list arg)
{
  int v14; // r3
  int v15; // r2
  _DWORD *v16; // r9
  int v17; // r1
  _DWORD *v18; // r10
  _BOOL4 v19; // r3
  int v20; // r2
  int v21; // r4
  int v22; // r3
  int v23; // r2
  int v24; // r5
  unsigned int v25; // r3
  int v26; // r7
  char *v27; // r5
  int v28; // r0
  const char *v29; // r12
  const char *v30; // r6
  int v31; // r3
  const char *v32; // r2
  int v33; // r0
  const char *v34; // r3
  bool v35; // zf
  const char *v36; // r12
  bool v37; // zf
  const char *v38; // lr
  char *v39; // r4
  int v40; // r5
  int v41; // r10
  int v42; // r3
  void *v43; // r0
  FILE *v44; // r0
  bool v45; // zf
  int *v46; // r5
  const char *v47; // r2
  const char *v48; // r3
  const char *v49; // r7
  bool v50; // zf
  const char *v51; // lr
  char *v52; // r5
  int v53; // r0
  int v54; // r3
  const char *v55; // r12
  __off_t v56; // r3
  int v57; // r0
  int v58; // r3
  const char *v59; // r5
  const char *v60; // r0
  const char *v61; // r5
  const char *v62; // r0
  const char *v63; // r0
  size_t v64; // r0
  char *v65; // r0
  char *v66; // r5
  int v67; // r3
  int v68; // r3
  int v69; // r0
  int v70; // r3
  bool v71; // zf
  const char *v72; // [sp+24h] [bp-140h]
  int v73; // [sp+2Ch] [bp-138h]
  int *v74; // [sp+30h] [bp-134h]
  _DWORD *v75; // [sp+30h] [bp-134h]
  int v76; // [sp+34h] [bp-130h]
  int v77; // [sp+38h] [bp-12Ch]
  char *filename; // [sp+3Ch] [bp-128h]
  char *filenamea; // [sp+3Ch] [bp-128h]
  int v80; // [sp+40h] [bp-124h]
  _UNKNOWN **v81; // [sp+44h] [bp-120h]
  _BYTE v82[8]; // [sp+48h] [bp-11Ch] BYREF
  char v83[8]; // [sp+50h] [bp-114h] BYREF
  char s[24]; // [sp+58h] [bp-10Ch] BYREF
  _BYTE v85[64]; // [sp+70h] [bp-F4h] BYREF
  struct stat stat_buf; // [sp+B0h] [bp-B4h] BYREF
  struct stat v87; // [sp+108h] [bp-5Ch] BYREF

  if ( a1 && *(_DWORD *)a1 != 1281586296 )
    off_21DCC(
      "./../lib/isc/log.c",
      1421,
      0,
      "lctx == ((void *)0) || (((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c')"
      " << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 )
    off_21DCC("./../lib/isc/log.c", 1422, 0, "category != ((void *)0)");
  if ( !a3 )
    off_21DCC("./../lib/isc/log.c", 1423, 0, "module != ((void *)0)");
  if ( !a4 )
    off_21DCC("./../lib/isc/log.c", 1424, 0, "level != 0");
  if ( !format )
    off_21DCC("./../lib/isc/log.c", 1425, 0, "format != ((void *)0)");
  if ( a1 )
  {
    if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a1 + 12) )
      off_21DCC("./../lib/isc/log.c", 1435, 0, "category->id < lctx->category_count");
    if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 20) )
      off_21DCC("./../lib/isc/log.c", 1436, 0, "module->id < lctx->module_count");
    v14 = *(_DWORD *)(a1 + 32);
    if ( v14 )
    {
      if ( a4 <= *(_DWORD *)(v14 + 28) || *(_DWORD *)(v14 + 36) && a4 <= *(_DWORD *)(a1 + 24) )
      {
        if ( a6 )
          format = (char *)sub_F118(a6, a7, a8, (int)format);
        v15 = *(_DWORD *)(a1 + 28);
        v85[0] = 0;
        s[0] = 0;
        *(_DWORD *)(a1 + 28) = v15 + 1;
        if ( v15 )
          sub_FFB4("./../lib/isc/log.c", 1449, "((*((&lctx->lock)))++ == 0 ? 0 : 34) == 0");
        v16 = *(_DWORD **)(a1 + 32);
        v17 = 0;
        *(_BYTE *)(a1 + 36) = 0;
        v77 = -a4;
        v81 = &off_17A48 - a4;
        v18 = *(_DWORD **)(v16[4] + 8 * *(_DWORD *)(a2 + 4));
        v80 = a2;
        v73 = a4;
        v19 = v18 == 0;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (v19 & (v17 ^ 1)) != 0 )
            {
              v18 = *(_DWORD **)v16[4];
              if ( !v18 )
                v18 = &unk_24024;
            }
            if ( !*v18 || a3 == *v18 )
              break;
            v18 = (_DWORD *)v18[3];
            v20 = v17;
LABEL_20:
            v19 = v18 == 0;
            if ( (v19 & v20) != 0 )
              goto LABEL_44;
          }
          v21 = v18[1];
          v18 = (_DWORD *)v18[3];
          v22 = *(_DWORD *)(v21 + 12);
          if ( (v22 & 0x1000) != 0 && !*(_DWORD *)(a1 + 24) )
            goto LABEL_42;
          v23 = *(_DWORD *)(v21 + 8);
          if ( v23 )
          {
            if ( v73 > v23 )
            {
              v17 = 1;
              goto LABEL_43;
            }
          }
          else if ( v73 > *(_DWORD *)(a1 + 24) )
          {
            goto LABEL_42;
          }
          if ( (v22 & 1) != 0 && !v85[0] )
          {
            if ( sub_13CB8(v82) )
              sub_FFB4("./../lib/isc/log.c", 1512, "isc_time_now((&isctime)) == 0");
            sub_1452C(v82, v85, 64);
            v22 = *(_DWORD *)(v21 + 12);
          }
          if ( (v22 & 2) != 0 && !s[0] )
          {
            if ( v73 < -5 )
            {
              v63 = (const char *)sub_F118((_DWORD *)dword_2400C, 10, 802, (int)"level %d: ");
              snprintf(s, 0x18u, v63, v73);
            }
            else if ( v73 <= 0 )
            {
              snprintf(s, 0x18u, "%s: ", (const char *)*(&off_17A48 + v77));
            }
            else
            {
              snprintf(s, 0x18u, "%s %d: ", "debug", v73);
            }
          }
          v24 = *(unsigned __int8 *)(a1 + 36);
          if ( !*(_BYTE *)(a1 + 36) )
          {
            vsnprintf((char *)(a1 + 36), 0x2000u, format, arg);
            v17 = a5;
            if ( a5 )
            {
              sub_13A50(v83, v16[6], v24);
              if ( sub_13CB8(v82) )
                sub_FFB4("./../lib/isc/log.c", 1558, "isc_time_now((&oldest)) == 0");
              if ( !sub_141B8(v82, v83, v82) )
              {
                v40 = *(_DWORD *)(a1 + 8228);
                if ( v40 )
                {
                  v75 = v18;
                  while ( 1 )
                  {
                    if ( sub_13FC4(v40 + 4, v82) >= 0 )
                    {
                      if ( !strcmp((const char *)(a1 + 36), *(const char **)v40) )
                      {
                        v68 = *(_DWORD *)(a1 + 28) - 1;
                        *(_DWORD *)(a1 + 28) = v68;
                        if ( v68 )
                          sub_FFB4("./../lib/isc/log.c", 1610, "(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
                        return;
                      }
                      v40 = *(_DWORD *)(v40 + 16);
                    }
                    else
                    {
                      v41 = *(_DWORD *)(v40 + 16);
                      if ( v41 )
                      {
                        *(_DWORD *)(v41 + 12) = *(_DWORD *)(v40 + 12);
                        v42 = *(_DWORD *)(v40 + 12);
                      }
                      else
                      {
                        if ( *(_DWORD *)(a1 + 8232) != v40 )
                          off_21DCC("./../lib/isc/log.c", 1588, 2, "(lctx->messages).tail == (message)");
                        v42 = *(_DWORD *)(v40 + 12);
                        *(_DWORD *)(a1 + 8232) = v42;
                      }
                      if ( v42 )
                      {
                        *(_DWORD *)(v42 + 16) = *(_DWORD *)(v40 + 16);
                      }
                      else
                      {
                        if ( *(_DWORD *)(a1 + 8228) != v40 )
                          off_21DCC("./../lib/isc/log.c", 1588, 2, "(lctx->messages).head == (message)");
                        *(_DWORD *)(a1 + 8228) = *(_DWORD *)(v40 + 16);
                      }
                      v43 = (void *)v40;
                      *(_DWORD *)(v40 + 12) = -1;
                      *(_DWORD *)(v40 + 16) = -1;
                      v40 = v41;
                      free(v43);
                    }
                    if ( !v40 )
                    {
                      v18 = v75;
                      break;
                    }
                  }
                }
              }
              v64 = strlen((const char *)(a1 + 36));
              v65 = sub_D894(v64 + 21);
              v66 = v65;
              if ( v65 )
              {
                *(_DWORD *)v65 = v65 + 20;
                strcpy(v65 + 20, (const char *)(a1 + 36));
                if ( sub_13CB8(v66 + 4) )
                  sub_FFB4("./../lib/isc/log.c", 1632, "isc_time_now((&new->time)) == 0");
                v67 = *(_DWORD *)(a1 + 8232);
                if ( v67 )
                  *(_DWORD *)(v67 + 16) = v66;
                else
                  *(_DWORD *)(a1 + 8228) = v66;
                *((_DWORD *)v66 + 3) = v67;
                *((_DWORD *)v66 + 4) = 0;
                *(_DWORD *)(a1 + 8232) = v66;
              }
            }
          }
          v25 = *(_DWORD *)(v21 + 12);
          v26 = v25 & 0x10;
          v27 = (char *)(v25 & 1);
          if ( (v25 & 0x10) != 0 )
            v26 = v16[8] != 0;
          v28 = *(_DWORD *)(v21 + 4);
          v29 = (const char *)((v25 >> 2) & 1);
          v30 = (const char *)((v25 >> 3) & 1);
          v74 = (int *)v29;
          v76 = (v25 >> 1) & 1;
          if ( v28 != 3 )
          {
            if ( v28 == 4 )
            {
              v44 = *(FILE **)(v21 + 16);
              goto LABEL_100;
            }
            if ( v28 == 2 )
            {
              if ( v73 <= 0 )
              {
                if ( v73 >= -5 )
                  v28 = (int)v81[6];
              }
              else
              {
                v28 = 7;
              }
              if ( (v25 & 1) != 0 )
                v32 = v85;
              else
                v32 = "";
              v33 = v28 | *(_DWORD *)(v21 + 16);
              if ( (v25 & 1) != 0 )
                v34 = " ";
              else
                v34 = v32;
              v35 = v26 == 0;
              if ( v26 )
              {
                v36 = (const char *)v16[8];
                v26 = (int)": ";
              }
              else
              {
                v36 = "";
              }
              if ( v35 )
                v26 = (int)v36;
              if ( v74 )
                v27 = (char *)v80;
              else
                v17 = (int)"";
              if ( v74 )
                v17 = *(_DWORD *)v27;
              else
                v27 = (char *)v17;
              if ( v74 )
                v27 = ": ";
              v37 = v30 == 0;
              if ( v30 )
              {
                v38 = *(const char **)a3;
                v30 = ": ";
              }
              else
              {
                v38 = "";
              }
              if ( v37 )
                v30 = v38;
              if ( v76 )
                v39 = s;
              else
                v39 = "";
              syslog(
                v33,
                "%s%s%s%s%s%s%s%s%s%s",
                v32,
                v34,
                v36,
                (const char *)v26,
                (const char *)v17,
                v27,
                v38,
                v30,
                v39,
                (const char *)(a1 + 36));
              v20 = 1;
              v17 = 1;
              goto LABEL_20;
            }
            goto LABEL_42;
          }
          if ( *(_DWORD *)(v21 + 32) )
          {
            if ( *(_DWORD *)(v21 + 24) == -2
              && (!_xstat(3, *(const char **)(v21 + 20), &stat_buf) || *_errno_location() != 2)
              && stat_buf.st_size >= *(_DWORD *)(v21 + 28) )
            {
              goto LABEL_42;
            }
            fclose(*(FILE **)(v21 + 16));
            v54 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 16) = 0;
            *(_DWORD *)(v21 + 32) = 0;
            if ( v54 != 3 )
              off_21DCC("./../lib/isc/log.c", 1325, 0, "channel->type == 3");
          }
          else
          {
            v44 = *(FILE **)(v21 + 16);
            if ( v44 )
              goto LABEL_100;
          }
          v55 = *(const char **)(v21 + 20);
          filenamea = (char *)v55;
          if ( !v55 || !*v55 )
            off_21DCC("./../lib/isc/log.c", 1330, 0, "path != ((void *)0) && *path != '\\0'");
          if ( !_xstat(3, v55, &v87) )
          {
            v56 = *(_DWORD *)(v21 + 28);
            if ( v56 )
            {
              if ( v56 > 0 && v56 <= v87.st_size )
              {
LABEL_142:
                if ( (v87.st_mode & 0xF000) == 0x8000 )
                {
                  if ( *(_DWORD *)(v21 + 24) == -2 )
                    goto LABEL_42;
                  v57 = sub_10004((_DWORD *)v21);
                  v29 = (const char *)v57;
                  if ( v57 )
                  {
                    v58 = *(_DWORD *)(v21 + 12);
                    if ( (v58 & 0x8000) == 0 )
                    {
                      v59 = *(const char **)(v21 + 20);
                      v72 = (const char *)v57;
                      v60 = (const char *)sub_137A4(v57);
                      syslog(3, "isc_log_open: roll_log '%s' failed: %s", v59, v60);
                      v29 = v72;
                      v58 = *(_DWORD *)(v21 + 12) | 0x8000;
                      *(_DWORD *)(v21 + 12) = v58;
                    }
                    if ( v29 == (const char *)58 )
                      goto LABEL_42;
                    goto LABEL_148;
                  }
                }
              }
            }
            else if ( *(_DWORD *)(v21 + 24) != -2 )
            {
              goto LABEL_142;
            }
          }
          v69 = sub_138CC(filenamea, "a", v21 + 16);
          v70 = v69;
          v29 = (const char *)v69;
          if ( v69 )
            v70 = 1;
          v71 = v69 == 58;
          if ( v69 != 58 )
            v71 = v69 == 0;
          if ( !v71 )
          {
            v58 = *(_DWORD *)(v21 + 12);
LABEL_148:
            if ( (v58 & 0x8000) == 0 )
            {
              v61 = *(const char **)(v21 + 20);
              v62 = (const char *)sub_137A4(v29);
              syslog(3, "isc_log_open '%s' failed: %s", v61, v62);
              *(_DWORD *)(v21 + 12) |= 0x8000u;
            }
            goto LABEL_42;
          }
          if ( !v70 )
          {
            v44 = *(FILE **)(v21 + 16);
            *(_DWORD *)(v21 + 12) &= ~0x8000u;
LABEL_100:
            v45 = v27 == 0;
            v46 = v74;
            if ( v45 )
              v47 = "";
            else
              v47 = v85;
            if ( v45 )
              v48 = v47;
            else
              v48 = " ";
            if ( v26 )
              v17 = (int)": ";
            else
              v29 = "";
            if ( v26 )
            {
              v29 = (const char *)v16[8];
              filename = (char *)v17;
            }
            else
            {
              filename = (char *)v29;
            }
            if ( v74 )
              v46 = (int *)v80;
            else
              v17 = (int)"";
            if ( v74 )
            {
              v49 = ": ";
              v17 = *v46;
            }
            else
            {
              v49 = (const char *)v17;
            }
            v50 = v30 == 0;
            if ( v30 )
            {
              v51 = *(const char **)a3;
              v30 = ": ";
            }
            else
            {
              v51 = "";
            }
            if ( v50 )
              v30 = v51;
            if ( v76 )
              v52 = s;
            else
              v52 = "";
            fprintf(
              v44,
              "%s%s%s%s%s%s%s%s%s%s\n",
              v47,
              v48,
              v29,
              filename,
              (const char *)v17,
              v49,
              v51,
              v30,
              v52,
              (const char *)(a1 + 36));
            fflush(*(FILE **)(v21 + 16));
            if ( *(int *)(v21 + 28) > 0 )
            {
              if ( *(_DWORD *)(v21 + 4) != 3 )
                off_21DCC("./../lib/isc/log.c", 1718, 2, "channel->type == 3");
              v53 = fileno(*(FILE **)(v21 + 16));
              if ( _fxstat(3, v53, &stat_buf) >= 0 && stat_buf.st_size > *(_DWORD *)(v21 + 28) )
              {
                v20 = 1;
                *(_DWORD *)(v21 + 32) = 1;
                v17 = 1;
                goto LABEL_20;
              }
            }
          }
LABEL_42:
          v17 = 1;
LABEL_43:
          v19 = v18 == 0;
          if ( !v18 )
          {
LABEL_44:
            v31 = *(_DWORD *)(a1 + 28) - 1;
            *(_DWORD *)(a1 + 28) = v31;
            if ( v31 )
              sub_FFB4("./../lib/isc/log.c", 1761, "(--(*((&lctx->lock))) == 0 ? 0 : 34) == 0");
            return;
          }
        }
      }
    }
  }
}
