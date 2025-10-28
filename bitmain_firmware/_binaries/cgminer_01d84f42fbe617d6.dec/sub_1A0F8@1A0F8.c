int __fastcall sub_1A0F8(int a1, int a2)
{
  double v2; // d16
  double v5; // d8
  unsigned __int64 v6; // r0
  bool v7; // zf
  double v8; // d8
  double v9; // r0
  __int64 v10; // r0
  int v11; // r6
  double v12; // r0
  int v13; // r6
  double v14; // r0
  int v15; // r4
  int v17; // r2
  int v18; // r0
  int v19; // r12
  int v20; // r0
  char v21[2052]; // [sp+0h] [bp-804h] BYREF

  v5 = dbl_60080;
  v6 = sub_19E80(a2);
  v7 = byte_63DF9 == 0;
  if ( byte_63DF9 )
    v2 = 65536.0;
  *(_QWORD *)(a2 + 232) = v6;
  if ( !v7 )
    v5 = v5 * v2;
  if ( v5 <= sub_493C8(v6) )
  {
    v17 = *(_DWORD *)(a2 + 260);
    v18 = (unsigned __int8)byte_632F0;
    v19 = dword_63E58;
    *(_BYTE *)(a2 + 283) = 1;
    v7 = v18 == 0;
    v20 = *(_DWORD *)(v17 + 32);
    dword_63E58 = v19 + 1;
    *(_DWORD *)(v17 + 32) = v20 + 1;
    *(_BYTE *)(a2 + 282) = 1;
    if ( !v7 || byte_630C0 || dword_60964 > 4 )
    {
      snprintf(v21, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 260));
      sub_38438(5, v21, 0);
    }
  }
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("update_work_stats", 8387);
  v8 = *(double *)(a2 + 224);
  v9 = sub_493DC(dword_636A8, dword_636AC);
  v10 = sub_49488(COERCE_UNSIGNED_INT64(v9 + v8), HIDWORD(COERCE_UNSIGNED_INT64(v9 + v8)));
  v11 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)&dword_636A8 = v10;
  v12 = sub_493DC(*(_DWORD *)(v11 + 192), *(_DWORD *)(v11 + 196));
  *(_QWORD *)(v11 + 192) = sub_49488(COERCE_UNSIGNED_INT64(v8 + v12), HIDWORD(COERCE_UNSIGNED_INT64(v8 + v12)));
  v13 = *(_DWORD *)(a2 + 260);
  v14 = sub_493DC(*(_DWORD *)(v13 + 40), *(_DWORD *)(v13 + 44));
  *(_QWORD *)(v13 + 40) = sub_49488(
                            COERCE_UNSIGNED_INT64(v14 + *(double *)(a2 + 224)),
                            HIDWORD(COERCE_UNSIGNED_INT64(v14 + *(double *)(a2 + 224))));
  v15 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v15 + 232) = time(0);
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("update_work_stats", 8392);
  return off_60178();
}
