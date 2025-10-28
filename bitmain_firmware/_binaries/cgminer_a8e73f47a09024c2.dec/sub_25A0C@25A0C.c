void sub_25A0C()
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
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  strcpy(s, "[N]ormal [C]lear [S]ilent mode (disable all output)\n");
                  sub_157F8(s);
                  v0 = byte_7CC61 ? "on" : "off";
                  v1 = byte_80A00 ? "on" : "off";
                  v2 = byte_80EA8 ? "on" : "off";
                  v3 = byte_7CC60 ? "on" : "off";
                  v4 = byte_804B0 ? "on" : "off";
                  v5 = byte_80A02 ? "on" : "off";
                  v6 = byte_80AE8 ? "on" : "off";
                  v7 = byte_7C3F5 ? "enabled" : "disabled";
                  v8 = byte_7C500 ? "enabled" : "disabled";
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
                    dword_79C48);
                  sub_157F8(s);
                  strcpy(s, "Select an option or any other key to return\n");
                  sub_157F8(s);
                  sub_15608();
                  v25 = wgetch((WINDOW *)stdscr);
                  if ( strncasecmp(&v25, "q", 1u) )
                    break;
                  v9 = (unsigned __int8)byte_80EA8 ^ 1;
                  byte_80EA8 ^= 1u;
                  if ( v9 )
                    v10 = "enabled";
                  else
                    v10 = "disabled";
                  snprintf(s, 0x800u, "Quiet mode %s\n", v10);
                  sub_157F8(s);
                }
                if ( strncasecmp(&v25, "v", 1u) )
                  break;
                v11 = (unsigned __int8)byte_7CC60 ^ 1;
                byte_7CC60 ^= 1u;
                if ( v11 )
                {
                  byte_80EA8 = 0;
                  v12 = "enabled";
                }
                else
                {
                  v12 = "disabled";
                }
                snprintf(s, 0x800u, "Verbose mode %s\n", v12);
                sub_157F8(s);
              }
              if ( strncasecmp(&v25, "n", 1u) )
                break;
              byte_7CC60 = 0;
              byte_7CC61 = 0;
              byte_80EA8 = 0;
              byte_804B0 = 0;
              byte_80AE8 = 0;
              byte_80A00 = 0;
              strcpy(s, "Output mode reset to normal\n");
              sub_157F8(s);
              sub_15588();
            }
            if ( strncasecmp(&v25, "d", 1u) )
              break;
            v13 = (unsigned __int8)byte_7CC61 ^ 1;
            byte_7CC61 = v13;
            byte_7CC60 = v13;
            if ( v13 )
            {
              byte_80EA8 = 0;
              v14 = "enabled";
            }
            else
            {
              v14 = "disabled";
            }
            snprintf(s, 0x800u, "Debug mode %s\n", v14);
            sub_157F8(s);
          }
          if ( strncasecmp(&v25, "m", 1u) )
            break;
          v15 = (unsigned __int8)byte_80AE8 ^ 1;
          byte_80AE8 ^= 1u;
          if ( v15 )
            v16 = "enabled";
          else
            v16 = "disabled";
          snprintf(s, 0x800u, "Compact mode %s\n", v16);
          sub_157F8(s);
          sub_15588();
        }
        if ( strncasecmp(&v25, "p", 1u) )
          break;
        v17 = (unsigned __int8)byte_80A00 ^ 1;
        byte_80A00 = v17;
        byte_7CC60 = v17;
        if ( v17 )
          v18 = "enabled";
        else
          v18 = "disabled";
        snprintf(s, 0x800u, "Per-device stats %s\n", v18);
        sub_157F8(s);
      }
      if ( strncasecmp(&v25, "r", 1u) )
        break;
      v19 = (unsigned __int8)byte_804B0 ^ 1;
      byte_804B0 ^= 1u;
      if ( v19 )
      {
        byte_80EA8 = 0;
        v20 = "enabled";
      }
      else
      {
        v20 = "disabled";
      }
      snprintf(s, 0x800u, "RPC protocol debugging %s\n", v20);
      sub_157F8(s);
    }
    if ( !strncasecmp(&v25, "c", 1u) )
      break;
    if ( !strncasecmp(&v25, "l", 1u) )
    {
      v21 = sub_259E0("Interval in seconds");
      if ( v21 <= 0x270F )
      {
        dword_79C48 = v21;
        snprintf(s, 0x800u, "Log interval set to %d seconds\n", v21);
      }
      else
      {
        strcpy(s, "Invalid selection\n");
      }
      sub_157F8(s);
    }
    else
    {
      if ( !strncasecmp(&v25, "s", 1u) )
      {
        byte_80CC0 = 1;
        goto LABEL_81;
      }
      if ( !strncasecmp(&v25, "w", 1u) )
      {
        v22 = (unsigned __int8)byte_80A02 ^ 1;
        byte_80A02 ^= 1u;
        if ( v22 )
          v23 = "enabled";
        else
          v23 = "disabled";
        snprintf(s, 0x800u, "WorkTime details %s\n", v23);
        sub_157F8(s);
      }
      else if ( !strncasecmp(&v25, "t", 1u) )
      {
        byte_7C3F5 ^= 1u;
      }
      else if ( !strncasecmp(&v25, "i", 1u) )
      {
        byte_7C500 ^= 1u;
      }
      else
      {
        if ( strncasecmp(&v25, "z", 1u) )
          break;
        sub_14378();
      }
    }
  }
  sub_15684();
LABEL_81:
  immedok((WINDOW *)dword_80560, 0);
  byte_80C70 = 0;
}
