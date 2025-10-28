void __noreturn sub_1E2E4()
{
  double v0; // d0
  int v1; // r1
  int v2; // r2
  int v3; // r4
  int v4; // r5
  bool v5; // cc
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r2
  bool v10; // zf
  int v11; // r8
  int v12; // r6
  double v13; // d11
  double v14; // r4
  int v15; // r9
  double v16; // d8
  int v17; // r0
  int v18; // r0
  const char *v19; // r3
  const char *v20; // r1
  const char *v21; // r2
  int v22; // r9
  int v23; // r4
  int v24; // r0
  int v25; // r5
  double v26; // d8
  __int64 v27; // d11
  const char *v28; // r2
  size_t v29; // r2
  int v30; // r3
  int v31; // r3
  double v32; // r0
  double v33; // d11
  unsigned __int64 v34; // r0
  unsigned __int64 v35; // r0
  double v36; // r0
  double v37; // r0
  double v38; // r0
  double v39; // r0
  unsigned __int64 v40; // r0
  unsigned __int64 v41; // r0
  double v42; // r0
  double v43; // r0
  double v44; // r0
  int v45; // r2
  int v46; // r2
  int *v47; // r0
  int *v48; // r0
  int v49; // r0
  int v50; // r2
  int v51; // r3
  int v52; // t1
  int *v53; // r0
  int v54; // r4
  int v55; // r0
  int v56; // r5
  int v57; // r5
  int v58; // r0
  int v59; // r4
  int v60; // r6
  int v61; // r3
  int v62; // r2
  _BYTE v63[8]; // [sp+4Ch] [bp-940h] BYREF
  char dest[12]; // [sp+54h] [bp-938h] BYREF
  char v65[16]; // [sp+60h] [bp-92Ch] BYREF
  char v66[16]; // [sp+70h] [bp-91Ch] BYREF
  char v67[256]; // [sp+80h] [bp-90Ch] BYREF
  char s[2048]; // [sp+180h] [bp-80Ch] BYREF
  int v69; // [sp+980h] [bp-Ch]
  int v70; // [sp+984h] [bp-8h]

  pthread_setcanceltype(1, 0);
  sub_34604("Watchdog");
  sub_E54C();
  v69 = 0;
  v70 = 0;
  sub_2FE30(&dword_75350);
  while ( 1 )
  {
LABEL_2:
    sleep(2u);
    sub_19340();
    sub_1D688(-1, v1, 0, 0);
    if ( sub_15210() )
    {
      if ( dword_79E60 )
      {
        v2 = *(__int16 *)(dword_79E60 + 4);
        v3 = v2 + 1;
        v4 = *(__int16 *)(dword_79E60 + 6) + 1;
        v5 = v4 <= 79;
        if ( v4 > 79 )
          v5 = v3 <= 24;
        if ( !v5 )
        {
          if ( v3 > dword_73E84 + 2 && dword_73E84 < dword_73E80 )
          {
            v6 = v2 - 1;
            if ( v6 >= dword_73E80 )
              v6 = dword_73E80;
            dword_73E84 = v6;
            dword_73E88 = v6 + 1;
            mvwin((WINDOW *)dword_79480, v6 + 1, 0);
            wresize((WINDOW *)dword_79888, dword_73E84, v4);
          }
          v7 = v3 - dword_73E88;
          if ( dword_79480 )
          {
            v8 = *(__int16 *)(dword_79480 + 4) + 1;
            v9 = *(__int16 *)(dword_79480 + 6) + 1;
          }
          else
          {
            v8 = -1;
            v9 = -1;
          }
          v10 = v4 == v9;
          if ( v4 == v9 )
            v10 = v7 == v8;
          if ( !v10 )
            wresize((WINDOW *)dword_79480, v7, v4);
        }
      }
      v11 = sub_14838();
      if ( byte_754A8 )
        v12 = 100;
      else
        v12 = 80;
      wattr_on((WINDOW *)dword_79888, 0x200000u, 0);
      snprintf(s, 0x100u, " cgminer version 4.9.0 - Started: %s", byte_73EAC);
      mvwprintw((WINDOW *)dword_79888, 0, 0, "%s", s);
      wattr_off((WINDOW *)dword_79888, 0x200000u, 0);
      if ( wmove((WINDOW *)dword_79888, 1, 0) != -1 )
        whline((WINDOW *)dword_79888, 0x2Du, v12);
      snprintf(s, 0x100u, " %s", byte_753A8);
      mvwprintw((WINDOW *)dword_79888, 2, 0, "%s", s);
      wclrtoeol((WINDOW *)dword_79888);
      if ( byte_754A8 )
      {
        v13 = dbl_796B0;
        v14 = dbl_79738;
        v15 = dword_7996C;
        v16 = dbl_79150 / dbl_72438 * 60.0;
        v17 = sub_145EC();
        snprintf(
          s,
          0x100u,
          " A:%.0f  R:%.0f  HW:%d  WU:%.1f/m | ST: %d  SS: %lld  NB: %d  LW: %d  GF: %d  RF: %d",
          v13,
          v14,
          v15,
          v16,
          v17,
          dbl_79DD0,
          dword_79C68,
          dword_79598,
          dword_7948C,
          dword_78EB8);
        mvwprintw((WINDOW *)dword_79888, 3, 0, "%s", s);
      }
      else
      {
        if ( byte_75398 )
        {
          v18 = sub_145EC();
          snprintf(
            s,
            0x100u,
            " ST: %d  SS: %lld  NB: %d  LW: %d  GF: %d  RF: %d",
            v18,
            dbl_79DD0,
            dword_79C68,
            dword_79598,
            dword_7948C,
            dword_78EB8);
        }
        else
        {
          snprintf(
            s,
            0x100u,
            " A:%.0f  R:%.0f  HW:%d  WU:%.1f/m",
            dbl_796B0,
            dbl_79738,
            dword_7996C,
            dbl_79150 / dbl_72438 * 60.0);
        }
        mvwprintw((WINDOW *)dword_79888, 3, 0, "%s", s);
      }
      wclrtoeol((WINDOW *)dword_79888);
      if ( sub_BDE0() && dword_791E8 > 1 )
      {
        if ( byte_79DC9 )
          v19 = &byte_67C50;
        else
          v19 = "out";
        snprintf(s, 0x100u, " Connected to multiple pools with%s block change notify", v19);
        mvwprintw((WINDOW *)dword_79888, 4, 0, "%s", s);
      }
      else if ( *(_BYTE *)(v11 + 640) )
      {
        snprintf(
          s,
          0x100u,
          " Connected to %s diff %s with stratum as user %s",
          *(const char **)(v11 + 600),
          (const char *)(v11 + 48),
          *(const char **)(v11 + 180));
        mvwprintw((WINDOW *)dword_79888, 4, 0, "%s", s);
      }
      else
      {
        if ( byte_79DC9 )
          v20 = &byte_67C50;
        else
          v20 = "out";
        if ( *(_BYTE *)(v11 + 752) )
          v21 = "GBT";
        else
          v21 = "LP";
        snprintf(
          s,
          0x100u,
          " Connected to %s diff %s with%s %s as user %s",
          *(const char **)(v11 + 600),
          (const char *)(v11 + 48),
          v20,
          v21,
          *(const char **)(v11 + 180));
        mvwprintw((WINDOW *)dword_79888, 4, 0, "%s", s);
      }
      wclrtoeol((WINDOW *)dword_79888);
      snprintf(
        s,
        0x100u,
        " Block: %s...  Diff:%s  Started: %s  Best share: %s   ",
        byte_754AC,
        byte_754B8,
        &byte_754B8[8],
        (const char *)&dword_72BE8);
      mvwprintw((WINDOW *)dword_79888, 5, 0, "%s", s);
      if ( wmove((WINDOW *)dword_79888, 6, 0) != -1 )
        whline((WINDOW *)dword_79888, 0x2Du, v12);
      if ( wmove((WINDOW *)dword_79888, dword_73E84 - 1, 0) != -1 )
        whline((WINDOW *)dword_79888, 0x2Du, v12);
      strcpy(s, "[P]ool management [S]ettings [D]isplay options [Q]uit");
      mvwprintw((WINDOW *)dword_79888, dword_73E8C - 1, 1, "%s", s);
      if ( dword_797E8 > 0 )
      {
        v22 = 0;
        v23 = 0;
        do
        {
          v24 = sub_13B28(v23);
          v25 = v24;
          if ( v24 )
          {
            if ( byte_79A08 || v22 + dword_73E8C > LINES - 2 || dword_73E90 <= v22 )
            {
              ++v22;
            }
            else
            {
              if ( *(_DWORD *)(v24 + 368) )
              {
                sub_2FE30(v63);
                sub_3000C(v63, v25 + 368);
                v26 = v0;
              }
              else
              {
                v26 = dbl_72438;
              }
              if ( v26 < 1.0 )
                v26 = 1.0;
              *(double *)(v25 + 88) = (double)*(int *)(v25 + 36) / v26 * 60.0;
              v27 = *(_QWORD *)(v25 + 192);
              wmove((WINDOW *)dword_79888, v22 + dword_73E8C, 0);
              sub_DF44(COERCE_DOUBLE(__PAIR64__(&dword_72C20, v23)));
              v28 = *(const char **)(v25 + 28);
              if ( v28 )
              {
                strcpy(dest, "        ");
                strncpy(dest, v28, 8u);
              }
              else
              {
                sprintf(dest, "%-8d", *(_DWORD *)(v25 + 8));
              }
              snprintf(s, 0x100u, " %*d: %s %-8s: ", dword_72C20, v23, *(const char **)(*(_DWORD *)(v25 + 4) + 8), dest);
              wprintw((WINDOW *)dword_79888, "%s", s);
              v67[0] = 0;
              (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)(v25 + 4) + 20))(v67, 256, v25);
              v29 = strlen(v67);
              if ( v29 <= 0x16 )
                strncat(v67, "                                        ", 23 - v29);
              snprintf(s, 0x100u, "%s | ", v67);
              wprintw((WINDOW *)dword_79888, "%s", s);
              v30 = *(_DWORD *)(v25 + 96);
              if ( v30 == 2 )
              {
                strcpy(s, "DEAD  ");
                wprintw((WINDOW *)dword_79888, "%s", s);
              }
              else if ( v30 == 1 )
              {
                strcpy(s, "SICK  ");
                wprintw((WINDOW *)dword_79888, "%s", s);
              }
              else
              {
                v31 = *(_DWORD *)(v25 + 32);
                if ( v31 == 1 )
                {
                  strcpy(s, "OFF   ");
                  wprintw((WINDOW *)dword_79888, "%s", s);
                }
                else if ( v31 == 2 )
                {
                  strcpy(s, "REST  ");
                  wprintw((WINDOW *)dword_79888, "%s", s);
                }
                else
                {
                  v32 = sub_5A404(v27, HIDWORD(v27));
                  v33 = v32 / v26 * 60.0;
                  if ( byte_754A8 )
                  {
                    v34 = sub_5A4E8(
                            COERCE_UNSIGNED_INT64(*(double *)(v25 + 80) / v26 * 1000000.0),
                            HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v25 + 80) / v26 * 1000000.0)));
                    sub_DF7C(v34, v65, 0x10u, 4);
                    v35 = sub_5A4E8(
                            COERCE_UNSIGNED_INT64(*(double *)(v25 + 48) * 1000000.0),
                            HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v25 + 48) * 1000000.0)));
                    sub_DF7C(v35, v66, 0x10u, 4);
                    LODWORD(v36) = (int)v33;
                    HIDWORD(v36) = &dword_72C24;
                    v37 = sub_DF44(v36);
                    LODWORD(v37) = &dword_72C28;
                    v38 = sub_DF10(v37);
                    *(float *)&v0 = *(double *)(v25 + 208);
                    LODWORD(v38) = &dword_72C2C;
                    sub_DF10(v38);
                    LODWORD(v39) = *(_DWORD *)(v25 + 44);
                    HIDWORD(v39) = &dword_72C30;
                    sub_DF44(v39);
                    snprintf(
                      s,
                      0x100u,
                      "%6s / %6sh/s WU:%*.1f/m A:%*.0f R:%*.0f HW:%*d",
                      v66,
                      v65,
                      dword_72C24 + 2,
                      v33,
                      dword_72C28,
                      *(double *)(v25 + 200),
                      dword_72C2C,
                      *(double *)(v25 + 208),
                      dword_72C30,
                      *(_DWORD *)(v25 + 44));
                    wprintw((WINDOW *)dword_79888, "%s", s);
                  }
                  else
                  {
                    if ( byte_75398 )
                    {
                      LODWORD(v32) = &dword_72C28;
                      v43 = sub_DF10(v32);
                      *(float *)&v0 = *(double *)(v25 + 208);
                      LODWORD(v43) = &dword_72C2C;
                      sub_DF10(v43);
                      LODWORD(v44) = *(_DWORD *)(v25 + 44);
                      HIDWORD(v44) = &dword_72C30;
                      sub_DF44(v44);
                      snprintf(
                        s,
                        0x100u,
                        "A:%*.0f R:%*.0f HW:%*d",
                        dword_72C28,
                        *(double *)(v25 + 200),
                        dword_72C2C,
                        *(double *)(v25 + 208),
                        dword_72C30,
                        *(_DWORD *)(v25 + 44));
                    }
                    else
                    {
                      v40 = sub_5A4E8(
                              COERCE_UNSIGNED_INT64(*(double *)(v25 + 80) / v26 * 1000000.0),
                              HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v25 + 80) / v26 * 1000000.0)));
                      sub_DF7C(v40, v65, 0x10u, 4);
                      v41 = sub_5A4E8(
                              COERCE_UNSIGNED_INT64(*(double *)(v25 + 48) * 1000000.0),
                              HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v25 + 48) * 1000000.0)));
                      sub_DF7C(v41, v66, 0x10u, 4);
                      LODWORD(v42) = (int)v33;
                      HIDWORD(v42) = &dword_72C24;
                      sub_DF44(v42);
                      snprintf(s, 0x100u, "%6s / %6sh/s WU:%*.1f/m", v66, v65, dword_72C24 + 2, v33);
                    }
                    wprintw((WINDOW *)dword_79888, "%s", s);
                  }
                }
              }
              v67[0] = 0;
              (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)(v25 + 4) + 24))(v67, 256, v25);
              snprintf(s, 0x100u, "%s", v67);
              wprintw((WINDOW *)dword_79888, "%s", s);
              wclrtoeol((WINDOW *)dword_79888);
              ++v22;
            }
          }
          ++v23;
        }
        while ( dword_797E8 > v23 );
      }
      if ( dword_79888 )
        v45 = *(__int16 *)(dword_79888 + 4) + 1;
      else
        v45 = -1;
      wtouchln((WINDOW *)dword_79888, 0, v45, 1);
      wrefresh((WINDOW *)dword_79888);
      if ( dword_79480 )
        v46 = *(__int16 *)(dword_79480 + 4) + 1;
      else
        v46 = -1;
      wtouchln((WINDOW *)dword_79480, 0, v46, 1);
      wrefresh((WINDOW *)dword_79480);
      if ( pthread_mutex_unlock(&stru_79870) )
      {
        v47 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v47,
          "cgminer.c",
          "unlock_curses",
          3269);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
    }
    sub_2FE30(v66);
    if ( byte_791E4 )
      break;
    if ( sub_E360() )
    {
      if ( byte_791E4 )
        break;
    }
    else
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        snprintf(s, 0x800u, "Pausing execution as per stop time %02d:%02d scheduled", dword_796C4, dword_796C0);
        sub_3F1C0(4, s, 0);
      }
      if ( !byte_7993C )
      {
        strcpy(s, "Terminating execution as planned");
        sub_3F1C0(3, s, 1);
        sub_132C4(0);
      }
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        snprintf(s, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_79948, dword_79944);
        sub_3F1C0(4, s, 0);
      }
      byte_791E4 = 1;
      if ( pthread_rwlock_rdlock(&stru_79718) )
      {
        v48 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v48,
          "cgminer.c",
          "watchdog_thread",
          10349);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      v49 = dword_79CB8;
      if ( dword_79CB8 > 0 )
      {
        v50 = dword_796A8 - 4;
        v51 = 0;
        do
        {
          v52 = *(_DWORD *)(v50 + 4);
          v50 += 4;
          *(_BYTE *)(v52 + 60) = 1;
          ++v51;
        }
        while ( v51 < v49 );
      }
      if ( pthread_rwlock_unlock(&stru_79718) )
      {
        v53 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v53,
          "cgminer.c",
          "watchdog_thread",
          10352);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
    }
LABEL_110:
    if ( dword_797E8 > 0 )
    {
      v57 = 0;
      while ( 1 )
      {
        v58 = sub_13B28(v57);
        v59 = v58;
        v60 = **(_DWORD **)(v58 + 152);
        if ( !v60 )
          goto LABEL_168;
        (*(void (**)(void))(*(_DWORD *)(v58 + 4) + 32))();
        snprintf(v67, 8u, "%s %d", *(const char **)(*(_DWORD *)(v59 + 4) + 8), *(_DWORD *)(v59 + 8));
        if ( *(_BYTE *)(v60 + 61) || *(_DWORD *)(v59 + 32) == 1 )
          goto LABEL_168;
        v61 = *(_DWORD *)(v59 + 96);
        if ( v61 )
          break;
        if ( *(_DWORD *)v66 - *(_DWORD *)(v60 + 44) <= 120 )
          goto LABEL_164;
        *(_QWORD *)(v59 + 48) = 0;
        *(_DWORD *)(v59 + 96) = 1;
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v67);
          sub_3F1C0(3, s, 0);
        }
        sub_2FE30(v60 + 52);
        sub_342D4(v59, 3);
        if ( !byte_72C34 )
          goto LABEL_168;
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "%s: Attempting to restart", v67);
          sub_3F1C0(3, s, 0);
        }
LABEL_167:
        sub_13254(v59);
LABEL_168:
        if ( dword_797E8 <= ++v57 )
          goto LABEL_2;
      }
      v62 = *(_DWORD *)v66 - *(_DWORD *)(v60 + 44);
      if ( v62 <= 119 )
      {
        if ( v61 != 4 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
        {
          snprintf(s, 0x800u, "%s: Recovered, declaring WELL!", v67);
          sub_3F1C0(3, s, 0);
        }
        *(_DWORD *)(v59 + 96) = 0;
        *(_DWORD *)(v59 + 240) = time(0);
        goto LABEL_168;
      }
      if ( v61 == 1 && v62 > 600 )
      {
        *(_DWORD *)(v59 + 96) = 2;
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v67);
          sub_3F1C0(3, s, 0);
        }
        sub_2FE30(v60 + 52);
        sub_342D4(v59, 4);
        goto LABEL_168;
      }
LABEL_164:
      if ( *(_DWORD *)v66 - *(_DWORD *)(v60 + 52) <= 60 )
        goto LABEL_168;
      if ( (unsigned int)(v61 - 1) > 1 )
        goto LABEL_168;
      sub_2FE30(v60 + 52);
      if ( !byte_72C34 )
        goto LABEL_168;
      goto LABEL_167;
    }
  }
  if ( sub_E360() )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(s, 0x800u, "Restarting execution as per start time %02d:%02d scheduled", dword_79948, dword_79944);
      sub_3F1C0(4, s, 0);
    }
    if ( byte_796B8 && (byte_78D98 || byte_75C08 || dword_734EC > 3) )
    {
      snprintf(s, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_796C4, dword_796C0);
      sub_3F1C0(4, s, 0);
    }
    byte_791E4 = 0;
    if ( dword_79CB8 > 0 )
    {
      v54 = 0;
      do
      {
        v55 = sub_13B98(v54);
        v56 = v55;
        if ( *(_DWORD *)(*(_DWORD *)(v55 + 36) + 32) != 1 )
        {
          *(_BYTE *)(v55 + 60) = 0;
          if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
          {
            snprintf(s, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v55);
            sub_3F1C0(7, s, 0);
          }
          sub_3470C(v56 + 16, "cgminer.c", "watchdog_thread", 10374);
        }
        ++v54;
      }
      while ( dword_79CB8 > v54 );
    }
  }
  goto LABEL_110;
}
