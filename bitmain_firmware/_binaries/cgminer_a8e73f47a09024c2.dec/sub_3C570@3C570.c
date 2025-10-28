unsigned __int8 **__fastcall sub_3C570(int a1, int a2, int a3, int a4)
{
  unsigned __int8 **result; // r0
  int v7; // r3
  unsigned __int8 **v8; // r10
  int v9; // r4
  int v10; // r3
  const char *v11; // r6
  const char *v12; // r5
  time_t v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r6
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r5
  char *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  _DWORD *v42; // r0
  _DWORD *v43; // r0
  _DWORD *v44; // r6
  double v45; // r0
  _DWORD *v46; // r0
  double v47; // d17
  double v48; // d16
  double v49; // d16
  _DWORD *v50; // r0
  double v51; // d17
  double v52; // d16
  double v53; // d16
  unsigned __int8 **v54; // r1
  _BOOL4 v55; // r3
  unsigned __int8 **v56; // [sp+14h] [bp-160h]
  double v57; // [sp+18h] [bp-15Ch] BYREF
  double v58; // [sp+20h] [bp-154h] BYREF
  char v59[256]; // [sp+2Ch] [bp-148h] BYREF
  int v60; // [sp+12Ch] [bp-48h] BYREF
  char s[64]; // [sp+130h] [bp-44h] BYREF

  memset(s, 0, sizeof(s));
  memset(v59, 0, sizeof(v59));
  if ( !dword_802C8 )
    return sub_39548(a1, 8, 0, 0, a4);
  result = sub_39548(a1, 7, 0, 0, a4);
  if ( a4 )
  {
    result = (unsigned __int8 **)sub_3681C(a1, ",\"POOLS\":[");
    v56 = result;
  }
  else
  {
    v56 = 0;
  }
  v60 = 0;
  if ( dword_802C8 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(dword_80568 + 4 * v7);
      if ( !*(_BYTE *)(v9 + 105) )
      {
        v10 = *(_DWORD *)(v9 + 100);
        if ( v10 == 1 )
        {
          if ( *(_BYTE *)(v9 + 97) )
            v11 = "Dead";
          else
            v11 = "Alive";
        }
        else if ( v10 )
        {
          if ( v10 == 2 )
            v11 = "Rejecting";
          else
            v11 = "Unknown";
        }
        else
        {
          v11 = "Disabled";
        }
        if ( *(_DWORD *)(v9 + 112) )
          v12 = "Y";
        else
          v12 = "N";
        if ( *(int *)(v9 + 360) > 0 )
        {
          v13 = time(0);
          v14 = (v13 - *(_DWORD *)(v9 + 360)) & ~((v13 - *(_DWORD *)(v9 + 360)) >> 31);
          sprintf(v59, "%d:%02d:%02d", v14 / 3600, v14 % 3600 / 60, v14 % 3600 % 60);
        }
        else
        {
          strcpy(v59, "0");
        }
        v15 = sub_393BC(v8, "POOL", (const char *)&v60, 0);
        v16 = sub_392E4(v15, "URL", *(const char **)(v9 + 172), 0);
        v17 = sub_39308(v16, "Status", v11, 0);
        v18 = sub_393BC(v17, "Priority", (const char *)(v9 + 4), 0);
        v19 = sub_393BC(v18, "Quota", (const char *)(v9 + 56), 0);
        v20 = sub_39308(v19, "Long Poll", v12, 0);
        v21 = sub_393E0(v20, "Getworks", (const char *)(v9 + 120), 0);
        v22 = sub_39470(v21, "Accepted", (const char *)(v9 + 8), 0);
        v23 = sub_39470(v22, "Rejected", (const char *)(v9 + 16), 0);
        v24 = sub_393E0(v23, "Discarded", (const char *)(v9 + 128), 0);
        v25 = sub_393E0(v24, "Stale", (const char *)(v9 + 124), 0);
        v26 = sub_393E0(v25, "Get Failures", (const char *)(v9 + 132), 0);
        v27 = sub_393E0(v26, "Remote Failures", (const char *)(v9 + 136), 0);
        v28 = sub_392E4(v27, "User", *(const char **)(v9 + 180), 0);
        v29 = sub_39308(v28, "Last Share Time", v59, 0);
        sprintf((char *)(v9 + 48), "%8.4f", *(double *)(v9 + 1864));
        v30 = sub_39308(v29, "Diff", (const char *)(v9 + 48), 0);
        v31 = sub_39470(v30, "Diff1 Shares", (const char *)(v9 + 40), 0);
        v32 = v31;
        if ( *(_DWORD *)(v9 + 192) )
        {
          v33 = sub_2D008(*(char **)(v9 + 188));
          v34 = sub_3932C(v32, "Proxy Type", v33, 0);
          v35 = sub_392E4(v34, "Proxy", *(const char **)(v9 + 192), 0);
        }
        else
        {
          v36 = sub_3932C(v31, "Proxy Type", &byte_6DF60, 0);
          v35 = sub_3932C(v36, "Proxy", &byte_6DF60, 0);
        }
        v37 = sub_3BE60(v35, "Difficulty Accepted", (const char *)(v9 + 72), 0);
        v38 = sub_3BE60(v37, "Difficulty Rejected", (const char *)(v9 + 80), 0);
        v39 = sub_3BE60(v38, "Difficulty Stale", (const char *)(v9 + 88), 0);
        v40 = sub_3BE60(v39, "Last Share Difficulty", (const char *)(v9 + 368), 0);
        v41 = sub_394DC(v40, "Has Stratum", (const char *)(v9 + 640), 0);
        v42 = sub_394DC(v41, "Stratum Active", (const char *)(v9 + 641), 0);
        if ( *(_BYTE *)(v9 + 641) )
          v43 = sub_392E4(v42, "Stratum URL", *(const char **)(v9 + 576), 0);
        else
          v43 = sub_3932C(v42, "Stratum URL", &byte_6DF60, 0);
        v44 = sub_394DC(v43, "Has GBT", (const char *)(v9 + 752), 0);
        v45 = sub_5ED20(*(_DWORD *)(v9 + 376), *(_DWORD *)(v9 + 380));
        sprintf(s, "%8.4f", v45);
        v46 = sub_39308(v44, "Best Share", s, 0);
        v47 = *(double *)(v9 + 80);
        v48 = v47 + *(double *)(v9 + 72) + *(double *)(v9 + 88);
        if ( v48 == 0.0 )
          v49 = 0.0;
        else
          v49 = v47 / v48;
        v57 = v49;
        v50 = sub_3BFFC(v46, "Pool Rejected%", (const char *)&v57, 0);
        v51 = *(double *)(v9 + 88);
        v52 = *(double *)(v9 + 72) + *(double *)(v9 + 80) + v51;
        if ( v52 == 0.0 )
          v53 = 0.0;
        else
          v53 = v51 / v52;
        v58 = v53;
        v54 = (unsigned __int8 **)sub_3BFFC(v50, "Pool Stale%", (const char *)&v58, 0);
        if ( a4 )
          v55 = v60 > 0;
        else
          v55 = 0;
        result = sub_387F0(a1, v54, a4, v55);
        v8 = result;
      }
      v7 = v60 + 1;
      v60 = v7;
    }
    while ( dword_802C8 > v7 );
  }
  if ( ((unsigned int)v56 & a4) != 0 )
    return (unsigned __int8 **)sub_364E0(a1);
  return result;
}
