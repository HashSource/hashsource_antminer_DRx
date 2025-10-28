int __fastcall sub_1D880(int a1, int a2, int a3, int a4)
{
  double v4; // d0
  int result; // r0
  int v9; // r10
  int v10; // r4
  int v11; // r0
  int v12; // r5
  __int64 v13; // r0
  int v14; // r9
  int v15; // r10
  double v16; // r0
  int *v17; // r0
  double v18; // r0
  double v19; // d8
  double v20; // r0
  double v21; // r0
  double v22; // r0
  int *v23; // r0
  int *v24; // r0
  int v25; // r5
  int v26; // r4
  double v27; // r0
  double v28; // r0
  double v29; // r0
  double v30; // r0
  int *v31; // r0
  int *v32; // r0
  double v33; // d10
  int *v34; // r5
  int v35; // r6
  __int64 v36; // d16
  double v37; // d8
  double v38; // r0
  __int64 v39; // kr08_8
  double v40; // r0
  double v41; // r0
  double v42; // r0
  double v43; // r0
  int v44; // r0
  int *v45; // r0
  int *v46; // r0
  unsigned __int64 v47; // r0
  unsigned __int64 v48; // r0
  unsigned __int64 v49; // r0
  unsigned __int64 v50; // r0
  unsigned __int64 v51; // r0
  int *v52; // r0
  __int64 v53; // [sp+0h] [bp-94Ch]
  char v54[16]; // [sp+18h] [bp-934h] BYREF
  char v55[16]; // [sp+28h] [bp-924h] BYREF
  char v56[16]; // [sp+38h] [bp-914h] BYREF
  char v57[256]; // [sp+48h] [bp-904h] BYREF
  char s[2052]; // [sp+148h] [bp-804h] BYREF

  sub_30050(&dword_7AF04);
  result = sub_3022C(&dword_7AF04, &unk_7AE58);
  v9 = dword_7AF04;
  if ( dword_7AF04 - dword_7C3F0 < dword_79C48 )
  {
    if ( a1 < 0 )
      return result;
    sub_2FD00(&unk_7AE58, &dword_7AF04);
    v10 = 0;
  }
  else
  {
    byte_7C3F4 ^= byte_7C3F5;
    dword_7C3F0 = dword_7AF04;
    sub_2FD00(&unk_7AE58, &dword_7AF04);
    if ( a1 < 0 )
    {
      if ( pthread_mutex_lock(&stru_804B4) )
      {
        v24 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v24, "cgminer.c", "hashmeter", 7084);
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      if ( dword_80D98 > 0 )
      {
        v25 = 0;
        do
        {
          v26 = *(_DWORD *)(sub_13D78(v25) + 36);
          sub_3022C(&dword_7AF04, v26 + 140);
          sub_2FD00(v26 + 140, &dword_7AF04);
          LODWORD(v27) = v26 + 48;
          sub_11F70(v27);
          LODWORD(v28) = v26 + 56;
          sub_11F70(v28);
          LODWORD(v29) = v26 + 64;
          sub_11F70(v29);
          LODWORD(v30) = v26 + 72;
          v4 = 0.0;
          sub_11F70(v30);
          ++v25;
        }
        while ( dword_80D98 > v25 );
      }
      if ( pthread_mutex_unlock(&stru_804B4) )
      {
        v31 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v31, "cgminer.c", "hashmeter", 7097);
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      off_79D40(0);
      v14 = a3;
      v15 = a4;
      v10 = 1;
      goto LABEL_31;
    }
    v10 = 1;
  }
  v11 = sub_13D78(a1);
  v12 = *(_DWORD *)(v11 + 36);
  sub_2FD00(v11 + 44, &dword_7AF04);
  *(_DWORD *)(v12 + 240) = v9;
  sub_3022C(&dword_7AF04, v12 + 140);
  sub_2FD00(v12 + 140, &dword_7AF04);
  v13 = sub_5ED94(a3, a4, 1000000, 0);
  v15 = HIDWORD(v13);
  v14 = v13;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    v53 = v13;
    v16 = sub_5ED20(a3, a4);
    snprintf(s, 0x800u, aThreadDLluMhas, a1, v53, v16 / v4 / 1000000.0);
    sub_3F178(7, s, 0);
  }
  if ( pthread_mutex_lock(&stru_804B4) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "hashmeter", 7058);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v18 = sub_5ED20(v14, v15);
  v19 = v18;
  *(double *)(v12 + 80) = *(double *)(v12 + 80) + v18;
  LODWORD(v18) = v12 + 48;
  sub_11F70(v18);
  LODWORD(v20) = v12 + 56;
  sub_11F70(v20);
  LODWORD(v21) = v12 + 64;
  sub_11F70(v21);
  LODWORD(v22) = v12 + 72;
  v4 = v19;
  sub_11F70(v22);
  if ( pthread_mutex_unlock(&stru_804B4) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v23, "cgminer.c", "hashmeter", 7064);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  sub_16A64(v57, 0x100u, v12);
  if ( byte_7AEDD )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "%s", v57);
      sub_3F178(7, s, 0);
    }
  }
  else
  {
    printf("%s: logline: %s          \r", "hashmeter", v57);
    fflush((FILE *)stdout);
  }
LABEL_31:
  if ( pthread_mutex_lock(&stru_804B4) )
  {
    v32 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v32, "cgminer.c", "hashmeter", 7100);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v33 = sub_5ED20(v14, v15);
  dbl_7FDF0 = v33 + dbl_7FDF0;
  if ( v10 )
  {
    if ( dword_7AEC0 + 1 > 11 )
      dword_7AEC0 = 0;
    else
      ++dword_7AEC0;
    v34 = (int *)dbl_7AE60;
    v35 = 0;
    v36 = 0;
    do
    {
      v37 = *(double *)v34;
      v34 += 2;
      if ( v37 >= 0.0 )
      {
        v38 = sub_5ED20(v36, HIDWORD(v36));
        v36 = sub_5EE18(COERCE_UNSIGNED_INT64(v37 + v38), HIDWORD(COERCE_UNSIGNED_INT64(v37 + v38)));
        ++v35;
      }
    }
    while ( v34 != &dword_7AEC0 );
    if ( v35 > 0 )
    {
      v39 = sub_5ED94(v36, HIDWORD(v36), v35, v35 >> 31);
      v15 = HIDWORD(v39);
      v14 = v39;
    }
    v40 = sub_5ED20(v14, v15);
    LODWORD(v40) = &dbl_80CB8;
    sub_11F70(v40);
    LODWORD(v41) = &dbl_80F48;
    sub_11F70(v41);
    LODWORD(v42) = &dbl_80F38;
    sub_11F70(v42);
    LODWORD(v43) = &dbl_80428;
    v44 = sub_11F70(v43);
    v4 = dbl_80CB8;
    *(_QWORD *)&dword_80C78 = 1000000 * llround(v44);
    dbl_7AE60[dword_7AEC0] = 0.0;
  }
  dbl_7AE60[dword_7AEC0] = v33 + dbl_7AE60[dword_7AEC0];
  sub_3022C(&dword_7AF04, &dword_7AE50);
  dbl_79458 = v4;
  if ( v4 - dbl_79C30 <= 86400.0 )
  {
    dbl_79C30 = v4;
  }
  else
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v4, dbl_79C30);
      sub_3F178(3, s, 0);
    }
    if ( pthread_mutex_unlock(&stru_804B4) )
    {
      v45 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v45, "cgminer.c", "hashmeter", 7140);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    sub_14378();
    if ( pthread_mutex_lock(&stru_804B4) )
    {
      v46 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "cgminer.c", "hashmeter", 7142);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
  }
  if ( v10 )
  {
    v47 = sub_5EE18(
            COERCE_UNSIGNED_INT64(dbl_7FDF0 / dbl_79458 * 1000000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(dbl_7FDF0 / dbl_79458 * 1000000.0)));
    sub_E144(v47, v54, 0x10u, 4);
    dbl_7C3F8 = dbl_80CB8 / 1000.0;
    v48 = sub_5EE18(COERCE_UNSIGNED_INT64(dbl_80CB8 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_80CB8 * 1000000.0)));
    sub_E144(v48, v55, 0x10u, 4);
    v49 = sub_5EE18(COERCE_UNSIGNED_INT64(dbl_80F48 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_80F48 * 1000000.0)));
    sub_E144(v49, v56, 0x10u, 4);
    v50 = sub_5EE18(COERCE_UNSIGNED_INT64(dbl_80F38 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_80F38 * 1000000.0)));
    sub_E144(v50, v57, 0x10u, 4);
    v51 = sub_5EE18(COERCE_UNSIGNED_INT64(dbl_80428 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_80428 * 1000000.0)));
    sub_E144(v51, s, 0x10u, 4);
    snprintf(byte_7C400, 0x100u, "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s", dword_79C48, v55, v56, v57, s, v54);
  }
  if ( pthread_mutex_unlock(&stru_804B4) )
  {
    v52 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v52, "cgminer.c", "hashmeter", 7171);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  result = off_79D40(0);
  if ( v10 )
  {
    if ( byte_7AEDD )
    {
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "%s", byte_7C400);
        return sub_3F178(7, s, 0);
      }
    }
    else
    {
      printf("%s: statusline: %s          \r", "hashmeter", byte_7C400);
      return fflush((FILE *)stdout);
    }
  }
  return result;
}
