void sub_26178()
{
  int v0; // r0
  unsigned int v1; // r0
  unsigned int v2; // r0
  char *v3; // r0
  char *v4; // r10
  FILE *v5; // r0
  FILE *v6; // r10
  struct stat stat_buf; // [sp+8h] [bp-2894h] BYREF
  char v8[2044]; // [sp+64h] [bp-2838h] BYREF
  char v9[44]; // [sp+864h] [bp-2038h] BYREF
  char v10[4124]; // [sp+1864h] [bp-1038h] BYREF
  char v11[5]; // [sp+2897h] [bp-5h] BYREF

  byte_80C70 = 1;
  immedok((WINDOW *)dword_80560, 1);
  sub_15684();
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          snprintf(
            v10,
            0x800u,
            "[Q]ueue: %d\n[S]cantime: %d\n[E]xpiry: %d\n[W]rite config file\n[C]gminer restart\n",
            dword_79C54,
            dword_79C38,
            dword_79C3C);
          sub_157F8(v10);
          strcpy(v10, "Select an option or any other key to return\n");
          sub_157F8(v10);
          sub_15608();
          v11[0] = wgetch((WINDOW *)stdscr);
          if ( strncasecmp(v11, "q", 1u) )
            break;
          v0 = sub_259E0("Extra work items to queue");
          if ( (unsigned int)v0 > 0x270F )
            goto LABEL_4;
          dword_79C54 = v0;
          if ( v0 < dword_79C50 )
            dword_79C50 = v0;
        }
        if ( strncasecmp(v11, "s", 1u) )
          break;
        v1 = sub_259E0("Set scantime in seconds");
        if ( v1 > 0x270F )
          goto LABEL_4;
        dword_79C38 = v1;
      }
      if ( strncasecmp(v11, "e", 1u) )
        break;
      v2 = sub_259E0("Set expiry time in seconds");
      if ( v2 > 0x270F )
      {
LABEL_4:
        strcpy(v10, "Invalid selection\n");
        sub_157F8(v10);
      }
      else
      {
        dword_79C3C = v2;
      }
    }
    if ( strncasecmp(v11, "w", 1u) )
      break;
    sub_12A38(v9);
    snprintf(v10, 0x1032u, "Config filename to write (Enter for default) [%s]", v9);
    v3 = sub_258F4(v10);
    v4 = v3;
    if ( *v3 == 45 && v3[1] == 49 && !v3[2] )
    {
      free(v3);
      goto LABEL_24;
    }
    strcpy(v9, v3);
    free(v4);
    if ( !_xstat(3, v9, &stat_buf) )
    {
      strcpy(v8, "File exists, overwrite?\n");
      sub_157F8(v8);
      v11[0] = wgetch((WINDOW *)stdscr);
      if ( strncasecmp(v11, "y", 1u) )
        continue;
    }
LABEL_24:
    v5 = fopen(v9, "w");
    v6 = v5;
    if ( v5 )
    {
      sub_12418(v5);
      fclose(v6);
    }
    else
    {
      strcpy(v8, "Cannot open or create file\n");
      sub_157F8(v8);
    }
  }
  if ( !strncasecmp(v11, "c", 1u)
    && (strcpy(v10, "Are you sure?\n"), sub_157F8(v10), v11[0] = wgetch((WINDOW *)stdscr), !strncasecmp(v11, "y", 1u)) )
  {
    sub_17F5C();
  }
  else
  {
    sub_15684();
  }
  immedok((WINDOW *)dword_80560, 0);
  byte_80C70 = 0;
}
