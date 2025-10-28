int __fastcall sub_356A8(int a1, int a2, int a3, int a4)
{
  char *v5; // r1
  int v6; // r9
  __int64 v7; // d9
  double v8; // r0
  double v9; // d8
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
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
  _DWORD *v29; // r0
  _DWORD *v30; // r12
  __int64 v31; // r0
  double v32; // d8
  double v33; // r0
  double v34; // d16
  _DWORD *v35; // r11
  double v36; // d16
  _DWORD *v37; // r0
  double v38; // d16
  double v39; // d16
  _DWORD *v40; // r0
  double v41; // d16
  double v42; // d16
  _DWORD *v43; // r0
  _DWORD *v44; // r5
  int result; // r0
  _DWORD *v47; // [sp+Ch] [bp-40h]
  double v48; // [sp+10h] [bp-3Ch] BYREF
  double v49; // [sp+18h] [bp-34h] BYREF
  double v50; // [sp+20h] [bp-2Ch] BYREF
  double v51; // [sp+28h] [bp-24h] BYREF
  double v52; // [sp+30h] [bp-1Ch] BYREF
  double v53; // [sp+38h] [bp-14h] BYREF
  double v54; // [sp+40h] [bp-Ch] BYREF

  sub_32F3C((unsigned int *)a1, 11, 0, 0, a4);
  v5 = "SUMMARY,";
  if ( a4 )
    v5 = ",\"SUMMARY\":[";
  v6 = sub_30708((unsigned int *)a1, v5);
  if ( pthread_mutex_lock(&stru_6392C) )
    sub_B844("summary", 2788);
  qword_636A8 = sub_49488(
                  COERCE_UNSIGNED_INT64(dbl_63B88 + dbl_63C10 + dbl_639D0),
                  HIDWORD(COERCE_UNSIGNED_INT64(dbl_63B88 + dbl_63C10 + dbl_639D0)));
  v7 = qword_636A8;
  v8 = sub_493DC(qword_639C8, HIDWORD(qword_639C8));
  v9 = dbl_5F898;
  v49 = dbl_63268 / dbl_5F898;
  if ( dbl_5F898 == 0.0 )
  {
    v48 = v8 * 60.0;
    v9 = 1.0;
  }
  else
  {
    v48 = v8 / dbl_5F898 * 60.0;
  }
  v50 = sub_493DC(v7, HIDWORD(v7)) / v9 * 60.0;
  v10 = sub_32EAC(0, "Elapsed", (const char *)&dbl_5F898, 1);
  v11 = sub_32CFC(v10, "GHS 5s", byte_62E38, 0);
  v12 = sub_34D90(v11, "GHS av", (const char *)&v49, 0);
  v13 = sub_32DD4(v12, "Found Blocks", (const char *)&dword_63E58, 1);
  v14 = sub_32E64(v13, "Getworks", (const char *)&dword_63BE8, 1);
  v15 = sub_32E64(v14, "Accepted", (const char *)&qword_639C8, 1);
  v16 = sub_32E64(v15, "Rejected", (const char *)&qword_63C98, 1);
  v17 = sub_32DB0(v16, "Hardware Errors", (const char *)&dword_63E44, 1);
  v18 = sub_35448(v17, "Utility", (const char *)&v48, 0);
  v19 = sub_32E64(v18, "Discarded", (const char *)&dword_63D68, 1);
  v20 = sub_32E64(v19, "Stale", (const char *)&dword_64220, 1);
  v21 = sub_32DD4(v20, "Get Failures", (const char *)&dword_639E4, 1);
  v22 = sub_32DD4(v21, "Local Work", (const char *)&dword_63A70, 1);
  v23 = sub_32DD4(v22, "Remote Failures", (const char *)&dword_63410, 1);
  v24 = sub_32DD4(v23, "Network Blocks", (const char *)&dword_640BC, 1);
  v25 = sub_35400(v24, "Total MH", (const char *)&dbl_63268, 1);
  v26 = sub_35448(v25, "Work Utility", (const char *)&v50, 0);
  v27 = sub_354D8(v26, "Difficulty Accepted", (const char *)&dbl_63B88, 1);
  v28 = sub_354D8(v27, "Difficulty Rejected", (const char *)&dbl_63C10, 1);
  v29 = sub_354D8(v28, "Difficulty Stale", (const char *)&dbl_639D0, 1);
  v30 = sub_32E40(v29, "Best Share", (const char *)&qword_611C8, 1);
  v31 = qword_636A8 + dword_63E44;
  if ( v31 )
  {
    v47 = v30;
    v32 = (double)dword_63E44;
    v33 = sub_493DC(v31, HIDWORD(v31));
    v30 = v47;
    v34 = v32 / v33;
  }
  else
  {
    v34 = 0.0;
  }
  v51 = v34;
  v35 = sub_35684(v30, "Device Hardware%", (const char *)&v51, 0);
  if ( qword_636A8 )
    v36 = dbl_63C10 / sub_493DC(qword_636A8, HIDWORD(qword_636A8));
  else
    v36 = 0.0;
  v52 = v36;
  v37 = sub_35684(v35, "Device Rejected%", (const char *)&v52, 0);
  v38 = dbl_63C10 + dbl_63B88 + dbl_639D0;
  if ( v38 == 0.0 )
    v39 = 0.0;
  else
    v39 = dbl_63C10 / v38;
  v53 = v39;
  v40 = sub_35684(v37, "Pool Rejected%", (const char *)&v53, 0);
  v41 = dbl_63B88 + dbl_63C10 + dbl_639D0;
  if ( v41 == 0.0 )
    v42 = 0.0;
  else
    v42 = dbl_639D0 / v41;
  v54 = v42;
  v43 = sub_35684(v40, "Pool Stale%", (const char *)&v54, 0);
  v44 = sub_32F18(v43, "Last getwork", (const char *)&dword_63EE8, 0);
  if ( pthread_mutex_unlock(&stru_6392C) )
    sub_B91C("summary", 2842);
  off_60178();
  result = sub_32418((unsigned int *)a1, (int)v44, a4, 0);
  if ( (v6 & a4) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
