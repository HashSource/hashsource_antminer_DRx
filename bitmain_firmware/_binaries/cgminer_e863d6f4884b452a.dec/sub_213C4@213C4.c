int __fastcall sub_213C4(int a1, int a2, int a3, int a4)
{
  double v4; // d0
  int result; // r0
  int v8; // r11
  double v9; // d9
  int v10; // r7
  int v11; // r6
  double v12; // r0
  double v13; // r0
  double v14; // r0
  double v15; // r0
  int v16; // r3
  double v17; // d10
  int v18; // r2
  int v19; // r2
  int v20; // r11
  double v21; // r0
  int *v22; // r8
  double v23; // d8
  double v24; // r0
  int v25; // r10
  __int64 v26; // r0
  int v27; // r2
  double v28; // d7
  int v29; // r0
  int v30; // r6
  double v31; // d8
  unsigned __int64 v32; // kr00_8
  double v33; // r0
  double v34; // r0
  unsigned __int64 v35; // r0
  unsigned __int64 v36; // r0
  unsigned __int64 v37; // r0
  unsigned __int64 v38; // r0
  unsigned __int64 v39; // r0
  double v40; // r0
  double v41; // r0
  double v42; // r0
  double v43; // r0
  double v44; // r0
  double v45; // r0
  int *v46; // r0
  int v47; // r3
  int v48; // r0
  int *v49; // r0
  int v50; // r3
  int v51; // r4
  int v52; // r3
  int v53; // r4
  char v55[16]; // [sp+20h] [bp-844h] BYREF
  char v56[16]; // [sp+30h] [bp-834h] BYREF
  char v57[16]; // [sp+40h] [bp-824h] BYREF
  char v58[16]; // [sp+50h] [bp-814h] BYREF
  char s[2052]; // [sp+60h] [bp-804h] BYREF

  sub_2A69C(&dword_6DB8C);
  result = sub_2A8A4(&dword_6DB8C, &unk_6DCA8);
  v8 = dword_6DB8C;
  v9 = v4;
  if ( dword_6CA7C > dword_6DB8C - dword_6F208 )
  {
    if ( a1 < 0 )
      return result;
    v25 = 0;
    sub_2A480(&unk_6DCA8);
  }
  else
  {
    dword_6F208 = dword_6DB8C;
    sub_2A480(&unk_6DCA8);
    if ( a1 < 0 )
    {
      v10 = pthread_mutex_lock(&stru_73CEC);
      if ( v10 )
      {
        v50 = *_errno_location();
        v51 = 7084;
LABEL_69:
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v50, "cgminer.c", "hashmeter", v51);
        goto LABEL_64;
      }
      if ( dword_735B0 > 0 )
      {
        do
        {
          while ( 1 )
          {
            v11 = *(_DWORD *)(sub_1DD14(v10) + 36);
            sub_2A8A4(&dword_6DB8C, v11 + 140);
            sub_2A480(v11 + 140);
            if ( v4 > 0.0 )
              break;
            if ( dword_735B0 <= ++v10 )
              goto LABEL_9;
          }
          LODWORD(v12) = v11 + 48;
          v13 = sub_17AC0(v12);
          LODWORD(v13) = v11 + 56;
          v14 = sub_17AC0(v13);
          LODWORD(v14) = v11 + 64;
          v15 = sub_17AC0(v14);
          LODWORD(v15) = v11 + 72;
          ++v10;
          v4 = 0.0;
          sub_17AC0(v15);
        }
        while ( dword_735B0 > v10 );
      }
LABEL_9:
      if ( pthread_mutex_unlock(&stru_73CEC) )
      {
        v52 = *_errno_location();
        v53 = 7097;
        goto LABEL_72;
      }
      off_6CB70();
      if ( !pthread_mutex_lock(&stru_73CEC) )
      {
        v17 = sub_4A0AC(a3, a4);
        v18 = dword_6DD10;
        dbl_739E8 = dbl_739E8 + v17;
        goto LABEL_12;
      }
LABEL_63:
      v46 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "cgminer.c", "hashmeter", 7100);
      goto LABEL_64;
    }
    v25 = 1;
  }
  v29 = sub_1DD14(a1);
  v30 = *(_DWORD *)(v29 + 36);
  sub_2A480(v29 + 44);
  *(_DWORD *)(v30 + 240) = v8;
  sub_2A8A4(&dword_6DB8C, v30 + 140);
  v31 = v4;
  sub_2A480(v30 + 140);
  v32 = sub_4A118(a3, a4, 1000000, 0);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    v33 = sub_4A0AC(a3, a4);
    snprintf(s, 0x800u, aThreadDLluMhas, a1, v32, v33 / v4 / 1000000.0);
    sub_343C4(7, s, 0);
  }
  if ( pthread_mutex_lock(&stru_73CEC) )
  {
    v49 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v49, "cgminer.c", "hashmeter", 7058);
    goto LABEL_64;
  }
  v34 = sub_4A0AC(v32, HIDWORD(v32));
  v17 = v34;
  *(double *)(v30 + 80) = *(double *)(v30 + 80) + v34;
  if ( v4 > 0.0 )
  {
    LODWORD(v34) = v30 + 48;
    v40 = sub_17AC0(v34);
    LODWORD(v40) = v30 + 56;
    v4 = v17;
    v41 = sub_17AC0(v40);
    if ( v31 > 0.0 )
    {
      LODWORD(v41) = v30 + 64;
      v42 = sub_17AC0(v41);
      LODWORD(v42) = v30 + 72;
      v4 = v17;
      sub_17AC0(v42);
    }
  }
  if ( pthread_mutex_unlock(&stru_73CEC) )
  {
    v47 = *_errno_location();
    v48 = 7064;
    goto LABEL_66;
  }
  off_6CB70();
  sub_1B5A8(s, 0x100u, v30);
  printf("%s: logline: %s          \r", "hashmeter", s);
  fflush((FILE *)stdout);
  if ( pthread_mutex_lock(&stru_73CEC) )
    goto LABEL_63;
  v18 = dword_6DD10;
  dbl_739E8 = dbl_739E8 + v17;
  if ( v25 )
  {
    v16 = HIDWORD(v32);
    a4 = HIDWORD(v32);
    a3 = v32;
LABEL_12:
    v19 = v18 + 1;
    v20 = 0;
    LODWORD(v21) = 0;
    if ( v19 > 11 )
      v16 = 0;
    HIDWORD(v21) = 0;
    if ( v19 <= 11 )
      dword_6DD10 = v19;
    else
      dword_6DD10 = v16;
    v22 = (int *)dbl_6DCB0;
    do
    {
      v23 = *(double *)v22;
      v22 += 2;
      if ( v23 >= 0.0 )
      {
        v24 = sub_4A0AC(LODWORD(v21), HIDWORD(v21));
        ++v20;
        v21 = COERCE_DOUBLE(sub_4A178(COERCE_UNSIGNED_INT64(v24 + v23), HIDWORD(COERCE_UNSIGNED_INT64(v24 + v23))));
      }
    }
    while ( &dword_6DD10 != v22 );
    if ( v20 )
    {
      v21 = COERCE_DOUBLE(sub_4A118(LODWORD(v21), HIDWORD(v21), v20, v20 >> 31));
      a4 = HIDWORD(v21);
      a3 = LODWORD(v21);
    }
    if ( (double)dword_6CA7C > 0.0 )
    {
      v45 = sub_4A0AC(a3, a4);
      LODWORD(v45) = &dbl_735B8;
      v21 = sub_17AC0(v45);
      if ( v9 <= 0.0 )
        goto LABEL_25;
    }
    else if ( v9 <= 0.0 )
    {
LABEL_25:
      v25 = 1;
      v4 = dbl_735B8;
      v26 = llround();
      v27 = dword_6DD10;
      v28 = 0.0;
      *(_QWORD *)&dword_73218 = 1000000 * v26;
      dbl_6DCB0[dword_6DD10] = 0.0;
      goto LABEL_39;
    }
    LODWORD(v21) = &dbl_73950;
    v43 = sub_17AC0(v21);
    LODWORD(v43) = &dbl_73948;
    v44 = sub_17AC0(v43);
    if ( v9 > 0.0 )
    {
      LODWORD(v44) = &dbl_73958;
      sub_17AC0(v44);
    }
    goto LABEL_25;
  }
  v27 = dword_6DD10;
  v28 = dbl_6DCB0[dword_6DD10];
LABEL_39:
  dbl_6DCB0[v27] = v28 + v17;
  sub_2A8A4(&dword_6DB8C, &dword_6DCA0);
  dbl_6C2C0 = v4;
  if ( v4 - dbl_6CA88 > 86400.0 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v4, dbl_6CA88);
      sub_343C4(3, s, 0);
    }
    if ( !pthread_mutex_unlock(&stru_73CEC) )
    {
      off_6CB70();
      sub_1CC0C();
      if ( !pthread_mutex_lock(&stru_73CEC) )
      {
        if ( !v25 )
          goto LABEL_46;
LABEL_51:
        v35 = sub_4A178(
                COERCE_UNSIGNED_INT64(dbl_739E8 / dbl_6C2C0 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_739E8 / dbl_6C2C0 * 1000000.0)));
        sub_16DA4(v35, v55, 0x10u, 4);
        dbl_6F210 = dbl_735B8 / 1000.0;
        v36 = sub_4A178(
                COERCE_UNSIGNED_INT64(dbl_735B8 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_735B8 * 1000000.0)));
        sub_16DA4(v36, v56, 0x10u, 4);
        v37 = sub_4A178(
                COERCE_UNSIGNED_INT64(dbl_73950 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_73950 * 1000000.0)));
        sub_16DA4(v37, v57, 0x10u, 4);
        v38 = sub_4A178(
                COERCE_UNSIGNED_INT64(dbl_73948 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_73948 * 1000000.0)));
        sub_16DA4(v38, v58, 0x10u, 4);
        v39 = sub_4A178(
                COERCE_UNSIGNED_INT64(dbl_73958 * 1000000.0),
                HIDWORD(COERCE_UNSIGNED_INT64(dbl_73958 * 1000000.0)));
        sub_16DA4(v39, s, 0x10u, 4);
        snprintf(
          byte_6F218,
          0x100u,
          "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s",
          dword_6CA7C,
          v56,
          v57,
          v58,
          s,
          v55);
        if ( !pthread_mutex_unlock(&stru_73CEC) )
        {
          off_6CB70();
          printf("%s: statusline: %s          \r", "hashmeter", byte_6F218);
          return fflush((FILE *)stdout);
        }
        goto LABEL_65;
      }
      v50 = *_errno_location();
      v51 = 7142;
      goto LABEL_69;
    }
    v52 = *_errno_location();
    v53 = 7140;
LABEL_72:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v52, "cgminer.c", "hashmeter", v53);
LABEL_64:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  dbl_6CA88 = v4;
  if ( v25 )
    goto LABEL_51;
LABEL_46:
  if ( pthread_mutex_unlock(&stru_73CEC) )
  {
LABEL_65:
    v47 = *_errno_location();
    v48 = 7171;
LABEL_66:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v47, "cgminer.c", "hashmeter", v48);
    goto LABEL_64;
  }
  return off_6CB70();
}
