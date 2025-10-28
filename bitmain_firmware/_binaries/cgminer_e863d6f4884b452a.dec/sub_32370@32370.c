int __fastcall sub_32370(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  double v10; // r0
  _DWORD *v11; // r0
  double v12; // d5
  double v13; // d7
  double v14; // d6
  _DWORD *v15; // r0
  double v16; // d5
  double v17; // d7
  double v18; // d6
  char **v19; // r0
  _BOOL4 v20; // r3
  int v21; // r4
  int v22; // r3
  const char *v23; // r5
  time_t v24; // r0
  unsigned int v25; // r12
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r5
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r6
  char *v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r0
  _DWORD *v51; // r0
  _DWORD *v52; // r0
  _DWORD *v53; // r0
  const char *v54; // r6
  _DWORD *v55; // [sp+10h] [bp-174h]
  int v57; // [sp+24h] [bp-160h]
  int v58; // [sp+2Ch] [bp-158h] BYREF
  double v59; // [sp+30h] [bp-154h] BYREF
  double v60; // [sp+38h] [bp-14Ch] BYREF
  char v61[64]; // [sp+40h] [bp-144h] BYREF
  char s[260]; // [sp+80h] [bp-104h] BYREF

  memset(v61, 0, sizeof(v61));
  memset(s, 0, 0x100u);
  if ( !dword_72EF0 )
    return sub_30214((unsigned int *)a1, 8, 0, 0, a4);
  result = sub_30214((unsigned int *)a1, 7, 0, 0, a4);
  if ( !a4 )
  {
    v58 = 0;
    if ( dword_72EF0 <= 0 )
      return result;
    v57 = 0;
    goto LABEL_6;
  }
  result = sub_2E530((unsigned int *)a1, ",\"POOLS\":[");
  v57 = result;
  v58 = 0;
  if ( dword_72EF0 > 0 )
  {
LABEL_6:
    result = -1851608123;
    v7 = 0;
    v55 = 0;
    do
    {
      v21 = *(_DWORD *)(dword_732EC + 4 * v7);
      if ( !*(_BYTE *)(v21 + 105) )
      {
        v22 = *(_DWORD *)(v21 + 100);
        if ( v22 == 1 )
        {
          v54 = "Alive";
          if ( *(_BYTE *)(v21 + 97) )
            v54 = "Dead";
        }
        else if ( v22 )
        {
          v54 = "Rejecting";
          if ( v22 != 2 )
            v54 = "Unknown";
        }
        else
        {
          v54 = "Disabled";
        }
        v23 = "Y";
        if ( !*(_DWORD *)(v21 + 112) )
          v23 = "N";
        if ( *(int *)(v21 + 360) > 0 )
        {
          v24 = time(0);
          v25 = (v24 - *(_DWORD *)(v21 + 360)) & ~((v24 - *(_DWORD *)(v21 + 360)) >> 31);
          sprintf(s, "%d:%02d:%02d", v25 / 0xE10, v25 % 0xE10 / 0x3C, v25 % 0xE10 % 0x3C);
        }
        else
        {
          *(_WORD *)s = 48;
        }
        v26 = sub_2E418(v55, "POOL", 6, (const char *)&v58, 0);
        v27 = sub_2E418(v26, "URL", 0, *(const char **)(v21 + 172), 0);
        v28 = sub_2E418(v27, "Status", 1, v54, 0);
        v29 = sub_2E418(v28, "Priority", 6, (const char *)(v21 + 4), 0);
        v30 = sub_2E418(v29, "Quota", 6, (const char *)(v21 + 56), 0);
        v31 = sub_2E418(v30, "Long Poll", 1, v23, 0);
        v32 = sub_2E418(v31, "Getworks", 7, (const char *)(v21 + 120), 0);
        v33 = sub_2E418(v32, "Accepted", 11, (const char *)(v21 + 8), 0);
        v34 = sub_2E418(v33, "Rejected", 11, (const char *)(v21 + 16), 0);
        v35 = sub_2E418(v34, "Discarded", 7, (const char *)(v21 + 128), 0);
        v36 = sub_2E418(v35, "Stale", 7, (const char *)(v21 + 124), 0);
        v37 = sub_2E418(v36, "Get Failures", 7, (const char *)(v21 + 132), 0);
        v38 = sub_2E418(v37, "Remote Failures", 7, (const char *)(v21 + 136), 0);
        v39 = sub_2E418(v38, "User", 0, *(const char **)(v21 + 180), 0);
        v40 = sub_2E418(v39, "Last Share Time", 1, s, 0);
        sprintf((char *)(v21 + 48), "%8.4f", *(double *)(v21 + 1864));
        v41 = sub_2E418(v40, "Diff", 1, (const char *)(v21 + 48), 0);
        v42 = sub_2E418(v41, "Diff1 Shares", 11, (const char *)(v21 + 40), 0);
        v43 = v42;
        if ( *(_DWORD *)(v21 + 192) )
        {
          v44 = sub_281E8(*(char **)(v21 + 188));
          v45 = sub_2E418(v43, "Proxy Type", 2, v44, 0);
          v46 = sub_2E418(v45, "Proxy", 0, *(const char **)(v21 + 192), 0);
        }
        else
        {
          v53 = sub_2E418(v42, "Proxy Type", 2, &byte_57FF0, 0);
          v46 = sub_2E418(v53, "Proxy", 2, &byte_57FF0, 0);
        }
        v47 = sub_2E418(v46, "Difficulty Accepted", 24, (const char *)(v21 + 72), 0);
        v48 = sub_2E418(v47, "Difficulty Rejected", 24, (const char *)(v21 + 80), 0);
        v49 = sub_2E418(v48, "Difficulty Stale", 24, (const char *)(v21 + 88), 0);
        v50 = sub_2E418(v49, "Last Share Difficulty", 24, (const char *)(v21 + 368), 0);
        v51 = sub_2E418(v50, "Has Stratum", 14, (const char *)(v21 + 640), 0);
        v52 = sub_2E418(v51, "Stratum Active", 14, (const char *)(v21 + 641), 0);
        if ( *(_BYTE *)(v21 + 641) )
          v8 = sub_2E418(v52, "Stratum URL", 0, *(const char **)(v21 + 576), 0);
        else
          v8 = sub_2E418(v52, "Stratum URL", 2, &byte_57FF0, *(_BYTE *)(v21 + 641));
        v9 = sub_2E418(v8, "Has GBT", 14, (const char *)(v21 + 752), 0);
        v10 = sub_4A0AC(*(_DWORD *)(v21 + 376), *(_DWORD *)(v21 + 380));
        sprintf(v61, "%8.4f", v10);
        v11 = sub_2E418(v9, "Best Share", 1, v61, 0);
        v12 = *(double *)(v21 + 80);
        v13 = v12 + *(double *)(v21 + 72) + *(double *)(v21 + 88);
        if ( v13 == 0.0 )
          v14 = 0.0;
        else
          v14 = v12 / v13;
        v59 = v14;
        v15 = sub_2E418(v11, "Pool Rejected%", 25, (const char *)&v59, 0);
        v16 = *(double *)(v21 + 88);
        v17 = *(double *)(v21 + 72) + *(double *)(v21 + 80) + v16;
        if ( v17 == 0.0 )
          v18 = 0.0;
        else
          v18 = v16 / v17;
        v60 = v18;
        v19 = (char **)sub_2E418(v15, "Pool Stale%", 25, (const char *)&v60, 0);
        if ( a4 )
          v20 = v58 > 0;
        else
          v20 = 0;
        result = sub_2F9C4((unsigned int *)a1, v19, a4, v20);
        v55 = (_DWORD *)result;
      }
      v7 = ++v58;
    }
    while ( v58 < dword_72EF0 );
  }
  if ( v57 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
