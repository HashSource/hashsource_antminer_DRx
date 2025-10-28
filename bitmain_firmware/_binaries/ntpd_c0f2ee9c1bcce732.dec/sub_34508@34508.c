_DWORD *__fastcall sub_34508(_DWORD *result)
{
  size_t v1; // r6
  int v2; // r4
  int v3; // r5
  _BYTE *v4; // r0
  int v5; // r1
  int v6; // r2
  int i; // r3
  char v8; // t1
  int v9; // r3
  int v10; // r2
  __int16 v11; // lr
  char v12; // r2
  __int16 v13; // r3
  unsigned int v14; // r8
  unsigned int v15; // r9
  unsigned int v16; // r12
  int v17; // r3
  int v18; // r1
  unsigned int v19; // r0
  int v20; // r2
  int v21; // r10
  unsigned int v22; // r11
  unsigned int v23; // r2
  unsigned int v24; // r8
  int v25; // r1
  int v26; // r9
  int v27; // r1
  int v28; // r9
  int v29; // r1
  int v30; // r8
  unsigned int v31; // r8
  int v32; // r11
  unsigned int v33; // r9
  int v34; // r0
  int v35; // r3
  int v36; // r11
  int v37; // r8
  int v38; // r0
  char v39; // r3
  int v40; // r8
  int v41; // r0
  int v42; // r8
  int v43; // r0
  int v44; // r2
  int v45; // r3
  int v46; // r12
  int v47; // r0
  int v48; // [sp+0h] [bp-3Ch]
  int v49; // [sp+4h] [bp-38h]
  int v50; // [sp+8h] [bp-34h]
  int v51; // [sp+Ch] [bp-30h]
  int v52; // [sp+10h] [bp-2Ch]
  int v53; // [sp+18h] [bp-24h]
  int v54; // [sp+18h] [bp-24h]
  int v55; // [sp+1Ch] [bp-20h]
  int v56; // [sp+1Ch] [bp-20h]
  int v57; // [sp+20h] [bp-1Ch]
  int v58; // [sp+24h] [bp-18h]
  int v59; // [sp+28h] [bp-14h] BYREF
  int v60; // [sp+2Ch] [bp-10h] BYREF
  int v61; // [sp+30h] [bp-Ch] BYREF
  int v62; // [sp+34h] [bp-8h] BYREF

  v1 = result[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  if ( !*(_DWORD *)(v3 + 20) )
    return result;
  *(_DWORD *)(v3 + 20) = 0;
  v4 = sub_27AAC(result, (_BYTE *)(v2 + 40), 128, (_DWORD *)(v2 + 216));
  *(_BYTE *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 168) = v4;
  if ( v4 != (_BYTE *)37 )
  {
    if ( (dword_7BE6C & 0x200) != 0 )
      sub_4FE78(
        4,
        "NeoClock4X(%d): received data has invalid length, expected %d bytes, received %d bytes: %s",
        *(__int16 *)(v3 + 8),
        37,
        v4,
        (const char *)(v2 + 40));
    return (_DWORD *)sub_27040(v1, 2);
  }
  sub_3448C(v2 + 75, &v62);
  v5 = v2 + 39;
  LOBYTE(v6) = 0;
  for ( i = 0; i != 35; ++i )
  {
    v8 = *(_BYTE *)++v5;
    v6 = (unsigned __int8)(v6 + v8);
  }
  if ( v6 != v62 )
  {
    if ( (dword_7BE6C & 0x200) != 0 )
      sub_4FE78(
        4,
        "NeoClock4X(%d): received data has invalid chksum: %s",
        *(__int16 *)(v3 + 8),
        (const char *)(v2 + 40));
    return (_DWORD *)sub_27040(v1, 2);
  }
  v9 = *(unsigned __int8 *)(v2 + 70);
  *(_BYTE *)(v3 + 118) = v9;
  if ( (*(_BYTE *)(v2 + 752) & 2) != 0 )
  {
    if ( v9 != 73 && (dword_7BE6C & 0x200) != 0 )
      sub_4FE78(
        5,
        "NeoClock4X(%d): using uninitialized quartz clock for time synchronization: %s",
        *(__int16 *)(v3 + 8),
        (const char *)(v2 + 40));
  }
  else if ( v9 != 73 )
  {
    if ( (dword_7BE6C & 0x200) != 0 )
      sub_4FE78(5, "NeoClock4X(%d): quartz clock is not initialized: %s", *(__int16 *)(v3 + 8), (const char *)(v2 + 40));
    *(_BYTE *)(v2 + 32) = 3;
    return (_DWORD *)sub_27040(v1, 5);
  }
  v10 = *(unsigned __int8 *)(v2 + 68);
  *(_BYTE *)(v3 + 116) = v10;
  if ( (*(_BYTE *)(v2 + 752) & 2) != 0 || v10 == 65 || (*(_BYTE *)(v2 + 752) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
      sub_4FE78(7, "NeoClock4X(%d): received data: %s", *(__int16 *)(v3 + 8), (const char *)(v2 + 40));
    sub_34434(v2 + 56, (int *)(v2 + 172));
    sub_34434(v2 + 54, &v60);
    sub_34434(v2 + 52, &v59);
    sub_34434(v2 + 58, (int *)(v2 + 180));
    sub_34434(v2 + 60, (int *)(v2 + 184));
    sub_34434(v2 + 62, (int *)(v2 + 188));
    sub_34434(v2 + 64, &v61);
    v11 = *(_WORD *)(v2 + 49);
    v12 = *(_BYTE *)(v2 + 51);
    *(_DWORD *)(v2 + 192) = 10000000 * v61;
    *(_WORD *)(v3 + 112) = v11;
    *(_BYTE *)(v3 + 115) = 0;
    *(_BYTE *)(v3 + 114) = v12;
    *(_DWORD *)(v3 + 105) = *(_DWORD *)(v2 + 43);
    v13 = *(_WORD *)(v2 + 47);
    *(_BYTE *)(v3 + 111) = 0;
    *(_WORD *)(v3 + 109) = v13;
    *(_BYTE *)(v3 + 117) = *(_BYTE *)(v2 + 69);
    sub_3448C(v2 + 71, (int *)(v3 + 120));
    sub_3448C(v2 + 73, (int *)(v3 + 124));
    v14 = *(_DWORD *)(v2 + 180);
    if ( v14 > 0x17
      || (v15 = *(_DWORD *)(v2 + 184), v15 >= 0x3C)
      || (v16 = *(_DWORD *)(v2 + 188), v16 > 0x3C)
      || (v17 = v59, v59 <= 0)
      || v59 > 31
      || (v18 = v60, v60 <= 0)
      || v60 > 12
      || (v19 = *(_DWORD *)(v2 + 172), v19 >= 0x64) )
    {
      if ( (dword_7BE6C & 0x200) != 0 )
        sub_4FE78(4, "NeoClock4X(%d): date/time out of range: %s", *(__int16 *)(v3 + 8), (const char *)(v2 + 40));
      return (_DWORD *)sub_27040(v1, 5);
    }
    else
    {
      v20 = v60 - 2;
      v21 = v19 + 2000;
      *(_DWORD *)(v2 + 172) = v19 + 2000;
      if ( v18 - 2 <= 0 )
      {
        v20 = v18 + 10;
        v21 = v19 + 1999;
      }
      v22 = v16 - 2035171456;
      v53 = v17;
      v55 = v20;
      v57 = (v21 >> 2) + sub_5A928(v21, -100);
      v58 = v57 + sub_5A928(v21, 400);
      v23 = v22 + 60 * (v15 + 60 * (v14 + 24 * (v53 + v58 + sub_5A928(367 * v55, 12) + 365 * v21)));
      v24 = v23 - 3600;
      if ( *(_BYTE *)(v3 + 117) == 83 )
        v24 = v23 - 7200;
      sub_5A908(v24, 60);
      *(_DWORD *)(v2 + 188) = v25;
      v26 = sub_5A860(v24, 60);
      sub_5A908(v26, 60);
      *(_DWORD *)(v2 + 184) = v27;
      v28 = sub_5A860(v26, 60);
      sub_5A908(v28, 24);
      *(_DWORD *)(v2 + 180) = v29;
      v30 = sub_5A860(v28, 24) + 2509157;
      v54 = sub_5A860(4 * v30, 146097);
      v31 = v30 - ((unsigned int)(146097 * v54 + 3) >> 2);
      v32 = sub_5A860(4000 * (v31 + 1), 1461001);
      v33 = v31 + 31 - ((unsigned int)(1461 * v32) >> 2);
      v56 = sub_5A860(80 * v33, 2447);
      v34 = sub_5A860(v56, 11);
      v35 = v32 + 100 * v54 - 4900;
      v36 = v56 + 2 - 12 * v34;
      v37 = v35 + v34;
      *(_DWORD *)(v2 + 172) = v35 + v34;
      v60 = v36;
      v59 = v33 - sub_5A860(2447 * v56, 80);
      v38 = sub_513CC(v37, v36, v59);
      v39 = *(_BYTE *)(v2 + 752);
      *(_BYTE *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 176) = v38;
      if ( (v39 & 8) != 0 )
      {
        v40 = *(__int16 *)(v3 + 8);
        v48 = v60;
        v49 = v59;
        v50 = *(_DWORD *)(v2 + 180);
        v51 = *(_DWORD *)(v2 + 184);
        v52 = *(_DWORD *)(v2 + 188);
        v41 = sub_5A928(*(_DWORD *)(v2 + 192), 1000000);
        sub_4FE78(
          7,
          "NeoClock4X(%d): calculated UTC date/time: %04d-%02d-%02d %02d:%02d:%02d.%03ld",
          v40,
          *(_DWORD *)(v2 + 172),
          v48,
          v49,
          v50,
          v51,
          v52,
          v41);
      }
      v42 = *(_DWORD *)(v2 + 172);
      v43 = *(_DWORD *)(v2 + 180);
      v44 = *(_DWORD *)(v2 + 184);
      v45 = *(_DWORD *)(v2 + 188);
      v46 = v59;
      *(_DWORD *)(v3 + 132) = v60;
      *(_DWORD *)(v3 + 128) = v42;
      *(_DWORD *)(v3 + 136) = v46;
      *(_DWORD *)(v3 + 140) = v43;
      *(_DWORD *)(v3 + 144) = v44;
      v47 = *(_DWORD *)(v2 + 192);
      *(_DWORD *)(v3 + 148) = v45;
      *(_DWORD *)(v3 + 152) = sub_5A928(v47, 1000000);
      if ( sub_27698((_DWORD *)v2) )
      {
        sub_276A0(v1);
        sub_27040(v1, 0);
        return (_DWORD *)sub_2DDBC(v1 + 12, (const char *)(v2 + 40));
      }
      else
      {
        if ( (dword_7BE6C & 0x200) != 0 )
          sub_4FE78(4, "NeoClock4X(%d): refclock_process failed!", *(__int16 *)(v3 + 8));
        return (_DWORD *)sub_27040(v1, 3);
      }
    }
  }
  else
  {
    result = (_DWORD *)sub_27040(v1, 6);
    *(_BYTE *)(v2 + 32) = 3;
  }
  return result;
}
