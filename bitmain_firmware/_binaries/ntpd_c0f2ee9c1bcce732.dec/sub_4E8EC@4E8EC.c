unsigned int __fastcall sub_4E8EC(unsigned int a1, int a2)
{
  time_t v4; // r0
  unsigned int v5; // r2
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  _BOOL4 v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r7
  unsigned int v17; // r5
  unsigned int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  unsigned int result; // r0
  unsigned int v22; // r3
  unsigned int v23; // r1
  __int16 v24; // r12
  bool v25; // zf
  unsigned int v26; // r3
  int v27; // r5
  bool v28; // cf
  __int16 v29; // r3
  unsigned int v30; // r2
  _BOOL4 v31; // r2
  int v32; // r0

  if ( !a2 )
    off_7C9FC("caljulian.c", 48, 2, "((void *)0) != jt");
  v4 = time(0);
  v5 = HIWORD(v4);
  v6 = v4 >> 31;
  v7 = (unsigned __int16)v4 + 0xFFFF;
  if ( (v7 & 0x10000) != 0 )
    v8 = v5 + 0x8000;
  else
    v8 = v5 + 32512;
  if ( (v7 & 0x10000) == 0 )
    v8 += 255;
  v25 = (v8 & 0x10000) == 0;
  v9 = (unsigned __int16)(v4 - 1) | (v8 << 16);
  if ( !v25 )
    ++v6;
  v10 = (unsigned __int16)v9;
  v11 = HIWORD(v9) + 33536;
  v12 = v10 + 32384;
  if ( (v12 & 0x10000) != 0 )
    v13 = v11 + 171;
  else
    v13 = v11 + 170;
  if ( (v13 & 0x10000) != 0 )
    ++v6;
  v14 = v6 > 0;
  if ( a1 <= ((unsigned __int16)v12 | (unsigned int)(v13 << 16)) )
    v14 = 0;
  if ( v14 )
    --v6;
  v15 = (a1 >> 7) | (v6 << 25);
  v16 = v15 / 0x2A3;
  v17 = (a1 & 0x7F) + ((v15 % 0x2A3) << 7);
  if ( v17 > 0x1517F )
    off_7C9FC("caljulian.c", 96, 1, "ntptime < ((60)*(60)*(24))");
  if ( a1 != v17 + 86400 * v16 )
    off_7C9FC("caljulian.c", 97, 3, "(unsigned int)(ntptime + ntp_day * ((60)*(60)*(24))) == (unsigned int)saved_time");
  *(_BYTE *)(a2 + 8) = v17 % 0x3C;
  v18 = (unsigned __int8)(v17 / 0x3C / 0x3C);
  *(_BYTE *)(a2 + 6) = v18;
  *(_BYTE *)(a2 + 7) = v17 / 0x3C % 0x3C;
  if ( v18 > 0x17 )
    off_7C9FC("caljulian.c", 112, 1, "jt->hour < (24)");
  v19 = (v16 + 693595) % 0x23AB1 / 0x8EAC;
  v20 = (v16 + 693595) % 0x23AB1 % 0x8EAC;
  result = v20 / 0x5B5;
  v22 = v20 % 0x5B5;
  v23 = v22 / 0x16D;
  v24 = 400 * ((v16 + 693595) / 0x23AB1) + 100 * v19 + 4 * result + v22 / 0x16D;
  *(_WORD *)a2 = v24;
  if ( ((v22 / 0x16D) | v19) <= 3 )
  {
    v25 = v23 == 3;
    v26 = v22 % 0x16D;
    if ( v23 != 3 )
    {
      v19 = 59;
      v23 = 0;
    }
    v27 = 7 * v26;
    if ( v25 )
    {
      v31 = v19 == 3;
      if ( result == 24 )
        v32 = v31;
      else
        v32 = v31 | 1;
      if ( v32 )
        v19 = 60;
      else
        v19 = 59;
      v23 = v32 != 0;
    }
    v28 = v26 >= v19;
    v29 = v26 + 1;
    if ( v28 )
    {
      v30 = v27 + 231;
      v23 *= -7;
    }
    else
    {
      v30 = v27 + 217;
    }
    if ( v28 )
      v30 += v23;
    *(_WORD *)(a2 + 2) = v29;
    result = 613566757;
    *(_WORD *)a2 = v24 + 1;
    *(_BYTE *)(a2 + 4) = v30 / 0xD6;
    *(_BYTE *)(a2 + 5) = v30 % 0xD6 / 7 + 1;
    if ( (unsigned int)(unsigned __int8)(v30 / 0xD6) - 1 > 0xB )
      off_7C9FC("caljulian.c", 162, 1, "1 <= jt->month && jt->month <= 12");
  }
  else
  {
    *(_BYTE *)(a2 + 4) = 12;
    *(_BYTE *)(a2 + 5) = 31;
    *(_WORD *)(a2 + 2) = 366;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 5) - 1 > 0x1E )
    off_7C9FC("caljulian.c", 163, 1, "1 <= jt->monthday && jt->monthday <= 31");
  if ( (unsigned __int16)(*(_WORD *)(a2 + 2) - 1) > 0x16Du )
    off_7C9FC("caljulian.c", 164, 1, "1 <= jt->yearday && jt->yearday <= 366");
  return result;
}
