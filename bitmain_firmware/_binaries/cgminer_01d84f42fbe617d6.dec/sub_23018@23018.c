void __noreturn sub_23018()
{
  double v0; // d0
  int v1; // r1
  int v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r4
  int v11; // r0
  int v12; // r5
  int v13; // r3
  int v14; // r5
  char *v15; // r1
  int v16; // r3
  char *v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r4
  int v21; // r6
  int v22; // r3
  int v23; // r1
  int v24; // r1
  unsigned int v25; // r3
  int v26; // r2
  char *v27; // r1
  int v28; // r3
  int v29; // r4
  int *v30; // r3
  int v31; // r1
  int v32; // t1
  int v33; // r2
  int v34; // r4
  int v35; // r5
  bool v36; // cc
  int v37; // r1
  int v38; // r1
  int v39; // r3
  int v40; // r2
  bool v41; // zf
  int v42; // r0
  int v43; // r5
  int v44; // r10
  int v45; // r8
  int v46; // r0
  int v47; // r7
  const char *v48; // r0
  const char *v49; // r1
  int v50; // r8
  int v51; // r10
  int v52; // r1
  int v53; // r3
  double v54; // d8
  __int64 v55; // d11
  WINDOW *v56; // r0
  const char *v57; // r3
  size_t v58; // r0
  int v59; // r3
  const char *v60; // r3
  int v61; // r3
  double v62; // r0
  double v63; // d11
  unsigned __int64 v64; // r0
  unsigned __int64 v65; // r0
  double v66; // r0
  int v67; // r0
  int v68; // r2
  int v69; // r4
  int v70; // r2
  int v71; // r2
  int v72; // r0
  int v73; // r1
  double v74; // r0
  double v75; // d12
  int v76; // r8
  double v77; // d11
  double v78; // d8
  int v79; // r0
  const char *v80; // r3
  double v81; // r0
  double v82; // r0
  unsigned __int64 v83; // r0
  unsigned __int64 v84; // r0
  double v85; // r0
  double v86; // r0
  double v87; // r0
  double v88; // r0
  double v89; // [sp+0h] [bp-9A4h]
  double v90; // [sp+8h] [bp-99Ch]
  int v91; // [sp+10h] [bp-994h]
  int v92; // [sp+48h] [bp-95Ch]
  _BYTE v93[8]; // [sp+6Ch] [bp-938h] BYREF
  char dest[12]; // [sp+74h] [bp-930h] BYREF
  char v95[16]; // [sp+80h] [bp-924h] BYREF
  char v96[16]; // [sp+90h] [bp-914h] BYREF
  char v97[256]; // [sp+A0h] [bp-904h] BYREF
  _DWORD v98[512]; // [sp+1A0h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_2F02C("Watchdog");
  sub_11C4C();
  sub_2B13C(&dword_615CC, v1, v2, 0);
LABEL_2:
  while ( 1 )
  {
    sleep(2u);
    sub_22C60();
    sub_1C834(-1, v3, 0, 0);
    if ( sub_19140() )
      break;
LABEL_3:
    v7 = sub_2B13C(v96, v4, v5, v6);
    if ( byte_6373C )
      goto LABEL_181;
    v7 = sub_1161C(v7, v8, v9);
    if ( !v7 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf(
          (char *)v98,
          0x800u,
          "Pausing execution as per stop time %02d:%02d scheduled",
          dword_63B9C,
          dword_63B98);
        sub_38438(4, v98, 0);
      }
      v29 = (unsigned __int8)byte_63E14;
      if ( !byte_63E14 )
      {
        strcpy((char *)v98, "Terminating execution as planned");
        sub_38438(3, v98, 1);
        sub_16724(v29);
      }
      if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
      {
        snprintf((char *)v98, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_63E20, dword_63E1C);
        sub_38438(4, v98, 0);
      }
      byte_6373C = 1;
      if ( pthread_rwlock_rdlock(&rwlock) )
        sub_B76C("watchdog_thread", 9725);
      if ( dword_6410C > 0 )
      {
        v30 = (int *)dword_63B80;
        v31 = dword_63B80 + 4 * dword_6410C;
        do
        {
          v32 = *v30++;
          *(_BYTE *)(v32 + 60) = 1;
        }
        while ( v30 != (int *)v31 );
      }
      if ( pthread_rwlock_unlock(&rwlock) )
        sub_B700("watchdog_thread", 9728);
      off_60178();
      goto LABEL_22;
    }
    if ( byte_6373C )
    {
LABEL_181:
      if ( sub_1161C(v7, v8, v9) )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(
            (char *)v98,
            0x800u,
            "Restarting execution as per start time %02d:%02d scheduled",
            dword_63E20,
            dword_63E1C);
          sub_38438(4, v98, 0);
        }
        if ( byte_63B90 && (byte_632F0 || byte_630C0 || dword_60964 > 3) )
        {
          snprintf((char *)v98, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_63B9C, dword_63B98);
          sub_38438(4, v98, 0);
        }
        v10 = 0;
        byte_6373C = 0;
        while ( dword_6410C > v10 )
        {
          v11 = v10++;
          v12 = sub_1C36C(v11);
          if ( *(_DWORD *)(*(_DWORD *)(v12 + 36) + 32) != 1 )
          {
            v13 = (unsigned __int8)byte_630C1;
            *(_BYTE *)(v12 + 60) = 0;
            if ( v13 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
            {
              snprintf((char *)v98, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v12);
              sub_38438(7, v98, 0);
            }
            sub_2F134(v12 + 16, "cgminer.c", "watchdog_thread", 9750);
          }
        }
      }
    }
LABEL_22:
    if ( dword_63CC0 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        v19 = sub_1AB68(v14);
        v20 = v19;
        v21 = **(_DWORD **)(v19 + 152);
        if ( !v21 )
          goto LABEL_35;
        (*(void (**)(void))(*(_DWORD *)(v19 + 4) + 32))();
        snprintf(v97, 8u, "%s %d", *(const char **)(*(_DWORD *)(v20 + 4) + 8), *(_DWORD *)(v20 + 8));
        if ( *(_BYTE *)(v21 + 61) || *(_DWORD *)(v20 + 32) == 1 )
          goto LABEL_35;
        v22 = *(_DWORD *)(v20 + 96);
        v23 = *(_DWORD *)v96 - *(_DWORD *)(v21 + 44);
        if ( v22 )
          break;
        if ( v23 <= 120 )
          goto LABEL_48;
        v15 = &byte_632F0;
        *(_QWORD *)(v20 + 48) = 0;
        v16 = (unsigned __int8)byte_632F0;
        *(_DWORD *)(v20 + 96) = 1;
        if ( v16 || (v17 = &byte_630C0, byte_630C0) || (v18 = dword_60964, dword_60964 > 2) )
        {
          snprintf((char *)v98, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v97);
          sub_38438(3, v98, 0);
        }
        sub_2B13C(v21 + 52, v15, v17, v18);
        sub_2ED00(v20);
        if ( !byte_600AC )
          goto LABEL_35;
        if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
        {
          snprintf((char *)v98, 0x800u, "%s: Attempting to restart", v97);
          sub_38438(3, v98, 0);
        }
LABEL_34:
        sub_16704(v20);
LABEL_35:
        if ( dword_63CC0 <= ++v14 )
          goto LABEL_2;
      }
      if ( v23 <= 119 )
      {
        if ( v22 != 4 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
        {
          snprintf((char *)v98, 0x800u, "%s: Recovered, declaring WELL!", v97);
          sub_38438(3, v98, 0);
        }
        *(_DWORD *)(v20 + 96) = 0;
        *(_DWORD *)(v20 + 240) = time(0);
        goto LABEL_35;
      }
      if ( v22 == 1 && v23 > 600 )
      {
        v26 = 2;
        *(_DWORD *)(v20 + 96) = 2;
        if ( byte_632F0 || (v27 = &byte_630C0, byte_630C0) || (v28 = dword_60964, dword_60964 > 2) )
        {
          snprintf((char *)v98, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v97);
          sub_38438(3, v98, 0);
        }
        sub_2B13C(v21 + 52, v27, v26, v28);
        sub_2ED00(v20);
        goto LABEL_35;
      }
LABEL_48:
      v24 = *(_DWORD *)(v21 + 52);
      if ( *(_DWORD *)v96 - v24 <= 60 )
        goto LABEL_35;
      v25 = v22 - 1;
      if ( v25 > 1 )
        goto LABEL_35;
      sub_2B13C(v21 + 52, v24, *(_DWORD *)v96 - v24, v25);
      if ( !byte_600AC )
        goto LABEL_35;
      goto LABEL_34;
    }
  }
  if ( dword_64230 )
  {
    v33 = *(__int16 *)(dword_64230 + 4);
    v34 = v33 + 1;
    v35 = *(__int16 *)(dword_64230 + 6) + 1;
    v36 = v35 <= 79;
    if ( v35 > 79 )
      v36 = v34 <= 24;
    if ( !v36 )
    {
      if ( v34 > dword_61300 + 2 )
      {
        v37 = dword_612FC;
        if ( dword_61300 < dword_612FC )
        {
          if ( v33 <= dword_612FC )
            v37 = v33 - 1;
          dword_61300 = v37;
          dword_61304 = v37 + 1;
          mvwin((WINDOW *)dword_639D8, v37 + 1, 0);
          wresize((WINDOW *)dword_63D60, dword_61300, v35);
        }
      }
      v38 = v34 - dword_61304;
      if ( dword_639D8 )
        v39 = *(__int16 *)(dword_639D8 + 4);
      else
        v39 = -1;
      if ( dword_639D8 )
        v40 = *(__int16 *)(dword_639D8 + 6);
      else
        v40 = v39;
      if ( dword_639D8 )
      {
        ++v39;
        ++v40;
      }
      v41 = v35 == v40;
      if ( v35 == v40 )
        v41 = v38 == v39;
      if ( !v41 )
        wresize((WINDOW *)dword_639D8, v38, v35);
    }
  }
  v42 = sub_1D644();
  if ( byte_615D4 )
    v43 = 100;
  else
    v43 = 80;
  v92 = v42;
  wattr_on((WINDOW *)dword_63D60, 0x200000u, 0);
  snprintf((char *)v98, 0x100u, " cgminer version 4.9.0 - Started: %s", byte_613EC);
  mvwprintw((WINDOW *)dword_63D60, 0, 0, "%s", (const char *)v98);
  wattr_off((WINDOW *)dword_63D60, 0x200000u, 0);
  if ( wmove((WINDOW *)dword_63D60, 1, 0) != -1 )
    whline((WINDOW *)dword_63D60, 0x2Du, v43);
  snprintf((char *)v98, 0x100u, " %s", byte_61438);
  mvwprintw((WINDOW *)dword_63D60, 2, 0, "%s", (const char *)v98);
  wclrtoeol((WINDOW *)dword_63D60);
  v44 = (unsigned __int8)byte_615D4;
  if ( byte_615D4 )
  {
    v75 = dbl_63B88;
    v76 = dword_63E44;
    v77 = dbl_63C10;
    v78 = sub_493DC(dword_636A8, dword_636AC) / dbl_5F898;
    v79 = sub_17F48();
    snprintf(
      (char *)v98,
      0x100u,
      " A:%.0f  R:%.0f  HW:%d  WU:%.1f/m | ST: %d  SS: %lld  NB: %d  LW: %d  GF: %d  RF: %d",
      v75,
      v77,
      v76,
      v78 * 60.0,
      v79,
      *(_QWORD *)&dword_64220,
      dword_640BC,
      dword_63A70,
      dword_639E4,
      dword_63410);
    mvwprintw((WINDOW *)dword_63D60, 3, 0, "%s", (const char *)v98);
  }
  else
  {
    v45 = (unsigned __int8)byte_6142C;
    if ( byte_6142C )
    {
      v46 = sub_17F48();
      snprintf(
        (char *)v98,
        0x100u,
        " ST: %d  SS: %lld  NB: %d  LW: %d  GF: %d  RF: %d",
        v46,
        *(_QWORD *)&dword_64220,
        dword_640BC,
        dword_63A70,
        dword_639E4,
        dword_63410);
      mvwprintw((WINDOW *)dword_63D60, 3, v44, "%s", (const char *)v98);
    }
    else
    {
      v89 = dbl_63B88;
      v91 = dword_63E44;
      v90 = dbl_63C10;
      v74 = sub_493DC(dword_636A8, dword_636AC);
      snprintf((char *)v98, 0x100u, " A:%.0f  R:%.0f  HW:%d  WU:%.1f/m", v89, v90, v91, v74 / dbl_5F898 * 60.0);
      mvwprintw((WINDOW *)dword_63D60, 3, v45, "%s", (const char *)v98);
    }
  }
  wclrtoeol((WINDOW *)dword_63D60);
  if ( (unsigned int)(dword_611AC - 3) > 1 || dword_63740 <= 1 )
  {
    v47 = *(unsigned __int8 *)(v92 + 632);
    if ( !*(_BYTE *)(v92 + 632) )
    {
      v48 = (const char *)(unsigned __int8)byte_64219;
      if ( !byte_64219 )
        v48 = "out";
      v49 = "LP";
      if ( byte_64219 )
        v48 = "";
      if ( *(_BYTE *)(v92 + 704) )
        v49 = "GBT";
      snprintf(
        (char *)v98,
        0x100u,
        " Connected to %s diff %s with%s %s as user %s",
        *(const char **)(v92 + 592),
        (const char *)(v92 + 48),
        v48,
        v49,
        *(const char **)(v92 + 172));
      mvwprintw((WINDOW *)dword_63D60, 4, v47, "%s", (const char *)v98);
      goto LABEL_113;
    }
    snprintf(
      (char *)v98,
      0x100u,
      " Connected to %s diff %s with stratum as user %s",
      *(const char **)(v92 + 592),
      (const char *)(v92 + 48),
      *(const char **)(v92 + 172));
  }
  else
  {
    v80 = "out";
    if ( byte_64219 )
      v80 = "";
    snprintf((char *)v98, 0x100u, " Connected to multiple pools with%s block change notify", v80);
  }
  mvwprintw((WINDOW *)dword_63D60, 4, 0, "%s", (const char *)v98);
LABEL_113:
  wclrtoeol((WINDOW *)dword_63D60);
  snprintf(
    (char *)v98,
    0x100u,
    " Block: %s...  Diff:%s  Started: %s  Best share: %s   ",
    byte_615BC,
    byte_61574,
    byte_6159C,
    (const char *)&dword_60064);
  mvwprintw((WINDOW *)dword_63D60, 5, 0, "%s", (const char *)v98);
  if ( wmove((WINDOW *)dword_63D60, 6, 0) != -1 )
    whline((WINDOW *)dword_63D60, 0x2Du, v43);
  if ( wmove((WINDOW *)dword_63D60, dword_61300 - 1, 0) != -1 )
    whline((WINDOW *)dword_63D60, 0x2Du, v43);
  strcpy((char *)v98, "[P]ool management [S]ettings [D]isplay options [Q]uit");
  mvwprintw((WINDOW *)dword_63D60, dword_61308 - 1, 1, "%s", (const char *)v98);
  if ( dword_63CC0 <= 0 )
  {
LABEL_146:
    if ( dword_63D60 )
      v70 = *(__int16 *)(dword_63D60 + 4) + 1;
    else
      v70 = -1;
    wtouchln((WINDOW *)dword_63D60, 0, v70, 1);
    wrefresh((WINDOW *)dword_63D60);
    if ( dword_639D8 )
      v71 = *(__int16 *)(dword_639D8 + 4);
    else
      v71 = -1;
    if ( dword_639D8 )
      ++v71;
    wtouchln((WINDOW *)dword_639D8, 0, v71, 1);
    wrefresh((WINDOW *)dword_639D8);
    if ( pthread_mutex_unlock(&stru_63D48) )
      sub_B694("unlock_curses", 2928);
    off_60178();
    goto LABEL_3;
  }
  v50 = 0;
  v51 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v67 = sub_1AB68(v51);
      v69 = v67;
      if ( !v67 )
        goto LABEL_142;
      if ( !byte_63EE0 )
      {
        v52 = v50 + dword_61308;
        if ( LINES - 1 > v50 + dword_61308 && dword_6130C > v50 )
          break;
      }
      ++v51;
      ++v50;
      if ( dword_63CC0 <= v51 )
        goto LABEL_146;
    }
    v53 = *(_DWORD *)(v67 + 368);
    if ( v53 )
    {
      sub_2B13C(v93, v52, v68, v53);
      sub_2B314(v93, v69 + 368);
      v52 = v50 + dword_61308;
      v54 = v0;
    }
    else
    {
      v54 = dbl_5F898;
    }
    v55 = *(_QWORD *)(v69 + 192);
    v56 = (WINDOW *)dword_63D60;
    if ( v54 < 1.0 )
      v54 = 1.0;
    *(double *)(v69 + 88) = (double)*(int *)(v69 + 36) / v54 * 60.0;
    wmove(v56, v52, 0);
    sub_110F8(COERCE_DOUBLE(__PAIR64__(&dword_60098, v51)));
    v57 = *(const char **)(v69 + 28);
    if ( v57 )
    {
      strcpy(dest, "        ");
      strncpy(dest, v57, 8u);
    }
    else
    {
      sprintf(dest, "%-8d", *(_DWORD *)(v69 + 8));
    }
    snprintf((char *)v98, 0x100u, " %*d: %s %-8s: ", dword_60098, v51, *(const char **)(*(_DWORD *)(v69 + 4) + 8), dest);
    wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
    v97[0] = 0;
    (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)(v69 + 4) + 20))(v97, 256, v69);
    v58 = strlen(v97);
    if ( v58 <= 0x16 )
      strncat(v97, "                                        ", 23 - v58);
    snprintf((char *)v98, 0x100u, "%s | ", v97);
    wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
    v59 = *(_DWORD *)(v69 + 96);
    if ( v59 == 2 )
    {
      v60 = "DEAD  ";
    }
    else if ( v59 == 1 )
    {
      v60 = "SICK  ";
    }
    else
    {
      v61 = *(_DWORD *)(v69 + 32);
      if ( v61 == 1 )
      {
        v60 = "OFF   ";
      }
      else
      {
        if ( v61 != 2 )
        {
          v62 = sub_493DC(v55, HIDWORD(v55));
          v63 = v62 / v54 * 60.0;
          if ( byte_615D4 )
          {
            v83 = sub_494C0(
                    COERCE_UNSIGNED_INT64(*(double *)(v69 + 80) / v54 * 1000000.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v69 + 80) / v54 * 1000000.0)));
            sub_11130(v83, v95, 0x10u, 4);
            v84 = sub_494C0(
                    COERCE_UNSIGNED_INT64(*(double *)(v69 + 48) * 1000000.0),
                    HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v69 + 48) * 1000000.0)));
            sub_11130(v84, v96, 0x10u, 4);
            HIDWORD(v85) = &dword_6009C;
            LODWORD(v85) = (int)v63;
            v86 = sub_110F8(v85);
            LODWORD(v86) = &dword_600A0;
            v87 = sub_110C4(v86);
            LODWORD(v87) = &dword_600A4;
            *(float *)&v0 = *(double *)(v69 + 208);
            sub_110C4(v87);
            LODWORD(v88) = *(_DWORD *)(v69 + 44);
            HIDWORD(v88) = &dword_600A8;
            sub_110F8(v88);
            snprintf(
              (char *)v98,
              0x100u,
              "%6s / %6sh/s WU:%*.1f/m A:%*.0f R:%*.0f HW:%*d",
              v96,
              v95,
              dword_6009C + 2,
              v63,
              dword_600A0,
              *(double *)(v69 + 200),
              dword_600A4,
              *(double *)(v69 + 208),
              dword_600A8,
              *(_DWORD *)(v69 + 44));
            wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
          }
          else
          {
            if ( byte_6142C )
            {
              LODWORD(v62) = &dword_600A0;
              v81 = sub_110C4(v62);
              LODWORD(v81) = &dword_600A4;
              *(float *)&v0 = *(double *)(v69 + 208);
              sub_110C4(v81);
              LODWORD(v82) = *(_DWORD *)(v69 + 44);
              HIDWORD(v82) = &dword_600A8;
              sub_110F8(v82);
              snprintf(
                (char *)v98,
                0x100u,
                "A:%*.0f R:%*.0f HW:%*d",
                dword_600A0,
                *(double *)(v69 + 200),
                dword_600A4,
                *(double *)(v69 + 208),
                dword_600A8,
                *(_DWORD *)(v69 + 44));
            }
            else
            {
              v64 = sub_494C0(
                      COERCE_UNSIGNED_INT64(*(double *)(v69 + 80) / v54 * 1000000.0),
                      HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v69 + 80) / v54 * 1000000.0)));
              sub_11130(v64, v95, 0x10u, 4);
              v65 = sub_494C0(
                      COERCE_UNSIGNED_INT64(*(double *)(v69 + 48) * 1000000.0),
                      HIDWORD(COERCE_UNSIGNED_INT64(*(double *)(v69 + 48) * 1000000.0)));
              sub_11130(v65, v96, 0x10u, 4);
              HIDWORD(v66) = &dword_6009C;
              LODWORD(v66) = (int)v63;
              sub_110F8(v66);
              snprintf((char *)v98, 0x100u, "%6s / %6sh/s WU:%*.1f/m", v96, v95, dword_6009C + 2, v63);
            }
            wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
          }
          goto LABEL_141;
        }
        v60 = "REST  ";
      }
    }
    v72 = *(_DWORD *)v60;
    v73 = *((_DWORD *)v60 + 1);
    LOWORD(v98[1]) = v73;
    v98[0] = v72;
    BYTE2(v98[1]) = BYTE2(v73);
    wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
LABEL_141:
    v97[0] = 0;
    ++v50;
    (*(void (__fastcall **)(char *, int, int))(*(_DWORD *)(v69 + 4) + 24))(v97, 256, v69);
    snprintf((char *)v98, 0x100u, "%s", v97);
    wprintw((WINDOW *)dword_63D60, "%s", (const char *)v98);
    wclrtoeol((WINDOW *)dword_63D60);
LABEL_142:
    if ( dword_63CC0 <= ++v51 )
      goto LABEL_146;
  }
}
