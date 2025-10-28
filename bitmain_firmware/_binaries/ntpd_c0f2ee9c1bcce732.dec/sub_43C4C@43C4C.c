int __fastcall sub_43C4C(int a1)
{
  int v2; // r4
  int v3; // r5
  const char *v4; // r0
  const char *v5; // r0

  v2 = *(_DWORD *)(a1 + 68);
  v3 = *(_DWORD *)(a1 + 100);
  fwrite("        case \"${OPT_CODE}\" in\n", 1u, 0x1Eu, (FILE *)stdout);
  do
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 16) & 0x280000) == 0 )
      {
        sub_43AD0(*(const char **)(v2 + 52), v2, a1);
        sub_43854(a1, v2);
        v4 = *(const char **)(v2 + 56);
        if ( v4 )
          break;
      }
      --v3;
      v2 += 64;
      if ( v3 <= 0 )
        return printf(
                 "        * )\n"
                 "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
                 "            echo \"$%s_USAGE_TEXT\"\n"
                 "            exit 1\n"
                 "            ;;\n"
                 "        esac\n"
                 "\n",
                 "option",
                 *(const char **)(a1 + 32));
    }
    sub_43AD0(v4, v2, a1);
    v5 = "            %1$s_%2$s_CT=0\n"
         "            OPT_ELEMENT=''\n"
         "            %1$s_%2$s='%3$s'\n"
         "            export %1$s_%2$s\n"
         "            OPT_NAME='%2$s'\n";
    if ( *(int (**)())(v2 + 40) == sub_4B584 )
    {
      printf("            %s\n", "echo 'Warning:  Cannot suppress the loading of options files' >&2");
    }
    else
    {
      if ( *(_WORD *)(v2 + 12) == 1 )
        v5 = "            if [ -n \"${%1$s_%2$s}\" ] && ${%1$s_%2$s_set} ; then\n"
             "                echo Error:  duplicate %2$s option >&2\n"
             "                echo \"$%1$s_USAGE_TEXT\"\n"
             "                exit 1 ; fi\n"
             "            %1$s_%2$s_set=true\n"
             "            %1$s_%2$s='%3$s'\n"
             "            export %1$s_%2$s\n"
             "            OPT_NAME='%2$s'\n";
      printf(v5, *(_DWORD *)(a1 + 32), *(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 60));
    }
    --v3;
    v2 += 64;
    printf("            %s\n", "OPT_ARG_NEEDED=NO");
    fwrite("            ;;\n\n", 1u, 0x10u, (FILE *)stdout);
  }
  while ( v3 > 0 );
  return printf(
           "        * )\n"
           "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
           "            echo \"$%s_USAGE_TEXT\"\n"
           "            exit 1\n"
           "            ;;\n"
           "        esac\n"
           "\n",
           "option",
           *(const char **)(a1 + 32));
}
