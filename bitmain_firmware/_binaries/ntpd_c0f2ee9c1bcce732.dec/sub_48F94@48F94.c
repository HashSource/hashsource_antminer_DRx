int __fastcall sub_48F94(int a1)
{
  void *v2; // r3
  int v3; // r2
  int v4; // r4
  struct tm *v5; // r0
  const char *v6; // r2
  unsigned __int8 *v7; // r5
  const __int32_t **v8; // r0
  char *v9; // r3
  int v10; // t1
  int v11; // r4
  int v12; // r4
  int v13; // r3
  int v14; // r2
  int v15; // r5
  int v16; // r3
  int v17; // r2
  int v18; // r3
  char *v19; // r11
  const char *p_stat_buf; // r3
  int v21; // r4
  int result; // r0
  const char *v23; // r10
  const char *v24; // r7
  FILE *v25; // r0
  __off_t st_size; // r4
  char *v27; // r9
  FILE *v28; // r5
  size_t v29; // r0
  char *v30; // r0
  char *v31; // r0
  int *v32; // r2
  int *v33; // r3
  bool v34; // zf
  FILE *v35; // r6
  const char *v36; // r5
  int v37; // r4
  char *v38; // r0
  const char *v39; // r0
  size_t v40; // r2
  char *v41; // r0
  bool v42; // zf
  const char *v43; // r2
  const char *v44; // [sp+0h] [bp-94h]
  time_t v45; // [sp+Ch] [bp-88h] BYREF
  struct stat stat_buf; // [sp+10h] [bp-84h] BYREF

  v2 = off_7B7F4;
  v3 = *((_DWORD *)off_7B7F4 + 20);
  if ( (v3 & 0xF) != 0 )
  {
    dword_C9ABC = *((_DWORD *)off_7B7F4 + 22);
  }
  else
  {
    if ( (v3 & 0x20) != 0 )
    {
      dword_C9ABC = *((_DWORD *)off_7B7F4 + 20) & 0xF;
      if ( (*((_DWORD *)off_7B7F4 + 4) & 0xF) == 0 )
        goto LABEL_4;
      goto LABEL_50;
    }
    v41 = getenv("SHELL");
    v42 = v41 == 0;
    dword_C9ABC = (int)v41;
    if ( v41 )
      v43 = (_BYTE *)&loc_B7B0;
    else
      v43 = "/bin/bash";
    if ( v41 )
      HIWORD(v43) = 7;
    else
      v41 = (_BYTE *)&loc_B7B0;
    if ( v42 )
      HIWORD(v41) = 7;
    else
      v2 = (void *)*((_DWORD *)v43 + 17);
    if ( v42 )
    {
      v2 = (void *)*((_DWORD *)v41 + 17);
      dword_C9ABC = (int)v43;
    }
  }
  if ( (*((_DWORD *)v2 + 4) & 0xF) == 0 )
    goto LABEL_4;
LABEL_50:
  v23 = (const char *)*((_DWORD *)v2 + 6);
  if ( !_xstat(3, v23, &stat_buf) )
  {
    if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
    {
      fprintf((FILE *)stderr, off_7B994[0], v23);
      exit(1);
    }
    v24 = (const char *)sub_44484(stat_buf.st_size + 1);
    v25 = fopen(v23, "r");
    st_size = stat_buf.st_size;
    v27 = (char *)v24;
    v28 = v25;
    do
    {
      v29 = fread(v27, 1u, st_size, v28);
      if ( !v29 )
        break;
      st_size -= v29;
      v27 += v29;
    }
    while ( st_size );
    *v27 = 0;
    fclose(v28);
    v30 = strstr(v24, "# # # # # # # # # # -- do not modify this marker --\n#\n#  DO NOT EDIT THIS SECTION");
    if ( v30 )
    {
      *v30 = 0;
      v31 = strstr(
              v30 + 1,
              "\n"
              "# # # # # # # # # #\n"
              "#\n"
              "#  END OF AUTOMATED OPTION PROCESSING\n"
              "#\n"
              "# # # # # # # # # # -- do not modify this marker --\n");
      v34 = v31 == 0;
      if ( v31 )
      {
        v31 += 115;
        v33 = &dword_C9A5C;
      }
      else
      {
        v32 = &dword_C9A5C;
      }
      if ( v34 )
        v32[25] = (int)v24;
      else
        v33[26] = (int)v24;
      if ( !v34 )
        v33[25] = (int)v31;
    }
    else
    {
      dword_C9AC0 = (int)v24;
    }
  }
  if ( (FILE *)stdout != freopen(v23, "w", (FILE *)stdout) )
  {
    v35 = (FILE *)stderr;
    v36 = off_7B8E4[0];
    v37 = *_errno_location();
    v38 = strerror(v37);
    fprintf(v35, v36, v37, v38);
    exit(1);
  }
LABEL_4:
  if ( dword_C9AC4 )
  {
    fputs((const char *)dword_C9AC4, (FILE *)stdout);
    v4 = dword_C9AC4;
  }
  else
  {
    v4 = 0;
  }
  v45 = time(0);
  v5 = localtime(&v45);
  strftime((char *)&stat_buf, 0x80u, "%A %B %e, %Y at %r %Z", v5);
  if ( (*((_DWORD *)off_7B7F4 + 4) & 0xF) != 0 )
    v6 = (const char *)*((_DWORD *)off_7B7F4 + 6);
  else
    v6 = "stdout";
  if ( !v4 && dword_C9ABC )
  {
    v44 = v6;
    printf("#! %s\n", (const char *)dword_C9ABC);
    v6 = v44;
  }
  printf(
    "%s OF %s\n#\n#  From here to the next `-- do not modify this marker --',\n#  the text has been generated %s\n",
    "# # # # # # # # # # -- do not modify this marker --\n#\n#  DO NOT EDIT THIS SECTION",
    v6,
    (const char *)&stat_buf);
  printf("#  From the %s option definitions\n#\n", *(const char **)(a1 + 32));
  v7 = *(unsigned __int8 **)(a1 + 32);
  v8 = _ctype_tolower_loc();
  v9 = (char *)&v45 + 3;
  do
  {
    v10 = *v7++;
    v11 = LOBYTE((*v8)[v10]);
    *++v9 = v11;
  }
  while ( v11 );
  *(_DWORD *)(a1 + 24) = &stat_buf;
  *(_DWORD *)(a1 + 28) = &stat_buf;
  sub_44070(a1, 0, 0);
  sub_44070(a1, 1, 0);
  v12 = *(_DWORD *)(a1 + 68);
  if ( *(void (__fastcall __noreturn **)(int, int))(v12 + 40) == sub_42398 )
  {
    v14 = *(_DWORD *)(a1 + 68);
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 100) - 1;
    if ( v13 <= 0 )
      goto LABEL_19;
    v14 = *(_DWORD *)(a1 + 68);
    while ( 1 )
    {
      v14 += 64;
      if ( *(void (__fastcall __noreturn **)(int, int))(v14 + 40) == sub_42398 )
        break;
      if ( !--v13 )
        goto LABEL_19;
    }
  }
  sub_44070(a1, 2, v14);
  v12 = *(_DWORD *)(a1 + 68);
LABEL_19:
  v15 = *(_DWORD *)(a1 + 104);
  if ( v15 > 0 )
  {
    do
    {
      v16 = *(_DWORD *)(v12 + 16);
      if ( (v16 & 0x280000) == 0 )
      {
        v17 = *(_DWORD *)(v12 + 48);
        if ( v17 )
        {
          v18 = ((unsigned __int16)v16 >> 12) - 2;
          if ( *(unsigned __int16 *)(v12 + 12) > 1u )
            v19 = "\n"
                  "if test -z \"${%1$s_%2$s}\"\n"
                  "then\n"
                  "  %1$s_%2$s_CT=0\n"
                  "else\n"
                  "  %1$s_%2$s_CT=1\n"
                  "  %1$s_%2$s_1=\"${%1$s_%2$s}\"\n"
                  "fi\n"
                  "export %1$s_%2$s_CT";
          else
            v19 = "\n%1$s_%2$s=\"${%1$s_%2$s-'%3$s'}\"\n%1$s_%2$s_set=false\nexport %1$s_%2$s\n";
          switch ( v18 )
          {
            case 0:
              (*(void (__fastcall **)(int, int))(v12 + 40))(2, v12);
              p_stat_buf = *(const char **)(v12 + 24);
              v17 = *(_DWORD *)(v12 + 48);
              break;
            case 1:
              p_stat_buf = "false";
              if ( *(_DWORD *)(v12 + 24) )
                p_stat_buf = "true";
              break;
            case 2:
              snprintf((char *)&stat_buf, 0x10u, "%lu", *(_DWORD *)(v12 + 24));
              v17 = *(_DWORD *)(v12 + 48);
              p_stat_buf = (const char *)&stat_buf;
              break;
            case 3:
              snprintf((char *)&stat_buf, 0x10u, "%d", *(_DWORD *)(v12 + 24));
              v17 = *(_DWORD *)(v12 + 48);
              p_stat_buf = (const char *)&stat_buf;
              break;
            default:
              p_stat_buf = *(const char **)(v12 + 24);
              if ( !p_stat_buf && v19 == "\n%1$s_%2$s=\"${%1$s_%2$s-'%3$s'}\"\n%1$s_%2$s_set=false\nexport %1$s_%2$s\n" )
                v19 = "\n%1$s_%2$s=\"${%1$s_%2$s}\"\n%1$s_%2$s_set=false\nexport %1$s_%2$s\n";
              break;
          }
          printf(v19, *(_DWORD *)(a1 + 32), v17, p_stat_buf);
        }
      }
      --v15;
      v12 += 64;
    }
    while ( v15 );
  }
  v21 = *(_DWORD *)(a1 + 12) & 3;
  switch ( v21 )
  {
    case 2:
      v39 = "\n"
            "OPT_PROCESS=true\n"
            "OPT_ARG=\"$1\"\n"
            "\n"
            "while ${OPT_PROCESS} && [ $# -gt 0 ]\n"
            "do\n"
            "    OPT_ELEMENT=''\n"
            "    OPT_ARG_VAL=''\n"
            "\n"
            "    case \"${OPT_ARG}\" in\n"
            "    -- )\n"
            "        OPT_PROCESS=false\n"
            "        shift\n"
            "        ;;\n"
            "\n";
      v40 = 197;
      goto LABEL_69;
    case 3:
      fwrite(
        "\n"
        "OPT_PROCESS=true\n"
        "OPT_ARG=\"$1\"\n"
        "\n"
        "while ${OPT_PROCESS} && [ $# -gt 0 ]\n"
        "do\n"
        "    OPT_ELEMENT=''\n"
        "    OPT_ARG_VAL=''\n"
        "\n"
        "    case \"${OPT_ARG}\" in\n"
        "    -- )\n"
        "        OPT_PROCESS=false\n"
        "        shift\n"
        "        ;;\n"
        "\n",
        1u,
        0xC5u,
        (FILE *)stdout);
      fwrite("    --* )\n", 1u, 0xAu, (FILE *)stdout);
      fwrite(
        "        OPT_CODE=`echo \"X${OPT_ARG}\"|sed 's/^X-*//'`\n"
        "        shift\n"
        "        OPT_ARG=\"$1\"\n"
        "\n"
        "        case \"${OPT_CODE}\" in *=* )\n"
        "            OPT_ARG_VAL=`echo \"${OPT_CODE}\"|sed 's/^[^=]*=//'`\n"
        "            OPT_CODE=`echo \"${OPT_CODE}\"|sed 's/=.*$//'` ;; esac\n"
        "\n",
        1u,
        0xFEu,
        (FILE *)stdout);
      sub_43C4C(a1);
      printf(
        "        case \"${OPT_ARG_NEEDED}\" in\n"
        "        NO )\n"
        "            OPT_ARG_VAL=''\n"
        "            ;;\n"
        "\n"
        "        YES )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ]\n"
        "            then\n"
        "                if [ $# -eq 0 ]\n"
        "                then\n"
        "                    echo No argument provided for ${OPT_NAME} option >&2\n"
        "                    echo \"$%s_USAGE_TEXT\"\n"
        "                    exit 1\n"
        "                fi\n"
        "\n"
        "                OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                shift\n"
        "                OPT_ARG=\"$1\"\n"
        "            fi\n"
        "            ;;\n"
        "\n"
        "        OK )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ] && [ $# -gt 0 ]\n"
        "            then\n"
        "                case \"${OPT_ARG}\" in -* ) ;; * )\n"
        "                    OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                    shift\n"
        "                    OPT_ARG=\"$1\" ;; esac\n"
        "            fi\n"
        "            ;;\n"
        "        esac\n",
        *(const char **)(a1 + 32));
      v39 = "        ;;\n\n";
      v40 = 12;
LABEL_69:
      fwrite(v39, 1u, v40, (FILE *)stdout);
      fwrite("    -* )\n", 1u, 9u, (FILE *)stdout);
      fwrite(
        "        OPT_CODE=`echo \"X${OPT_ARG}\" | sed 's/X-\\(.\\).*/\\1/'`\n"
        "        OPT_ARG=` echo \"X${OPT_ARG}\" | sed 's/X-.//'`\n"
        "\n",
        1u,
        0x75u,
        (FILE *)stdout);
      sub_43A28(a1);
      printf(
        "        case \"${OPT_ARG_NEEDED}\" in\n"
        "        NO )\n"
        "            if [ -n \"${OPT_ARG}\" ]\n"
        "            then\n"
        "                OPT_ARG=-\"${OPT_ARG}\"\n"
        "            else\n"
        "                shift\n"
        "                OPT_ARG=\"$1\"\n"
        "            fi\n"
        "            ;;\n"
        "\n"
        "        YES )\n"
        "            if [ -n \"${OPT_ARG}\" ]\n"
        "            then\n"
        "                OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "\n"
        "            else\n"
        "                if [ $# -eq 0 ]\n"
        "                then\n"
        "                    echo No argument provided for ${OPT_NAME} option >&2\n"
        "                    echo \"$%s_USAGE_TEXT\"\n"
        "                    exit 1\n"
        "                fi\n"
        "                shift\n"
        "                OPT_ARG_VAL=\"$1\"\n"
        "            fi\n"
        "\n"
        "            shift\n"
        "            OPT_ARG=\"$1\"\n"
        "            ;;\n"
        "\n"
        "        OK )\n"
        "            if [ -n \"${OPT_ARG}\" ]\n"
        "            then\n"
        "                OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                shift\n"
        "                OPT_ARG=\"$1\"\n"
        "\n"
        "            else\n"
        "                shift\n"
        "                if [ $# -gt 0 ]\n"
        "                then\n"
        "                    case \"$1\" in -* ) ;; * )\n"
        "                        OPT_ARG_VAL=\"$1\"\n"
        "                        shift ;; esac\n"
        "                    OPT_ARG=\"$1\"\n"
        "                fi\n"
        "            fi\n"
        "            ;;\n"
        "        esac\n",
        *(const char **)(a1 + 32));
      fwrite("        ;;\n\n", 1u, 0xCu, (FILE *)stdout);
      fwrite("    * )\n         OPT_PROCESS=false\n         ;;\n    esac\n\n", 1u, 0x39u, (FILE *)stdout);
      break;
    case 1:
      fwrite(
        "\n"
        "OPT_PROCESS=true\n"
        "OPT_ARG=\"$1\"\n"
        "\n"
        "while ${OPT_PROCESS} && [ $# -gt 0 ]\n"
        "do\n"
        "    OPT_ELEMENT=''\n"
        "    OPT_ARG_VAL=''\n"
        "\n"
        "    case \"${OPT_ARG}\" in\n"
        "    -- )\n"
        "        OPT_PROCESS=false\n"
        "        shift\n"
        "        ;;\n"
        "\n",
        1u,
        0xC5u,
        (FILE *)stdout);
      fwrite("    --* )\n", 1u, 0xAu, (FILE *)stdout);
      fwrite(
        "        OPT_CODE=`echo \"X${OPT_ARG}\"|sed 's/^X-*//'`\n"
        "        shift\n"
        "        OPT_ARG=\"$1\"\n"
        "\n"
        "        case \"${OPT_CODE}\" in *=* )\n"
        "            OPT_ARG_VAL=`echo \"${OPT_CODE}\"|sed 's/^[^=]*=//'`\n"
        "            OPT_CODE=`echo \"${OPT_CODE}\"|sed 's/=.*$//'` ;; esac\n"
        "\n",
        1u,
        0xFEu,
        (FILE *)stdout);
      sub_43C4C(a1);
      printf(
        "        case \"${OPT_ARG_NEEDED}\" in\n"
        "        NO )\n"
        "            OPT_ARG_VAL=''\n"
        "            ;;\n"
        "\n"
        "        YES )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ]\n"
        "            then\n"
        "                if [ $# -eq 0 ]\n"
        "                then\n"
        "                    echo No argument provided for ${OPT_NAME} option >&2\n"
        "                    echo \"$%s_USAGE_TEXT\"\n"
        "                    exit 1\n"
        "                fi\n"
        "\n"
        "                OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                shift\n"
        "                OPT_ARG=\"$1\"\n"
        "            fi\n"
        "            ;;\n"
        "\n"
        "        OK )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ] && [ $# -gt 0 ]\n"
        "            then\n"
        "                case \"${OPT_ARG}\" in -* ) ;; * )\n"
        "                    OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                    shift\n"
        "                    OPT_ARG=\"$1\" ;; esac\n"
        "            fi\n"
        "            ;;\n"
        "        esac\n",
        *(const char **)(a1 + 32));
      fwrite("        ;;\n\n", 1u, 0xCu, (FILE *)stdout);
      fwrite("    * )\n         OPT_PROCESS=false\n         ;;\n    esac\n\n", 1u, 0x39u, (FILE *)stdout);
      break;
    default:
      fwrite(
        "\nOPT_ARG=\"$1\"\n\nwhile [ $# -gt 0 ]\ndo\n    OPT_ELEMENT=''\n    OPT_ARG_VAL=''\n\n    OPT_ARG=\"${1}\"\n",
        1u,
        0x5Fu,
        (FILE *)stdout);
      fwrite(
        "        OPT_CODE=`echo \"X${OPT_ARG}\"|sed 's/^X-*//'`\n"
        "        shift\n"
        "        OPT_ARG=\"$1\"\n"
        "\n"
        "        case \"${OPT_CODE}\" in *=* )\n"
        "            OPT_ARG_VAL=`echo \"${OPT_CODE}\"|sed 's/^[^=]*=//'`\n"
        "            OPT_CODE=`echo \"${OPT_CODE}\"|sed 's/=.*$//'` ;; esac\n"
        "\n",
        1u,
        0xFEu,
        (FILE *)stdout);
      sub_43C4C(a1);
      printf(
        "        case \"${OPT_ARG_NEEDED}\" in\n"
        "        NO )\n"
        "            OPT_ARG_VAL=''\n"
        "            ;;\n"
        "\n"
        "        YES )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ]\n"
        "            then\n"
        "                if [ $# -eq 0 ]\n"
        "                then\n"
        "                    echo No argument provided for ${OPT_NAME} option >&2\n"
        "                    echo \"$%s_USAGE_TEXT\"\n"
        "                    exit 1\n"
        "                fi\n"
        "\n"
        "                OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                shift\n"
        "                OPT_ARG=\"$1\"\n"
        "            fi\n"
        "            ;;\n"
        "\n"
        "        OK )\n"
        "            if [ -z \"${OPT_ARG_VAL}\" ] && [ $# -gt 0 ]\n"
        "            then\n"
        "                case \"${OPT_ARG}\" in -* ) ;; * )\n"
        "                    OPT_ARG_VAL=\"${OPT_ARG}\"\n"
        "                    shift\n"
        "                    OPT_ARG=\"$1\" ;; esac\n"
        "            fi\n"
        "            ;;\n"
        "        esac\n",
        *(const char **)(a1 + 32));
      break;
  }
  printf(
    "    if [ -n \"${OPT_ARG_VAL}\" ]\n"
    "    then\n"
    "        eval %1$s_${OPT_NAME}${OPT_ELEMENT}=\"'${OPT_ARG_VAL}'\"\n"
    "        export %1$s_${OPT_NAME}${OPT_ELEMENT}\n"
    "    fi\n"
    "done\n"
    "\n"
    "unset OPT_PROCESS || :\n"
    "unset OPT_ELEMENT || :\n"
    "unset OPT_ARG || :\n"
    "unset OPT_ARG_NEEDED || :\n"
    "unset OPT_NAME || :\n"
    "unset OPT_CODE || :\n"
    "unset OPT_ARG_VAL || :\n"
    "%2$s",
    *(const char **)(a1 + 32),
    "\n"
    "# # # # # # # # # #\n"
    "#\n"
    "#  END OF AUTOMATED OPTION PROCESSING\n"
    "#\n"
    "# # # # # # # # # # -- do not modify this marker --\n");
  if ( dword_C9AC0 && *(_BYTE *)dword_C9AC0 )
  {
    fputs((const char *)dword_C9AC0, (FILE *)stdout);
  }
  else if ( (*((_DWORD *)off_7B7F4 + 20) & 0x20) == 0 )
  {
    printf("\nenv | grep '^%s_'\n", *(const char **)(a1 + 32));
  }
  fflush((FILE *)stdout);
  fchmod(1, 0x1EDu);
  fclose((FILE *)stdout);
  result = ferror((FILE *)stdout);
  if ( result )
  {
    fputs(off_7B9B8[0], (FILE *)stderr);
    exit(1);
  }
  return result;
}
