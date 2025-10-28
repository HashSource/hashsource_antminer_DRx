void __fastcall sub_220D4(int a1)
{
  int v2; // r10
  int v3; // r3
  int v4; // r11
  int v5; // r9
  int v6; // r3
  int v7; // r5
  double v8; // d7
  int v9; // r3
  double v10; // d0
  double v11; // d4
  int v12; // r6
  __int64 v13; // r6
  bool v14; // zf
  int v15; // r1
  int v16; // r6
  int v17; // r7
  int v18; // r3
  int v19; // r2
  int v20; // r4
  int v21; // r6
  int v22; // r7
  bool v23; // cc
  _BOOL4 v24; // r1
  int v25; // r3
  int v26; // r1
  int v27; // r0
  double v28; // d0
  int v29; // r3
  __int64 v30; // [sp+8h] [bp-86Ch]
  int v31; // [sp+10h] [bp-864h]
  int v32; // [sp+14h] [bp-860h]
  int v33; // [sp+18h] [bp-85Ch]
  unsigned int v34; // [sp+20h] [bp-854h]
  int v35; // [sp+2Ch] [bp-848h]
  int v36; // [sp+30h] [bp-844h]
  int remaining; // [sp+38h] [bp-83Ch]
  int v38; // [sp+3Ch] [bp-838h]
  int v39; // [sp+40h] [bp-834h]
  int v40; // [sp+4Ch] [bp-828h]
  int v41; // [sp+50h] [bp-824h] BYREF
  int v42; // [sp+54h] [bp-820h]
  int v43; // [sp+58h] [bp-81Ch] BYREF
  int v44; // [sp+5Ch] [bp-818h]
  _DWORD v45[2]; // [sp+60h] [bp-814h] BYREF
  _DWORD v46[2]; // [sp+68h] [bp-80Ch] BYREF
  struct timespec requested_time; // [sp+70h] [bp-804h] BYREF

  v2 = *(_DWORD *)(a1 + 36);
  v36 = *(_DWORD *)a1;
  v31 = *(_DWORD *)(v2 + 4);
  v3 = dword_6CA7C / 5;
  if ( (int)((unsigned __int64)(1717986919LL * dword_6CA7C) >> 32) >> 1 == dword_6CA7C >> 31 )
    v3 = 1;
  v35 = v3;
  if ( *(_DWORD *)(a1 + 4) )
    remaining = *(unsigned __int8 *)(a1 + 8);
  else
    remaining = 1;
  v34 = (*(int (__fastcall **)(int))(v31 + 48))(a1);
  sub_2A69C(&v41);
  sub_2A69C(v46);
  if ( *(_BYTE *)(v2 + 364) )
    goto LABEL_60;
  v4 = *(unsigned __int8 *)(v2 + 364);
  v5 = v4;
  v38 = 1000000 * v35;
  v6 = (v38 + 1023) & (v38 >> 31);
  if ( 1000000 * v35 >= 0 )
    v6 = 1000000 * v35;
  v30 = 0;
  v39 = v6 >> 10;
  do
  {
    v7 = sub_20540(a1, v36);
    *(_BYTE *)(a1 + 62) = 0;
    *(_BYTE *)(v2 + 172) = 1;
    sub_2A69C(v45);
    *(_DWORD *)(v7 + 304) = 0;
    *(_QWORD *)(v2 + 160) = 0;
    if ( !(*(int (__fastcall **)(int, int))(v31 + 56))(a1, v7) )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
      {
        snprintf((char *)&requested_time, 0x800u, "work prepare failed, exiting mining thread %d", v36);
        sub_343C4(3, &requested_time, 0);
      }
      break;
    }
    v8 = *(double *)(v7 + 440);
    v9 = (unsigned __int8)byte_73D04;
    v10 = *(double *)(v31 + 104);
    if ( v10 > v8 )
      v10 = *(double *)(v7 + 440);
    *(double *)(v7 + 280) = v10;
    if ( *(double *)(v31 + 120) > v10 )
      v10 = *(double *)(v31 + 120);
    *(double *)(v7 + 280) = v10;
    if ( v9 )
    {
      v11 = *(double *)(v31 + 112);
      if ( dbl_73D88 / dbl_6C2C0 * 60.0 > 30.0 && *(double *)(v31 + 104) > v11 && v8 > v11 )
      {
        v28 = v11 + 1.0;
        v29 = (unsigned __int8)byte_6FA71;
        *(double *)(v31 + 112) = v11 + 1.0;
        if ( v29 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(
            (char *)&requested_time,
            0x800u,
            "Driver %s working diff changed to %.0f",
            *(const char **)(v31 + 4),
            v11 + 1.0);
          sub_343C4(7, &requested_time, 0);
          v28 = *(double *)(v31 + 112);
        }
        if ( *(double *)(v7 + 440) < v28 )
          v28 = *(double *)(v7 + 440);
        *(double *)(v7 + 280) = v28;
      }
      else if ( v8 < v11 )
      {
        *(double *)(v31 + 112) = v8;
      }
      sub_1A9C0(v7 + 512);
    }
    v33 = v2 + 304;
    v32 = v2 + 312;
    while ( 1 )
    {
      sub_2A69C(&v43);
      sub_2A3E0(&v43, &v41);
      sub_2A40C(&v41, v2 + 296);
      if ( sub_2A440(&v41, v33) )
        sub_2A480(v33);
      if ( sub_2A460(&v41, v32) )
        sub_2A480(v32);
      ++*(_DWORD *)(v2 + 292);
      v12 = *(_DWORD *)(v7 + 316);
      sub_2A40C(&v41, v12 + 388);
      if ( sub_2A440(&v41, v12 + 396) )
        sub_2A480(v12 + 396);
      if ( sub_2A460(&v41, v12 + 404) )
        sub_2A480(v12 + 404);
      ++*(_DWORD *)(v12 + 384);
      sub_2A69C(v7 + 488);
      pthread_setcancelstate(1, 0);
      sub_172CC(a1);
      v13 = ((__int64 (__fastcall *)(int, int, unsigned int, _DWORD))*(_DWORD *)(v31 + 64))(
              a1,
              v7,
              *(_DWORD *)(v7 + 304) + v34,
              0);
      sub_172A8(a1);
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sub_2A69C(&v41);
      v14 = HIDWORD(v13) == -1;
      if ( HIDWORD(v13) == -1 )
        v14 = (_DWORD)v13 == -1;
      if ( v14 )
        break;
      v15 = (unsigned __int64)(v30 + v13) >> 32;
      v30 += v13;
      if ( *(_QWORD *)(v2 + 160) < v13 )
        *(_QWORD *)(v2 + 160) = v13;
      v16 = v42;
      v17 = v41;
      v18 = v42 - v44 + (v42 - v44 < 0 ? 0xF4000 : 0);
      v19 = v41 - v43;
      if ( v42 - v44 < 0 )
      {
        v18 += 576;
        --v19;
      }
      v4 += v18;
      v5 += v19;
      if ( v4 > 1000000 )
      {
        ++v5;
        v4 -= 1000000;
      }
      v20 = v41 - v45[0];
      if ( v42 - v45[1] < 0 )
        --v20;
      if ( v35 > v5 )
      {
        if ( v34 == -1 )
          goto LABEL_54;
        v26 = v4 + 2047;
        if ( v4 + 1024 >= 0 )
          v26 = v4 + 1024;
        v40 = (sub_49AF0(1000000, v26 >> 10) + 16) * v35;
        if ( sub_49878(-1024, v40) >= v34 )
          v34 = (v34 * v40) >> 10;
        else
          v34 = -1;
      }
      else if ( v35 < v5 )
      {
        v34 = sub_49878(v34 * v35, v5);
      }
      else if ( v4 > 100000 )
      {
        v27 = sub_49AF0(v38 + v4, v39);
        v34 = sub_49878(v34 << 10, v27);
      }
      v21 = v16 - v46[1];
      v22 = v17 - v46[0];
      if ( v21 < 0 )
      {
        --v22;
        v21 += 1000000;
      }
      if ( v30 )
      {
        v23 = v22 <= 0;
        if ( v22 <= 0 )
          v23 = v21 <= (int)&loc_30D40;
        if ( !v23 )
          goto LABEL_51;
      }
      if ( dword_6CA7C <= v22 )
      {
LABEL_51:
        sub_213C4(v36, v15, v30, SHIDWORD(v30));
        v30 = 0;
        sub_2A480(v46);
        if ( *(_BYTE *)(a1 + 62) )
          goto LABEL_63;
      }
      else if ( *(_BYTE *)(a1 + 62) )
      {
LABEL_63:
        if ( !remaining )
        {
          v25 = 250000000 * *(_DWORD *)(a1 + 4);
          requested_time.tv_sec = 0;
          requested_time.tv_nsec = v25;
          nanosleep(&requested_time, 0);
        }
        goto LABEL_59;
      }
      if ( *(_BYTE *)(a1 + 60) || (v4 = *(_DWORD *)(v2 + 32), (v5 = v4) != 0) )
      {
        v4 = 0;
        v5 = 0;
        sub_17750(a1, v36, (int (__fastcall **)(int))(v31 + 92));
      }
LABEL_54:
      v24 = dword_6CA98 < v20 || *(_QWORD *)(v2 + 160) > 0xFFFFFFFD;
      if ( v24 || sub_201D4(v7, 0) )
        goto LABEL_59;
    }
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(
        (char *)&requested_time,
        0x800u,
        "%s %d failure, disabling!",
        *(const char **)(v31 + 8),
        *(_DWORD *)(v2 + 8));
      sub_343C4(3, &requested_time, 0);
    }
    *(_DWORD *)(v2 + 32) = 1;
    sub_2D53C(v2, 1);
    *(_BYTE *)(v2 + 364) = 1;
LABEL_59:
    sub_19F2C((void **)v7);
    free((void *)v7);
  }
  while ( !*(_BYTE *)(v2 + 364) );
LABEL_60:
  *(_DWORD *)(v2 + 32) = 1;
}
