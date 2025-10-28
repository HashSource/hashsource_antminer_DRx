void sub_2696C()
{
  int v0; // r5
  int v1; // r4
  int v2; // r3
  const char *v3; // r3
  const char *v4; // r3
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int *v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int *v12; // r4
  int v13; // r5
  char *v14; // r5
  int i; // r4
  const char *v16; // t1
  unsigned int v17; // r0
  int v18; // r4
  unsigned int v19; // r0
  int v20; // r0
  int v21; // r8
  int v22; // r3
  const char *v23; // r2
  const char *v24; // r3
  __int64 v25; // r4
  double v26; // d8
  double v27; // r0
  int *v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r0
  __int64 v32; // [sp+10h] [bp-810h]
  char s[2036]; // [sp+1Ch] [bp-804h] BYREF
  char v34; // [sp+81Fh] [bp-1h] BYREF

  byte_80C70 = 1;
  immedok((WINDOW *)dword_80560, 1);
  sub_15684();
  v0 = 0;
LABEL_16:
  while ( 2 )
  {
    while ( v0 < dword_802C8 )
    {
      v1 = *(_DWORD *)(dword_80568 + 4 * v0);
      if ( v1 == sub_14A18() )
        wattr_on((WINDOW *)dword_80560, 0x200000u, 0);
      if ( *(_DWORD *)(v1 + 100) != 1 )
        wattr_on((WINDOW *)dword_80560, 0x100000u, 0);
      snprintf(s, 0x800u, "%d: ", *(_DWORD *)v1);
      sub_157F8(s);
      v2 = *(_DWORD *)(v1 + 100);
      if ( v2 == 1 )
      {
        strcpy(s, "Enabled ");
        sub_157F8(s);
      }
      else if ( v2 )
      {
        if ( v2 == 2 )
        {
          strcpy(s, "Rejecting ");
          sub_157F8(s);
        }
      }
      else
      {
        strcpy(s, "Disabled ");
        sub_157F8(s);
      }
      if ( *(_BYTE *)(v1 + 97) )
        v3 = "Dead";
      else
        v3 = "Alive";
      snprintf(
        s,
        0x800u,
        "%s Quota %d Prio %d: %s  User:%s\n",
        v3,
        *(_DWORD *)(v1 + 56),
        *(_DWORD *)(v1 + 4),
        *(const char **)(v1 + 172),
        *(const char **)(v1 + 180));
      sub_157F8(s);
      wattr_off((WINDOW *)dword_80560, 0x300000u, 0);
      ++v0;
    }
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
                snprintf(
                  s,
                  0x800u,
                  "\nCurrent pool management strategy: %s\n",
                  (const char *)dword_79450[dword_7AA24 + 522]);
                sub_157F8(s);
                if ( dword_7AA24 == 2 )
                {
                  snprintf(s, 0x800u, "Set to rotate every %d minutes\n", dword_80700);
                  sub_157F8(s);
                }
                if ( byte_807CD )
                  v4 = "enabled";
                else
                  v4 = "disabled";
                snprintf(s, 0x800u, "[F]ailover only %s\n", v4);
                sub_157F8(s);
                strcpy(s, "Pool [A]dd [R]emove [D]isable [E]nable [Q]uota change\n");
                sub_157F8(s);
                strcpy(s, "[C]hange management strategy [S]witch pool [I]nformation\n");
                sub_157F8(s);
                strcpy(s, "Or press any other key to continue\n");
                sub_157F8(s);
                sub_15608();
                v34 = wgetch((WINDOW *)stdscr);
                if ( !strncasecmp(&v34, "a", 1u) )
                {
                  sub_26714(1);
                  v0 = 0;
                  goto LABEL_16;
                }
                if ( strncasecmp(&v34, "r", 1u) )
                  break;
                if ( dword_802C8 > 1 )
                {
                  v5 = sub_259E0("Select pool number");
                  if ( v5 < 0 || v5 >= dword_802C8 )
                    goto LABEL_89;
                  v6 = *(_DWORD *)(dword_80568 + 4 * v5);
                  if ( v6 == sub_14A18() )
                    sub_199D4(0);
                  if ( v6 != sub_14A18() )
                  {
                    sub_BFF4(v6);
                    sub_12370(v6);
                    v0 = 0;
                    goto LABEL_16;
                  }
                  strcpy(s, "Unable to remove pool due to activity\n");
                  sub_157F8(s);
                }
                else
                {
                  strcpy(s, "Cannot remove last pool");
                  sub_157F8(s);
                }
              }
              if ( !strncasecmp(&v34, "s", 1u) )
              {
                v7 = sub_259E0("Select pool number");
                if ( v7 >= 0 && v7 < dword_802C8 )
                {
                  v8 = *(int **)(dword_80568 + 4 * v7);
                  sub_BFC8((int)v8);
                  sub_199D4(v8);
                  v0 = 0;
                  goto LABEL_16;
                }
                goto LABEL_89;
              }
              if ( strncasecmp(&v34, "d", 1u) )
                break;
              if ( dword_8078C > 1 )
              {
                v9 = sub_259E0("Select pool number");
                if ( v9 >= 0 && v9 < dword_802C8 )
                {
                  v10 = *(_DWORD *)(dword_80568 + 4 * v9);
                  sub_BFF4(v10);
                  if ( v10 == sub_14A18() )
                    sub_199D4(0);
                  v0 = 0;
                  goto LABEL_16;
                }
                goto LABEL_89;
              }
              strcpy(s, "Cannot disable last pool");
              sub_157F8(s);
            }
            if ( strncasecmp(&v34, "e", 1u) )
              break;
            v11 = sub_259E0("Select pool number");
            if ( v11 >= 0 && v11 < dword_802C8 )
            {
              v12 = *(int **)(dword_80568 + 4 * v11);
              sub_BFC8((int)v12);
              v13 = v12[1];
              if ( v13 < *(_DWORD *)(sub_14A18() + 4) )
                sub_199D4(v12);
              v0 = 0;
              goto LABEL_16;
            }
LABEL_89:
            strcpy(s, "Invalid selection\n");
            sub_157F8(s);
          }
          if ( strncasecmp(&v34, "c", 1u) )
            break;
          v14 = &byte_79C74;
          for ( i = 0; i != 5; ++i )
          {
            v16 = (const char *)*((_DWORD *)v14 + 1);
            v14 += 4;
            snprintf(s, 0x800u, "%d: %s\n", i, v16);
            sub_157F8(s);
          }
          v17 = sub_259E0("Select strategy number type");
          v18 = v17;
          if ( v17 > 4 )
            goto LABEL_89;
          if ( v17 != 2 )
            goto LABEL_64;
          v19 = sub_259E0("Select interval in minutes");
          if ( v19 <= 0x270F )
          {
            dword_80700 = v19;
LABEL_64:
            dword_7AA24 = v18;
            sub_199D4(0);
            v0 = 0;
            goto LABEL_16;
          }
          dword_80700 = 0;
          strcpy(s, "Invalid selection\n");
          sub_157F8(s);
        }
        if ( strncasecmp(&v34, "i", 1u) )
          break;
        v20 = sub_259E0("Select pool number");
        if ( v20 < 0 || v20 >= dword_802C8 )
          goto LABEL_89;
        v21 = *(_DWORD *)(dword_80568 + 4 * v20);
        if ( sub_153F0() )
        {
          snprintf(s, 0x800u, "Pool: %s\n", *(const char **)(v21 + 172));
          sub_12064(s);
          v22 = *(_DWORD *)(v21 + 32);
          if ( v22 )
          {
            if ( v22 <= 1 )
              v23 = &byte_6DF60;
            else
              v23 = "S";
            snprintf(s, 0x800u, "SOLVED %d BLOCK%s!\n", v22, v23);
            sub_12064(s);
          }
          if ( !*(_BYTE *)(v21 + 640) )
          {
            if ( *(_DWORD *)(v21 + 112) )
              v24 = "Has";
            else
              v24 = "Does not have";
            snprintf(s, 0x800u, "%s own long-poll support\n", v24);
            sub_12064(s);
          }
          snprintf(s, 0x800u, " Queued work requests: %d\n", *(_DWORD *)(v21 + 120));
          sub_12064(s);
          snprintf(s, 0x800u, " Share submissions: %lld\n", *(_QWORD *)(v21 + 16) + *(_QWORD *)(v21 + 8));
          sub_12064(s);
          snprintf(s, 0x800u, " Accepted shares: %lld\n", *(_QWORD *)(v21 + 8));
          sub_12064(s);
          snprintf(s, 0x800u, " Rejected shares: %lld\n", *(_QWORD *)(v21 + 16));
          sub_12064(s);
          snprintf(s, 0x800u, " Accepted difficulty shares: %1.f\n", *(double *)(v21 + 72));
          sub_12064(s);
          snprintf(s, 0x800u, " Rejected difficulty shares: %1.f\n", *(double *)(v21 + 80));
          sub_12064(s);
          v32 = *(_QWORD *)(v21 + 8);
          if ( v32 || *(_QWORD *)(v21 + 16) )
          {
            v25 = *(_QWORD *)(v21 + 16);
            v26 = sub_5ED34(100 * (int)v25, (unsigned __int64)(100 * v25) >> 32);
            v27 = sub_5ED34((int)v32 + (int)v25, (unsigned __int64)(v32 + v25) >> 32);
            snprintf(s, 0x800u, " Reject ratio: %.1f%%\n", v26 / v27);
            sub_12064(s);
          }
          snprintf(s, 0x800u, " Items worked on: %d\n", *(_DWORD *)(v21 + 68));
          sub_12064(s);
          snprintf(s, 0x800u, " Discarded work due to new blocks: %d\n", *(_DWORD *)(v21 + 128));
          sub_12064(s);
          snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d\n", *(_DWORD *)(v21 + 124));
          sub_12064(s);
          snprintf(s, 0x800u, " Unable to get work from server occasions: %d\n", *(_DWORD *)(v21 + 132));
          sub_12064(s);
          snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n\n", *(_DWORD *)(v21 + 136));
          sub_12064(s);
          if ( pthread_mutex_unlock(&stru_80950) )
          {
            v28 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v28,
              "cgminer.c",
              "unlock_curses",
              3271);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          off_79D40(0);
        }
      }
      if ( strncasecmp(&v34, "q", 1u) )
        break;
      v29 = sub_259E0("Select pool number");
      if ( v29 < 0 || v29 >= dword_802C8 )
        goto LABEL_89;
      v30 = *(_DWORD *)(dword_80568 + 4 * v29);
      v31 = sub_259E0("Set quota");
      if ( v31 >= 0 )
      {
        *(_DWORD *)(v30 + 56) = v31;
        sub_11918();
        v0 = 0;
        goto LABEL_16;
      }
      strcpy(s, "Invalid negative quota\n");
      sub_157F8(s);
    }
    if ( !strncasecmp(&v34, "f", 1u) )
    {
      byte_807CD ^= 1u;
      v0 = 0;
      continue;
    }
    break;
  }
  sub_15684();
  immedok((WINDOW *)dword_80560, 0);
  byte_80C70 = 0;
}
