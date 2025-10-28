int __fastcall sub_1D688(int a1, int a2, int a3, int a4)
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

  sub_2FE30(&dword_73EA4);
  result = sub_3000C(&dword_73EA4, &unk_73DF8);
  v9 = dword_73EA4;
  if ( dword_73EA4 - dword_75394 < dword_72C08 )
  {
    if ( a1 < 0 )
      return result;
    sub_2FAE0(&unk_73DF8, &dword_73EA4);
    v10 = 0;
  }
  else
  {
    byte_75398 ^= byte_75399;
    dword_75394 = dword_73EA4;
    sub_2FAE0(&unk_73DF8, &dword_73EA4);
    if ( a1 < 0 )
    {
      if ( pthread_mutex_lock(&stru_793D4) )
      {
        v24 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v24, "cgminer.c", "hashmeter", 7082);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( dword_79CB8 > 0 )
      {
        v25 = 0;
        do
        {
          v26 = *(_DWORD *)(sub_13B98(v25) + 36);
          sub_3000C(&dword_73EA4, v26 + 140);
          sub_2FAE0(v26 + 140, &dword_73EA4);
          LODWORD(v27) = v26 + 48;
          sub_11D30(v27);
          LODWORD(v28) = v26 + 56;
          sub_11D30(v28);
          LODWORD(v29) = v26 + 64;
          sub_11D30(v29);
          LODWORD(v30) = v26 + 72;
          v4 = 0.0;
          sub_11D30(v30);
          ++v25;
        }
        while ( dword_79CB8 > v25 );
      }
      if ( pthread_mutex_unlock(&stru_793D4) )
      {
        v31 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v31, "cgminer.c", "hashmeter", 7095);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      v14 = a3;
      v15 = a4;
      v10 = 1;
      goto LABEL_31;
    }
    v10 = 1;
  }
  v11 = sub_13B98(a1);
  v12 = *(_DWORD *)(v11 + 36);
  sub_2FAE0(v11 + 44, &dword_73EA4);
  *(_DWORD *)(v12 + 240) = v9;
  sub_3000C(&dword_73EA4, v12 + 140);
  sub_2FAE0(v12 + 140, &dword_73EA4);
  v13 = sub_5A464(a3, a4, 1000000, 0);
  v15 = HIDWORD(v13);
  v14 = v13;
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    v53 = v13;
    v16 = sub_5A3F0(a3, a4);
    snprintf(s, 0x800u, aThreadDLluMhas, a1, v53, v16 / v4 / 1000000.0);
    sub_3F1C0(7, s, 0);
  }
  if ( pthread_mutex_lock(&stru_793D4) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "hashmeter", 7056);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v18 = sub_5A3F0(v14, v15);
  v19 = v18;
  *(double *)(v12 + 80) = *(double *)(v12 + 80) + v18;
  LODWORD(v18) = v12 + 48;
  sub_11D30(v18);
  LODWORD(v20) = v12 + 56;
  sub_11D30(v20);
  LODWORD(v21) = v12 + 64;
  sub_11D30(v21);
  LODWORD(v22) = v12 + 72;
  v4 = v19;
  sub_11D30(v22);
  if ( pthread_mutex_unlock(&stru_793D4) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v23, "cgminer.c", "hashmeter", 7062);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  off_72D00(0);
  sub_16884(v57, 0x100u, v12);
  if ( byte_73E7D )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "%s", v57);
      sub_3F1C0(7, s, 0);
    }
  }
  else
  {
    printf("%s: logline: %s          \r", "hashmeter", v57);
    fflush((FILE *)stdout);
  }
LABEL_31:
  if ( pthread_mutex_lock(&stru_793D4) )
  {
    v32 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v32, "cgminer.c", "hashmeter", 7098);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v33 = sub_5A3F0(v14, v15);
  dbl_78D10 = v33 + dbl_78D10;
  if ( v10 )
  {
    if ( dword_73E60 + 1 > 11 )
      dword_73E60 = 0;
    else
      ++dword_73E60;
    v34 = (int *)dbl_73E00;
    v35 = 0;
    v36 = 0;
    do
    {
      v37 = *(double *)v34;
      v34 += 2;
      if ( v37 >= 0.0 )
      {
        v38 = sub_5A3F0(v36, HIDWORD(v36));
        v36 = sub_5A4E8(COERCE_UNSIGNED_INT64(v37 + v38), HIDWORD(COERCE_UNSIGNED_INT64(v37 + v38)));
        ++v35;
      }
    }
    while ( v34 != &dword_73E60 );
    if ( v35 > 0 )
    {
      v39 = sub_5A464(v36, HIDWORD(v36), v35, v35 >> 31);
      v15 = HIDWORD(v39);
      v14 = v39;
    }
    v40 = sub_5A3F0(v14, v15);
    LODWORD(v40) = &dbl_79BD8;
    sub_11D30(v40);
    LODWORD(v41) = &dbl_79E68;
    sub_11D30(v41);
    LODWORD(v42) = &dbl_79E58;
    sub_11D30(v42);
    LODWORD(v43) = &dbl_79348;
    v44 = sub_11D30(v43);
    v4 = dbl_79BD8;
    *(_QWORD *)&dword_79B98 = 1000000 * llround(v44);
    dbl_73E00[dword_73E60] = 0.0;
  }
  dbl_73E00[dword_73E60] = v33 + dbl_73E00[dword_73E60];
  sub_3000C(&dword_73EA4, &dword_73DF0);
  dbl_72438 = v4;
  if ( v4 - dbl_72BF0 <= 86400.0 )
  {
    dbl_72BF0 = v4;
  }
  else
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v4, dbl_72BF0);
      sub_3F1C0(3, s, 0);
    }
    if ( pthread_mutex_unlock(&stru_793D4) )
    {
      v45 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v45, "cgminer.c", "hashmeter", 7138);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    off_72D00(0);
    sub_14198();
    if ( pthread_mutex_lock(&stru_793D4) )
    {
      v46 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "cgminer.c", "hashmeter", 7140);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
  }
  if ( v10 )
  {
    v47 = sub_5A4E8(
            COERCE_UNSIGNED_INT64(dbl_78D10 / dbl_72438 * 1000000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(dbl_78D10 / dbl_72438 * 1000000.0)));
    sub_DF7C(v47, v54, 0x10u, 4);
    dbl_753A0 = dbl_79BD8 / 1000.0;
    v48 = sub_5A4E8(COERCE_UNSIGNED_INT64(dbl_79BD8 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_79BD8 * 1000000.0)));
    sub_DF7C(v48, v55, 0x10u, 4);
    v49 = sub_5A4E8(COERCE_UNSIGNED_INT64(dbl_79E68 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_79E68 * 1000000.0)));
    sub_DF7C(v49, v56, 0x10u, 4);
    v50 = sub_5A4E8(COERCE_UNSIGNED_INT64(dbl_79E58 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_79E58 * 1000000.0)));
    sub_DF7C(v50, v57, 0x10u, 4);
    v51 = sub_5A4E8(COERCE_UNSIGNED_INT64(dbl_79348 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_79348 * 1000000.0)));
    sub_DF7C(v51, s, 0x10u, 4);
    snprintf(byte_753A8, 0x100u, "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s", dword_72C08, v55, v56, v57, s, v54);
  }
  if ( pthread_mutex_unlock(&stru_793D4) )
  {
    v52 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v52, "cgminer.c", "hashmeter", 7169);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result = off_72D00(0);
  if ( v10 )
  {
    if ( byte_73E7D )
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "%s", byte_753A8);
        return sub_3F1C0(7, s, 0);
      }
    }
    else
    {
      printf("%s: statusline: %s          \r", "hashmeter", byte_753A8);
      return fflush((FILE *)stdout);
    }
  }
  return result;
}
