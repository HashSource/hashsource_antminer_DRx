int __fastcall sub_1C834(int a1, int a2, int a3, int a4)
{
  double v4; // d0
  int result; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r5
  double v12; // r0
  double v13; // d8
  double v14; // r0
  double v15; // r0
  double v16; // r0
  double v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r5
  double v21; // r0
  double v22; // r0
  double v23; // r0
  double v24; // r0
  double v25; // d9
  int v26; // r3
  double v27; // d16
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r3
  __int64 v33; // d16
  int v34; // r5
  int *v35; // r11
  double v36; // d8
  double v37; // r0
  double v38; // r0
  double v39; // r0
  double v40; // r0
  double v41; // r0
  int v42; // r0
  __int64 v43; // r0
  unsigned __int64 v44; // r0
  unsigned __int64 v45; // r0
  unsigned __int64 v46; // r0
  unsigned __int64 v47; // r0
  unsigned __int64 v48; // r0
  int v49; // [sp+1Ch] [bp-940h]
  __int64 v50; // [sp+20h] [bp-93Ch]
  char v51[16]; // [sp+28h] [bp-934h] BYREF
  char v52[16]; // [sp+38h] [bp-924h] BYREF
  char v53[16]; // [sp+48h] [bp-914h] BYREF
  char v54[256]; // [sp+58h] [bp-904h] BYREF
  char s[2052]; // [sp+158h] [bp-804h] BYREF

  sub_2B13C(&dword_613E4, a2, a3, a4);
  result = sub_2B314(&dword_613E4, &unk_61378);
  v9 = dword_613E4;
  if ( dword_613E4 - dword_61428 < dword_6006C )
  {
    if ( a1 < 0 )
      return result;
    v49 = 0;
    sub_2AE20(&unk_61378, &dword_613E4);
  }
  else
  {
    dword_61428 = dword_613E4;
    byte_6142C ^= byte_6142D;
    sub_2AE20(&unk_61378, &dword_613E4);
    if ( a1 < 0 )
    {
      if ( pthread_mutex_lock(&stru_6392C) )
        sub_B4E4("hashmeter", 6741);
      if ( dword_6410C > 0 )
      {
        v18 = 0;
        do
        {
          v19 = v18++;
          v20 = *(_DWORD *)(sub_1C36C(v19) + 36);
          sub_2B314(&dword_613E4, v20 + 140);
          sub_2AE20(v20 + 140, &dword_613E4);
          LODWORD(v21) = v20 + 48;
          sub_152D0(v21);
          LODWORD(v22) = v20 + 56;
          sub_152D0(v22);
          LODWORD(v23) = v20 + 64;
          sub_152D0(v23);
          LODWORD(v24) = v20 + 72;
          v4 = 0.0;
          sub_152D0(v24);
        }
        while ( dword_6410C > v18 );
      }
      if ( pthread_mutex_unlock(&stru_6392C) )
        sub_B694("hashmeter", 6754);
      v49 = 1;
      LODWORD(v50) = a3;
      off_60178();
      goto LABEL_28;
    }
    v49 = 1;
  }
  v10 = sub_1C36C(a1);
  v11 = *(_DWORD *)(v10 + 36);
  sub_2AE20(v10 + 44, &dword_613E4);
  *(_DWORD *)(v11 + 240) = v9;
  sub_2B314(&dword_613E4, v11 + 140);
  sub_2AE20(v11 + 140, &dword_613E4);
  v50 = sub_4943C(a3, a4, 1000000, 0);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    v17 = sub_493C8(a3);
    snprintf(s, 0x800u, "[thread %d: %llu hashes, %.1f mhash/sec]", a1, v50, v17 / v4 / 1000000.0);
    sub_38438(7, s, 0);
  }
  if ( pthread_mutex_lock(&stru_6392C) )
    sub_B4E4("hashmeter", 6715);
  v12 = sub_493C8(v50);
  v13 = v12;
  LODWORD(v12) = v11 + 48;
  *(double *)(v11 + 80) = *(double *)(v11 + 80) + v13;
  sub_152D0(v12);
  LODWORD(v14) = v11 + 56;
  sub_152D0(v14);
  LODWORD(v15) = v11 + 64;
  sub_152D0(v15);
  LODWORD(v16) = v11 + 72;
  v4 = v13;
  sub_152D0(v16);
  if ( pthread_mutex_unlock(&stru_6392C) )
    sub_B694("hashmeter", 6721);
  off_60178();
  sub_1715C(v54, 0x100u, v11);
  if ( byte_612F8 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "%s", v54);
      sub_38438(7, s, 0);
    }
  }
  else
  {
    printf("%s          \r", v54);
    fflush((FILE *)stdout);
  }
LABEL_28:
  if ( pthread_mutex_lock(&stru_6392C) )
    sub_B4E4("hashmeter", 6757);
  v25 = sub_493C8(v50);
  dbl_63268 = v25 + dbl_63268;
  if ( v49 )
  {
    v32 = dword_613E0 + 1;
    v33 = 0;
    v34 = 0;
    v35 = (int *)dbl_61380;
    if ( dword_613E0 + 1 > 11 )
      v32 = 0;
    dword_613E0 = v32;
    do
    {
      v36 = *(double *)v35;
      v35 += 2;
      if ( v36 >= 0.0 )
      {
        v37 = sub_493C8(v33);
        ++v34;
        v33 = sub_494C0(COERCE_UNSIGNED_INT64(v36 + v37), HIDWORD(COERCE_UNSIGNED_INT64(v36 + v37)));
      }
    }
    while ( v35 != &dword_613E0 );
    if ( v34 )
      LODWORD(v50) = sub_4943C(v33, HIDWORD(v33), v34, v34 >> 31);
    v38 = sub_493C8(v50);
    LODWORD(v38) = &dbl_640B0;
    sub_152D0(v38);
    LODWORD(v39) = &dbl_64238;
    sub_152D0(v39);
    LODWORD(v40) = &dbl_64228;
    sub_152D0(v40);
    LODWORD(v41) = &dbl_638A0;
    v42 = sub_152D0(v41);
    v4 = dbl_640B0;
    v43 = llround(v42);
    v27 = 0.0;
    v26 = dword_613E0;
    dbl_61380[dword_613E0] = 0.0;
    *(_QWORD *)&dword_64070 = 1000000 * v43;
  }
  else
  {
    v26 = dword_613E0;
    v27 = dbl_61380[dword_613E0];
  }
  dbl_61380[v26] = v27 + v25;
  sub_2B314(&dword_613E4, &dword_61370);
  dbl_5F898 = v4;
  if ( v4 - dbl_60088 > 86400.0 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
    {
      snprintf(s, 0x800u, "cgminer time error total_secs = %f last_total_secs = %f", v4, dbl_60088);
      sub_38438(3, s, 0);
    }
    if ( pthread_mutex_unlock(&stru_6392C) )
      sub_B694("hashmeter", 6797);
    v28 = off_60178();
    sub_1ABE0(v28, v29, v30, v31);
    if ( pthread_mutex_lock(&stru_6392C) )
      sub_B4E4("hashmeter", 6799);
  }
  else
  {
    dbl_60088 = v4;
  }
  if ( v49 )
  {
    v44 = sub_494C0(
            COERCE_UNSIGNED_INT64(dbl_63268 / dbl_5F898 * 1000000.0),
            HIDWORD(COERCE_UNSIGNED_INT64(dbl_63268 / dbl_5F898 * 1000000.0)));
    sub_11130(v44, v51, 0x10u, 4);
    dbl_61430 = dbl_640B0 / 1000.0;
    v45 = sub_494C0(COERCE_UNSIGNED_INT64(dbl_640B0 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_640B0 * 1000000.0)));
    sub_11130(v45, v52, 0x10u, 4);
    v46 = sub_494C0(COERCE_UNSIGNED_INT64(dbl_64238 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_64238 * 1000000.0)));
    sub_11130(v46, v53, 0x10u, 4);
    v47 = sub_494C0(COERCE_UNSIGNED_INT64(dbl_64228 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_64228 * 1000000.0)));
    sub_11130(v47, v54, 0x10u, 4);
    v48 = sub_494C0(COERCE_UNSIGNED_INT64(dbl_638A0 * 1000000.0), HIDWORD(COERCE_UNSIGNED_INT64(dbl_638A0 * 1000000.0)));
    sub_11130(v48, s, 0x10u, 4);
    snprintf(byte_61438, 0x100u, "(%ds):%s (1m):%s (5m):%s (15m):%s (avg):%sh/s", dword_6006C, v52, v53, v54, s, v51);
  }
  if ( pthread_mutex_unlock(&stru_6392C) )
    sub_B694("hashmeter", 6828);
  result = off_60178();
  if ( v49 )
  {
    if ( byte_612F8 )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "%s", byte_61438);
        return sub_38438(7, s, 0);
      }
    }
    else
    {
      printf("%s          \r", byte_61438);
      return fflush((FILE *)stdout);
    }
  }
  return result;
}
