void sub_263D4()
{
  int v0; // r3
  unsigned int v1; // r0
  int i; // r2
  char *v3; // r0
  char *v4; // r4
  FILE *v5; // r0
  FILE *v6; // r4
  int v7; // r0
  unsigned int v8; // r0
  char s1; // [sp+Fh] [bp-2891h] BYREF
  struct stat stat_buf; // [sp+10h] [bp-2890h] BYREF
  char v11[2036]; // [sp+6Ch] [bp-2834h] BYREF
  char v12[4052]; // [sp+86Ch] [bp-2034h] BYREF
  char v13[4116]; // [sp+186Ch] [bp-1034h] BYREF

  byte_64068 = 1;
  immedok((WINDOW *)dword_639D8, 1);
  sub_193CC();
  v0 = dword_60074;
  v1 = dword_60090;
  for ( i = dword_60094; ; i = dword_60094 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          snprintf(
            v13,
            0x800u,
            "[Q]ueue: %d\n[S]cantime: %d\n[E]xpiry: %d\n[W]rite config file\n[C]gminer restart\n",
            v0,
            v1,
            i);
          sub_1952C(v13);
          strcpy(v13, "Select an option or any other key to return\n");
          sub_1952C(v13);
          sub_19350();
          s1 = wgetch((WINDOW *)stdscr);
          if ( strncasecmp(&s1, "q", 1u) )
            break;
          v7 = sub_25D00("Extra work items to queue");
          v0 = v7;
          if ( (unsigned int)v7 > 0x270F )
            goto LABEL_18;
          dword_60074 = v7;
          if ( v7 >= dword_60070 )
          {
            v1 = dword_60090;
            i = dword_60094;
          }
          else
          {
            dword_60070 = v7;
            i = dword_60094;
            v1 = dword_60090;
          }
        }
        if ( strncasecmp(&s1, "s", 1u) )
          break;
        v1 = sub_25D00("Set scantime in seconds");
        if ( v1 > 0x270F )
          goto LABEL_18;
        dword_60090 = v1;
        v0 = dword_60074;
        i = dword_60094;
      }
      if ( strncasecmp(&s1, "e", 1u) )
        break;
      v8 = sub_25D00("Set expiry time in seconds");
      i = v8;
      if ( v8 > 0x270F )
      {
LABEL_18:
        strcpy(v13, "Invalid selection\n");
        sub_1952C(v13);
        v0 = dword_60074;
        v1 = dword_60090;
        i = dword_60094;
      }
      else
      {
        dword_60094 = v8;
        v0 = dword_60074;
        v1 = dword_60090;
      }
    }
    if ( strncasecmp(&s1, "w", 1u) )
      break;
    sub_15C88(v12);
    snprintf(v13, 0x1032u, "Config filename to write (Enter for default) [%s]", v12);
    v3 = sub_25C14(v13);
    v4 = v3;
    if ( *v3 == 45 && v3[1] == 49 && !v3[2] )
    {
      free(v3);
LABEL_10:
      v5 = fopen(v12, "w");
      v6 = v5;
      if ( v5 )
      {
        sub_1569C(v5);
        fclose(v6);
      }
      else
      {
        strcpy(v11, "Cannot open or create file\n");
        sub_1952C(v11);
      }
      goto LABEL_12;
    }
    strcpy(v12, v3);
    free(v4);
    if ( _xstat(3, v12, &stat_buf) )
      goto LABEL_10;
    strcpy(v11, "File exists, overwrite?\n");
    sub_1952C(v11);
    s1 = wgetch((WINDOW *)stdscr);
    if ( !strncasecmp(&s1, "y", 1u) )
      goto LABEL_10;
LABEL_12:
    v0 = dword_60074;
    v1 = dword_60090;
  }
  if ( !strncasecmp(&s1, "c", 1u)
    && (strcpy(v13, "Are you sure?\n"), sub_1952C(v13), s1 = wgetch((WINDOW *)stdscr), !strncasecmp(&s1, "y", 1u)) )
  {
    sub_1C028();
  }
  else
  {
    sub_193CC();
  }
  immedok((WINDOW *)dword_639D8, 0);
  byte_64068 = 0;
}
