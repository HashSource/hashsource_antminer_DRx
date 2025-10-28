int __fastcall sub_31ED8(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  double v7; // d7
  double v8; // d6
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r10
  _DWORD *v14; // r0
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
  double v29; // d7
  double v30; // d5
  _DWORD *v31; // r0
  double v32; // d6
  _DWORD *v33; // r0
  double v34; // d7
  double v35; // d5
  _DWORD *v36; // r0
  double v37; // d7
  double v38; // d5
  _DWORD *v39; // r0
  char **v40; // r4
  int result; // r0
  int v42; // [sp+10h] [bp-54h]
  _DWORD *v43; // [sp+14h] [bp-50h]
  double v46; // [sp+20h] [bp-44h] BYREF
  double v47; // [sp+28h] [bp-3Ch] BYREF
  double v48; // [sp+30h] [bp-34h] BYREF
  double v49; // [sp+38h] [bp-2Ch] BYREF
  double v50; // [sp+40h] [bp-24h] BYREF
  double v51; // [sp+48h] [bp-1Ch] BYREF
  double v52; // [sp+50h] [bp-14h] BYREF
  char s[4]; // [sp+58h] [bp-Ch] BYREF
  int v54; // [sp+5Ch] [bp-8h]

  *(_DWORD *)s = 0;
  v54 = 0;
  sub_30214((unsigned int *)a1, 11, 0, 0, a4);
  v6 = "SUMMARY,";
  if ( a4 )
    v6 = ",\"SUMMARY\":[";
  v42 = sub_2E530((unsigned int *)a1, v6);
  if ( pthread_mutex_lock(&stru_73CEC) )
    sub_2F624("summary", 2802);
  v7 = dbl_72D90 + dbl_72E30 + dbl_739F8;
  dbl_73D88 = v7;
  if ( dbl_6C2C0 != 0.0 )
    v7 = v7 / dbl_6C2C0;
  v8 = dbl_73790;
  if ( dbl_6C2C0 != 0.0 )
    v8 = dbl_73790 / dbl_6C2C0;
  v48 = v7 * 60.0;
  v46 = v8 * 60.0;
  v47 = dbl_739E8 / 1000.0 / dbl_6C2C0;
  v9 = sub_2E418(0, "Elapsed", 13, (const char *)&dbl_6C2C0, 1);
  v10 = sub_2E418(v9, "GHS 5s", 1, byte_6F7FC, 0);
  v11 = sub_2E418(v10, "GHS av", 17, (const char *)&v47, 0);
  dword_72F78 = 0;
  v12 = sub_2E418(v11, "Found Blocks", 7, (const char *)&dword_72F78, 1);
  v43 = sub_2E418(v12, "Getworks", 11, (const char *)&dword_737A0, 1);
  sprintf(s, "%8.4f", dbl_73790);
  v13 = sub_2E418(v43, "Accepted", 1, s, 0);
  sprintf(s, "%8.4f", dbl_73CA8);
  v14 = sub_2E418(v13, "Rejected", 1, s, 0);
  v15 = sub_2E418(v14, "Hardware Errors", 6, (const char *)&dword_72D08, 1);
  v16 = sub_2E418(v15, "Utility", 20, (const char *)&v46, 0);
  v17 = sub_2E418(v16, "Discarded", 11, (const char *)&dword_72DA0, 1);
  v18 = sub_2E418(v17, "Stale", 11, (const char *)&dword_72C38, 1);
  v19 = sub_2E418(v18, "Get Failures", 7, (const char *)&dword_7367C, 1);
  v20 = sub_2E418(v19, "Local Work", 7, (const char *)&dword_73CA0, 1);
  v21 = sub_2E418(v20, "Remote Failures", 7, (const char *)&dword_732B8, 1);
  v22 = sub_2E418(v21, "Network Blocks", 7, (const char *)&dword_73A18, 1);
  v23 = sub_2E418(v22, "Total MH", 18, (const char *)&dbl_739E8, 1);
  v24 = sub_2E418(v23, "Work Utility", 20, (const char *)&v48, 0);
  v25 = sub_2E418(v24, "Difficulty Accepted", 24, (const char *)&dbl_72D90, 1);
  v26 = sub_2E418(v25, "Difficulty Rejected", 24, (const char *)&dbl_72E30, 1);
  v27 = sub_2E418(v26, "Difficulty Stale", 24, (const char *)&dbl_739F8, 1);
  v28 = sub_2E418(v27, "Best Share", 10, (const char *)&dword_6DBA8, 1);
  v29 = (double)dword_72D08 + dbl_73D88;
  if ( v29 == 0.0 )
    v30 = 0.0;
  else
    v30 = (double)dword_72D08 / v29;
  v49 = v30;
  v31 = sub_2E418(v28, "Device Hardware%", 25, (const char *)&v49, 0);
  if ( dbl_73D88 == 0.0 )
    v32 = 0.0;
  else
    v32 = dbl_72E30 / dbl_73D88;
  v50 = v32;
  v33 = sub_2E418(v31, "Device Rejected%", 25, (const char *)&v50, 0);
  v34 = dbl_72E30 + dbl_72D90 + dbl_739F8;
  if ( v34 == 0.0 )
    v35 = 0.0;
  else
    v35 = dbl_72E30 / v34;
  v51 = v35;
  v36 = sub_2E418(v33, "Pool Rejected%", 25, (const char *)&v51, 0);
  v37 = dbl_72D90 + dbl_72E30 + dbl_739F8;
  if ( v37 == 0.0 )
    v38 = 0.0;
  else
    v38 = dbl_739F8 / v37;
  v52 = v38;
  v39 = sub_2E418(v36, "Pool Stale%", 25, (const char *)&v52, 0);
  v40 = (char **)sub_2E418(v39, "Last getwork", 16, (const char *)&dword_732C4, 0);
  if ( pthread_mutex_unlock(&stru_73CEC) )
    sub_2F6B4("summary", 2874);
  off_6CB70(0);
  result = sub_2F9C4((unsigned int *)a1, v40, a4, 0);
  if ( (a4 & v42) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
