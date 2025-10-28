void sub_26B74()
{
  int v0; // r9
  char *v1; // r3
  const char *v2; // lr
  int v3; // r0
  int v4; // r0
  int v5; // r11
  int v6; // r11
  int v7; // r3
  const char *v8; // r3
  char *v9; // r11
  int i; // r9
  const char *v11; // t1
  int v12; // r3
  unsigned int v13; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r9
  int v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // lr
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r11
  int v27; // r0
  int v28; // r9
  int v29; // r11
  int v30; // r0
  int v31; // r9
  int v32; // r2
  const char *v33; // r2
  const char *v34; // r3
  __int64 v35; // r10
  __int64 v36; // r2
  double v37; // d8
  double v38; // r0
  int v39; // r3
  unsigned int v40; // [sp+10h] [bp-81Ch]
  unsigned int v41; // [sp+14h] [bp-818h]
  char s1; // [sp+27h] [bp-805h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  byte_64068 = 1;
  immedok((WINDOW *)dword_639D8, 1);
  sub_193CC();
  v0 = 0;
LABEL_2:
  while ( 2 )
  {
    while ( v0 < dword_63740 )
    {
LABEL_23:
      v6 = *(_DWORD *)(dword_639E0 + 4 * v0);
      if ( v6 == sub_1D644() )
        wattr_on((WINDOW *)dword_639D8, 0x200000u, 0);
      if ( *(_DWORD *)(v6 + 100) != 1 )
        wattr_on((WINDOW *)dword_639D8, 0x100000u, 0);
      snprintf(s, 0x800u, "%d: ", *(_DWORD *)v6);
      sub_1952C(s);
      v7 = *(_DWORD *)(v6 + 100);
      if ( v7 == 1 )
      {
        strcpy(s, "Enabled ");
        sub_1952C(s);
      }
      else if ( v7 )
      {
        if ( v7 == 2 )
        {
          strcpy(s, "Rejecting ");
          sub_1952C(s);
        }
      }
      else
      {
        strcpy(s, "Disabled ");
        sub_1952C(s);
      }
      ++v0;
      v8 = "Alive";
      if ( *(_BYTE *)(v6 + 97) )
        v8 = "Dead";
      snprintf(
        s,
        0x800u,
        "%s Quota %d Prio %d: %s  User:%s\n",
        v8,
        *(_DWORD *)(v6 + 56),
        *(_DWORD *)(v6 + 4),
        *(const char **)(v6 + 164),
        *(const char **)(v6 + 172));
      sub_1952C(s);
      wattr_off((WINDOW *)dword_639D8, 0x300000u, 0);
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
              snprintf(
                s,
                0x800u,
                "\nCurrent pool management strategy: %s\n",
                (const char *)dword_5F890[dword_611AC + 520]);
              sub_1952C(s);
              if ( dword_611AC == 2 )
              {
                snprintf(s, 0x800u, "Set to rotate every %d minutes\n", dword_63AF8);
                sub_1952C(s);
              }
              v1 = "disabled";
              if ( byte_63BC5 )
                v1 = "enabled";
              snprintf(s, 0x800u, "[F]ailover only %s\n", v1);
              sub_1952C(s);
              strcpy(s, "Pool [A]dd [R]emove [D]isable [E]nable [Q]uota change\n");
              sub_1952C(s);
              strcpy(s, "[C]hange management strategy [S]witch pool [I]nformation\n");
              sub_1952C(s);
              strcpy(s, "Or press any other key to continue\n");
              sub_1952C(s);
              sub_19350();
              s1 = wgetch((WINDOW *)stdscr);
              if ( !strncasecmp(&s1, "a", 1u) )
              {
                v0 = 0;
                sub_26934(1);
                goto LABEL_2;
              }
              if ( strncasecmp(&s1, "r", 1u) )
                break;
              if ( dword_63740 <= 1 )
              {
                v2 = "Cannot remove last pool";
                goto LABEL_47;
              }
              v3 = sub_25D00("Select pool number");
              if ( v3 >= 0 && v3 < dword_63740 )
              {
                v26 = *(_DWORD *)(dword_639E0 + 4 * v3);
                if ( v26 == sub_1D644() )
                {
                  sub_195D4(0);
                  if ( v26 != sub_1D644() )
                  {
LABEL_82:
                    v39 = *(_DWORD *)(v26 + 100);
                    v0 = 0;
                    *(_DWORD *)(v26 + 100) = 0;
                    if ( v39 == 1 )
                      --dword_63B84;
                    sub_15600(v26);
                    goto LABEL_2;
                  }
                }
                else if ( v26 != sub_1D644() )
                {
                  goto LABEL_82;
                }
                strcpy(s, "Unable to remove pool due to activity\n");
                sub_1952C(s);
              }
              else
              {
LABEL_13:
                strcpy(s, "Invalid selection\n");
                sub_1952C(s);
              }
            }
            if ( !strncasecmp(&s1, "s", 1u) )
            {
              v24 = sub_25D00("Select pool number");
              if ( v24 >= 0 && v24 < dword_63740 )
              {
                v25 = *(_DWORD *)(dword_639E0 + 4 * v24);
                if ( *(_DWORD *)(v25 + 100) != 1 )
                {
                  *(_DWORD *)(v25 + 100) = 1;
                  ++dword_63B84;
                }
                goto LABEL_52;
              }
              goto LABEL_13;
            }
            if ( strncasecmp(&s1, "d", 1u) )
              break;
            if ( dword_63B84 > 1 )
            {
              v4 = sub_25D00("Select pool number");
              if ( v4 < 0 || v4 >= dword_63740 )
                goto LABEL_13;
              v5 = *(_DWORD *)(dword_639E0 + 4 * v4);
              if ( *(_DWORD *)(v5 + 100) == 1 )
                --dword_63B84;
              v0 = 0;
              *(_DWORD *)(v5 + 100) = 0;
              if ( v5 == sub_1D644() )
              {
                sub_195D4(0);
                goto LABEL_2;
              }
              goto LABEL_22;
            }
            strcpy(s, "Cannot disable last pool");
            sub_1952C(s);
          }
          if ( strncasecmp(&s1, "e", 1u) )
            break;
          v27 = sub_25D00("Select pool number");
          if ( v27 < 0 || v27 >= dword_63740 )
            goto LABEL_13;
          v28 = *(_DWORD *)(dword_639E0 + 4 * v27);
          if ( *(_DWORD *)(v28 + 100) != 1 )
          {
            *(_DWORD *)(v28 + 100) = 1;
            ++dword_63B84;
          }
          v29 = *(_DWORD *)(v28 + 4);
          if ( v29 < *(_DWORD *)(sub_1D644() + 4) )
          {
            v25 = v28;
LABEL_52:
            v0 = 0;
            sub_195D4(v25);
            goto LABEL_2;
          }
LABEL_22:
          v0 = 0;
          if ( dword_63740 > 0 )
            goto LABEL_23;
        }
        if ( !strncasecmp(&s1, "c", 1u) )
        {
          v9 = &byte_600AC;
          for ( i = 0; i != 5; ++i )
          {
            v11 = (const char *)*((_DWORD *)v9 + 1);
            v9 += 4;
            v12 = i;
            snprintf(s, 0x800u, "%d: %s\n", v12, v11);
            sub_1952C(s);
          }
          v13 = sub_25D00("Select strategy number type");
          v14 = v13;
          if ( v13 <= 4 )
          {
            if ( v13 != 2
              || (dword_63AF8 = sub_25D00("Select interval in minutes"), (unsigned int)dword_63AF8 <= 0x270F) )
            {
              dword_611AC = v14;
              v0 = 0;
              sub_195D4(0);
              goto LABEL_2;
            }
            dword_63AF8 = 0;
          }
          goto LABEL_13;
        }
        if ( strncasecmp(&s1, "i", 1u) )
          break;
        v30 = sub_25D00("Select pool number");
        if ( v30 < 0 || v30 >= dword_63740 )
          goto LABEL_13;
        v31 = *(_DWORD *)(dword_639E0 + 4 * v30);
        if ( sub_19140() )
        {
          snprintf(s, 0x800u, "Pool: %s\n", *(const char **)(v31 + 164));
          sub_153C8(s);
          v32 = *(_DWORD *)(v31 + 32);
          if ( v32 )
          {
            if ( v32 > 1 )
              v33 = "S";
            else
              v33 = "";
            snprintf(s, 0x800u, "SOLVED %d BLOCK%s!\n", *(_DWORD *)(v31 + 32), v33);
            sub_153C8(s);
          }
          if ( !*(_BYTE *)(v31 + 632) )
          {
            v34 = "Does not have";
            if ( *(_DWORD *)(v31 + 108) )
              v34 = "Has";
            snprintf(s, 0x800u, "%s own long-poll support\n", v34);
            sub_153C8(s);
          }
          snprintf(s, 0x800u, " Queued work requests: %d\n", *(_DWORD *)(v31 + 116));
          sub_153C8(s);
          snprintf(s, 0x800u, " Share submissions: %lld\n", *(_QWORD *)(v31 + 8) + *(_QWORD *)(v31 + 16));
          sub_153C8(s);
          snprintf(s, 0x800u, " Accepted shares: %lld\n", *(_QWORD *)(v31 + 8));
          sub_153C8(s);
          snprintf(s, 0x800u, " Rejected shares: %lld\n", *(_QWORD *)(v31 + 16));
          sub_153C8(s);
          snprintf(s, 0x800u, " Accepted difficulty shares: %1.f\n", *(double *)(v31 + 72));
          sub_153C8(s);
          snprintf(s, 0x800u, " Rejected difficulty shares: %1.f\n", *(double *)(v31 + 80));
          sub_153C8(s);
          v35 = *(_QWORD *)(v31 + 8);
          v36 = *(_QWORD *)(v31 + 16);
          if ( v35 || v36 )
          {
            v41 = *(_DWORD *)(v31 + 16);
            v40 = *(_DWORD *)(v31 + 20);
            v37 = sub_493DC(100 * (int)v36, (unsigned __int64)(100 * v36) >> 32);
            v38 = sub_493DC((unsigned int)v35 + v41, (v35 + __PAIR64__(v40, v41)) >> 32);
            snprintf(s, 0x800u, " Reject ratio: %.1f%%\n", v37 / v38);
            sub_153C8(s);
          }
          snprintf(s, 0x800u, " Items worked on: %d\n", *(_DWORD *)(v31 + 68));
          sub_153C8(s);
          snprintf(s, 0x800u, " Discarded work due to new blocks: %d\n", *(_DWORD *)(v31 + 124));
          sub_153C8(s);
          snprintf(s, 0x800u, " Stale submissions discarded due to new blocks: %d\n", *(_DWORD *)(v31 + 120));
          sub_153C8(s);
          snprintf(s, 0x800u, " Unable to get work from server occasions: %d\n", *(_DWORD *)(v31 + 128));
          sub_153C8(s);
          snprintf(s, 0x800u, " Submitting work remotely delay occasions: %d\n\n", *(_DWORD *)(v31 + 132));
          sub_153C8(s);
          if ( pthread_mutex_unlock(&stru_63D48) )
            sub_B694("unlock_curses", 2928);
          off_60178();
        }
      }
      if ( strncasecmp(&s1, "q", 1u) )
        break;
      v15 = sub_25D00("Select pool number");
      if ( v15 < 0 || v15 >= dword_63740 )
        goto LABEL_13;
      v16 = *(_DWORD *)(dword_639E0 + 4 * v15);
      v17 = sub_25D00("Set quota");
      if ( v17 >= 0 )
      {
        *(_DWORD *)(v16 + 56) = v17;
        v0 = 0;
        sub_14E18();
        goto LABEL_2;
      }
      v2 = "Invalid negative quota\n";
LABEL_47:
      v18 = *(_DWORD *)v2;
      v19 = *((_DWORD *)v2 + 1);
      v20 = *((_DWORD *)v2 + 2);
      v21 = *((_DWORD *)v2 + 3);
      v22 = v2 + 16;
      *(_DWORD *)s = v18;
      *(_DWORD *)&s[4] = v19;
      *(_DWORD *)&s[8] = v20;
      *(_DWORD *)&s[12] = v21;
      v23 = v22[1];
      *(_DWORD *)&s[16] = *v22;
      *(_DWORD *)&s[20] = v23;
      sub_1952C(s);
    }
    if ( !strncasecmp(&s1, "f", 1u) )
    {
      v0 = 0;
      byte_63BC5 ^= 1u;
      continue;
    }
    break;
  }
  sub_193CC();
  immedok((WINDOW *)dword_639D8, 0);
  byte_64068 = 0;
}
