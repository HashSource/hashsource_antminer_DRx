void __fastcall sub_1FB48(int a1)
{
  int v2; // r11
  int v3; // r3
  char v4; // r3
  int v5; // r3
  int v6; // r9
  __int64 v7; // d9
  int v8; // r6
  int v9; // r10
  int v10; // r8
  double v11; // d16
  double v12; // d17
  double v13; // d16
  double v14; // d16
  double v15; // d16
  int v16; // r4
  __int64 v17; // d8
  int v18; // r5
  int v19; // r2
  int v20; // r4
  int v21; // r3
  int v22; // r7
  int v23; // r1
  int v24; // r0
  int v25; // r5
  int v26; // r4
  int v27; // [sp+28h] [bp-85Ch]
  int v28; // [sp+34h] [bp-850h]
  unsigned int v29; // [sp+3Ch] [bp-848h]
  int v30; // [sp+40h] [bp-844h]
  struct timespec *remaining; // [sp+54h] [bp-830h]
  int v32; // [sp+58h] [bp-82Ch]
  int v33; // [sp+5Ch] [bp-828h]
  struct timespec s[256]; // [sp+60h] [bp-824h] BYREF
  _DWORD v35[2]; // [sp+860h] [bp-24h] BYREF
  _DWORD v36[2]; // [sp+868h] [bp-1Ch] BYREF
  int v37; // [sp+870h] [bp-14h] BYREF
  int v38; // [sp+874h] [bp-10h]
  int v39; // [sp+878h] [bp-Ch] BYREF
  int v40; // [sp+87Ch] [bp-8h]

  v30 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 36);
  v28 = *(_DWORD *)(v2 + 4);
  v3 = dword_79C48 / 5;
  if ( !(dword_79C48 / 5) )
    v3 = 1;
  v27 = v3;
  if ( *(_DWORD *)(a1 + 4) )
    v4 = *(_BYTE *)(a1 + 8);
  else
    v4 = 1;
  remaining = (struct timespec *)(v4 & 1);
  v29 = (*(int (__fastcall **)(int))(v28 + 48))(a1);
  sub_30050(&v39);
  sub_30050(v35);
  if ( *(_BYTE *)(v2 + 364) )
    goto LABEL_86;
  v5 = 1000000 * v27 + 1023;
  if ( 1000000 * v27 >= 0 )
    v5 = 1000000 * v27;
  v32 = v5 >> 10;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = a1;
  do
  {
    v10 = sub_1874C(v9, v30);
    *(_BYTE *)(v9 + 62) = 0;
    *(_BYTE *)(v2 + 172) = 1;
    sub_30050(v36);
    *(_DWORD *)(v10 + 304) = 0;
    *(_QWORD *)(v2 + 160) = 0;
    if ( !(*(int (__fastcall **)(int, int))(v28 + 56))(v9, v10) )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf((char *)s, 0x800u, "work prepare failed, exiting mining thread %d", v30);
        sub_3F178(3, s, 0);
      }
      break;
    }
    v11 = *(double *)(v28 + 104);
    v12 = *(double *)(v10 + 440);
    if ( v11 > v12 )
      v11 = *(double *)(v10 + 440);
    *(double *)(v10 + 280) = v11;
    if ( v11 < *(double *)(v28 + 120) )
      v11 = *(double *)(v28 + 120);
    *(double *)(v10 + 280) = v11;
    if ( byte_80A01 )
    {
      if ( dbl_80230 / dbl_79458 * 60.0 <= 30.0
        || (v13 = *(double *)(v28 + 112), v13 >= *(double *)(v28 + 104))
        || v12 <= v13 )
      {
        if ( v12 < *(double *)(v28 + 112) )
          *(double *)(v28 + 112) = v12;
      }
      else
      {
        v14 = v13 + 1.0;
        *(double *)(v28 + 112) = v14;
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf((char *)s, 0x800u, "Driver %s working diff changed to %.0f", *(const char **)(v28 + 4), v14);
          sub_3F178(7, s, 0);
        }
        v15 = *(double *)(v28 + 112);
        if ( v15 > *(double *)(v10 + 440) )
          v15 = *(double *)(v10 + 440);
        *(double *)(v10 + 280) = v15;
      }
      sub_12B3C(v10 + 512);
    }
    while ( 1 )
    {
      sub_30050(&v37);
      sub_2FC10(&v37, &v39);
      sub_2FC4C(&v39, v2 + 296);
      if ( sub_2FC90(&v39, v2 + 304) )
        sub_2FD00(v2 + 304, &v39);
      if ( sub_2FCC8(&v39, v2 + 312) )
        sub_2FD00(v2 + 312, &v39);
      ++*(_DWORD *)(v2 + 292);
      v16 = *(_DWORD *)(v10 + 316);
      sub_2FC4C(&v39, v16 + 388);
      if ( sub_2FC90(&v39, v16 + 396) )
        sub_2FD00(v16 + 396, &v39);
      if ( sub_2FCC8(&v39, v16 + 404) )
        sub_2FD00(v16 + 404, &v39);
      ++*(_DWORD *)(v16 + 384);
      sub_30050(v10 + 488);
      pthread_setcancelstate(1, 0);
      sub_C7E0(v9);
      v17 = ((__int64 (__fastcall *)(int, int, unsigned int, _DWORD))*(_DWORD *)(v28 + 64))(
              v9,
              v10,
              v29 + *(_DWORD *)(v10 + 304),
              0);
      sub_C814(v9);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_30050(&v39);
      if ( v17 == -1 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf((char *)s, 0x800u, "%s %d failure, disabling!", *(const char **)(v28 + 8), *(_DWORD *)(v2 + 8));
          sub_3F178(3, s, 0);
        }
        *(_DWORD *)(v2 + 32) = 1;
        sub_34354(v2, 1);
        *(_BYTE *)(v2 + 364) = 1;
        goto LABEL_85;
      }
      v7 += v17;
      if ( *(_QWORD *)(v2 + 160) < v17 )
        *(_QWORD *)(v2 + 160) = v17;
      v18 = v39;
      v19 = v39 - v37;
      v20 = v40;
      v21 = v40 - v38;
      if ( v40 - v38 < 0 )
      {
        --v19;
        v21 += 1000000;
      }
      v6 += v19;
      v8 += v21;
      if ( v8 > 1000000 )
      {
        ++v6;
        v8 -= 1000000;
      }
      v22 = v39 - v36[0];
      if ( v40 - v36[1] < 0 )
        --v22;
      if ( v27 <= v6 )
        break;
      if ( v29 != -1 )
      {
        if ( v8 + 1024 < 0 )
          v23 = v8 + 2047;
        else
          v23 = v8 + 1024;
        v33 = (sub_5E8E0(1000000, v23 >> 10) + 16) * v27;
        if ( v29 <= sub_5E818(-1024, v33) )
          v29 = (v29 * v33) >> 10;
        else
          v29 = -1;
        goto LABEL_68;
      }
LABEL_82:
      if ( v22 > dword_79C38 || *(_QWORD *)(v2 + 160) > 0xFFFFFFFD || sub_14AAC(v10, 0) )
        goto LABEL_85;
    }
    if ( v27 >= v6 )
    {
      if ( v8 > 100000 )
      {
        v24 = sub_5E8E0(1000000 * v27 + v8, v32);
        v29 = sub_5E818(v29 << 10, v24);
      }
    }
    else
    {
      v29 = sub_5E818(v27 * v29, v6);
    }
LABEL_68:
    v25 = v18 - v35[0];
    v26 = v20 - v35[1];
    if ( v26 < 0 )
    {
      --v25;
      v26 += 1000000;
    }
    if ( v7 && (v25 > 0 || v26 > 200000) || dword_79C48 <= v25 )
    {
      sub_1D880(v30, v7 | HIDWORD(v7), v7, SHIDWORD(v7));
      sub_2FD00(v35, &v39);
      v7 = 0;
    }
    if ( !*(_BYTE *)(v9 + 62) )
    {
      if ( *(_BYTE *)(v9 + 60) || *(_DWORD *)(v2 + 32) )
      {
        sub_E878(v9, v30, v28);
        v6 = 0;
        v8 = 0;
      }
      else
      {
        v6 = 0;
        v8 = 0;
      }
      goto LABEL_82;
    }
    if ( !remaining )
    {
      s[0].tv_sec = 0;
      s[0].tv_nsec = 250000000 * *(_DWORD *)(v9 + 4);
      nanosleep(s, 0);
    }
LABEL_85:
    sub_11F58((void **)v10);
  }
  while ( !*(_BYTE *)(v2 + 364) );
LABEL_86:
  *(_DWORD *)(v2 + 32) = 1;
}
