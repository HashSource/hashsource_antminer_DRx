void sub_25D2C()
{
  const char *v0; // r3
  char *v1; // r11
  char *v2; // r12
  char *v3; // lr
  const char *v4; // r11
  char *v5; // r12
  const char *v6; // lr
  const char *v7; // r12
  const char *v8; // r2
  const char *v9; // r2
  int v10; // r3
  char *v11; // r3
  int v12; // r3
  int v13; // r3
  const char *v14; // r3
  int v15; // r3
  char *v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r12
  int v20; // r3
  bool v21; // zf
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  const char *v26; // [sp+0h] [bp-834h]
  const char *v27; // [sp+4h] [bp-830h]
  const char *v28; // [sp+8h] [bp-82Ch]
  const char *v29; // [sp+10h] [bp-824h]
  char s1; // [sp+2Fh] [bp-805h] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  byte_64068 = 1;
  immedok((WINDOW *)dword_639D8, 1);
  sub_193CC();
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            strcpy(s, "[N]ormal [C]lear [S]ilent mode (disable all output)\n");
            sub_1952C(s);
            v0 = "off";
            if ( byte_63DF8 )
              v1 = (char *)"on";
            else
              v1 = "off";
            v26 = v1;
            if ( byte_64218 )
              v2 = (char *)"on";
            else
              v2 = "off";
            v27 = v2;
            if ( byte_630C0 )
              v3 = (char *)"on";
            else
              v3 = "off";
            v28 = v3;
            if ( byte_63928 )
              v4 = "on";
            else
              v4 = "off";
            if ( byte_63DFA )
              v5 = (char *)"on";
            else
              v5 = "off";
            v29 = v5;
            if ( byte_63EE0 )
              v6 = "on";
            else
              v6 = "off";
            if ( byte_630C1 )
              v0 = "on";
            if ( byte_6142D )
              v7 = "enabled";
            else
              v7 = "disabled";
            if ( byte_615D4 )
              v8 = "enabled";
            else
              v8 = "disabled";
            snprintf(
              s,
              0x800u,
              "[D]ebug:%s\n"
              "[P]er-device:%s\n"
              "[Q]uiet:%s\n"
              "[V]erbose:%s\n"
              "[R]PC debug:%s\n"
              "[W]orkTime details:%s\n"
              "co[M]pact: %s\n"
              "[T]oggle status switching:%s\n"
              "w[I]descreen:%s\n"
              "[Z]ero statistics\n"
              "[L]og interval:%d\n",
              v0,
              v26,
              v27,
              v28,
              v4,
              v29,
              v6,
              v7,
              v8,
              dword_6006C);
            sub_1952C(s);
            strcpy(s, "Select an option or any other key to return\n");
            sub_1952C(s);
            sub_19350();
            s1 = wgetch((WINDOW *)stdscr);
            if ( !strncasecmp(&s1, "q", 1u) )
            {
              v9 = "Quiet mode %s\n";
              v10 = (unsigned __int8)byte_64218 ^ 1;
              byte_64218 ^= 1u;
              if ( v10 )
                v11 = "enabled";
              else
                v11 = "disabled";
              goto LABEL_64;
            }
            if ( !strncasecmp(&s1, "v", 1u) )
            {
              v9 = "Verbose mode %s\n";
              v12 = (unsigned __int8)byte_630C0 ^ 1;
              byte_630C0 ^= 1u;
              if ( v12 )
              {
                byte_64218 = 0;
                v11 = "enabled";
              }
              else
              {
                v11 = "disabled";
              }
              goto LABEL_64;
            }
            if ( strncasecmp(&s1, "n", 1u) )
              break;
            byte_630C1 = 0;
            byte_630C0 = 0;
            byte_64218 = 0;
            byte_63928 = 0;
            strcpy(s, "Output mode reset to normal\n");
            byte_63EE0 = 0;
            byte_63DF8 = 0;
            sub_1952C(s);
            v17 = sub_19140();
            if ( v17 )
              goto LABEL_47;
          }
          if ( strncasecmp(&s1, "d", 1u) )
            break;
          v13 = (unsigned __int8)byte_630C1 ^ 1;
          byte_630C1 ^= 1u;
          byte_630C0 = v13;
          if ( v13 )
          {
            byte_64218 = 0;
            v14 = "enabled";
          }
          else
          {
            v14 = "disabled";
          }
          snprintf(s, 0x800u, "Debug mode %s\n", v14);
          sub_1952C(s);
        }
        if ( strncasecmp(&s1, "m", 1u) )
          break;
        v15 = (unsigned __int8)byte_63EE0 ^ 1;
        byte_63EE0 ^= 1u;
        if ( v15 )
          v16 = "enabled";
        else
          v16 = "disabled";
        snprintf(s, 0x800u, "Compact mode %s\n", v16);
        sub_1952C(s);
        v17 = sub_19140();
        if ( v17 )
LABEL_47:
          sub_192D4(v17, v18);
      }
      if ( !strncasecmp(&s1, "p", 1u) )
      {
        v9 = "Per-device stats %s\n";
        v19 = (unsigned __int8)byte_63DF8 ^ 1;
        byte_63DF8 ^= 1u;
        byte_630C0 = v19;
        if ( v19 )
          v11 = "enabled";
        else
          v11 = "disabled";
        goto LABEL_64;
      }
      if ( !strncasecmp(&s1, "r", 1u) )
      {
        v20 = (unsigned __int8)byte_63928 ^ 1;
        byte_63928 ^= 1u;
        v9 = "RPC protocol debugging %s\n";
        if ( v20 )
        {
          byte_64218 = 0;
          v11 = "enabled";
        }
        else
        {
          v11 = "disabled";
        }
        goto LABEL_64;
      }
      if ( !strncasecmp(&s1, "c", 1u) )
        goto LABEL_75;
      if ( strncasecmp(&s1, "l", 1u) )
        break;
      v22 = sub_25D00("Interval in seconds");
      if ( v22 <= 0x270F )
      {
        dword_6006C = v22;
        snprintf(s, 0x800u, "Log interval set to %d seconds\n", v22);
      }
      else
      {
        strcpy(s, "Invalid selection\n");
      }
      sub_1952C(s);
    }
    if ( !strncasecmp(&s1, "s", 1u) )
      break;
    if ( !strncasecmp(&s1, "w", 1u) )
    {
      v11 = "enabled";
      v21 = byte_63DFA == 1;
      byte_63DFA ^= 1u;
      v9 = "WorkTime details %s\n";
      if ( v21 )
        v11 = "disabled";
LABEL_64:
      snprintf(s, 0x800u, v9, v11);
      sub_1952C(s);
    }
    else if ( !strncasecmp(&s1, "t", 1u) )
    {
      byte_6142D ^= 1u;
    }
    else if ( !strncasecmp(&s1, "i", 1u) )
    {
      byte_615D4 ^= 1u;
    }
    else
    {
      if ( strncasecmp(&s1, "z", 1u) )
      {
LABEL_75:
        sub_193CC();
        goto LABEL_76;
      }
      sub_1ABE0(0, v23, v24, v25);
    }
  }
  byte_640B8 = 1;
LABEL_76:
  immedok((WINDOW *)dword_639D8, 0);
  byte_64068 = 0;
}
