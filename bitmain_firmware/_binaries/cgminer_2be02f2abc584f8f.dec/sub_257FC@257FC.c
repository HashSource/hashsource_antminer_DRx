void sub_257FC()
{
  const char *v0; // r3
  const char *v1; // r9
  const char *v2; // r10
  const char *v3; // r8
  const char *v4; // lr
  const char *v5; // r12
  const char *v6; // r0
  const char *v7; // r1
  const char *v8; // r2
  int v9; // r2
  const char *v10; // r3
  int v11; // r2
  const char *v12; // r3
  int v13; // r3
  const char *v14; // r3
  int v15; // r2
  const char *v16; // r3
  int v17; // r3
  const char *v18; // r3
  int v19; // r2
  const char *v20; // r3
  unsigned int v21; // r0
  int v22; // r2
  const char *v23; // r3
  char s[2036]; // [sp+2Ch] [bp-804h] BYREF
  char v25; // [sp+82Fh] [bp-1h] BYREF

  byte_79B90 = 1;
  immedok((WINDOW *)dword_79480, 1);
  sub_154A4();
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
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  strcpy(s, "[N]ormal [C]lear [S]ilent mode (disable all output)\n");
                  sub_15618(s);
                  v0 = byte_75C09 ? "on" : "off";
                  v1 = byte_79920 ? "on" : "off";
                  v2 = byte_79DC8 ? "on" : "off";
                  v3 = byte_75C08 ? "on" : "off";
                  v4 = byte_793D0 ? "on" : "off";
                  v5 = byte_79922 ? "on" : "off";
                  v6 = byte_79A08 ? "on" : "off";
                  v7 = byte_75399 ? "enabled" : "disabled";
                  v8 = byte_754A8 ? "enabled" : "disabled";
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
                    v1,
                    v2,
                    v3,
                    v4,
                    v5,
                    v6,
                    v7,
                    v8,
                    dword_72C08);
                  sub_15618(s);
                  strcpy(s, "Select an option or any other key to return\n");
                  sub_15618(s);
                  sub_15428();
                  v25 = wgetch((WINDOW *)stdscr);
                  if ( strncasecmp(&v25, "q", 1u) )
                    break;
                  v9 = (unsigned __int8)byte_79DC8 ^ 1;
                  byte_79DC8 ^= 1u;
                  if ( v9 )
                    v10 = "enabled";
                  else
                    v10 = "disabled";
                  snprintf(s, 0x800u, "Quiet mode %s\n", v10);
                  sub_15618(s);
                }
                if ( strncasecmp(&v25, "v", 1u) )
                  break;
                v11 = (unsigned __int8)byte_75C08 ^ 1;
                byte_75C08 ^= 1u;
                if ( v11 )
                {
                  byte_79DC8 = 0;
                  v12 = "enabled";
                }
                else
                {
                  v12 = "disabled";
                }
                snprintf(s, 0x800u, "Verbose mode %s\n", v12);
                sub_15618(s);
              }
              if ( strncasecmp(&v25, "n", 1u) )
                break;
              byte_75C08 = 0;
              byte_75C09 = 0;
              byte_79DC8 = 0;
              byte_793D0 = 0;
              byte_79A08 = 0;
              byte_79920 = 0;
              strcpy(s, "Output mode reset to normal\n");
              sub_15618(s);
              sub_153A8();
            }
            if ( strncasecmp(&v25, "d", 1u) )
              break;
            v13 = (unsigned __int8)byte_75C09 ^ 1;
            byte_75C09 = v13;
            byte_75C08 = v13;
            if ( v13 )
            {
              byte_79DC8 = 0;
              v14 = "enabled";
            }
            else
            {
              v14 = "disabled";
            }
            snprintf(s, 0x800u, "Debug mode %s\n", v14);
            sub_15618(s);
          }
          if ( strncasecmp(&v25, "m", 1u) )
            break;
          v15 = (unsigned __int8)byte_79A08 ^ 1;
          byte_79A08 ^= 1u;
          if ( v15 )
            v16 = "enabled";
          else
            v16 = "disabled";
          snprintf(s, 0x800u, "Compact mode %s\n", v16);
          sub_15618(s);
          sub_153A8();
        }
        if ( strncasecmp(&v25, "p", 1u) )
          break;
        v17 = (unsigned __int8)byte_79920 ^ 1;
        byte_79920 = v17;
        byte_75C08 = v17;
        if ( v17 )
          v18 = "enabled";
        else
          v18 = "disabled";
        snprintf(s, 0x800u, "Per-device stats %s\n", v18);
        sub_15618(s);
      }
      if ( strncasecmp(&v25, "r", 1u) )
        break;
      v19 = (unsigned __int8)byte_793D0 ^ 1;
      byte_793D0 ^= 1u;
      if ( v19 )
      {
        byte_79DC8 = 0;
        v20 = "enabled";
      }
      else
      {
        v20 = "disabled";
      }
      snprintf(s, 0x800u, "RPC protocol debugging %s\n", v20);
      sub_15618(s);
    }
    if ( !strncasecmp(&v25, "c", 1u) )
      break;
    if ( !strncasecmp(&v25, "l", 1u) )
    {
      v21 = sub_257D0("Interval in seconds");
      if ( v21 <= 0x270F )
      {
        dword_72C08 = v21;
        snprintf(s, 0x800u, "Log interval set to %d seconds\n", v21);
      }
      else
      {
        strcpy(s, "Invalid selection\n");
      }
      sub_15618(s);
    }
    else
    {
      if ( !strncasecmp(&v25, "s", 1u) )
      {
        byte_79BE0 = 1;
        goto LABEL_81;
      }
      if ( !strncasecmp(&v25, "w", 1u) )
      {
        v22 = (unsigned __int8)byte_79922 ^ 1;
        byte_79922 ^= 1u;
        if ( v22 )
          v23 = "enabled";
        else
          v23 = "disabled";
        snprintf(s, 0x800u, "WorkTime details %s\n", v23);
        sub_15618(s);
      }
      else if ( !strncasecmp(&v25, "t", 1u) )
      {
        byte_75399 ^= 1u;
      }
      else if ( !strncasecmp(&v25, "i", 1u) )
      {
        byte_754A8 ^= 1u;
      }
      else
      {
        if ( strncasecmp(&v25, "z", 1u) )
          break;
        sub_14198();
      }
    }
  }
  sub_154A4();
LABEL_81:
  immedok((WINDOW *)dword_79480, 0);
  byte_79B90 = 0;
}
